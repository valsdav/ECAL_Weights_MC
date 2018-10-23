// Abraham Tishelman-Charny
// 5 October 2018
//
// The purpose of this program is to start with XTAL params (A, t0, alpha, beta) and DOF (DOF1, DOF2, DOF3, eta).
// XTAL params ID is matched with DOF ID, and then weights are computed from analytic waveform.
// Output is a merged data file containing, for each XTAL ID:
// ID, DOF1, DOF2, DOF3, eta, A, t0, alpha, beta, w1->w10. 
//
// The output file can then be read by main.cpp associated functions to produce plots. 
//
// Need CLHEP libraries to compile. With my setup on lxplus, this requires the command:
// g++ -std=c++11 -o run.x main.cpp -L"/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/Tools/clhep/install/lib" -lCLHEP-2.4.1.0 -I"/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/Tools/clhep/install/include" `root-config --ldflags --glibs --cflags`
//
// After installing CLHEP, can check necessary compilation flags with: clhep-config --include, clhep-config --libs

using namespace std;

// Include root header files
#include "TString.h"
#include "TH1.h"
#include "TH2.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TStyle.h"
#include <vector>
//#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iterator>
#include <string>
#include <chrono>
#include <cmath>

#include "ComputeWeights.cpp"

int main(int argc, char** argv){

	// Print command line arguments 
	cout << "argc = " << argc << endl;
	for (int i = 0; i < argc; i++){
		cout << "argv[" << i << "] = " << argv[i] << endl;
		}
	
	// Grab command line arguments 
	int verbosity = stoi(argv[1]); // 1 for lots of comments 
 	int tMax = stoi(argv[2]); // 5 or 6 ? I think this is zero indexed. First sample can be zero, therefore tMax can be 1. 
  	bool dofitbaseline = stoi(argv[3]); // 0 or 1
	bool dofittime = stoi(argv[4]); // 0 or 1
  	static int nPulseSamples = stoi(argv[5]); // 0 to 10
  	int prepulsesamples = stoi(argv[6]); // 0 to 10 (need to understand correlation to npulsesamples)
  	double P = stod(argv[7]); // Simulated pedestal value 
	string PY = string(argv[8]); // Parameter year. Currently 2017 or 2018. Might change to month/year
	int max_lines = stoi(argv[9]); // Max lines to read from XTAL Params (A, t0, alpha, beta)
	string note = string(argv[10]);  // Note to add to output file name 

	// Create output File 
	stringstream a;
	a << "bin/XTAL_Info_Full_" << PY << "_PedSub" << to_string(prepulsesamples) << "+" << to_string(nPulseSamples) << "_" << note << ".txt";
	string output_file = a.str();

	cout << "output file path = " << output_file << endl;

	ofstream weights_file;
	weights_file.open(output_file);
	weights_file << "cmsswid\tietaix\tiphiiy\t0iz\teta\tA\tt_0\talpha\tbeta\tw1\tw2\tw3\tw4\tw5\tw6\tw7\tw8\tw9\tw10\n";

	// Open XTAL Params file (A, t0, alpha, beta)
	stringstream aa;
	aa << "data/XTAL_Params_" << PY << ".txt";
	string params_path = aa.str();
  	ifstream inParamsFile; //, inweightsFile; // Input File stream objects 
  	inParamsFile.open(params_path); // XTAL_Params: inParamsFile stream

  	if (!inParamsFile) {
  	  cout << "Unable to open Param file\n";
  	  exit(1); // terminate with error
 	 }

	// Create histogram for studying weights (or anything you want)
	TH1F *h1 = new TH1F("h1","h1",100,-1,1); // plot weights 

	// Loop Parameters
	int current_line = 0;
	bool manual_exit = false;
	bool skip = false;	

	// Create variables here, update during loop 
	stringstream cw;
	cw.precision(17);

	vector<double> pulseShape;
	vector<double> pulseShapeDerivative;

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

	for (int i = 0; i < 10; i++){
		pulseShape.push_back(0.0);

	}

	double A, t_0, alpha, beta, ID, DOF1, DOF2, DOF3, eta;
	double ts = 0.0; // Simulated Time Shift
	bool normalize_A = true;
	bool normalize_t0 = false;

	TString *name = new TString("function_alphabeta");
	TString *formula = new TString("( (1 + (x-[1]) / ([2]*[3]) ) > 0.0)*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + ((1 + (x-[1]) / ([2]*[3]) <= 0.0 ))*(0)");

	// Sampling start, stop, interval
	double xmin = 0.; 
	double xmax = 250.; 
	double dt = 25; 

	TF1 *function_alphabeta = new TF1(*name,*formula,xmin,xmax);
	int firstsample = 2;

	double A_hat = 0.0;
	double weights_sum = 0.0;
	double Ped_val = 0.0;

	int samp_number = 0;

	int count_ = 0;
	int DOFl = 0;
	int extra_lines = 0;
	bool five_params;
	
	bool leave = false;
	int DOF_skip_count = 0; 
	double DOF_ID = 0;

	string line; // string to hold XTAL params line information 

	while((getline(inParamsFile, line)) && (!manual_exit) ) { // get line of XTAL_Params.txt loop
	// why is getline executed just from being in the while condition? 

	   skip = false;

	   if (current_line == max_lines){
		cout << "Maximum desired lines reached.\n"; 
		cout << "Exiting.\n";

		break;
		}

	   stringstream s(line); // convert 'line' to stream 's'

	   double d1, d2, d3, d4, d5; // d1 = ID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta   

	   if((s >> d1 >> d2 >> d3 >> d4 >> d5)){ // Do if on XTAL_params line with 5 doubles	  

		// If params are zero, skip param line. 

		if (d2 == 0){
			cout << "Param file Amplitude is zero\n";
			leave = true;
		}
	
		else leave = false;

		stringstream ssDOF;
		ssDOF << "data/DOF.txt";
		string DOF_path = ssDOF.str();

		ifstream inDOFFile; 
		inDOFFile.open(DOF_path); 

		if (!inDOFFile) {
		  cout << "Unable to open DOF file\n";
		  exit(1); // terminate with error
		}

		string DOF_line; 

		
		DOF_skip_count = 0;

		//DOF_skip_count += good_line_count;
		DOF_skip_count += extra_lines; // extra_lines updated every line 
		//DOF_skip_count += i;
		DOF_skip_count += DOFl;

		//cout << "skipping " << DOF_skip_count << "lines\n";

		while(DOF_skip_count !=0){
		  //cout << "skipping " << DOF_skip_count << "lines\n";
		  inDOFFile.ignore(1000,'\n'); // count is number of rows read before this one
		  DOF_skip_count -= 1;
		}

		while((getline(inDOFFile, DOF_line)) && (leave == false)) { // read EB/EE_DOF line // DOF while 
		
		//cout << "In DOF while\n";

		five_params = false;

                stringstream ss(DOF_line);

		double d1_, d2_, d3_, d4_, d5_;
	
			if(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_){ // If DOF line contains 5 doubles // DOF 5 

				//cout << "DOF line has 5\n";

				DOF_ID = d1_;

				five_params = true; 
	
				cout.precision(17);

				if ((d1_ == d1)){ // All ID's match


					ID = d1_, DOF1 = d2_, DOF2 = d3_, DOF3 = d4_, eta = d5_;
					A = d2;
					t_0 = d3;
					alpha = d4;
					beta = d5;
					
					if (string(PY) == "2017"){
						// A, t0, alpha, beta are zero.
						if ( (d1 == 838868019) || (d1 == 838871589) || (d1 == 838882900) || (d1 == 838882985) || (d1 == 838900809) || (d1 == 838949036) || (d1 == 838951621) || (d1 == 872436486) ) {
							cout << "Manual Skip\n"; 	
							skip = true;

							}
					}
		
					// 2018 params and weights 
					if (string(PY) == "2018"){
						// A, t0, alpha, beta are zero.
						if ( (d1 == 838864037) || (d1 == 838869123) || (d1 == 838874865) || (d1 == 838891641) || (d1 == 838958295) || (d1 == 838966532) ){ 
							cout << "Manual Skip\n"; 
							skip = true;

							}
					}

					// Compute Weights

					//--------------------------------------------------------------------------------------------------------------------------
			
					// As long as ID has computable weights for PY, compute weights 
					if (!skip){

						cw.precision(17);
						cw << ID << "\t";
						cw.precision(9);					

						cw << DOF1 << "\t" << DOF2 << "\t" << DOF3 << "\t" << eta << "\t" << A << "\t" << t_0 << "\t" << alpha << "\t" << beta << "\t";
						cw.precision(17);

						if (normalize_t0) t_0 = 125;
						if (normalize_A) A = 1;

						function_alphabeta->SetParameter (0, A);    
						function_alphabeta->SetParameter (1, t_0 + ts); // time shift     
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
						  if ( i <= (t_0 + ts - alpha*beta) ) pulseShape.at(count_) = (0 + P) ;	
						  //else pulseShape.push_back( ( function_alphabeta->Eval(i) + P ) / (A) );/// (A + P) ); // divide by A to get weights for S*W = A 
						  //else pulseShape.push_back( ( function_alphabeta->Eval(i) + P ) );/// (A + P) ); // divide by A to get weights for S*W = A 
						  else pulseShape[count_] = ( ( function_alphabeta->Eval(i) + P ) );
						  // if (d1 >= 838861947) cout << "pulseShape[" << count_ << "] = " << pulseShape[count_] << endl;
						  cout << "pulseShape[" << count_ << "] = " << pulseShape.at(count_) << endl;
						  count_ += 1;
						}

						A_.compute(pulseShape,pulseShapeDerivative,tMax); // Run member function

						//cout << "Right after compute\n";

						firstsample = 2;
						A_hat = 0.0;
						weights_sum = 0.0;
						Ped_val = 0.0;

						for (int i = 0; i < 2; i++){ 
							cw << "0\t";
						}

						//double w_sum = 0.0;

						for ( int i = firstsample; i < firstsample + nPulseSamples; i++) {

							cw << A_.getAmpWeight(i - firstsample) << "\t";
							cout << "weight(" << i - firstsample << ") = " << A_.getAmpWeight(i-firstsample) << endl;
							h1->Fill(A_.getAmpWeight(i - firstsample)); // fill histogram 
							weights_sum += A_.getAmpWeight(i - firstsample);

						  }

						cout << "weights sum = " << weights_sum << endl;

						vector<double> HC_weights;

						for (int i = 0; i < 10; i++){
							HC_weights.push_back(0.0);

						}

						//double w_sum = 0.0;

						for (int i = 2; i < 7; i++){

							double HC_weight = 0.0;
							double f_i = pulseShape[i];
							double f_j_s = 0.0;
							double f_j_s_s = 0.0;

							for (int j = 2; j < 7; j++){
								
									f_j_s += pulseShape[j];
									f_j_s_s += pulseShape[j]*pulseShape[j];
								
							} 

							cout << "f_i = " << f_i << endl;
							cout << "f_j_s = " << f_j_s << endl;
							cout << "f_j_s_s = " << f_j_s_s << endl;
							HC_weight = ( (f_i - f_j_s) / (f_j_s_s - ( (f_j_s*f_j_s) / 5) ) ); // + 2.198197522;  
							//HC_weight = (f_j_s_s - (f_j_s)*f_i ) / (5*f_j_s_s - f_j_s*f_j_s); // This gives P weights. 


							HC_weights[i] = HC_weight;
							//w_sum += HC_weight*pulseShape[i];
							//cout << "Hand Calc. Weight = " << HC_weight << endl;

						}

						//cout << "w sum = " << w_sum << endl;

						for (int i = 0; i < 10; i++){

							cout << "HC_weights[" << i << "] = " << HC_weights[i] << endl;

						}

						//cout << "cw = " << cw.str() << endl;

						for (int i = 0; i < 3; i++){
							cw << "0\t";
						}
	
						cw << "\n";
						weights_file << cw.str();
						cw.str("");				

					} // if(!skip)

					//--------------------------------------------------------------------------------------------------------------------------
					// weights computed 

					leave = true; // Using double equals sign here caused frustration for a bit  


					DOFl += 1; // line used, so skip on next read 

				} // All ID's match

				else{ extra_lines += 1;} // ID's don't match 

			} // If DOF line contains 5 doubles 

			else{ five_params = false;} // doesn't contain 5 doubles

			if (!five_params){	

				extra_lines += 1; 


				if (d1 == d1_){
					leave = true; // if ID's match on less than 5 param line in DOF, need to skip to next param line. 
				}


			} // if (!five_params) 


			} //readEBEEDOFLINE

		} // XTAL_params line with 5 doubles 

	current_line += 1;
	//cout << "current_line = " << current_line << endl;
	if (current_line%5000 == 0) cout << "current_line = " << current_line << endl;
	} // get line of XTAL_Params.txt 
	
	TCanvas *c1 = new TCanvas("c1","c1",800,600);
	h1->Draw();
	c1->SaveAs("plot.pdf");

} // End of main function 


// 838861313	-1	1	0	-0.0124339	0.240739	121.313	1.18318	40.2921	0	0	-0.58696994338541164	-0.53674677627741252	0.31406295879260338	0.47967364877555996	0.32998011209466094	0	0	0	