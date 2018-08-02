// Abe Tishelman-Charny
// 24 May, 2018

using namespace std;

// Include root header files
#include "TString.h"
#include "TH1.h"
#include "TH2.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TStyle.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iterator>
#include <string>
#include <chrono>
#include <cmath>

#include "ComputeWeights.cpp"

int main()
{
	ofstream weights_file;
	weights_file.open("weights__.txt");
	weights_file << "cmsswid\tw0\tw1\tw2\tw3\tw4\tw5\n";

	double ts = 0.0; // Simulated Time Shift
	double A = 0.240739, t_0 = 121.313, alpha = 1.18318, beta = 40.2921; // Measured Parameters
	double P = 0.0; // Simulated Pedestal
	bool normalize_t0 = false;
	if (normalize_t0) t_0 = 125;

	TString *name = new TString("function_alphabeta");
	TString *formula = new TString("( (1 + (x-[1]) / ([2]*[3]) ) > 0.0)*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + ((1 + (x-[1]) / ([2]*[3]) <= 0.0 ))*(0)");

	// Sampling start, stop, interval
	double xmin = 0.; 
	double xmax = 250.; 
	double dt = 25; 
	
	TF1 *function_alphabeta = new TF1(*name,*formula,xmin,xmax); 

	function_alphabeta->SetParameter (0, A);    
	function_alphabeta->SetParameter (1, t_0 + ts); // time shift     
	function_alphabeta->SetParameter (2, alpha);  
	function_alphabeta->SetParameter (3, beta);  

	// Take samples of waveform 

	int samp_number = 0;
	double samples[10] = {0.}; 

	// Reset Samples 

	for (int k = 0; k < 10; k++){
	  samples[k] = 0.;

	  }

	for(double j = xmin; j < xmax; j += dt){ 

	  if ( j <= (t_0 + ts - alpha*beta) ) samples[samp_number] = (0 + P);
	  else samples[samp_number] = function_alphabeta->Eval(j) + P; // P pedestal
	  //cout << "samples[" << samp_number << "] = " << samples[samp_number] << endl; // Peak not 1 b/c t_0 slghtly off from 125ns. 	  

	  samp_number++ ;    
	  }

////////// Compute Weights 

	// if nPulseSamples = 5, tMax = 3. For 10 nPulsesamples, tmax = 1. 

	int verbosity = 1; // 1 for lots of comments 
 	double tMax = 1; // 5 or 6 ? I think this is zero indexed. First sample can be zero, therefore tMax can be 1. 
  	bool dofitbaseline = true, dofittime = false;
  	static int nPulseSamples = 9;
  	int prepulsesamples = 1; 

	// tMax, nPulseSamples, prepulsesamples = 1, 9, 1 gives top weight at peak sample.

	// I think prepulsesamples not included in nPulseSamples b/c for 10 and 1 it says nsamples is too small.
	// Pedweights add to 1?

  	//static int nPulseSamples = 5;
  	//int prepulsesamples = 1; // Is prepulsesamples contained within pulsesamples?

	// dummy pulse shape derivative
	// calculate derivative with some method here precisely. 

	vector <double> pulseShapeDerivative;
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

	// Create instance of object ComputeWeights

	// (int verbosity, bool doFitBaseline, bool doFitTime, int nPulseSamples, int nPrePulseSamples)
	ComputeWeights A_(verbosity, dofitbaseline, dofittime, nPulseSamples, prepulsesamples);

	// Compute ideal weights for this pulseShape
	vector<double> pulseShape;

	// pulse is moved to right by time_shift, so move sampling to right by time_shift.
	int count_ = 0;

	// Want samples from non-timeshifted wave to see how time shift affects recon amp 
	// time_shift moves pulse to right by N, so move sampling beginning to right by N 
	for(double i = xmin + ts; i < xmax + ts; i += dt){

	  if ( i <= (t_0 + ts - alpha*beta) ) pulseShape.push_back(0 + P) ; // if waveform undefined, set value to zero. 
	  else pulseShape.push_back( ( function_alphabeta->Eval(i) + P ) / (A) );/// (A + P) ); // divide by A to get weights for S*W = A 
	  //cout << "pulseShape(" << i << ") = " << pulseShape(i) << endl;
	  count_ += 1;
	}

        A_.compute(pulseShape,pulseShapeDerivative,tMax); // Run member function

        //int firstsample = tMax - 2; // first sample two before max. Already a tmax -1 in computeweights.cpp 
	//int firstsample = 2;
        double A_hat = 0.0;
	double weights_sum = 0.0;
	double Ped_val = 0.0;
	//double Time_val = 0.0;

	//for ( int i = firstsample; i < firstsample + nPulseSamples + prepulsesamples; i++) {
	//for ( int i = firstsample; i < firstsample + nPulseSamples; i++) {
	//for ( int i = firstsample; i < firstsample + nPulseSamples; i++) {
	for ( int i = 1; i < 10; i++) {
		//cout.precision(17);
		//cout << "A_.getPedWeight(" << i - firstsample << ") = " << A_.getPedWeight(i - firstsample) << endl;
		//cout << "A_.getAmpWeight(" << i - firstsample << ") = " << A_.getAmpWeight(i - firstsample) << endl;
		cout << "A_.getAmpWeight(" << i  << ") = " << A_.getAmpWeight(i) << endl;
		cout << "samples[" << i << "] = " << samples[i] << endl; 
		//cout << "pulseShape[" << i << "] = " << pulseShape[i] << endl;
		//A_hat += A*A_.getAmpWeight(i - firstsample)*pulseShape[i]; // mult by A to get A 
		//Time_val += A_.getTimeWeight(i - firstsample)*samples[i];	
		stringstream cw;
		cw.precision(17);
		//cw << A_.getAmpWeight(i-firstsample);
		cw << A_.getAmpWeight(i);
		weights_file << cw.str() << "\t";
		weights_sum += A_.getAmpWeight(i);
		Ped_val += A_.getPedWeight(i)*samples[i]; 
		A_hat += A_.getAmpWeight(i)*samples[i]; 
	  }

	// Running 10 weights, 10 npulse, 0 nprepulse, gives 10 amp weights at end. 

        //for ( int i = firstsample; i < firstsample + prepulsesamples; i++) {
		//weights_sum += A_.getAmpWeight(i - firstsample);
		//Ped_val += A_.getPedWeight(i - firstsample)*samples[i];
	  //}

        cout << "------------\n"; 
        cout << "A hat = " << A_hat << endl; 
	cout << "A = " << A << endl;

	//cout << "Time val = " << Time_val << endl;
	cout << "Ped val = " << Ped_val << endl;
	cout << "weights sum = " << weights_sum << endl;
	cout << "bias = " << (A_hat/A) - 1 << endl;
        cout << "------------\n"; 

}
