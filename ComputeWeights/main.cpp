// Abraham Tishelman-Charny
//
// The purpose of this program is to start with a full degree of freedom text file with columns in the order:
// CMSSWID	SM/iz	TT/SC	Strip	XTAL	iphi/ix	ieta/iy	eta	eta_ring
//
// Definitions:
//
// CMSSWID: Identification number for a single crystal, presumably used in cmssw (cms software)
// SM/iz: Supermodule for EB crystals, + or - endcap for EE crystals.
// TT/SC: Trigger Tower for EB, Supercrystal for EE.
// Strip: Set of 5 (possibly exceptions in EE, not confirmed) crystals corresponding to a VFE (very front end) card.
// XTAL: The ith XTAL in the given strip number.
// iphi/ix: iphi is the phi coordinate index in EB (1-360), ix is the x coordinate index in EE (1-100)
// ieta/iy: ieta is the eta coordinate index in EB ([-85,0)U(0,85]), iy is the y coordinate index in EE (1-100)
// eta: The pseudorapidity value for the given crystal (-3,3)
// eta_ring: The pseudorapidity ring, separated by trigger towers (boundaries in EtaRingDict.cpp)
//
// The other file used is the XTAL params text file has the columns:
// rawid      A            t_0      alpha     beta
// 
// rawid: Same as CMSSWID 
//
// The others are four parameters measured at P5 for every crystal with fine grain time scans in October 2017, June 2018, September 2018. 
// These parameters are used in the alpha-beta function to generate a waveform for the given crystal:
//
// Definitions:
// 
// A: Amplitude. The height of the waveform in ADC counts.
// t_0: The time of the peak of the waveform in nanoseconds.
// alpha: A third analytic parameter. Describes behavior of polynomial term. 
// beta: A fourth analytic parameter. Corresponds to decay time in exponential term. 
//
// (One future plan is to move from storing this information in root files rather than text files, assuming this will be easier to work with.)
//
// How this program operates:
//
// 1) The XTAL_Params_MMMYY.txt file is opened and the column label line is skipped. The CMSSWID is grabbed from the first crystal.
// 2) The Full_DOF.txt file is opened and its CMSSWID is checked with the Full_DOF CMSSWID. The Full_DOF file has (to my knowledge) information for every ECAL crystal. The XTAL_Params files, however, do not. This is likely because of problems when obtaining parameters at the fine grain time scans. But whatever the reason may be, parameters are not in the file, which means there will be less XTAL_Params lines than Full_DOF lines. This means there are two possible next steps:
// 2a) If the CMSSWID's do not match, the program moves to the next line of Full_DOF. This is repeated until the ID's match. 
// 2b) The ID's match. This means we can correctly associate the Full_DOF information with the crystal parameters. 
// 3) The parameters (A, t0, alpha, beta) are grabbed from the XTAL_Params file and used as alpha-beta function parameters. This produces a waveform, from which ten samples are taken every 25ns at [0,25,...,225]ns. These ten samples are input into the ComputeWeights algorithm, defined and implemented in ComputeWeights.h/cpp, and with the current configuration, 5 ideal weights are output corresponding to samples taken at [75,100,125,150,175]ns, where the peak should be around 125ns. By construction, multipling these weights by the samples at [75,100,125,150,175]ns will return a bias of 0, meaning amplitude will be calculated with 100% (to computational precision, ~10^-16) accuracy. 
// 4) The weights configuration option is checked. This is the desired sectioning of the weights. This means the output will be a single set of weights for each section of the section type entered by the user. This can be a set of weights per XTAL, Strip, TT/SC, SM/iz, or eta_ring. 
// 5*) Depending on if there is a difference (this will be checked), there are two options at this stage: Average the weights for all crystals in a section (defined by user input) and use this as the single set for the section, or average the parameters for the crystals in the section, plug these average values into the weights algorithm, and use this output as the set of weights for the section.
// 6) Add to the given line of the output file the following values:
// ID SM/iz	TT/SC	Strip	XTAL	iphi/ix	ieta/iy	eta	eta_ring A t0 alpha beta w1 w2 ... w10
//
// ID: This depends on the section type defined by the user read by the program at the start. The forms are (where 'X' is a digit from 0-9):
//// XTAL: XXXXXXXXX. ex: EB: 838861313. EE: 872444342 
//// Strip: SM/iz_TT/SC_Strip. ex: EB: 24_1_5. EE: 1_142_5. 
//// TT/SC: SM/iz_TT/SC. ex: EB: 24_1. EE: 1_142. 
//// SM/iz: X. ex: EB: 24. EE: 1. 
//// eta_ring: X. ex: 
// See above definitions for the other column labels. These parameters may be averaged over section. 
//
// That's it! The output text file can then be read by the main.cpp function in the folder 'ParamReco' to compute average bias values over the user defined section with time shifts (and eventually pileup and noise) added to the waveform in order to test how these weights respond to real CMS data taking conditions. 
//
//
// Need CLHEP libraries to compile. With my setup on lxplus, this requires the command:
// g++ -std=c++11 -o run.x main.cpp -L"/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/Tools/clhep/install/lib" -lCLHEP-2.4.1.0 -I"/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/Tools/clhep/install/include" `root-config --ldflags --glibs --cflags`
//
// After installing CLHEP, can check necessary compilation flags with: clhep-config --include, clhep-config --libs

// Compile With:
//
// g++ -std=c++11 -o run.x main.cpp -L"/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/Tools/clhep/install/lib" -lCLHEP-2.4.1.0 -I"/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/Tools/clhep/install/include" `root-config --ldflags --glibs --cflags` -lstdc++fs

using namespace std;

// Root header files 
#include "TString.h"
#include "TH1.h"
#include "TH2.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TStyle.h"

// C++ header files
#include <vector>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iterator>
#include <string>
#include <chrono>
#include <cmath>

// Other files  
#include "Merge_DOF_P.cpp"
#include "Section_Sort_2.cpp"
#include "Section_Sort_3.cpp"
#include "Section_Sort_4.cpp"
#include "Section_Sort_5.cpp"
#include "Section_Sort_6.cpp"

// Main function
int main(int argc, char** argv){
	
	// Grab command line arguments 

	string PD = string(argv[1]); // Parameter Date Month/Year. Ex: Oct17, Jun18, Sep18
	string WC = string(argv[2]); // Weights Configuration: 
	// This means to output a set of ideal weights per:
	//
	// WC = 0: Just order parameters and DOF by CMSSWID. This is to be used only for recreating waveforms in ParamReco. 
	// WC = 1: XTAL
	// WC = 2: Strip
	// WC = 3: TT/SC
	// WC = 4: SM/iz
	// WC = 5: EB/EE
	// WC = 6: eta_ring 

	int max_lines = stoi(argv[3]); // Max lines to read when creating DOF_P and DOF_P_WC
	int max_sections = stoi(argv[4]); // Max sections to fill when creating DOF_P_WC
	string note = string(argv[5]);  // Note to add to output file name. ex: test, date  

	// Say hello to the user 
	cout << "\n";
	cout << "---------------------------------------------\n";
	cout << "Producing Ideal Weights File With:\n";
	cout << "\t- Alpha Beta Function Parameters: " << PD << endl;
	cout << "\t- Weights Configuration: " << WC << endl;
	cout << "---------------------------------------------\n";
	cout << "\n";

	// Check if DOF_P file exists 
	bool DOFP_e = false; 

	stringstream e_test_ss;
	e_test_ss << "data/DOF_P_" << PD << "_" << note << ".txt";
	string e_test = e_test_ss.str();
    ifstream e_test_s(e_test);
    DOFP_e = e_test_s.good();

	if (DOFP_e){
		cout << "\t" << e_test << " already exists\n";
	}

	else{

		cout << "\t" << e_test << " does not exist\n";
		cout << "\t" << "Generating now...\n";
		Merge_DOF_P(max_lines, PD, WC, note); // DOF + P = DOF_P
	}

	// Check if DOF_P_WC file exists (Degrees of Freedom, Parameters, Weights Configuration)
	bool DOFPWC_e = false; // DOF_P_WC file exists. 

	stringstream e_test_two_ss; // existence test two 
	e_test_two_ss << "data/DOF_P_" << PD << "_" << WC << "_" << note << ".txt";
	string e_test_two = e_test_two_ss.str();
    ifstream e_test_two_s(e_test_two);
    DOFPWC_e = e_test_two_s.good();

	if (DOFPWC_e) { // If WC 1 chosen, This file exists because data/DOF_P_PD_note.txt is by default ordered by CMSSWID. 
		cout <<  "\t" << e_test_two << " already exists\n";
		cout <<  "\tThere's nothing left to do but exit the program\n";
	}

	else{
		cout <<  "\t" << e_test_two << " does not exist\n";
		cout << "Sorted DOF_P file does not exist for WC: " << WC << ", PD: " << PD <<  endl;
		cout << "Generating Now\n";

		if(WC == "2" || WC == "2P") Section_Sort_2(max_sections, max_lines, PD, WC, note); // sorted(DOF_P) = DOF_P_WC
		if(WC == "3" || WC == "3P") Section_Sort_3(max_sections, max_lines, PD, WC, note); // sorted(DOF_P) = DOF_P_WC
		if(WC == "4" || WC == "4P") Section_Sort_4(max_sections, max_lines, PD, WC, note); // sorted(DOF_P) = DOF_P_WC
		if(WC == "5" || WC == "5P") Section_Sort_5(max_sections, max_lines, PD, WC, note); // sorted(DOF_P) = DOF_P_WC
		if(WC == "6" || WC == "6P") Section_Sort_6(max_sections, max_lines, PD, WC, note); // sorted(DOF_P) = DOF_P_WC
	}

} // End of main function 