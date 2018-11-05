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

#include "ComputeWeights.cpp"

//int main(int argc, char** argv){
int main(){
	
	TH1F *SMH = new TH1F("SMH","SMH",100,0,100);
	TH1F *TT_tfH = new TH1F("TT_tfH","TT_tfH",100,0,100);
	TH1F *iTTH = new TH1F("iTTH","iTTH",100,0,100);	
	TH1F *Strip_fH = new TH1F("Strip_fH","Strip_fH",100,0,100);
	TH1F *XTALH = new TH1F("XTALH","XTALH",100,0,100);

	TH1F *SCH = new TH1F("SCH","SCH",350,0,350);
	TH1F *iSCH = new TH1F("iSCH","iSCH",100,0,100);	
	TH1F *TT_CCUH = new TH1F("TT_CCUH","TT_CCUH",100,0,100);
	TH1F *StripH = new TH1F("StripH","StripH",100,0,100);

	stringstream ssDOF;
	ssDOF << "data/EE_DOF.txt";
	string DOF_path = ssDOF.str();

	ifstream inDOFFile; 
	inDOFFile.open(DOF_path); 

	if (!inDOFFile) {
		cout << "Unable to open DOF file\n";
		exit(1); // terminate with error 
	}

	string DOF_line; 

	//double Strip;// Shared
	double SM, TT_tf, iTT, Strip_f, XTAL; // EB Only  
	double SC, iSC, TT_CCU, Strip; // EE only 
	bool leave = false; 

	int current_line = 0;

	while((getline(inDOFFile, DOF_line)) && (leave == false)) { // read DOF line 

	stringstream ss(DOF_line);

	double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15;
	string s7, s10;

	//cout << bool((ss >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> s7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14 >> d15)) << endl;
	//cout << bool((ss >> d1 >> d2 >> d3 >> d4)) << endl; //>> d5 >> d6 >> d7 >> d8 >> d9 >> s10 >> d11 >> d12 >> d13 >> d14)) << endl;

		//if( (ss >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> s7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14 >> d15) || (ss >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> s10 >> d11 >> d12 >> d13 >> d14) ){ // If DOF line contains 14 doubles, 1 string 

		if (ss >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> s10 >> d11 >> d12 >> d13 >> d14){

			if (string(DOF_path) == "data/EB_DOF.txt") { 
				//cout << "EB" << endl;
				SM = d9, TT_tf = d10, iTT = d11, Strip_f = d12, XTAL = d13;	 
				SMH->Fill(SM);
				TT_tfH->Fill(TT_tf);
				iTTH->Fill(iTT);
				Strip_fH->Fill(Strip_f);
				XTALH->Fill(XTAL);
			} 

			if (string(DOF_path) == "data/EE_DOF.txt") {
				//cout << "EE" << endl;
				SC = d7, iSC = d8, TT_CCU = d11, Strip = d12, XTAL = d13;	
				SCH->Fill(SC);
				iSCH->Fill(iSC);
				TT_CCUH->Fill(TT_CCU);
				StripH->Fill(Strip);
				XTALH->Fill(XTAL);
			}

		} /// If DOF line contains 14 doubles, 1 string 

	current_line += 1;
	//cout << "current_line = " << current_line << endl;
	if (current_line%5000 == 0) cout << "current_line = " << current_line << endl;
	} // Read DOF line 

	if (DOF_path == "data/EB_DOF.txt") { 
		cout << "EB" << endl;
		TString file_title = "bin/tmp/EBSM.png";

		TCanvas *c1 = new TCanvas("c1","c1",800,600);
		SMH->SetTitle("EBSM");
		SMH->Draw();
		c1->SaveAs(file_title);

		file_title = "bin/tmp/EBTT_tf.png";

		TCanvas *c2 = new TCanvas("c2","c2",800,600);
		TT_tfH->SetTitle("EBTT(25)");
		TT_tfH->Draw();
		c2->SaveAs(file_title);

		file_title = "bin/tmp/EBiTT.png";

		TCanvas *c3 = new TCanvas("c3","c3",800,600);
		iTTH->SetTitle("EBiTT");
		iTTH->Draw();	
		c3->SaveAs(file_title);
		
		file_title = "bin/tmp/EBStrip5.png";

		TCanvas *c4 = new TCanvas("c4","c4",800,600);
		Strip_fH->SetTitle("EBStrip5");
		Strip_fH->Draw();	
		c4->SaveAs(file_title);

		file_title = "bin/tmp/EBXTAL.png";

		TCanvas *c5 = new TCanvas("c5","c5",800,600);
		XTALH->SetTitle("EBXTAL");
		XTALH->Draw();	
		c5->SaveAs(file_title);
	} 

	if (DOF_path == "data/EE_DOF.txt") {
		cout << "EE" << endl;
		TString file_title = "bin/tmp/EESC.png";

		TCanvas *c1 = new TCanvas("c1","c1",800,600);
		SCH->SetTitle("EESC");
		SCH->Draw();
		c1->SaveAs(file_title);

		file_title = "bin/tmp/EEiSC.png";

		TCanvas *c2 = new TCanvas("c2","c2",800,600);
		iSCH->SetTitle("EEiSC");
		iSCH->Draw();
		c2->SaveAs(file_title);

		file_title = "bin/tmp/EETT_CCU.png";

		TCanvas *c3 = new TCanvas("c3","c3",800,600);
		TT_CCUH->SetTitle("EETT_CCU");
		TT_CCUH->Draw();	
		c3->SaveAs(file_title);
		
		file_title = "bin/tmp/EEStrip.png";

		TCanvas *c4 = new TCanvas("c4","c4",800,600);
		StripH->SetTitle("EEStrip");
		StripH->Draw();	
		c4->SaveAs(file_title);

		file_title = "bin/tmp/EEXTAL.png";

		TCanvas *c5 = new TCanvas("c5","c5",800,600);
		XTALH->SetTitle("EEXTAL");
		XTALH->Draw();	
		c5->SaveAs(file_title);
	}



} // End of main function 