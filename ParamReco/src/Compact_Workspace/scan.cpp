// Abe Tishleman-Charny
// Function for studying raw data values 

//#include "recon_amp_noclhep.cpp"

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
#include "TGraph.h"
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

//tuple<double, double> EC_bias(int max_rows, double ts, double EB_w[], double EE_w[], bool normalized_A, bool normalized_t0, bool ideal_weights, string weights_type, string PY, double eta_min, double eta_max, int merged_skip) 

int main(int argc, char** argv)

{

	// Parameters
	cout << "argc = " << argc << endl;
	for (int i = 0; i < argc; i++){
		cout << "argv[" << i << "] = " << argv[i] << endl;
		}

	string PY = "";	
	string weights_type = "";
	int max_rows = 0;

	PY = argv[1];
	weights_type = argv[2];
	max_rows = stoi(string(argv[3]));

	TH1F *etas = new TH1F("etas", "etas", 10, -4, 4);
	TH1F *ED = new TH1F("ED", "ED", 1000, -6, 6); // eta differences. Might want to find local maxes in EE
	TH2F *twoDetas = new TH2F("twoDetas","twoDetas", 160, -85, 85, 360, 0, 360);
	TH2F *EEEtasp = new TH2F("EEEtasp","EEEtasp", 100, 0, 100, 100, 0, 100);
	TH2F *EEEtasm = new TH2F("EEEtasm","EEEtasm", 100, 0, 100, 100, 0, 100);
	//TGraph *eta = new TH2F("eta", "eta", 100, -3, 3,); // eta differences. Might want to find local maxes in EE

	vector <double> ietas = {};
	vector <double> e_vals = {};

	int iphis[360] = {};
	int iphi_XTALS[360] = {};
	

	// Want eta vs. iEta in barrel, lines at modules?

	//cout << "*****************************************\n";
	//cout << "Computing Average Bias for:\n";
	//cout << "Eta: [" << eta_min << ", " << eta_max << "]" << endl;
	//cout << "Time Shift = " << ts << "ns\n";
	//cout << "*****************************************\n";

	// Open Merged Data file 
	stringstream merged_ss;
	merged_ss << "data/Merged_data_" << PY << "_" << weights_type << ".txt";
	string merged_path = merged_ss.str();
	ifstream inMergedFile;
	inMergedFile.open(merged_path);

  	if (!inMergedFile) {
  	  cout << "Unable to open Merged Data file\n";
  	  exit(1); // terminate with error
 	 }

	string merged_line;

	// Initial skip, number of eta lines already read. 
	//cout << "Skipping " << merged_skip << " merged data rows..." << endl;

	//int temp_eta_skip = merged_skip;

	//while(merged_skip !=0){
	  //inMergedFile.ignore(1000,'\n');
	  //merged_skip -= 1;
	//}

	double total_bias = 0.0, XTAL_count = 0.0; // Set double because want double division later 
	int merged_row = 0;
	double eta1 = 0, eta2 = 0, difference = 0;
	bool eta1_filled = false;

	while( getline(inMergedFile, merged_line) ){ // While there are merged data file rows to read 

		//cout << "On Merged data row: " << merged_row << endl;

		stringstream m_s(merged_line);
		double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19;

		if (m_s >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14 >> d15 >> d16 >> d17 >> d18 >> d19){ // if 19 double on line  
	
			
			vector <double> XTAL_Params = {d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19};

			double ID = XTAL_Params[0], DOF1 = XTAL_Params[1], DOF2 = XTAL_Params[2], DOF3 = XTAL_Params[3], eta = XTAL_Params[4], A = XTAL_Params[5], t_0 = XTAL_Params[6], alpha = XTAL_Params[7], beta = XTAL_Params[8];


//			if ((ID >= 838861313) && (ID <= 838970216) ){
//		
//				twoDetas->Fill(DOF1, DOF2, eta);

////				for (int i = 0; i < 360; i++){
////					if (DOF2 == (i+1) ){					
////						iphis[i] = DOF2;
////						iphi_XTALS[i] += 1;
////					}
////				}
////				//ietas.push_back(DOF1);
////				//e_vals.push_back(eta);
//			}

			if (ID >= 872415401 ){

				if (DOF3 == -1){
					EEEtasm->Fill(DOF1, DOF2, eta);
				}

				if (DOF3 == 1){
					EEEtasp->Fill(DOF1, DOF2, eta);
				}

			}

		} // if 19 doubles on Merged Data line 

		// Check row
		if (merged_row == max_rows){
			cout << "Maximum desired rows reached." << endl;
			break;
		}

		if ((merged_row%30000) == 0){
			cout << "Reading merged data row " << merged_row << endl;
		}

		merged_row += 1;

	} // While there are merged data lines left to read 
	  
        //inMergedFile.close();

	TCanvas *c1 = new TCanvas();

	int n = ietas.size();

	double x[n], y[n];

//	for (int i = 0; i < n; i++){
//		x[i] = ietas[i];
//		y[i] = e_vals[i];
//	}

	//TGraph *phi = new TGraph(360,iphis,iphi_XTALS);

	//TGraph *vals = new TGraph(n,x,y);
	
	c1->SetBatch(kTRUE);

	gStyle->SetOptStat(0);
	//twoDetas->Draw("COLZ1");
	EEEtasm->Draw("COLZ1");
	c1->SaveAs("EEminusEtas.pdf");
	EEEtasp->Draw("COLZ1");
	c1->SaveAs("EEplusEtas.pdf");

	//ED->Draw();
	//c1->SaveAs("plot.pdf");

	


}
