// Abe Tishelman-Charny
// 24 May, 2018

// The purpose of this main function is to handle reconstructed amplitude 
// for EB and EE with desired time shift and weights.

// Current compile command:
// g++ -std=c++11 -o run.x main_noclhep.cpp `root-config --ldflags --glibs --cflags`

using namespace std;

// Root header files 
#include "TString.h"
#include "TH1.h"
#include "TH2.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TStyle.h"
//#include "TLatex.h"

// C++ header files 
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iterator>
#include <string>
#include <chrono>
#include <cmath>

// files used to run this file 
#include "total_error_noclhep.cpp" 

int main()
{
	time_t initial_time = time(0); // initial time 

	// Types of plots: (total error (te) vs. ts, x:y:z = DOF1:DOF2:error) * (EB, EE)
	// Let's try to make any one plot at a time
	// What to Plot

	bool plot_te = true; // Plot total error vs. time shift
	bool plot_e = false; // Plot error as a function of Degrees of Freedom
	bool plot_EB = true; // Make desired plots for Barrel
	bool plot_EE = false; // Make desired plots for Endcap

	// How to Plot it 
	bool ideal_weights = true; // Either Compute ideal weights during runtime or read from text file 
	bool normalized_A = false;
  	bool normalized_t0 = false; 

	if (ideal_weights) normalized_A = false;
	if (!ideal_weights) normalized_A = true;

	// Study Parameters
	double ts_min = -1.0, ts_max = 1.0, dts = 0.5; // Only used if plot_te == true
	double ts = 0; // Only used if plot_e = true
	// Move waveform +/- ns to right/left <-- double check that 
 	int max_rows = 10; // < 0 to read all rows of XTAL_Params.txt

	// For Single Set of Weights 
	//double w[10] = {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0};
	double EB_w[10] = {0, 0, -0.56, -0.55, 0.25, 0.48, 0.38, 0, 0, 0}; // Barrel
	double EE_w[10] = {0, 0, -0.65, -0.52, 0.25, 0.52, 0.50, 0, 0, 0}; // Endcap

	// Make histogram(s)

	// Titles
	ostringstream ts_range_title, single_ts_title;
  	ts_range_title << "Total Error vs. Time Shift";
	single_ts_title << "Percent Error";

	if (ideal_weights) {
		ts_range_title << ", Ideal Weights, ";
		single_ts_title << ", Ideal Weights, ";
		}

	if (!ideal_weights) {
		ts_range_title << ", Single Set of Weights, ";
		single_ts_title << ", Single Set of Weights, ";
		}

	if (max_rows == -1) {
		ts_range_title << "All XTALs";
		single_ts_title << "All XTALs";
		}

	else {
		ts_range_title << max_rows << " XTALS per ts";	
		single_ts_title << max_rows << " XTALS per ts";	
		}	

  	TString ts_range_title_ = ts_range_title.str(); 
  	TString single_ts_title_ = single_ts_title.str(); 
	TH1F *tsr = new TH1F("tsr",ts_range_title_,((ts_max - ts_min) / (dts)) + 1,ts_min,ts_max + dts); // ts range
	//TH1F *sts = new TH2F("sts",single_ts_title_,(ts_max - ts_min) / (dts),ts_min,ts_max + dts, , ,); // single ts

	// Function variables
	double total = 0.0;
	
	// Call Functions

	if (plot_te){

		for (ts = ts_min; ts <= ts_max; ts += dts){
			// total = total_error()
			total = total_error(max_rows, ts, EB_w, EE_w, plot_EB, plot_EE, normalized_A, normalized_t0, ideal_weights);
			tsr->Fill(ts,total);
			cout << "ts = " << ts << ", total = " << total << "\n";
		  }
	}


	if (plot_e){

	// DOF_plot() .. ?

	}

	time_t current_time = time(0);

	//gStyle->SetOptStat(0); // no stats box

	//TLatex Tl;

	TCanvas *c1 = new TCanvas("c1","c1",800,600);
	c1->cd();
	tsr->Draw("HIST");
	c1->Update();
	//EB->GetZaxis()->SetRangeUser(zmin,zmax); // for DOF plot
	//tsr->GetZaxis()->SetLabelSize(0.02); // for DOF plot
	tsr->GetXaxis()->SetTitle("ts (ns)");
	tsr->GetXaxis()->SetTitleOffset(1.3);
	//tsr->GetYaxis()->SetTitle("Total Error"); // Write in latex? 
	tsr->GetYaxis()->SetTitle("#sum_{XTALS}^{}Error");
	tsr->GetYaxis()->SetTitleOffset(1.3);
	tsr->Draw("HIST");
	ostringstream error_plot_root, error_plot_pdf;
	error_plot_root << "bin/te_Plot"; //_EB_"; 
	error_plot_pdf << "bin/te_Plot"; //_EB_"; 
	
	if (plot_EB){	
	  error_plot_root << "_EB_";
	  error_plot_pdf << "_EB_";
	}

	if (plot_EE){
	  error_plot_root << "_EE_";
	  error_plot_pdf << "_EE_";
	}

	if (ideal_weights){
		error_plot_root << "idealweights" << current_time << ".root";
		error_plot_pdf << "idealweights" << current_time << ".pdf";
	  }

	if (!ideal_weights){ 
		error_plot_root << "singleweights" << current_time << ".root";
		error_plot_pdf << "singleweights" << current_time << ".pdf";
	  }

	TString rooterrortitle = error_plot_root.str();
	TString pdferrortitle = error_plot_pdf.str();

	//c1->SaveAs(rooterrortitle);
	c1->SaveAs(pdferrortitle); // Canvas pic
	tsr->SaveAs(rooterrortitle); // histogram
	//tsr>SaveAs(pdferrortitle);

	cout.precision(4);
	time_t final_time = time(0);
	time_t total_time = (final_time - initial_time);
	cout << "Total time: " << total_time / 60. << " minutes\n";

	return 0;
}
