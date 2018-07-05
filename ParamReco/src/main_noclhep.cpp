// Abe Tishelman-Charny
// 24 May, 2018

// The purpose of this main function is to plot reconstructed amplitude 
// for EB and EE with desired time shift and weights.

// Currently using this to compile:
// g++ -std=c++11 -o test.exe main_noclhep.cpp `root-config --ldflags --glibs --cflags`

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

// files you're going to need to run main function
#include "fill_histograms_noclhep.cpp" 
//#include "plot.cpp"

int main()
{
	time_t initial_time = time(0); // initial time to later calculate total time 

	// Set Study Parameters
	double ts = 0; // Move waveform +/- ns to right/left
 	int max_rows = -1; // < 0 to read all rows of XTAL_Params.txt

	// Define single set weights for EB, EE
	//double w[10] = {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0};
	double EB_w[10] = {0, 0, -0.56, -0.55, 0.25, 0.48, 0.38, 0, 0, 0}; // Barrel
	double EE_w[10] = {0, 0, -0.65, -0.52, 0.25, 0.52, 0.50, 0, 0, 0}; // Endcap

  	// Set conditions 
	bool Fill_EB = true; 
  	bool Fill_EE = false; // Skip to row 60495 of crystal_parameters.txt
  	bool normalized_A = false;
  	bool normalized_t0 = false; 
	bool ideal_weights = true;

	if (!ideal_weights) normalized_A = true;
	if (ideal_weights) normalized_A = false;

	// Make histogram
	ostringstream total_error_title;
  	total_error_title << "Total Error vs. Time Shift";

	if (ideal_weights) total_error_title << ", Ideal Weights, ";
	if (!ideal_weights) total_error_title << ", Single Set of Weights, ";

	if (max_rows == -1) total_error_title << "All XTALs";
	else total_error_title << max_rows << " XTALS per ts";	

  	TString total_error_title_ = total_error_title.str(); 
	TH1F *Ets = new TH1F("Ets",total_error_title_,6,-1.5,1.5); // Name is used to access after saving
	//TH1F *Ets = new TH1F("Ets",total_error_title_,1,-0.5,0); // Name is used to access after saving


	// Get total error for each ts
	
	double total = 0.0;

	//for (ts = -1; ts <= 1; ts += 0.5){
	for (ts = -1; ts < 1.5; ts += 0.5){
		total = fill_histograms(max_rows, ts, EB_w, EE_w, Fill_EB, Fill_EE, normalized_A, normalized_t0, ideal_weights);
		Ets->Fill(ts,total);
		cout << "ts = " << ts << ", total = " << total << "\n";
	  }

	time_t current_time = time(0);

	//double zmin = 0.995, zmax = 1.005; // 0.5%

	//gStyle->SetOptStat(0); // no stats box

	TCanvas *c1 = new TCanvas("c1","c1",800,600);
	c1->cd();
	Ets->Draw("HIST");
	c1->Update();
	//EB->GetZaxis()->SetRangeUser(zmin,zmax); // 2d
	//Ets->GetZaxis()->SetLabelSize(0.02); // Only need this for 2d
	Ets->GetXaxis()->SetTitle("ts (ns)");
	Ets->GetXaxis()->SetTitleOffset(1.3);
	Ets->GetYaxis()->SetTitle("Total Error");
	Ets->GetYaxis()->SetTitleOffset(1.2);
	Ets->Draw("HIST");
	ostringstream error_plot_root, error_plot_pdf;
	error_plot_root << "bin/Error_Plot_EB_"; // Need ECAL section and weights
	error_plot_pdf << "bin/Error_Plot_EB_"; // Need ECAL section and weights
	if (!ideal_weights){ 
		error_plot_root << "singleweights" << current_time << ".root";
		error_plot_pdf << "singleweights" << current_time << ".pdf";
	  }
	if (ideal_weights){
		error_plot_root << "idealweights" << current_time << ".root";
		error_plot_pdf << "idealweights" << current_time << ".pdf";
	  }
	TString rooterrortitle = error_plot_root.str();
	TString pdferrortitle = error_plot_pdf.str();

	//c1->SaveAs(rooterrortitle);
	c1->SaveAs(pdferrortitle);
	Ets->SaveAs(rooterrortitle);
	//Ets->SaveAs(pdferrortitle);

	time_t final_time = time(0);
	time_t total_time = (final_time - initial_time);

	cout << "Total time: " << total_time / 60. << " minutes\n";

	return 0;
}
