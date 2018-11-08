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

	// Create output File 
	stringstream a;

	a << "bin/Full_DOF.txt";

	string output_file = a.str();

	cout << "output file path = " << output_file << endl;

	ofstream combined_DOF;
	combined_DOF.open(output_file);
	//combined_DOF << "cmsswid\tdbID\thashedId\tiphi\tieta\tabs(ieta)\tpos\tFED\tSM\tTT(25)\tiTT\tstrip(5)\tXtal\tphiSM\tetaSM\teta\n"; // EB 
	//combined_DOF << "cmsswID\tietaix\tiphiiy\t0iz\teta\tSM\tTT\tStrip\tXTAL\n"; 
	//combined_DOF << "cmsswID\tietaix\tiphiiy\teta\tSM\tTT\tStrip\tXTAL\n"; 
	combined_DOF << "CMSSWID\tSM/iz\tTT/SC\tStrip\tXTAL\tiphi/ix\tieta/iy\teta\teta_ring\n";

	stringstream ssDOF;

	ssDOF << "bin/EB_Full_DOF.txt";

	string DOF_path = ssDOF.str();

	ifstream inDOFFile; 
	inDOFFile.open(DOF_path); 

	if (!inDOFFile) {
		cout << "Unable to open DOF file\n";
		exit(1); // terminate with error 
	}

	string DOF_line; 

	// Variables 

	// int EE_Skip = 0;
	// if (EE)
	// 	EE_Skip = 61201;

	// Shared
	double eta;
	int CMSSWID, Strip, XTAL;
	double eta_ring;

	// EB 
	int ieta, iphi, SM, TT;

	// EE 
	int ix, iy, iz, SC;

	// Eta file
	//double eta, CMSSWID_;
	int CMSSWID_;

	bool leave = false; 

	stringstream cw;
	cw.precision(17);

	int current_line = 0, Eta_skip_count = 0;

	//int i1, i1_;
	double d1, d2, d3, d4, d5, d6, d7, d8, d9;
	double d1_, d2_, d3_, d4_, d5_, d6_, d7_, d8_, d9_;

	//while((getline(inDOFFile, DOF_line)) && (leave == false)) { // read DOF line 
	while(getline(inDOFFile, DOF_line)) { // read EB DOF line

	stringstream ss(DOF_line);

	if(ss >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9){ // EB
			//cout << "Filling EB" << endl;
			CMSSWID = d1, SM = d2, TT = d3, Strip = d4, XTAL = d5, iphi = d6, ieta = d7, eta = d8, eta_ring = d9;   

			cw.precision(10);
			cw << CMSSWID << "\t" << SM << "\t" << TT << "\t" << Strip << "\t" << XTAL << "\t" << iphi << "\t" << ieta << "\t" << eta << "\t" << eta_ring << "\n";

			combined_DOF << cw.str();
			cw.str("");	
		} // If EB/EE DOF line contains doubles/strings 

	current_line += 1;
	//cout << "current_line = " << current_line << endl;
	if (current_line%500 == 0) cout << "current_line = " << current_line << endl;
	} // Read DOF line 

	current_line = 0;


	stringstream ssDOF_;

	ssDOF_ << "bin/EE_Full_DOF.txt";

	string DOF_path_ = ssDOF_.str();

	ifstream inDOFFile_; 
	inDOFFile_.open(DOF_path_); 

	if (!inDOFFile_) {
		cout << "Unable to open DOF file\n";
		exit(1); // terminate with error 
	}

	string DOF_line_; 

	while(getline(inDOFFile_, DOF_line_)) { // read EE DOF line 

	stringstream ss(DOF_line_);

	if(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_ >> d7_ >> d8_ >> d9_){ // EB
			//cout << "Filling EE" << endl;
			CMSSWID = d1_, iz = d2_, SC = d3_, Strip = d4_, XTAL = d5_, ix = d6_, iy = d7_, eta = d8_, eta_ring = d9_;    

			cw.precision(10);
			cw << CMSSWID << "\t" << iz << "\t" << SC << "\t" << Strip << "\t" << XTAL << "\t" << ix << "\t" << iy << "\t" << eta << "\t" << eta_ring << "\n";

			combined_DOF << cw.str();
			cw.str("");	
		} // If EB/EE DOF line contains doubles/strings 

	current_line += 1;
	//cout << "current_line = " << current_line << endl;
	if (current_line%500 == 0) cout << "current_line = " << current_line << endl;
	} // Read DOF line 



} // End of main function 