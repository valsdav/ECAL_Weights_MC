// Abe Tishelman-Charny
// 24 May, 2018

// The purpose of this main function is to plot reconstructed amplitude / A parameter 
// for EB and EE with desired time shift and weights.

#include "fill_histograms.cpp" 
#include "recon_amp.cpp"
#include "plot.cpp"

int main()
{
	time_t initial_time = time(0); // initial time to calculate total time 

	// Set Study Parameters
	double time_shift = 0; // Move waveform +/- ns to right/left
 	int max_rows = -1; // < 0 to read all rows of XTAL_Params.txt

	// Define weights 
	//double w[10] = {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0};
	double EB_w[10] = {0, 0, -0.56, -0.55, 0.25, 0.48, 0.38, 0, 0, 0}; // Barrel
	double EE_w[10] = {0, 0, -0.65, -0.52, 0.25, 0.52, 0.50, 0, 0, 0}; // Endcap

  	// Set conditions 
	bool EB_Only = false;
  	bool EE_Only = false; // Skip to row 60495 of crystal_parameters.txt
  	bool normalized_A = false;
  	bool normalized_t0 = false; 

	fill_histograms(max_rows, time_shift, EB_w, EE_w, EB_Only, EE_Only, normalized_A, normalized_t0);

	// Plotting parameters
	
	double zmin = 0.99;
	double zmax = 1.01;	

	//EB->Draw("COLZ");
	//EE1->Draw("COLZ");

	plot(zmin,zmax);

	time_t final_time = time(0);
	time_t total_time = (final_time - initial_time);

	cout << "Total time: " << total_time / 60. << " minutes\n";

	return 0;
}
