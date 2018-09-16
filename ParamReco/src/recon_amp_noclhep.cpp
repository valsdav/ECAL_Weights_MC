#ifndef RECON_AMP
#define RECON_AMP

// Abe Tishelman-Charny
// 24 May, 2018
// 
// The purpose of this function is to calculate reconstructed amplitude 

//#include "ComputeWeights.cpp" // Used to create instance of computeweights class 

double recon_amp_noclhep(double A, double t_0, double ts, double alpha, double beta, double weights[])//, bool ideal_weights)
{

	TString *name = new TString("function_alphabeta");
	TString *formula = new TString("( (1 + (x-[1]) / ([2]*[3]) ) > 0.0)*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + ((1 + (x-[1]) / ([2]*[3]) <= 0.0 ))*(0)");

	double xmin = 0; // Start Sampling at 0ns
	double xmax = 250.; // End Sampling at 250ns 
	double dt = 25; // Increment Sampling by 25ns

	TF1 *function_alphabeta = new TF1(*name,*formula,xmin,xmax); // figure out how to properly define function for 0 to 250 ns.
	//TF1 *function_alphabeta = new TF1(*name,*formula,67,xmax); // 0ts plot 

	function_alphabeta->SetParameter (0, A);    
	function_alphabeta->SetParameter (1, t_0 + ts); // +/- ts moves waveform right/left   
	function_alphabeta->SetParameter (2, alpha);  
	function_alphabeta->SetParameter (3, beta);  

	// Sample Waveform

	int samp_number = 0;
	double samples[10] = {0.}; 

	// Reset Samples 

	//for (int k = 0; k < 10; k++){

	  //samples[k] = 0.;
	  //}

	for(double j = xmin; j < xmax; j += dt){ 

	  if ( j <= (t_0 + ts - alpha*beta) ) samples[samp_number] = 0; // if nan, set to zero 
	  else samples[samp_number] = function_alphabeta->Eval(j);

	  samp_number++ ;    
	  }

	double recon_amp = 0.0;

	// Want to extract weights from text file because can't get CLHEP working on lxplus right now, and running total error vs. ts plot seems to always freeze my computer.
	
	for (int k = 0; k < 10; k++ ){
	    recon_amp += samples[k]*weights[k]; 

	  }
	
	// Need to delete objects or memory can overflow
	name->~TString();
	formula->~TString();
	function_alphabeta->Delete();

	return recon_amp;
}

#endif
