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
#include "TFile.h"
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
#include <tuple>

// files used to run this file 
#include "total_error_noclhep.cpp"
#include "DOF_error_noclhep.cpp" 

int main()
{
	time_t initial_time = time(0); // initial time 

	// Make tree to store info such as XTAL count and total error 

	string note = "PedSub1+4";
	//string note = "Online";
	//TH1F *errors = new TH1F("errors","A/A - 1", 100, -1, 1);

	//string note = "2018";	

	// Customize One Plot

	// What to Plot
	bool plot_te = true; // Plot total error vs. time shift
	bool plot_e = false; // Plot error as a function of Degrees of Freedom
	bool plot_EB = false; // Make desired plots for Barrel
	bool plot_EE = true; // Make desired plots for Endcap

	bool plot_EE_minus = false; // Set one of these to true only if plot_EE is set to true
	bool plot_EE_plus = true;

	// Weights
	
	// values
	bool ideal_weights = true; // True: Compute ideal weights during runtime or read from text file. False: Use single sets defined below 
	bool cmssw_weights = false;
	//bool presentation_weights = false;

	// number filter
	//bool five_weights = false; // Set 1, 2, 8, 9, 10 to zero
	//bool ten_weights = false;

	bool normalized_A = false;
  	bool normalized_t0 = false; 

	if (ideal_weights) normalized_A = false;
	if (!ideal_weights) normalized_A = true;

	// Study Parameters
 	int max_rows = -1; // < 0 to read all rows of XTAL_Params.txt
	double ts_min = -10, ts_max = 10, dts = 1; // Only used if plot_te == true
	double ts = 0.0; // Only used if plot_e = true
	// Move waveform +/- ns to right/left <-- double check that 

	int tsr_bins = ( (ts_max - ts_min) / (dts) ) + 1 ;

	int DOF1min, DOF1max, DOF2min, DOF2max;

	if (plot_EB){
		DOF1min = -85;
		DOF1max = 85;
		DOF2min = 0;
		DOF2max = 360;
	}

	if (plot_EE){
		DOF1min = 0; // What happens when this is removed from the TH2F creation? Does it fix the color problem?
		DOF1max = 100;
		DOF2min = 0;
		DOF2max = 100;
	}

	// Weights
       
	//double cmssw[10] = {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0};
	double cmssw_EB[10] = {0, 0, -0.56, -0.55, 0.25, 0.48, 0.38, 0, 0, 0};
	double cmssw_EE[10] = {0, 0, -0.65, -0.52, 0.25, 0.52, 0.50, 0, 0, 0};
 
	// Initialize
	double EB_w[10] = {0.}, EE_w[10] = {0.};

	//for (int i = 0; i < 10; i++){
	//	EB_w[i] = 0.0;
	//	EE_w[i] = 0.0;
	//}

	if (cmssw_weights){
		for (int i = 0; i < 10; i++){
			EB_w[i] = cmssw_EB[i];
			EE_w[i] = cmssw_EE[i];

		}

        }        

	/*if (presentation_weights){
		for (int i = 0; i < 10; i++){
			EB_w[i] = presentationEB[i];
			EE_w[i] = presentationEE[i];
			
		}
	}*/

	// Make histogram(s)

	// Titles
	ostringstream ts_range_title, single_ts_title;
        
	if (plot_EB){
          ts_range_title << "EB, ";
          single_ts_title << "EB, ";
          }

        if (plot_EE){
          ts_range_title << "EE";
          single_ts_title << "EE";
	  if (plot_EE_minus){
		ts_range_title << "-, ";	
		single_ts_title << "-, ";	
	    }
	  if (plot_EE_plus){
		ts_range_title << "+, ";	
		single_ts_title << "+, ";	
	    }
          }

  	ts_range_title << "Bias vs. Time Shift, ";
	single_ts_title << "Bias, ts = " << ts << "ns, ";

	if (ideal_weights) {
		ts_range_title << "Ideal Weights";
		single_ts_title << "Ideal Weights";
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

  	TString ts_range_title_string= ts_range_title.str(); 
  	TString single_ts_title_string = single_ts_title.str(); 
	//TH1F *tsr = new TH1F("tsr",ts_range_title_string,((ts_max - ts_min) / (dts)) + 1,ts_min,ts_max + dts); // ts range
	TH1F *tsr = new TH1F("tsr",ts_range_title_string,tsr_bins,ts_min,ts_max + dts); // ts range
	//cout << "bins = " << ((ts_max - ts_min) / (dts)) + 1 << endl;
	//cout << "min = " << ts_min << endl;
	//cout << "max = " << ts_max << endl;
	TH2F *sts = new TH2F("sts",single_ts_title_string,(DOF1max - DOF1min),DOF1min,DOF1max,(DOF2max - DOF2min),DOF2min,DOF2max); // single ts

	// For debugging
	TH1F *values = new TH1F("values","values",1000,-0.3,0.3);

	//TH2F *sts = new TH2F("sts",single_ts_title_string); //,,,,,);

	// Function variables
	double total = 0.0;
	double total_error_ = 0.0;
	int count = 0;
	double avg_bias = 0.0;
	
	// Call Functions

	if (plot_te){
		ts = 0.0;
		double XTAL_count = 0;
		for (ts = ts_min; ts < ts_max + dts; ts += dts){
			// total = total_error()
			tie(total, XTAL_count) = total_error(max_rows, ts, EB_w, EE_w, plot_EB, plot_EE, plot_EE_minus, plot_EE_plus, normalized_A, normalized_t0, ideal_weights);
			tsr->Fill(ts,total/XTAL_count); // want this to also return number of entries so average can be taken and plotted.
			cout << "ts = " << ts << ", total = " << total << ", XTAL_count = " << XTAL_count << "\n";
		  }

	}

	double max_bias = 0.0;

	if (plot_e){
	
	  if (plot_EB){
	    bool skip_this_line = false;
	    int EB_count = 0, EE_count = 0, extra_lines = 0, skip_count = 0;
	    int ieta, iphi;
	    double error; 
	    int sts_row = 0; // single time shift loop row 
	    bool full = false; // Start not full

	    while(!full){ // run while files left to read. Check DOF_error for bool
		skip_this_line = false;
	    	tie(skip_this_line, EB_count, EE_count, extra_lines, skip_count, ieta, iphi, error, sts_row ,full) = DOF_error(plot_EE_minus, plot_EE_plus, sts_row, EB_count, EE_count, extra_lines, skip_count, max_rows, ts, EB_w, EE_w, plot_EB, plot_EE, normalized_A, normalized_t0, ideal_weights);

	        //cout << "ieta = " << ieta << endl;
	        //cout << "iphi = " << iphi << endl;
	        //cout << "error = " << error << endl;
	        //cout << "sts_row = " << sts_row << endl;
		//cout << "int(full) = " << int(full) << endl;

		if (full) break;
		
	        if (!skip_this_line){ 
			sts->Fill(ieta, iphi, error);
			values->Fill(error);
			if (error > max_bias) max_bias = error;
			total_error_ += error;
			count += 1;	
		}
		//if (!skip_this_line) errors->Fill(error);

		//full = true;

	    }

	  }
	
	  if (plot_EE){
	    bool skip_this_line = false;
	    int EB_count = 0, EE_count = 0, extra_lines = 0, skip_count = 0;
	    int ix, iy;
	    double error; 
	    int sts_row = 0; // single time shift loop row 
	    bool full = false; // Start not full

	    while(!full){ // run while files left to read. Check DOF_error for bool
	    	skip_this_line = false;
		tie(skip_this_line, EB_count, EE_count, extra_lines, skip_count, ix, iy, error, sts_row ,full) = DOF_error(plot_EE_minus, plot_EE_plus, sts_row, EB_count, EE_count, extra_lines, skip_count, max_rows, ts, EB_w, EE_w, plot_EB, plot_EE, normalized_A, normalized_t0, ideal_weights);
		if (sts_row%10000 == 0){
		  cout << "skip_this_line = " << skip_this_line << endl;
	          cout << "ix = " << ix << endl;
	          cout << "iy = " << iy << endl;
	          cout << "error = " << error << endl;
	          cout << "sts_row = " << sts_row << endl;
		  cout << "int(full) = " << int(full) << endl;
		}
		if (full){ 
			cout << "full, breaking.\n";
			break;
		}
		
	        if(!skip_this_line){ 
			//if ((sts_row > 420) && (sts_row < 425)) {
				//cout << "ix = " << ix << endl;
				//cout << "iy = " << iy << endl;
				//cout << "error = " << error << endl;
				//}
			 
			sts->Fill(ix, iy, error);
			total_error_ += error;
			if (error > max_bias) max_bias = error;
			count += 1;
			values->Fill(error);
		}

		//full = true;

	    }
	    //sts->Fill(ix, iy, error);     
	  }

	}

	time_t current_time = time(0);

	// Should make plotting function eventually

	//gStyle->SetOptStat(0); // no stats box

	TCanvas *c1 = new TCanvas("c1","c1",800,600);

	if (plot_te){

		c1->cd();
		tsr->Draw("HIST");
		c1->Update();
		//EB->GetZaxis()->SetRangeUser(zmin,zmax); // for DOF plot
		//tsr->GetZaxis()->SetLabelSize(0.02); // for DOF plot
		tsr->GetXaxis()->SetTitle("Time Shift (ns)");
		tsr->GetXaxis()->SetTitleOffset(1.2);
		//tsr->GetYaxis()->SetTitle("Total Error"); // Write in latex? 
		//tsr->GetYaxis()->SetTitle("#sum_{XTALS}^{}Error");
		tsr->GetYaxis()->SetTitle("bias");
		tsr->GetYaxis()->SetTitleOffset(1.4);
		tsr->Draw("HIST");
		ostringstream error_plot_root, error_plot_pdf;
		error_plot_root << "bin/BC_";
		error_plot_pdf << "bin/BC_"; 
	
		if (plot_EB){	
		  error_plot_root << "EB_";
		  error_plot_pdf << "EB_";
		}

		if (plot_EE){
		  error_plot_root << "EE";
		  error_plot_pdf << "EE";

		  if (plot_EE_minus){
			error_plot_root << "-_";	
			error_plot_pdf << "-_";	
		    }

		  if (plot_EE_plus){
			error_plot_root << "+_";	
			error_plot_pdf << "+_";	
		    }

		}

		if (ideal_weights){
			error_plot_root << "idealweights"  << ts_min << '_' << ts_max << "_" << note << current_time << ".root";
			error_plot_pdf << "idealweights"  << ts_min << "_"<< ts_max << '_' <<  note << current_time << ".pdf";
		  }

		if (!ideal_weights){ 
			error_plot_root << "online" << "_" << ts_min << '_' << ts_max << '_' << note << current_time << ".root";
			error_plot_pdf << "online" << "_" << ts_min << '_' << ts_max << '_' << note << current_time << ".pdf";
		  }

		TString rooterrortitle = error_plot_root.str();
		TString pdferrortitle = error_plot_pdf.str();

		c1->SaveAs(pdferrortitle); // Canvas screenshot
		tsr->SaveAs(rooterrortitle); // Editable histogram

	}

	avg_bias = total_error_ / count;

	if (plot_e){

		c1->cd();
		//sts->Draw();
		c1->Update();
		//EB->GetZaxis()->SetRangeUser(zmin,zmax); // for DOF plot
		//tsr->GetZaxis()->SetLabelSize(0.02); // for DOF plot
		if (plot_EB){
			sts->GetXaxis()->SetTitle("iEta");
			sts->GetYaxis()->SetTitle("iPhi");	
			}
		if (plot_EE){
			sts->GetXaxis()->SetTitle("ix");
			sts->GetYaxis()->SetTitle("iy");
			}
		sts->GetXaxis()->SetTitleOffset(1.1);
		sts->GetYaxis()->SetTitleOffset(1.2);
		sts->GetZaxis()->SetLabelSize(0.02);
		gStyle->SetOptStat(0);
		sts->GetZaxis()->SetRangeUser(-0.08,0.12);
		sts->Draw("COLZ1"); // COLZ1 to not color zeros
		
		ostringstream plot_title;
		//plot_title << "";

		ostringstream error_plot_root, error_plot_pdf;
		error_plot_root << "bin/DOF_Plot";
		error_plot_pdf << "bin/DOF_Plot"; 
	
		if (plot_EB){	
		  error_plot_root << "_EB_";
		  error_plot_pdf << "_EB_";
		  plot_title << "EB, ";
		}

		if (plot_EE){
		  error_plot_root << "_EE";
		  error_plot_pdf << "_EE";
		  plot_title << "EE";

		  if (plot_EE_minus){
			error_plot_root << "-_";	
			error_plot_pdf << "-_";	
			plot_title << "-, ";
		    }

	if (plot_EE){
	  error_plot_root << "_EE";
	  error_plot_pdf << "_EE";

	  if (plot_EE_minus){
		error_plot_root << "-_";	
		error_plot_pdf << "-_";	
	    }

	  if (plot_EE_plus){
		error_plot_root << "+_";	
		error_plot_pdf << "+_";	
	    }

	}

	if (ideal_weights){
		error_plot_root << "idealweights" << current_time << '_' << note << ".root";
		error_plot_pdf << "idealweights" << current_time <<'_' << note << ".pdf";
	  }

	if (!ideal_weights){ 
		error_plot_root << "singleweights" << current_time << '_' << note << ".root";
		error_plot_pdf << "singleweights" << current_time << '_' << note << ".pdf";
	  }

		  if (plot_EE_plus){
			error_plot_root << "+_";	
			error_plot_pdf << "+_";	
			plot_title << "+, ";
		    }

		}

		if (ideal_weights){
			error_plot_root << "idealweights" << note << current_time << ".root";
			error_plot_pdf << "idealweights" << note << current_time << ".pdf";
			plot_title << "Ideal Weights, ";
		  }

		if (!ideal_weights){ 
			error_plot_root << "onlineweights" << note << current_time << ".root";
			error_plot_pdf << "onlineweights" << note << current_time << ".pdf";
			plot_title << "Online Weights, ";
		  }
		
		plot_title << "ts = " << ts; // ",  Avg Bias = " << avg_bias;

		TString plottitle = plot_title.str();
		sts->SetTitle(plottitle);
		TString rooterrortitle = error_plot_root.str();
		TString pdferrortitle = error_plot_pdf.str();

		TFile *f = new TFile(rooterrortitle,"NEW");
		sts->Write();
		values->Write();

		cout << "total error = " << total_error_ << endl;	
		cout << "max bias = " << max_bias << endl;
		
		//f->Write();
		//f->Close();
		c1->SaveAs(pdferrortitle); // Canvas screenshot
		//sts->SaveAs(rooterrortitle); // Editable Histogram
		//sts->SaveAs("EEPlot.root");
	}

	cout.precision(4);
	time_t final_time = time(0);
	time_t total_time = (final_time - initial_time);
	cout << "Total time: " << total_time / 60. << " minutes\n";

	return 0;
}
