// Abe Tishelman-Charny
// 24 May, 2018
// 
// The purpose of this function is to calculate reconstructed amplitude 

double recon_amp(double A, double t_0, double time_shift, double alpha, double beta, double weights[])
{

	TString *name = new TString("function_alphabeta");
	TString *formula = new TString("( (1 + (x-[1]) / ([2]*[3]) ) > 0.0)*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + ((1 + (x-[1]) / ([2]*[3]) <= 0.0 ))*(0)");

	double xmin = 0; // Start Sampling at 100ns
	double xmax = 250.; // End Sampling at 250ns 
	double dt = 25;

	TF1 *function_alphabeta = new TF1(*name,*formula,xmin,xmax); // figure out how to properly define function for 0 to 250 ns.
	//TF1 *function_alphabeta = new TF1(*name,*formula,67,xmax); // 0ts plot 

	function_alphabeta->SetParameter (0, A);    
	function_alphabeta->SetParameter (1, t_0 + time_shift); // time shift here    
	function_alphabeta->SetParameter (2, alpha);  
	function_alphabeta->SetParameter (3, beta);  

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

	for (int k = 0; k < 10; k++ ){

	  recon_amp += samples[k]*weights[k]; 
	  }

	return recon_amp;


}
