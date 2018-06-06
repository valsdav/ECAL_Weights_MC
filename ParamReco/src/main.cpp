// Abe Tishelman-Charny
// 24 May, 2018

// The purpose of this main function is to plot reconstructed amplitude / A parameter 
// for EB and EE with desired time shift and weights.

// Currently using this to compile:
// g++ -std=c++11 -o test.exe main.cpp -lCLHEP `root-config --ldflags --glibs --cflags`

using namespace std;

// Include root header files
#include "TString.h"
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

// files you're going to need in this here main file.
#include "ComputeWeights.h"
#include "fill_histograms.cpp" 
#include "plot.cpp"

int main()
{
	time_t initial_time = time(0); // initial time to calculate total time 

	// Set Study Parameters
	double time_shift = 5; // Move waveform +/- ns to right/left
 	int max_rows = 3; // < 0 to read all rows of XTAL_Params.txt

	// Define weights 
	//double w[10] = {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0};
	double EB_w[10] = {0, 0, -0.56, -0.55, 0.25, 0.48, 0.38, 0, 0, 0}; // Barrel
	double EE_w[10] = {0, 0, -0.65, -0.52, 0.25, 0.52, 0.50, 0, 0, 0}; // Endcap

  	// Set conditions 
	bool EB_Only = false; // Maybe change to fill EB and fill EE...
  	bool EE_Only = true; // Skip to row 60495 of crystal_parameters.txt
  	bool normalized_A = false;
  	bool normalized_t0 = false; 

	fill_histograms(max_rows, time_shift, EB_w, EE_w, EB_Only, EE_Only, normalized_A, normalized_t0);
	//plot(zmin,zmax);

	//bool EB_Only = true;
  	//bool EE_Only = false;

	//fill_histograms(max_rows, time_shift, EB_w, EE_w, EB_Only, EE_Only, normalized_A, normalized_t0);
	//plot(zmin,zmax);
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
