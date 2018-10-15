// Abe Tishelman-Charny
// 24 May, 2018

// The purpose of this main function is to handle reconstructed amplitude 
// for EB and EE with desired time shift and weights.

// Lxplus Compile command:
// g++ -std=c++11 -o run.x main.cpp `root-config --ldflags --glibs --cflags`

using namespace std;

// Root header files 
#include "TString.h"
#include "TH1.h"
#include "TH2.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TStyle.h"
#include "TFile.h"
#include "TTree.h"
#include "TBranch.h"

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
#include <tuple>

// Files used to run this file 
#include "total_error_noclhep.cpp"
#include "Bias_Distribution.cpp" 
#include "Eta_Curves.cpp"

// Main function
int main(int argc, char** argv)
{
	time_t initial_time = time(0); // initial time 

	// Command Line Arguments
	cout << "argc = " << argc << endl;
	for (int i = 0; i < argc; i++){
		cout << "argv[" << i << "] = " << argv[i] << endl;
		}

	// argv[0] = ./run.x
	// argv[1] = (EC) or (BD)
	// argv[2] = (ts_min,ts_max,dts) or (ts)
	// argv[3] = if (BD){ (EB) or (EE+) or (EE-) }  *** if (EC) {leave empty} ------- leave this argument empty if plotting EC.
	// argv[4] = (online) or (PedSubM+N) // Weights Type
	// argv[5] = (2017) or (2018) // parameter year 
	// argv[6] = max_rows
	// argv[7] = note

	string note = "";

	// Study Parameters

 	int max_rows = 0; 
	double ts_min = 0, ts_max = 0, dts = 0; 
	double ts = 0; // +/- time shift moves waveform +/- ns to right/left

	bool plot_EC = false; // Plot Eta Curves
	bool plot_BD = false; // Plot Bias Distribution

	// If Bias Distribution, choose ECAL Section 
	bool plot_EB = false; 
	bool plot_EE_minus = false; 
	bool plot_EE_plus = false;

	// Weights
	
	bool ideal_weights = false; // True: Compute ideal weights during runtime or read from text file. False: Use single sets defined below 
	bool online_weights = false;
	string weights_type = "PedSub0+5"; // Default weight type

	// Read plot type 

	if(string(argv[1]) == "EC"){
		
		plot_EC = true;
		}

	else if(string(argv[1]) == "BD"){

		  plot_BD = true;
		  ts = stod(string(argv[2]));

		}
	else {
		cout << "Please set 1st argument after executable to either 'EC' or 'BD'\n";
		cout << "Terminating\n";

		exit(0);
		}

	if(plot_EC){

	  	// extract ts_min, ts_max, dts

		string BC_tsr = string(argv[2]);
		vector<double> BC_tsr_vec;
		stringstream tsr_ss(BC_tsr);
		double tsr_i;

		while (tsr_ss >> tsr_i){
		
		    BC_tsr_vec.push_back(tsr_i);
		    if(tsr_ss.peek() == ',') 
		    	tsr_ss.ignore();	

		  }
			
		for (int i = 0; i < BC_tsr_vec.size(); i++)
     			cout << BC_tsr_vec.at(i) << endl;

		ts_min = BC_tsr_vec.at(0);
		ts_max = BC_tsr_vec.at(1);
		dts = BC_tsr_vec.at(2);

	}	

	// If not plotting eta curve
	if(!plot_EC){

		if(string(argv[3]) == "EB"){
			plot_EB = true;
			}
		else if(string(argv[3]) == "EE-"){
			plot_EE_minus = true;
			}
		else if(string(argv[3]) == "EE+"){
			plot_EE_plus = true;
			}
		else {
			cout << "Since you selected BD plot,\n";
			cout << "please set 3rd argument after executable to either 'EB', 'EE-', or 'EE+'\n";
			cout << "Terminating\n";

			exit(0);
			}

	}

	// Skip one argument if plotting eta curve, since this doesn't require 3rd argument of EB/EB+-
	if ( ( string(argv[4 - (plot_EC)]) == "online" ) || ( string(argv[4 - (plot_EC)]) == "Online" ) ){
	    online_weights = true;	    
	  }

	else {
		ideal_weights = true;
	        weights_type = string(argv[4 - (plot_EC)]);
	      }

	bool note_exists = false;

	if (argc == 8){
	  note_exists = true; 
	  note = string(argv[7]); // note is optional
	  }
	if ( (plot_EC) && (argc == 7) ){
	  note_exists = true;
	  note = string(argv[6]);
	  }
	string PY = string(argv[5 - (plot_EC)]); // Parameter year
	max_rows = stoi(string(argv[6 - (plot_EC)]));

	// For now these are not command line arguments
	bool normalized_A = false;
  	bool normalized_t0 = false; 

	if (ideal_weights) normalized_A = false;
	if (!ideal_weights) normalized_A = true;

	int tsr_bins = 0;

	if (plot_EC){
		tsr_bins = ( (ts_max - ts_min) / (dts) ) + 1 ;
		cout << "tsr_bins = " << tsr_bins << endl;
	}

	// Weights
       
	//double online[10] = {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0}; // old, pre-multifit weights 
	double online_EB[10] = {0, 0, -0.5625, -0.546875, 0.25, 0.484375, 0.375, 0, 0, 0}; // Current EB TPG weights
	double online_EE[10] = {0, 0, -0.65625, -0.515625, 0.25, 0.515625, 0.40625, 0, 0, 0}; // Current EE TPG weights
 
	// Initialize
	double EB_w[10] = {0.}, EE_w[10] = {0.};

	if (online_weights){
		for (int i = 0; i < 10; i++){
			EB_w[i] = online_EB[i];
			EE_w[i] = online_EE[i];

		}

	}        

	// Titles
	ostringstream ts_range_title, single_ts_title;
        
	if (plot_EB){
          ts_range_title << "EB, ";
          single_ts_title << "EB, ";
          }
	  if (plot_EE_minus){
		ts_range_title << "EE-, ";	
		single_ts_title << "EE-, ";	
	    }
	  if (plot_EE_plus){
		ts_range_title << "EE+, ";	
		single_ts_title << "EE+, ";	
	    }

  	ts_range_title << "Bias vs. Time Shift, ";
	single_ts_title << "Bias, ts = " << ts << "ns, ";

	if (plot_EC){
		ts_range_title << "By Eta Range, ";
	
	}

	if (ideal_weights) {
		ts_range_title << weights_type;
		single_ts_title << weights_type;
		}

	if (!ideal_weights) {
		ts_range_title << "Online Weights";
		single_ts_title << "Online Weights";
		}

	/*if (max_rows == -1) {
		ts_range_title << "All XTALs";
		single_ts_title << "All XTALs";
		}*/

	else {
		ts_range_title << max_rows << " XTALS per ts";	
		single_ts_title << max_rows << " XTALS";	
		}	

	// Make tree to store info such as XTAL count and total error 

  	TString ts_range_title_string = ts_range_title.str(); 
  	TString single_ts_title_string = single_ts_title.str(); 
	//TH1F *tsr = new TH1F("tsr",ts_range_title_string,tsr_bins,ts_min,ts_max + dts); // ts range

	// Function variables
	double total = 0.0;
	double total_error_ = 0.0;
	int count = 0;
	double avg_bias = 0.0;
	
	// Call Functions

	if (plot_EC){
	
		cout << "Plotting Eta Curve\n";

		vector<double> eta_boundaries = {-3.0, -2.5, -1.485, -1.16, -0.81, -0.46, 0, 0.44, 0.80, 1.14, 1.482, 2.5, 3.0};

		// Define first abs_eta_max
		double eta_min = eta_boundaries[0], eta_max = eta_boundaries[1]; // initial values for eta being iterated over 
		int total_eta_skip = 0, single_eta_skip = 0; // number of rows to skip in eta file. Update every time an eta range is finished.
		int skip = 0;
		//for (eta_max = abs_eta_max; eta_max < 3.1; eta_max += 0.3){ // want last run to be at eta_max
		int total_XTALS = 0;

		for (int i = 0; i < eta_boundaries.size() - 1; i += 1){ // for debugging 
							
			// Set loop boundaries
			eta_min = eta_boundaries[i];
			eta_max = eta_boundaries[i+1];

			TH1F *EC = new TH1F("EC",ts_range_title_string,tsr_bins,ts_min,ts_max + dts); // ts range

			ts = 0.0;
			double XTAL_count = 0;
			double stddev = 0;
			int ts_i = 1; // ts index for adding error bars. Start at 1 because binning is 1 indexed.

			cout << "*****************************************\n";
			cout << "Computing Average Bias for:\n";
			cout << "Eta/iEta: [" << eta_min << ", " << eta_max << ")" << endl; // ieta means iterative here. 
			cout << "*****************************************\n";

			// in EC_bias, max_rows is max number of eta rows to read. Does not include eta_skip.
			for (ts = ts_min; ts < ts_max + dts; ts += dts){
				
				tie(total, XTAL_count, stddev) = EC_bias(max_rows, ts, EB_w, EE_w, normalized_A, normalized_t0, ideal_weights, weights_type, PY, eta_min, eta_max, skip, note_exists, note);
				if (XTAL_count != 0){ 
					EC->Fill(ts,total/XTAL_count); // Set histo point 
					cout << "eta_min = " << eta_min << ", eta_max = " << eta_max << ", ts = " << ts << "\n";
					cout << "Total Bias = " << total << ", XTAL_count = " << XTAL_count << "\n";
					cout << "Average Bias = " << total/XTAL_count << "\n";
					cout << "stddev = " << stddev << "\n";
					if (ts == ts_max) total_XTALS += XTAL_count;
					cout << "ts index = " << ts_i << endl;
					EC->SetBinError(ts_i,stddev);
					ts_i += 1;
				}

				else{
				
					cout << "XTAL_count = " << XTAL_count << ", not filling histogram.\n"; // should equal zero

				}
			  } 

		// Save 2d histo, later to be plotted by plot.py 
		ostringstream eta_title;
		eta_title << "bin/EC_" << eta_min << "_" << eta_max << "_" << ts_min << "_" << ts_max << "_";
		if (ideal_weights) eta_title << weights_type << "_" << PY;
		if (!ideal_weights) eta_title << "Online_" << PY;

		if (note_exists) eta_title << "_" << note;

		eta_title << ".root";

		TString eta_title_string = eta_title.str();

		//for (int i = 0; i < )

		EC->SaveAs(eta_title_string);
		EC->~TH1F();

		eta_min = eta_max;	
	
		}

	cout << "Total XTALS in all eta ranges: " << total_XTALS << endl;

	} // plot EC

	if (plot_BD){ // plot_BD

		// Call function 
		DOF_bias(single_ts_title_string, plot_EB, plot_EE_minus, plot_EE_plus, EB_w, EE_w, max_rows, ts, normalized_A, normalized_t0, ideal_weights, weights_type, PY);

	} // plot_BD

}