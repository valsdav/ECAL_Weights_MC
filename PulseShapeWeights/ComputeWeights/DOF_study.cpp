// Abraham Tishelman-Charny

// The purpose of this program is to study DOF parameters 

using namespace std;

// Include root header files
#include "TSpline.h"
#include "TLegend.h"
#include "TString.h"
#include "TGraph.h"
#include "TH1.h"
#include "TH2.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TStyle.h"
#include <vector>
#include "TGraphErrors.h"
//#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iterator>
#include <string>
#include <chrono>
#include <cmath>
#include <vector>

//#include "ComputeWeights.cpp"

//int main(int argc, char** argv){
int main(){
	
	// TH1F *SMH = new TH1F("SMH","SMH",100,0,100);
	// TH1F *TT_tfH = new TH1F("TT_tfH","TT_tfH",100,0,100);
	// TH1F *iTTH = new TH1F("iTTH","iTTH",100,0,100);	
	// TH1F *Strip_fH = new TH1F("Strip_fH","Strip_fH",100,0,100);
	// TH1F *XTALH = new TH1F("XTALH","XTALH",100,0,100);

	// TH1F *SCH = new TH1F("SCH","SCH",350,0,350);
	// TH1F *iSCH = new TH1F("iSCH","iSCH",100,0,100);	
	// TH1F *TT_CCUH = new TH1F("TT_CCUH","TT_CCUH",100,0,100);
	// TH1F *StripH = new TH1F("StripH","StripH",100,0,100);

	// Create output File 
	stringstream a;
	//a << "bin/Full_XTAL_Info_" << PD << "_PedSub" << to_string(prepulsesamples) << "+" << to_string(nPulseSamples) << "_" << note << ".txt";
	a << "outputfile.txt";
	string output_file = a.str();

	cout << "output file path = " << output_file << endl;

	ofstream combined_DOF;
	combined_DOF.open(output_file);
	//combined_DOF << "cmsswid\tdbID\thashedId\tiphi\tieta\tabs(ieta)\tpos\tFED\tSM\tTT(25)\tiTT\tstrip(5)\tXtal\tphiSM\tetaSM\teta\n"; // EB 
	//combined_DOF << "cmsswID\tietaix\tiphiiy\t0iz\teta\tSM\tTT\tStrip\tXTAL\n"; 
	//combined_DOF << "cmsswID\tietaix\tiphiiy\teta\tSM\tTT\tStrip\tXTAL\n"; 
	combined_DOF << "CMSSWID\tieta/ix\tiphi/iy\teta\tSM/iz\tTT/SC\tStrip\tXTAL\n";

	stringstream ssDOF;
	ssDOF << "data/EB_DOF.txt";
	string DOF_path = ssDOF.str();

	ifstream inDOFFile; 
	inDOFFile.open(DOF_path); 

	if (!inDOFFile) {
		cout << "Unable to open DOF file\n";
		exit(1); // terminate with error 
	}

	string DOF_line; 

	// Variables 

	// Shared
	double CMSSWID, eta;
	int Strip, XTAL;

	// EB 
	int ieta, iphi, SM, TT;

	// EE 
	int ix, iy, iz, SC;

	// double SM, TT_tf, iTT, Strip_f, XTAL; // EB Only  
	// double SC, iSC, TT_CCU, Strip; // EE only 

	// Eta file
	//double eta, CMSSWID_;
	double CMSSWID_;

	//bool leave = false; 

	stringstream cw;
	cw.precision(17);

	int current_line = 0, Eta_skip_count = 0;

	double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20, d21, d22, d23;
	string s7, s10;
	double d1_, d2_, d3_, d4_, d5_;

	//while((getline(inDOFFile, DOF_line)) && (leave == false)) { // read DOF line 
	while(getline(inDOFFile, DOF_line)) { // read DOF line 

	stringstream ss(DOF_line);

	//double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15;
	//string s7, s10;
	//double d1_, d2_, d3_, d4_, d5_;

	if(ss >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> s7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14 >> d15 >> d16 >> d17 >> d18 >> d19 >> d20 >> d21 >> d22 >> d23){

			if (string(DOF_path) == "data/EB_DOF.txt") { 

				CMSSWID = d1, iphi = d4, ieta = d5, SM = d9, TT = d10, Strip = d12, XTAL = d13;   

				cw.precision(9);
				cw << CMSSWID << "\t";
				cw.precision(5);
				cw << ieta << "\t" << iphi << "\t" << SM << "\t" << TT << "\t" << Strip << "\t" << XTAL << "\t";
				
				//SM = d9, TT_tf = d10, iTT = d11, Strip_f = d12, XTAL = d13;	 
				
				// d9_d10_d12_d13

				// SMH->Fill(SM);
				// TT_tfH->Fill(TT_tf);
				// iTTH->Fill(iTT);
				// Strip_fH->Fill(Strip_f);
				// XTALH->Fill(XTAL);
			} 

			if (string(DOF_path) == "data/EE_DOF.txt") {

				//iz = d4, SC = d7, iSC = d8, TT_CCU = d11, Strip = d12, XTAL = d13;

				// if ( (side + 1 == 0) && (SC - 247 == 0) && (Strip - 3 == 0) && (XTAL - 2 == 0)){

				// 	cout << "line = " << current_line << endl;
				// 	cout << "side = " << side << endl;
				// 	cout << "SC = " << SC << endl;
				// 	cout << "Strip = " << Strip << endl;
				// 	cout << "XTAL = " << XTAL << endl;

				// 	cout << "unique line occurred\n";

				// }

				// SCH->Fill(SC);
				// iSCH->Fill(iSC);
				// TT_CCUH->Fill(TT_CCU);
				// StripH->Fill(Strip);
				// XTALH->Fill(XTAL);
			}

		stringstream ssEta;
		ssEta << "data/EB_DOF.txt";
		string Eta_path = ssEta.str();

		ifstream inEtaFile; 
		inEtaFile.open(Eta_path); 

		if (!inEtaFile) {
		cout << "Unable to open Eta file\n";
		exit(1); // terminate with error 
		}


		Eta_skip_count = 0;
		Eta_skip_count += current_line; 

		while(Eta_skip_count !=0){
				//cout << "skipping " << DOF_skip_count << "lines\n";
				inEtaFile.ignore(1000,'\n'); // count is number of rows read before this one
				Eta_skip_count -= 1;
				}

		string Eta_line; 


		while((getline(inEtaFile, Eta_line)){

			stringstream ss_(Eta_line);

			if(ss_ >> d1_ >> d2_ >> d3_ >> d4_ >> d5_){ // Eta file contains 5 doubles 
 
				CMSSWID_ = d1_;
				eta = d5_;				

				if (CMSSWID == CMSSWID_){ // ID's match

					cw << eta "\n";

				}

				else{ // ID's don't match 

					cout << "ID's Don't Match\n";
					cout << "Exiting\n";
					exit(1); // terminate with error 
						
				}
				
			}

			else{ // Eta files doesn't contain 5 doubles 

				cw << 0 << "\n"; // If no eta value available, give it zero. Need to be careful with this in reconstruction code because need to tell it not to include eta = 0. 


			}

		}

		output_file << cw.str();
		cw.str("");	

		} // If EB/EE DOF line contains doubles/strings 

	current_line += 1;
	//cout << "current_line = " << current_line << endl;
	if (current_line%500 == 0) cout << "current_line = " << current_line << endl;
	} // Read DOF line 

	// if (DOF_path == "data/EB_DOF.txt") { 
	// 	cout << "EB" << endl;
	// 	TString file_title = "bin/tmp/EBSM.png";

	// 	TCanvas *c1 = new TCanvas("c1","c1",800,600);
	// 	SMH->SetTitle("EBSM");
	// 	SMH->Draw();
	// 	c1->SaveAs(file_title);

	// 	file_title = "bin/tmp/EBTT_tf.png";

	// 	TCanvas *c2 = new TCanvas("c2","c2",800,600);
	// 	TT_tfH->SetTitle("EBTT(25)");
	// 	TT_tfH->Draw();
	// 	c2->SaveAs(file_title);

	// 	file_title = "bin/tmp/EBiTT.png";

	// 	TCanvas *c3 = new TCanvas("c3","c3",800,600);
	// 	iTTH->SetTitle("EBiTT");
	// 	iTTH->Draw();	
	// 	c3->SaveAs(file_title);
		
	// 	file_title = "bin/tmp/EBStrip5.png";

	// 	TCanvas *c4 = new TCanvas("c4","c4",800,600);
	// 	Strip_fH->SetTitle("EBStrip5");
	// 	Strip_fH->Draw();	
	// 	c4->SaveAs(file_title);

	// 	file_title = "bin/tmp/EBXTAL.png";

	// 	TCanvas *c5 = new TCanvas("c5","c5",800,600);
	// 	XTALH->SetTitle("EBXTAL");
	// 	XTALH->Draw();	
	// 	c5->SaveAs(file_title);
	// } 

	// if (DOF_path == "data/EE_DOF.txt") {
	// 	cout << "EE" << endl;
	// 	TString file_title = "bin/tmp/EESC.png";

	// 	TCanvas *c1 = new TCanvas("c1","c1",800,600);
	// 	SCH->SetTitle("EESC");
	// 	SCH->Draw();
	// 	c1->SaveAs(file_title);

	// 	file_title = "bin/tmp/EEiSC.png";

	// 	TCanvas *c2 = new TCanvas("c2","c2",800,600);
	// 	iSCH->SetTitle("EEiSC");
	// 	iSCH->Draw();
	// 	c2->SaveAs(file_title);

	// 	file_title = "bin/tmp/EETT_CCU.png";

	// 	TCanvas *c3 = new TCanvas("c3","c3",800,600);
	// 	TT_CCUH->SetTitle("EETT_CCU");
	// 	TT_CCUH->Draw();	
	// 	c3->SaveAs(file_title);
		
	// 	file_title = "bin/tmp/EEStrip.png";

	// 	TCanvas *c4 = new TCanvas("c4","c4",800,600);
	// 	StripH->SetTitle("EEStrip");
	// 	StripH->Draw();	
	// 	c4->SaveAs(file_title);

	// 	file_title = "bin/tmp/EEXTAL.png";

	// 	TCanvas *c5 = new TCanvas("c5","c5",800,600);
	// 	XTALH->SetTitle("EEXTAL");
	// 	XTALH->Draw();	
	// 	c5->SaveAs(file_title);
	// }

} // End of main function 