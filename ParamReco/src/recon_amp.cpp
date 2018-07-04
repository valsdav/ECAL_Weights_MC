// Abe Tishelman-Charny
// 24 May, 2018
// 
// The purpose of this function is to calculate reconstructed amplitude 

#include "ComputeWeights.cpp" // Used to create instance of computeweights class 

double recon_amp(double A, double t_0, double ts, double alpha, double beta, double weights[], bool ideal_weights, ofstream& weights_file)
{

	TString *name = new TString("function_alphabeta");
	TString *formula = new TString("( (1 + (x-[1]) / ([2]*[3]) ) > 0.0)*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + ((1 + (x-[1]) / ([2]*[3]) <= 0.0 ))*(0)");

	double xmin = 0; // Start Sampling at 0ns
	double xmax = 250.; // End Sampling at 250ns 
	double dt = 25;

	TF1 *function_alphabeta = new TF1(*name,*formula,xmin,xmax); // figure out how to properly define function for 0 to 250 ns.
	//TF1 *function_alphabeta = new TF1(*name,*formula,67,xmax); // 0ts plot 

	function_alphabeta->SetParameter (0, A);    
	function_alphabeta->SetParameter (1, t_0 + ts); // time shift here    
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

	  if ( j <= (t_0 + ts - alpha*beta) ) samples[samp_number] = 0;
	  else samples[samp_number] = function_alphabeta->Eval(j);

	  samp_number++ ;    
	  }

	double recon_amp = 0.0;

////////////
	
	if (ideal_weights){ // using ideal weights for each XTAL

	int verbosity = 0; // 1 for lots of comments 
	//int nSamples = 10;
	//double tMax = 4; // time of peak in samples (is this correct? Does it matter? The function later might adjust this value)

 	double tMax = 3; // time of peak, I think relative to first sample
  	bool fitbaseline = false, fittime = false;
  	static int nSamples = 5;
  	int prepulsesamples = 0;

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
	ComputeWeights A_(verbosity, fitbaseline, fittime, nSamples, prepulsesamples);

	// Compute ideal weights for this pulseShape
	vector<double> pulseShape;
	// pulse is moved to right by time_shift, so move sampling to right by time_shift.
	int count_ = 0;

	// Want samples from non-timeshifted wave to see how time shift affects recon amp 
	// time_shift moves pulse to right by N, so move sampling beginning to right by N 
	for(double i = xmin + ts; i < xmax + ts; i += dt){

	  if ( i <= (t_0 + ts - alpha*beta) ) pulseShape.push_back(0); // if waveform undefined, set value to zero. 
	  else pulseShape.push_back( ( function_alphabeta->Eval(i) ) / A); // divide by A to get weights for S*W = A 

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

        int firstsample = tMax - 1;
        double test_amplitude = 0.0;
        for ( int i = firstsample; i < firstsample + nSamples; i++) {
	  //cout << "A.getPedWeight(" << i << ") = " << A.getPedWeight(i) << endl;
	  //cout << "A_.getAmpWeight(" << i - firstsample << ") = " << A_.getAmpWeight(i - firstsample) << endl; 
	  //cout << "pulseShape[" << i << "] = " << pulseShape[i] << endl; 
	  //test_amplitude += A*A_.getAmpWeight(i - firstsample)*pulseShape[i]; // mult by A to get A 
	  //cout << "samples[" << i << "] = " << samples[i];
	  stringstream cw;
	  cw << A_.getAmpWeight(i-firstsample);
	  weights_file << cw.str() << "\t";
	  test_amplitude += A_.getAmpWeight(i - firstsample)*samples[i]; 
	  }
        //cout << "test_amplitude = " << test_amplitude << endl; 
	//cout << "A = " << A << endl;
	return test_amplitude;



	// Calulate Amp with ideal weights

	/*double ideal_recon_amp = 0.0; // Should always get A 

	for (int k = 0; k < 10; k++ ){

	    recon_amp += samples[k]*A_.getAmpWeight(k);
	    ideal_recon_amp += A*pulseShape[k]*A_.getAmpWeight(k); 
	  }

	//cout << "A = " << A << "\n";	
	cout << "ideal_recon_amp = " << ideal_recon_amp << "\n";
	//cout << "recon_amp = " << recon_amp << "\n";
	return recon_amp;

	*/

	} // end ideal_weights if statement


////////////

	else{ // using single set of weights 

	// Sum samples * weights

	for (int k = 0; k < 10; k++ ){
	    recon_amp += samples[k]*weights[k]; 

	  }

	//cout << "recon_amp = " << recon_amp << "\n";
	return recon_amp;

	}

}
