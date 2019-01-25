// Calculate Ideal weights for a given A, t0, alpha, beta

using namespace std;

// Include root header files
#include "TString.h"
#include "TH1.h"
#include "TH2.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TStyle.h"
// Include C++ header files
#include <vector>
//#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iterator>
#include <string>
#include <chrono>
#include <cmath>

// Include ideal weights algorithm 
#include "ComputeWeights.cpp"

vector<double> Calc_Weights(double A, double t_0, double alpha, double beta){

	// Loop Parameters
	//int current_line = 0;
	//bool manual_exit = false; // Can be used for debugging/testing 
	//bool skip = false;	

	int count_ = 0;
	int verbosity = 0;

	int tMax = 3; // 3 for current weights configuration. 
  	bool dofitbaseline = 1; // 1 to use negative weights for baseline subtraction, 0 for positive weights. 
	bool dofittime = 0; // 1 to create timing jitter weights. 0 to not.  
  	static int nPulseSamples = 5; // 0 to 10
  	int prepulsesamples = 0; // 0 to 10 (need to understand correlation to npulsesamples)
  	double P = 0; // Simulated pedestal value. Shouldn't affect bias with dofitbaseline on. 

	// Create variables here, update during loop 
	//stringstream cw, cwid; // for adding info to output file
	vector<double> pulseShape; // For ComputeWeights algorithm 
	vector<double> pulseShapeDerivative;
	vector<double> weights;

	// Used for timing jitter weights. Setting to dummy values for now since we are not using them but may use in future. 
	pulseShapeDerivative.push_back(0.0);
	pulseShapeDerivative.push_back(0.0);
	pulseShapeDerivative.push_back(0.05);
	pulseShapeDerivative.push_back(0.1);
	pulseShapeDerivative.push_back(0.35);
	pulseShapeDerivative.push_back(0.25);
	pulseShapeDerivative.push_back(-0.25);
	pulseShapeDerivative.push_back(-0.25);
	pulseShapeDerivative.push_back(-0.25);
	pulseShapeDerivative.push_back(0.0);

	// Initialize 
	for (int i = 0; i < 10; i++){
		pulseShape.push_back(0.0);
		//weights.push_back(0.0);
		//HC_weights.push_back(0.0);
	}

	// Initialize a bunch more variables so then can just be updated every loop. 
	//double A, t_0, alpha, beta, ID, DOF1, DOF2, DOF3, DOF4, DOF5, DOF6, DOF7, eta, eta_ring;
	double ts = 0.0; // Simulated Time Shift. Usually do not use here but in theory could use for computing ideal weights given some early or late sampling. 
	bool normalize_A = true; // Ideal weights do not depend on amplitude, only pulse shape. This may affect the weights' magnitude but this itself can be normalized by multiplying weights by A parameter. 
	bool normalize_t0 = false;

	// Alpha-beta function 
	TString *name = new TString("function_alphabeta");
	TString *formula = new TString("( (1 + (x-[1]) / ([2]*[3]) ) > 0.0)*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + ((1 + (x-[1]) / ([2]*[3]) <= 0.0 ))*(0)");

	// Sampling start, stop, interval
	double xmin = 0.; 
	double xmax = 250.; 
	double dt = 25; 

	TF1 *function_alphabeta = new TF1(*name,*formula,xmin,xmax);
	int firstsample = 2; // Not sure where else to define this. 
	int lastsample = firstsample + nPulseSamples + prepulsesamples;

	// When averaging weights
	double weight = 0.0;
	int nw = 0; // number of weights 

	double A_hat = 0.0;
	double weights_sum = 0.0;
	double Ped_val = 0.0;

	int samp_number = 0;


		if (normalize_t0) t_0 = 125;
		if (normalize_A) A = 1;

		// Can average A, t_0, alpha, eta before setting parameters. Then obtain set of weights and add to line.
		function_alphabeta->SetParameter (0, A);    
		function_alphabeta->SetParameter (1, t_0 + ts); // time shift. Should be zero here unless you want ideal weights for shifted waveform    
		function_alphabeta->SetParameter (2, alpha);  
		function_alphabeta->SetParameter (3, beta);  

		ComputeWeights A_(verbosity, dofitbaseline, dofittime, nPulseSamples, prepulsesamples);

		// pulse is moved to right by time_shift, so move sampling to right by time_shift.
		count_ = 0;

		// Want samples from non-timeshifted wave to see how time shift affects recon amp 
		// time_shift moves pulse to right by N, so move sampling beginning to right by N 

		for(double i = xmin + ts; i < xmax + ts; i += dt){
			//cout << "in pulse shape value " << i << endl;
	
			//if ( i <= (t_0 + ts - alpha*beta) ) pulseShape.push_back(0 + P) ; // if waveform undefined, set value to zero + pedestal 
			//cout << "value = " << t_0 + ts - alpha*beta << endl;
			if ( i <= (t_0 + ts - alpha*beta) ) pulseShape.at(count_) = (0 + P) ;	
			
			//else pulseShape.push_back( ( function_alphabeta->Eval(i) + P ) / (A) );/// (A + P) ); // divide by A to get weights for S*W = A 
			//else pulseShape.push_back( ( function_alphabeta->Eval(i) + P ) );/// (A + P) ); // divide by A to get weights for S*W = A 
			else pulseShape[count_] = ( ( function_alphabeta->Eval(i) + P ) );
			// if (d1 >= 838861947) cout << "pulseShape[" << count_ << "] = " << pulseShape[count_] << endl;
			//cout << "pulseShape[" << count_ << "] = " << pulseShape.at(count_) << endl;
			count_ += 1;
		} 

		A_.compute(pulseShape,pulseShapeDerivative,tMax); // Run member function

		//firstsample = 2;
		A_hat = 0.0;
		weights_sum = 0.0;
		Ped_val = 0.0;

		// Add two zeros to line 
		for (int i = 0; i < 2; i++){ 
			//cw << "0\t";
			weights.push_back(0);
		}

		// If not averaging parameters, need to average weights here and then add average for each sample to line. 
		for ( int i = firstsample; i < lastsample; i++) {

			weight = A_.getAmpWeight(i - firstsample); //<< "\t";

			//weights[i- firstsample] += weight;
			//nw += 1;

			//cw << A_.getAmpWeight(i - firstsample) << "\t"; // add weight to line 
			weights.push_back(weight);

			//cout << "weight(" << i - firstsample << ") = " << A_.getAmpWeight(i-firstsample) << endl;
			//h1->Fill(A_.getAmpWeight(i - firstsample)); // fill histogram 
			weights_sum += A_.getAmpWeight(i - firstsample);
			//cout << A_.getPedWeight(i - firstsample) << endl;


			Ped_val += A_.getPedWeight(i - firstsample)*pulseShape[i];
			//cout << "ped weight = " << A_.getPedWeight(i - firstsample) << endl;
			//cout << "pulseshape[i] = " << pulseShape[i] << endl;

			}

		// average 
		// How do you know when you've checked all lines in a section? Could search entire file each time but this may take a really long time. 

		for (int i = 0; i < 3; i++){
			//cw << "0\t";
			weights.push_back(0);
		}

		//cw << "\n";
		//Params_DOF_file << cw.str();
		//cw.str("");				


		return weights;

	//} // if(!skip)

	//--------------------------------------------------------------------------------------------------------------------------
	// weights computed 




} // end of function 

// main(){

//     cout << "In local test of Calc_Weights.cpp\n";
//     int a = 10;
//     string b = "Oct17";
//     string c = "1";
//     string d = "test";

// 	vector<double> weights;

//     weights = Calc_Weights(0.240791, 121.44, 1.18942, 40.1906);

// 	for (int i = 0; i < 10; i++){

// 		cout << "weights[" << i << "] = " << weights[i] << endl;

// 	}
// }