# Abe Tishelman-Charny
# 2 August 2018

from ROOT import *
#from Bias_Curve_noclhep.py import *
#from DOF_error_noclhep.py import *
from _BD import *
import argparse
import sys
import time
import os

# C++ header files 
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

# Rewriting in PyROOT
initial_time = int(time.time()) # initial time 
#print 'Initial time = ',initial_time

note = ""

def input_arguments():
	parser = argparse.ArgumentParser(description='Choose what bias plots to create')
	parser.add_argument('-EB',  action='store_true', help='Create plot for Barrel')
	parser.add_argument('-EEminus'  ,  action='store_true', help='Create plot for EE-')
	parser.add_argument('-EEplus'  ,  action='store_true', help='Create plot for EE+')
	parser.add_argument('-BD'  ,  action='store_true', help='Create Bias Distribution plot')
	parser.add_argument('-BC'  ,  action='store_true', help='Create Bias Curve plot')
	parser.add_argument('-nA'  ,  action='store_true', help='Normalize A parameter')
	parser.add_argument('-nt0'  ,  action='store_true', help='Normalize t0 parameter')
	parser.add_argument('--ts' , action='store', help='Single time shift value. Used for BD.')
	parser.add_argument('--tsr' , action='store', help='Time Shift Range. Used for BC. Format: tsmin,tsmax,dts')
	parser.add_argument('--weights' , action='store', help='Path to weights file to use')
	parser.add_argument('-online' , action='store_true', help='Use Online Weights')
	parser.add_argument('--rows' , action='store', help='Number of Rows to read') # Change to Xtals? 

	if len(sys.argv[1:])==0: 	# Print help if no options given	
		parser.print_help()
		sys.exit("\n")

	return parser.parse_args()

def main():
	args = input_arguments()

	#print'args.DOF = ',args.DOF
	#print'args = ',args
	#print'args. = ',args.(0)

	#for i in args[i]:
		#print 'i = ',i
	
	if args.BD:
		print'Creating BD Plot'
		BD_Plot(args)	

	elif args.BC:
		print'Creating BC Plot'
		BC_Plot(args)
	
	else:
		print 'Please Choose a Plot type'
		sys.exit('Exiting')

if __name__ == "__main__":
	main()


# Import argparser into DOF and BC functions for this 
#if (ideal_weights) normalized_A = false
#if (!ideal_weights) normalized_A = true 

# Preset weights. Save for functions?
#//double cmssw[10] = {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0};
#double cmssw_EB[10] = {0, 0, -0.56, -0.55, 0.25, 0.48, 0.38, 0, 0, 0}; // Add up to zero
#double cmssw_EE[10] = {0, 0, -0.65, -0.52, 0.25, 0.52, 0.50, 0, 0, 0}; // Don't add up to zero

# Save this for functions?

"""



	// Function variables
	double total = 0.0;
	double total_error_ = 0.0;
	int count = 0;
	double avg_bias = 0.0;

	# Shouldn't be necessary anymore 
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

"""

# Move all of this to separate plotting function.

"""
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
		error_plot_root << "bin/te_Plot";
		error_plot_pdf << "bin/te_Plot"; 

		if (plot_EB){	
		  error_plot_root << "_EB_";
		  error_plot_pdf << "_EB_";
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
			error_plot_root << "idealweights"  << ts_max << "_" << note << current_time << ".root";
			error_plot_pdf << "idealweights"  << ts_max << "_"<< note << current_time << ".pdf";
		  }

		if (!ideal_weights){ 
			error_plot_root << "singleweights" << "_" << note << current_time << ".root";
			error_plot_pdf << "singleweights" << "_" << note << current_time << ".pdf";
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
"""
