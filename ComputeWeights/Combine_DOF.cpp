// Abraham Tishelman-Charny

// The purpose of this program is to study DOF parameters 

using namespace std;

// Include root header files
// #include "TSpline.h"
// #include "TLegend.h"
// #include "TString.h"
// #include "TGraph.h"
// #include "TH1.h"
// #include "TH2.h"
// #include "TF1.h"
// #include "TCanvas.h"
// #include "TStyle.h"
// #include <vector>
// #include "TGraphErrors.h"
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
#include "EtaRingDict.cpp"

//int main(int argc, char** argv){
int main(int argc, char** argv){

	bool EE = stoi(argv[1]); // set to 1 to perform this on EE 

	// Create output File 
	stringstream a;
	//a << "bin/Full_XTAL_Info_" << PD << "_PedSub" << to_string(prepulsesamples) << "+" << to_string(nPulseSamples) << "_" << note << ".txt";

	if(!EE)
		a << "bin/EB_Full_DOF.txt";

	if(EE)
		a << "bin/EE_Full_DOF.txt";

	string output_file = a.str();

	cout << "output file path = " << output_file << endl;

	ofstream combined_DOF;
	combined_DOF.open(output_file);
	//combined_DOF << "cmsswid\tdbID\thashedId\tiphi\tieta\tabs(ieta)\tpos\tFED\tSM\tTT(25)\tiTT\tstrip(5)\tXtal\tphiSM\tetaSM\teta\n"; // EB 
	//combined_DOF << "cmsswID\tietaix\tiphiiy\t0iz\teta\tSM\tTT\tStrip\tXTAL\n"; 
	//combined_DOF << "cmsswID\tietaix\tiphiiy\teta\tSM\tTT\tStrip\tXTAL\n"; 
	combined_DOF << "CMSSWID\tSM/iz\tTT/SC\tStrip\tXTAL\tiphi/ix\tieta/iy\teta\teta_ring\n";

	stringstream ssDOF;
	if (!EE)
		ssDOF << "data/EB_DOF.txt";

	if (EE)
		ssDOF << "data/EE_DOF.txt";

	string DOF_path = ssDOF.str();

	ifstream inDOFFile; 
	inDOFFile.open(DOF_path); 

	if (!inDOFFile) {
		cout << "Unable to open DOF file\n";
		exit(1); // terminate with error 
	}

	string DOF_line; 

	// Variables 

	int EE_Skip = 0;
	if (EE)
		EE_Skip = 61201;

	// Shared
	double eta;
	int CMSSWID, Strip, XTAL;

	// EB 
	int ieta, iphi, SM, TT;

	// EE 
	int ix, iy, iz, SC;

	// Eta file
	//double eta, CMSSWID_;
	int CMSSWID_;

	bool leave = false; 
	bool no_eta = false;

	stringstream cw;
	cw.precision(17);

	int current_line = 0, Eta_skip_count = 0;

	//int i1, i1_;
	double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15;
	string s7, s10;
	double d1_, d2_, d3_, d4_, d5_;

	double eta_ring;

	//while((getline(inDOFFile, DOF_line)) && (leave == false)) { // read DOF line 
	while(getline(inDOFFile, DOF_line)) { // read DOF line 

	stringstream ss(DOF_line);

	//double i1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15;
	//string s7, s10;
	//double i1_, d2_, d3_, d4_, d5_;


//ss >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> s7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14 >> d15
//ss >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> s10 >> d11 >> d12 >> d13 >> d14

	// Not sure how to if/then correct line here between EB and EE. For now just changing between them when running for EB/EE
	//if(ss >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> s7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14 >> d15){ // EB
	
	if (ss >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> s10 >> d11 >> d12 >> d13 >> d14){ // EE 

			if (!EE) { 

				CMSSWID = d1, iphi = d4, ieta = d5, SM = d9, TT = d10, Strip = d12, XTAL = d13;   

				cw.precision(10);
				cw << CMSSWID << "\t";
				cw.precision(10);
				cw << SM << "\t" << TT << "\t" << Strip << "\t" << XTAL << "\t" << iphi << "\t" << ieta << "\t";
			
			} 

			if (EE) {

				CMSSWID = d1, iz = d4, ix = d5, iy = d6, SC = d7, Strip = d12, XTAL = d13; 

				cw.precision(10);
				cw << CMSSWID << "\t";
				cw.precision(10);
				cw << iz << "\t" << SC << "\t" << Strip << "\t" << XTAL << "\t" << ix << "\t" << iy << "\t";

			}

		//cout << "CMSSWID = " << CMSSWID << endl;
		stringstream ssEta;
		ssEta << "data/Eta_DOF.txt";
		string Eta_path = ssEta.str();

		ifstream inEtaFile; 
		inEtaFile.open(Eta_path); 

		if (!inEtaFile) {
		cout << "Unable to open Eta file\n";
		exit(1); // terminate with error 
		}

		Eta_skip_count = 0;
		//cout << "Line: " << current_line << endl;
		if ( (current_line != 1)) 
			if(!EE) Eta_skip_count += current_line;
			if(EE) Eta_skip_count += current_line - 1; 

		if(EE)
			Eta_skip_count += EE_Skip;

		//cout << "Eta skip count = " << Eta_skip_count << endl;
		while(Eta_skip_count !=0){
				inEtaFile.ignore(1000,'\n'); // count is number of rows read before this one
				Eta_skip_count -= 1;
				}

		string Eta_line; 

		leave = false;
		no_eta = false;

		//cout << CMSSWID << endl;
		while(getline(inEtaFile, Eta_line) && (!leave)){

			stringstream ss_(Eta_line);

			if(ss_ >> d1_ >> d2_ >> d3_ >> d4_ >> d5_){ // Eta file contains 5 doubles 
 
				CMSSWID_ = d1_;
				eta = d5_;				

				if (CMSSWID == CMSSWID_){ // ID's match
					//cout << "ID's match" << endl;
					//cout << "eta found\n";
					cout.precision(17);
					//cout << "CMSSWID = " << CMSSWID << endl;
					//cout << "CMSSWID_ = " << CMSSWID_ << endl;
					cw << eta << "\t"; 
					leave = true;

				}

				else{ // ID's don't match 

					//cout << "Line = " << current_line << endl;
					//cout << "ID's dont match\n";
					cout.precision(17);
					
					//cout << "CMSSWID = " << CMSSWID << endl;
					//cout << "CMSSWID_ = " << CMSSWID_ << endl;
					//cout << "ID's Don't Match\n";
					cout << "Exiting\n";
					exit(1); // terminate with error 
						
				}
				
			}

			else{ // Eta files doesn't contain 5 doubles 

				cout << "eta doesn't have 5 doubles\n";

				//leave = true;
				cout << "Line: " << current_line << endl;

				if ((current_line != 1)){
					cw << 0 << "\t"; // If no eta value available, give it zero. Need to be careful with this in reconstruction code because need to tell it not to include eta = 0. 
					no_eta = true;
					leave = true;
					}

			}

		}

		// Add eta_ring (1-26)

		//cout << "eta = " << eta << endl;

		if(no_eta) eta_ring = 0;

		else
			eta_ring = eta_ring_map(eta);

		cw << eta_ring << "\n";

		// Finish writing full dof line 
		combined_DOF << cw.str();
		cw.str("");	

		} // If EB/EE DOF line contains doubles/strings 

	current_line += 1;
	//cout << "current_line = " << current_line << endl;
	if (current_line%500 == 0) cout << "current_line = " << current_line << endl;
	} // Read DOF line 

} // End of main function 