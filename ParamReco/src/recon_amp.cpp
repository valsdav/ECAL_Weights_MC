// Abe Tishelman-Charny
// 24 May, 2018
// 
// The purpose of this function is to calculate reconstructed amplitude 

//#include <ComputeWeights.h>
#include "ComputeWeights.cpp"

//#include "TString.h"

//#include "CLHEP/Matrix/Matrix.h"
//#include "CLHEP/Matrix/SymMatrix.h"

double recon_amp(double A, double t_0, double time_shift, double alpha, double beta, double weights[])
{

	TString *name = new TString("function_alphabeta");
	TString *formula = new TString("( (1 + (x-[1]) / ([2]*[3]) ) > 0.0)*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + ((1 + (x-[1]) / ([2]*[3]) <= 0.0 ))*(0)");

	double xmin = 0; // Start Sampling at 0ns
	double xmax = 250.; // End Sampling at 250ns 
	double dt = 25;

	TF1 *function_alphabeta = new TF1(*name,*formula,xmin,xmax); // figure out how to properly define function for 0 to 250 ns.
	//TF1 *function_alphabeta = new TF1(*name,*formula,67,xmax); // 0ts plot 

	function_alphabeta->SetParameter (0, A);    
	function_alphabeta->SetParameter (1, t_0 + time_shift); // time shift here    
	function_alphabeta->SetParameter (2, alpha);  
	function_alphabeta->SetParameter (3, beta);  

////////////
	
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

	int verbosity = 1;
	int nSamples = 10;
	double tMax = 4; // time of peak in samples 

	// Create instance of object ComputeWeights

	// (int verbosity, bool doFitBaseline, bool doFitTime, int nPulseSamples, int nPrePulseSamples)
	ComputeWeights A_(verbosity, false, false, nSamples, 3);
	//ComputeWeights A(1, false, false, 10, 3);

	vector<double> pulseShape;
	// pulse is moved to right by time_shift, so move sampling to right by time_shift.
	int count_ = 0;

	//cout << "A = " << A << "\n";

	for(double i = xmin + time_shift; i < xmax + time_shift; i += dt){

	  if ( i <= (t_0 + time_shift - alpha*beta) ) pulseShape.push_back(0);
	  else pulseShape.push_back(function_alphabeta->Eval(i)); 
	  //else pulseShape.push_back(function_alphabeta->Eval(i) / A); // A makes peak of waveform 1.
	
	  cout << "ideal weight sample = " << pulseShape[count_] << "\n";
	  count_ += 1;
	}

      A_.compute(pulseShape,pulseShapeDerivative,tMax); // Run member function

      if (verbosity > 0) {
        cout << "verbosity_ = " << A_.GetVerbosity() << endl;
        cout << "doFitBaseline_ = " << A_.GetDoFitBaseline() << endl;
        cout << "doFitTime_ = " << A_.GetDoFitTime() << endl;
        cout << "nPulseSamples_ = " << A_.GetnPulseSamples() << endl;
        cout << "nPrePulseSamples_ = " << A_.GetnPrePulseSamples() << endl;

        cout << "A*A_.getAmpWeight(5) returns: " << A*A_.getAmpWeight(5) << endl;
        cout << "A_.getChi2Matrix(5,5) returns: " << A_.getChi2Matrix(5,5) << endl;
      }

////////////

	int samp_number = 0;

	double samples[10] = {0.};

	// Reset Samples 

	for (int k = 0; k < 10; k++){

	  samples[k] = 0.;
	  }

	// Extract Samples From Waveform
	// if x < first non imaginary, set sample to zero.

	for(double j = xmin; j < xmax; j += dt){ 

	  samples[samp_number] = function_alphabeta->Eval(j);
	  if (j <= (t_0 + time_shift - alpha*beta)) samples[samp_number] = 0; // if -nan set to 0
	  //cout << "samples[" << samp_number << "] = " << samples[samp_number] << "\n";

	  samp_number++ ;    
	  }

	// Sum samples * weights

	double recon_amp = 0.0;
	double ideal_recon_amp = 0.0;

	for (int k = 0; k < 10; k++ ){

	  //recon_amp += samples[k]*weights[k]; 
	  //ideal_recon_amp += pulseShape[k]*A_.getAmpWeight(k);
	    cout << "samples[" << k << "] = " << samples[k] << "\n";
	    cout << "A_.getAmpWeight(" << k << ") = " << A_.getAmpWeight(k) << "\n";
	    recon_amp += samples[k]*A_.getAmpWeight(k);
	  }

	cout << "recon_amp = " << recon_amp << "\n";

	//return recon_amp;
	return recon_amp;

}
