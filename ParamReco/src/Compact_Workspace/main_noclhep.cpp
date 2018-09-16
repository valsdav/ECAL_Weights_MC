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
#include "TTree.h"
#include "TBranch.h"
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

// Files used to run this file 
#include "total_error_noclhep.cpp"
#include "DOF_error_noclhep.cpp" 
#include "Eta_Curves.cpp"

int main(int argc, char** argv)
//int main()
{
	time_t initial_time = time(0); // initial time 

	// Parameters
	cout << "argc = " << argc << endl;
	for (int i = 0; i < argc; i++){
		cout << "argv[" << i << "] = " << argv[i] << endl;
		}

	// argv[0] = ./run.x
	// argv[1] = (BC) or (BD) or (EC)
	// argv[2] = (ts_min,ts_max,dts) or (ts)
	// argv[3] = (EB) or (EE+) or (EE-)  ------- leave this argument empty if plotting EC.
	// argv[4] = (online) or (weights.txt path)
	// argv[5] = (2017) or (2018) // parameter year 
	// argv[6] = max_rows
	// argv[7] = note

	string note = "";

	// Customize One Plot
	// What to Plot

	// Study Parameters
 	int max_rows; 
	double ts_min, ts_max, dts; 
	double ts; // +/- time shift moves waveform +/- ns to right/left

	bool plot_BC = false; // Plot Bias Curve for one section (EB or EE+-)
	bool plot_BD = false; // Plot Bias Distribution
	bool plot_EC = false; // Plot Eta Curve. This is BC plot for each eta range 
	// Plot EB, EE-, EE+ or by eta
	bool plot_EB = false; 
	bool plot_EE_minus = false; 
	bool plot_EE_plus = false;

	// Read plot type 

	if(string(argv[1]) == "BC"){

		plot_BC = true;
		}

	else if(string(argv[1]) == "EC"){
		
		plot_EC = true;
		}

	else if(string(argv[1]) == "BD"){

		  plot_BD = true;
		  ts = stod(string(argv[2]));

		//if (string(argv[3]) == "eta"){

		  //cout << "If you want to plot eta curves, you need to select BC (EC?) as your 1st argument and a time shift range in your 2nd argument.\n"
		  //cout << "Terminating\n"
		  //exit(0);

		  //}

		}
	else {
		cout << "Please set 1st argument to either 'BC', 'BD' or 'EC'\n";
		cout << "Terminating\n";

		exit(0);
		}

	if( (plot_BC) || (plot_EC) ){

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
			cout << "Please set 3rd argument to either 'EB', 'EE-', or 'EE+'\n";
			cout << "Terminating\n";

			exit(0);
			}

	}


	// Weights
	
	bool ideal_weights = false; // True: Compute ideal weights during runtime or read from text file. False: Use single sets defined below 
	bool online_weights = false;
	string weights_type = "PedSub1+4"; // Default type of Weights used 


	// Skip one argument if plotting eta curve, since this doesn't require 3rd argument of EB/EB+-
	if (string(argv[4 - (plot_EC)]) == "online"){
	    online_weights = true;	    
	  }

	else {
		ideal_weights = true;
	        weights_type = string(argv[4 + (plot_EC)]);
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

	bool normalized_A = false;
  	bool normalized_t0 = false; 

	if (ideal_weights) normalized_A = false;
	if (!ideal_weights) normalized_A = true;

	int tsr_bins = ( (ts_max - ts_min) / (dts) ) + 1 ;
	cout << "tsr_bins = " << tsr_bins << endl;
	int DOF1min, DOF1max, DOF2min, DOF2max;

	if (plot_EB){
		DOF1min = -85;
		DOF1max = 85;
		DOF2min = 0;
		DOF2max = 360;
	}

	if (plot_EE_minus || plot_EE_plus){
		DOF1min = 0; // What happens when this is removed from the TH2F creation? Does it fix the color problem?
		DOF1max = 100;
		DOF2min = 0;
		DOF2max = 100;
	}

	// Weights
       
	//double online[10] = {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0};
	double online_EB[10] = {0, 0, -0.56, -0.55, 0.25, 0.48, 0.38, 0, 0, 0};
	double online_EE[10] = {0, 0, -0.65, -0.52, 0.25, 0.52, 0.50, 0, 0, 0};
 
	// Initialize
	double EB_w[10] = {0.}, EE_w[10] = {0.};

	//for (int i = 0; i < 10; i++){
	//	EB_w[i] = 0.0;
	//	EE_w[i] = 0.0;
	//}

	if (online_weights){
		for (int i = 0; i < 10; i++){
			EB_w[i] = online_EB[i];
			EE_w[i] = online_EE[i];

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

        //if (plot_EE){
          //ts_range_title << "EE";
          //single_ts_title << "EE";
	  if (plot_EE_minus){
		ts_range_title << "EE-, ";	
		single_ts_title << "EE-, ";	
	    }
	  if (plot_EE_plus){
		ts_range_title << "EE+, ";	
		single_ts_title << "EE+, ";	
	    }
          //}

  	ts_range_title << "Bias vs. Time Shift, ";
	single_ts_title << "Bias, ts = " << ts << "ns, ";

	if (plot_EC){
		ts_range_title << "By Eta Range, ";
	
	}

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

	//TH1F *errors = new TH1F("errors","A/A - 1", 100, -1, 1);
	// Make tree to store info such as XTAL count and total error 

  	TString ts_range_title_string = ts_range_title.str(); 
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

	double abs_eta_min = 0.0, abs_eta_max = 0.0;

	if (plot_EC){
	
		cout << "Plotting Eta Curve\n";

		// Define first abs_eta_max
		abs_eta_max = 1.4; // Start here, increase by 0.4 first time, then 0.3 till 2.7
		double ieta_max = 0.0; // eta being iterated over 

		for (ieta_max = abs_eta_max; ieta_max < 3.1; ieta_max += 0.3){ // want last run to be at eta_max
			
			TH1F *EC = new TH1F("EC",ts_range_title_string,tsr_bins,ts_min,ts_max + dts); // ts range
			ts = 0.0 ;
			double XTAL_count = 0;
			for (ts = ts_min; ts < ts_max + dts; ts += dts){
				// total = total_error()
				tie(total, XTAL_count) = EC_bias(max_rows, ts, EB_w, EE_w, normalized_A, normalized_t0, ideal_weights, weights_type, PY, abs_eta_min, ieta_max);
				EC->Fill(ts,total/XTAL_count); // want this to also return number of entries so average can be taken and plotted.
				cout << "ts = " << ts << ", total = " << total << ", XTAL_count = " << XTAL_count << "\n";
			  }
		// Save histogram as root file, do again for next eta range.
		// Save etamin and etamax in root file title, extract in plot.py.
		// destroy histogram from memory 
		ostringstream eta_title;
		eta_title << "bin/EC_" << abs_eta_min << "_" << ieta_max << "_" << ts_min << "_" << ts_max << "_";
		if (ideal_weights) eta_title << weights_type << "_" << PY;
		if (!ideal_weights) eta_title << "online_" << PY;

		if (note_exists) eta_title << "_" << note;

		eta_title << ".root";

		TString eta_title_string = eta_title.str();
		EC->SaveAs(eta_title_string);
		EC->~TH1F();

		abs_eta_min = ieta_max;	
		if (ieta_max == 1.4) ieta_max += 0.1; // after loop, this will make next ietamax 1.8
	
		}

	}

	if (plot_BC){
		ts = 0.0;
		double XTAL_count = 0;
		for (ts = ts_min; ts < ts_max + dts; ts += dts){
			// total = total_error()
			tie(total, XTAL_count) = total_error(max_rows, ts, EB_w, EE_w, plot_EB, plot_EE_minus, plot_EE_plus, normalized_A, normalized_t0, ideal_weights, weights_type, PY);
			tsr->Fill(ts,total/XTAL_count); // want this to also return number of entries so average can be taken and plotted.
			cout << "ts = " << ts << ", total = " << total << ", XTAL_count = " << XTAL_count << "\n";
		  }

	}

	double max_bias = 0.0, min_bias = 0.0;

	if (plot_BD){
	
	  if (plot_EB){
	    bool skip_this_line = false;
	    int EB_count = 0, EE_count = 0, extra_lines = 0, skip_count = 0;
	    int ieta, iphi;
	    double error; 
	    int sts_row = 0; // single time shift loop row 
	    bool full = false; // Start not full

	    while(!full){ // run while files left to read. Check DOF_error for bool
		skip_this_line = false;
	    	tie(skip_this_line, EB_count, EE_count, extra_lines, skip_count, ieta, iphi, error, sts_row ,full) = DOF_error(plot_EE_minus, plot_EE_plus, sts_row, EB_count, EE_count, extra_lines, skip_count, max_rows, ts, EB_w, EE_w, plot_EB, normalized_A, normalized_t0, ideal_weights, weights_type, PY); //, argv[1]);

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
			if (error < min_bias) min_bias = error;
			total_error_ += error;
			count += 1;	
		}
		//if (!skip_this_line) errors->Fill(error);

		//full = true;

	    }

	  }
	
	  if (plot_EE_minus || plot_EE_plus){
	    bool skip_this_line = false;
	    int EB_count = 0, EE_count = 0, extra_lines = 0, skip_count = 0;
	    int ix, iy;
	    double error; 
	    int sts_row = 0; // single time shift loop row 
	    bool full = false; // Start not full

	    while(!full){ // run while files left to read. Check DOF_error for bool
	    	skip_this_line = false;
		tie(skip_this_line, EB_count, EE_count, extra_lines, skip_count, ix, iy, error, sts_row ,full) = DOF_error(plot_EE_minus, plot_EE_plus, sts_row, EB_count, EE_count, extra_lines, skip_count, max_rows, ts, EB_w, EE_w, plot_EB, normalized_A, normalized_t0, ideal_weights, weights_type, PY);
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
			if (error < min_bias) min_bias = error;
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

	gStyle->SetOptStat(0); // no stats box

	TCanvas *c1 = new TCanvas("c1","c1",800,600);

	if (plot_BC){

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
		error_plot_pdf <<  "bin/BC_"; 
	
		if (plot_EB){	
		  error_plot_root << "EB_";
		  error_plot_pdf  << "EB_";
		}

		if (plot_EE_minus){
			error_plot_root << "EE-_";	
			error_plot_pdf  << "EE-_";	
		  }

		if (plot_EE_plus){
			error_plot_root << "EE+_";	
			error_plot_pdf  << "EE+_";	
		  }

		if (ideal_weights){
			//error_plot_root << "idealweights"  << ts_min << "_" << ts_max << "_" << note << current_time << ".root";
			//error_plot_pdf  << "idealweights"  << ts_min << "_" << ts_max << "_" <<  note << current_time << ".pdf";
			error_plot_root << weights_type << "_" << PY << "_" << ts_min << "_" << ts_max << note << ".root";
			error_plot_pdf  << weights_type << "_" << PY << "_" << ts_min << "_" << ts_max << note << ".pdf";
		  }

		if (!ideal_weights){ 
			//error_plot_root << "online" << "_" << ts_min << "_" << ts_max << "_" << PY << "_" << note << current_time << ".root";
			//error_plot_pdf  << "online" << "_" << ts_min << "_" << ts_max << "_" << PY << "_" << note << current_time << ".pdf";
			error_plot_root << "online" << "_" << PY << "_" << ts_min << "_" << ts_max << note << ".root";
			error_plot_pdf  << "online" << "_" << PY << "_" << ts_min << "_" << ts_max << note << ".pdf";
		  }

		TString rooterrortitle = error_plot_root.str();
		TString pdferrortitle = error_plot_pdf.str();

		c1->SaveAs(pdferrortitle); // Canvas screenshot
		tsr->SaveAs(rooterrortitle); // Editable histogram

	}

	avg_bias = total_error_ / count;

	if (plot_BD){

		c1->cd();
		//sts->Draw();
		c1->Update();
		//EB->GetZaxis()->SetRangeUser(zmin,zmax); // for DOF plot
		//tsr->GetZaxis()->SetLabelSize(0.02); // for DOF plot
		if (plot_EB){
			sts->GetXaxis()->SetTitle("iEta");
			sts->GetYaxis()->SetTitle("iPhi");	
			}
		if (plot_EE_minus || plot_EE_plus){
			sts->GetXaxis()->SetTitle("ix");
			sts->GetYaxis()->SetTitle("iy");
			}
		sts->GetXaxis()->SetTitleOffset(1.1);
		sts->GetYaxis()->SetTitleOffset(1.2);
		sts->GetZaxis()->SetLabelSize(0.02);
		gStyle->SetOptStat(0);
		if(plot_EB) sts->GetZaxis()->SetRangeUser(-0.002,0.015); // Arbitrary EB range 
		if(plot_EE_minus || plot_EE_plus) sts->GetZaxis()->SetRangeUser(-0.08,0.16); // Arbitrary EE range 
		sts->Draw("COLZ1"); // COLZ1 to not color zeros
		
		ostringstream plot_title;
		//plot_title << "";

		ostringstream error_plot_root, error_plot_pdf;
		error_plot_root << "bin/BD_";
		error_plot_pdf << "bin/BD_"; 
	
		if (plot_EB){	
		  error_plot_root << "EB_";
		  error_plot_pdf << "EB_";
		  plot_title << "EB, ";
		}

		//if (plot_EE){
		  //error_plot_root << "EE";
		  //error_plot_pdf << "EE";
		  //plot_title << "EE";

		  if (plot_EE_minus){
			error_plot_root << "EE-_";	
			error_plot_pdf << "EE-_";	
			plot_title << "EE-, ";
		    }


	  	   if (plot_EE_plus){
		  	error_plot_root << "EE+_";	
			error_plot_pdf << "EE+_";	
			plot_title << "EE+, ";
	    		}

		  //}

		if (ideal_weights){
			//error_plot_root << "ideal" << note << current_time << ".root";
			//error_plot_pdf  << "ideal" << note << current_time << ".pdf";
			error_plot_root << "ideal" << "_" << PY << "_" << "ts" << ts << note << ".root";
			error_plot_pdf  << "ideal" << "_" << PY << "_" << "ts" << ts << note << ".pdf";
			plot_title << "Ideal Weights, ";
		  }

		if (!ideal_weights){ 
			//error_plot_root << "Online" << "_" << PY << "_" << "ts" << ts << "_" << note << current_time << ".root";
			//error_plot_pdf  << "Online" << "_" << PY << "_" << "ts" << ts << "_" << note << current_time << ".pdf";
			error_plot_root << "Online" << "_" << PY << "_" << "ts" << ts << note << ".root";
			error_plot_pdf  << "Online" << "_" << PY << "_" << "ts" << ts << note << ".pdf";
			plot_title << "Online Weights, ";
		  }
	
		plot_title << " " << string(PY) << " Parameters, ";	
		plot_title << "ts = " << ts; // ",  Avg Bias = " << avg_bias;

		TString plottitle = plot_title.str();
		sts->SetTitle(plottitle);
		TString rooterrortitle = error_plot_root.str();
		TString pdferrortitle = error_plot_pdf.str();

		cout << "max bias = " << max_bias << endl;
		cout << "total error = " << total_error_ << endl;
		cout << "avg bias = " << avg_bias << endl;	
		cout << "min bias = " << min_bias << endl;

		// Want to figure out how to write color drawn histogram into TFile 
		TFile *f = new TFile(rooterrortitle,"RECREATE");
		//sts->Draw("COLZ1");
		gDirectory->WriteObject(sts,"Distribution");
		gDirectory->WriteObject(values,"Bias_Values");

		//gDirectory->GetObject("Distribution",sts)->Draw("COLZ1");
		//TH2F *dist = (TH2F*)f->Get("Distribution");
		//dist->Draw("COLZ1");
		//gDirectory->WriteObject(dist,"DistributionColor");
		//gDirectory->Draw("COLZ1");
		//TTree *Tree = new TTree("Tmax","max");		

                //TBranch *blah = new TBranch(*Tmax); 
                //blah->Fill(max_bias);
                //end fill

		TH1F *maxb = new TH1F("max_bias","max_bias",10,-1,1);
		maxb->Fill(max_bias);
		maxb->SetStats(1);
		maxb->Write();

		TH1F *tot_e = new TH1F("total_error","total_error",10,total_error_ - 1,total_error_ + 1);
		tot_e->Fill(total_error_);
		tot_e->SetStats(1);
		tot_e->Write();

		TH1F *ab = new TH1F("average_bias","average_bias",10,-1,1);
		ab->Fill(avg_bias);
		ab->SetStats(1);
		ab->Write();

		TH1F *minb = new TH1F("min_bias","min_bias",10,-1,1);
		minb->Fill(min_bias);
		minb->SetStats(1);
		minb->Write();
		
		//values->Write();
		//sts->Write();
		//f->Write();

		//sts->Write();
		//values->Write();
		
		//f->Write();
		//f->Write();
		//sts->Draw("COLZ1");
				
	
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
