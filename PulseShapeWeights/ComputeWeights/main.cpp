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

using namespace std;

// Include root header files
#include "TString.h"
#include "TH1.h"
#include "TH2.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TStyle.h"
// Include C++ header files
#include <vector>
//#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iterator>
#include <string>
#include <chrono>
#include <cmath>

// Include ideal weights algorithm 
//#include "ComputeWeights.cpp"
#include "Merge_DOF_P.cpp"
#include "Section_Sort.cpp"

// Main function
int main(int argc, char** argv){
	
	// Grab command line arguments 

	//cout << "argv[1] = " << argv[1] << endl;
	//cout << "string"

	//int verbosity = strtol(argv[1]); // 1 for extra comments, 0 for no extra comments
	string PD = string(argv[1]); // Parameter Date Month/Year. Ex: Oct17, Jun18, Sep18
	string WC = string(argv[2]); // Weights Configuration: 
	// This means to output a set of ideal weights per:
	//
	// WC = 1: XTAL
	// WC = 2: Strip
	// WC = 3: TT/SC
	// WC = 4: SM/iz
	// WC = 5: eta_ring 

	int max_lines = stoi(argv[3]); // Max lines to read when creating DOF_P
	int max_sections = stoi(argv[4]); // Max sections to fill when creating DOF_P_WC
	string note = string(argv[5]);  // Note to add to output file name. ex: test  

	// ComputeWeights algorithm variables
	// Define Ideal weights with these variables:
	int tMax = 3; // 3 for current weights configuration. 
  	bool dofitbaseline = 1; // 1 to use negative weights for baseline subtraction, 0 for positive weights. 
	bool dofittime = 0; // 1 to create timing jitter weights. 0 to not.  
  	static int nPulseSamples = 5; // 0 to 10
  	int prepulsesamples = 0; // 0 to 10 (need to understand correlation to npulsesamples)
  	double P = 0; // Simulated pedestal value. Shouldn't affect bias with dofitbaseline on. 

	// Say hello to the user 
	cout << "\n";
	cout << "---------------------------------------------\n";
	cout << "Producing Ideal Weights File With:\n";
	cout << "\t- Alpha Beta Function Parameters: " << PD << endl;
	cout << "\t- Weights Configuration: " << WC << endl;
	cout << "---------------------------------------------\n";
	cout << "\n";

	// Create output File 
	stringstream a;
	a << "bin/Ideal_Weights_" << PD << "_" << WC << "_" << note << ".txt";
	string ofp = a.str(); // Output File Path 

	//cout << "output file path = " << ofp << endl;

	ofstream ideal_weights_file;
	ideal_weights_file.open(ofp);
	ideal_weights_file << "CMSSWID\tSM/iz\tTT/SC\tStrip\tXTAL\tiphi/ix\tieta/iy\teta\teta_ring\tA\tt0\talpha\tbeta\tw1\tw2\tw3\tw4\tw5\tw6\tw7\tw8\tw9\tw10\n";

	// Open XTAL Params file data/XTAL_Params_MMMYY.txt (CMSSWID, A, t0, alpha, beta)
	stringstream aa;
	aa << "data/XTAL_Params_" << PD << ".txt";
	string params_path = aa.str();
  	ifstream inParamsFile; // Input File stream objects
  	inParamsFile.open(params_path); // XTAL_Params: inParamsFile stream

  	if (!inParamsFile) {
  	  cout << "Unable to open Param file\n";
	  cout << "Make sure " << params_path << " leads to a file\n";
	  cout << "Exiting\n";
  	  exit(1); // terminate with error
 	 }

	// Check if merged data file exists for PD 
	// if it does, continue. 
	// If it doesn't, Call Merge_DOF_P() to create new data file with CMSSWID DOF P.
	//Merge_DOF_P(PD, max_lines)


	// Then call Section_Sort to create text file with ID, DOF, P grouped by sections (check if file already exists for given PD and WC)
	// Then, call another function to read each line, compute weights, then average per section. (or average params, compute weights).
	// Output of second function should be final ParamReco readable file with:
	// ID, DOF, P, W 

	// if bin(data?)/Params_DOF_MMMYY.txt file exists: use stringstream, ifstream to open file and place lines into ss. 
	// else: Create file with Section_Sort()
	//Section_Sort(PD,WC,note);

	bool DOFP_e = false; // DOF_P file exists

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
		cout << "\t" << "Generating now.\n";
		Merge_DOF_P(max_lines, PD, WC, note); // DOF + P = DOF_P
	}

	bool DOFPWC_e = false; // DOF_P_WC file exists. 

	stringstream e_test_two_ss; // existence test two 
	e_test_two_ss << "data/DOF_P_" << PD << "_" << WC << "_" << note << ".txt";
	string e_test_two = e_test_two_ss.str();
    ifstream e_test_two_s(e_test_two);
    DOFPWC_e = e_test_two_s.good();

	if (DOFPWC_e) { // If WC 1 chosen, This file exists because data/DOF_P_PD_note.txt is by default ordered by CMSSWID. 
		cout <<  "\t" << e_test_two << " already exists\n";
		//cout << "Sorted DOF_P file exists for WC: " << WC << ", PD: " << PD << endl;
	}

	else{
		cout <<  "\t" << e_test_two << " does not exist\n";
		cout << "Sorted DOF_P file does not exist for WC: " << WC << ", PD: " << PD <<  endl;
		cout << "Generating Now\n";
		Section_Sort(max_sections, PD, WC, note); // sorted(DOF_P) = DOF_P_WC
	}


	// Do I want to calc weights in section_sort? Or should they be calculated in another function here? 


	// Make new function to:
	// Go through sorted file, return file with: ID DOF(avg) P(avg) W 

///////////////////////////////////////////////////////////////////////

	// string line; // string to hold XTAL_Params_MMMYY.txt line information 

	// while((getline(inParamsFile, line)) && (!manual_exit) ) { // get line of XTAL_Params_MMMYY.txt loop
	// // why is getline executed just from being in the while condition? This I currently don't understand. 

	//    //skip = false;

	//    // If user defined max lines is reached, stop reading XTAL params lines 
	//    if (current_line == max_lines){
	// 	cout << "---Maximum desired lines reached---\n"; 
	// 	cout << "---Exiting---\n";

	// 	break;
	// 	}

	//    stringstream s(line); // convert 'line' to stream 's'

	//    double d1, d2, d3, d4, d5; // d1 = CMSSWID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta   

	//    if((s >> d1 >> d2 >> d3 >> d4 >> d5)){ // Do if on XTAL_params line with 5 doubles	  

	// 	// Sometimes the parameters on a line are zero. In this case, don't check the Full_DOF file, but still add to the current_line iterator before leaving. 
	// 	if (d2 == 0){
	// 		cout << "\t On Line " << current_line << "\t Param file amplitude is zero\n";
	// 		leave = true;
	// 	}
	
	// 	else leave = false;

	// 	// Open Full_DOF.txt 
	// 	// Format: CMSSWID	SM/iz	TT/SC	Strip	XTAL	iphi/ix	ieta/iy	eta eta_ring
	// 	stringstream ssDOF;
	// 	ssDOF << "data/Full_DOF.txt"; 
	// 	string DOF_path = ssDOF.str();

	// 	ifstream inDOFFile; 
	// 	inDOFFile.open(DOF_path); 

	// 	if (!inDOFFile) {
	// 	  cout << "Unable to open DOF file\n";
	// 	  cout << "Make sure " << DOF_path << " leads to a file\n";
	// 	  exit(1); // terminate with error
	// 	}

	// 	string DOF_line; 
		
	// 	// DOF_skip_count is number of rows read before this one
	// 	DOF_skip_count = 0; // Initialize

	// 	DOF_skip_count += extra_lines; // Updated when ID's don't match or incorrect number of doubles on line 
	// 	DOF_skip_count += DOFl; // lines used 

	// 	//cout << "skipping " << DOF_skip_count << "lines\n";

	// 	while(DOF_skip_count !=0){
	// 	  //cout << "skipping " << DOF_skip_count << "lines\n";
	// 	  inDOFFile.ignore(1000,'\n'); 
	// 	  DOF_skip_count -= 1;
	// 	}

	// 	// Read Full_DOF.txt line 
	// 	while((getline(inDOFFile, DOF_line)) && (leave == false)) { // read Full_DOF.txt line

	// 	nine_params = false;
    //     stringstream ss(DOF_line);

	// 	double d1_, d2_, d3_, d4_, d5_, d6_, d7_ ,d8_, d9_;
	
	// 		if(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_ >> d7_ >> d8_ >> d9_){ // If DOF line contains 9 doubles

	// 			DOF_ID = d1_;
	// 			nine_params = true; 
	
	// 			cout.precision(17);

	// 			if ((d1_ == d1)){ // CMSSWID's match 
	// 				// For this XTAL, can compute weights. 

	// 				// From current DOF line 
	// 				CMSSWID = d1_, DOF1 = d2_, DOF2 = d3_, DOF3 = d4_, DOF4 = d5_, DOF5 = d6_, DOF6 = d7_, eta = d8_, eta_ring = d9_;
	// 				// CMSSWID	SM/iz	TT/SC	Strip	XTAL	iphi/ix	ieta/iy	eta eta_ring

	// 				// From current XTAL_Params line 
	// 				A = d2;
	// 				t_0 = d3;
	// 				alpha = d4;
	// 				beta = d5;

	// 				// Compute Weights

	// 				//--------------------------------------------------------------------------------------------------------------------------
			
	// 				// Fill output file line with:
	// 				// ID SM/iz	TT/SC	Strip	XTAL	iphi/ix	ieta/iy	eta	eta_ring A t0 alpha beta w1 w2 ... w10

	// 				// As long as ID has computable weights for PD, compute weights 
	// 				//if (!skip){

	// 					// ID 

						
	// 					if(WC == "1"){
	// 						cwid.precision(17);
	// 						cwid << CMSSWID << "\t"; // could also do dof1_2_3_4 .. crystal ID is nice though for individual xtals 
	// 					}
	// 					else if(WC == "2"){
	// 						cwid << DOF1 << "_" << DOF2 << "_" << DOF3 << "\t";
	// 					}
	// 					else if(WC == "3"){
	// 						cwid << DOF1 << "_" << DOF2 << "\t";
	// 					}
	// 					else if(WC == "4"){
	// 						cwid << DOF1 << "\t";
	// 					}
	// 					else{
	// 						cout << "Weights configuration not recognized. Please choose a value from 1-4\n";
	// 						cout << "Exiting\n";

	// 					}

	// 					ideal_weights_file << cwid.str();
	// 					cwid.str(""); // reset to empty stringstream 

	// 					cw.precision(9);					

	// 					cw << DOF1 << "\t" << DOF2 << "\t" << DOF3 << "\t" << DOF4 << "\t" << DOF5 << "\t" << DOF6  << "\t" << eta << "\t" << eta_ring << "\t" << A << "\t" << t_0 << "\t" << alpha << "\t" << beta << "\t";
	// 					cw.precision(17);

	// 					if (normalize_t0) t_0 = 125;
	// 					if (normalize_A) A = 1;

	// 					// Can average A, t_0, alpha, eta before setting parameters. Then obtain set of weights and add to line.
	// 					function_alphabeta->SetParameter (0, A);    
	// 					function_alphabeta->SetParameter (1, t_0 + ts); // time shift. Should be zero here unless you want ideal weights for shifted waveform    
	// 					function_alphabeta->SetParameter (2, alpha);  
	// 					function_alphabeta->SetParameter (3, beta);  

	// 					ComputeWeights A_(verbosity, dofitbaseline, dofittime, nPulseSamples, prepulsesamples);

	// 					// pulse is moved to right by time_shift, so move sampling to right by time_shift.
	// 					count_ = 0;

	// 					// Want samples from non-timeshifted wave to see how time shift affects recon amp 
	// 					// time_shift moves pulse to right by N, so move sampling beginning to right by N 

	// 					for(double i = xmin + ts; i < xmax + ts; i += dt){
	// 					  //cout << "in pulse shape value " << i << endl;
					
	// 					  //if ( i <= (t_0 + ts - alpha*beta) ) pulseShape.push_back(0 + P) ; // if waveform undefined, set value to zero + pedestal 
	// 					  //cout << "value = " << t_0 + ts - alpha*beta << endl;
	// 					  if ( i <= (t_0 + ts - alpha*beta) ) pulseShape.at(count_) = (0 + P) ;	
						  
	// 					  //else pulseShape.push_back( ( function_alphabeta->Eval(i) + P ) / (A) );/// (A + P) ); // divide by A to get weights for S*W = A 
	// 					  //else pulseShape.push_back( ( function_alphabeta->Eval(i) + P ) );/// (A + P) ); // divide by A to get weights for S*W = A 
	// 					  else pulseShape[count_] = ( ( function_alphabeta->Eval(i) + P ) );
	// 					  // if (d1 >= 838861947) cout << "pulseShape[" << count_ << "] = " << pulseShape[count_] << endl;
	// 					  //cout << "pulseShape[" << count_ << "] = " << pulseShape.at(count_) << endl;
	// 					  count_ += 1;
	// 					} 

	// 					A_.compute(pulseShape,pulseShapeDerivative,tMax); // Run member function

	// 					//firstsample = 2;
	// 					A_hat = 0.0;
	// 					weights_sum = 0.0;
	// 					Ped_val = 0.0;

	// 					// Add two zeros to line 
	// 					for (int i = 0; i < 2; i++){ 
	// 						cw << "0\t";
	// 					}

	// 					// If not averaging parameters, need to average weights here and then add average for each sample to line. 
	// 					for ( int i = firstsample; i < lastsample; i++) {

	// 						weight = A_.getAmpWeight(i - firstsample); //<< "\t";

	// 						//weights[i- firstsample] += weight;
	// 						//nw += 1;

	// 						cw << A_.getAmpWeight(i - firstsample) << "\t"; // add weight to line 

	// 						//cout << "weight(" << i - firstsample << ") = " << A_.getAmpWeight(i-firstsample) << endl;
	// 						//h1->Fill(A_.getAmpWeight(i - firstsample)); // fill histogram 
	// 						weights_sum += A_.getAmpWeight(i - firstsample);
	// 						//cout << A_.getPedWeight(i - firstsample) << endl;


	// 						Ped_val += A_.getPedWeight(i - firstsample)*pulseShape[i];
	// 						//cout << "ped weight = " << A_.getPedWeight(i - firstsample) << endl;
	// 						//cout << "pulseshape[i] = " << pulseShape[i] << endl;

	// 					  }

	// 					// average 
	// 					// How do you know when you've checked all lines in a section? Could search entire file each time but this may take a really long time. 

	// 					for (int i = 0; i < 3; i++){
	// 						cw << "0\t";
	// 					}
	
	// 					cw << "\n";
	// 					ideal_weights_file << cw.str();
	// 					cw.str("");				

	// 				//} // if(!skip)

	// 				//--------------------------------------------------------------------------------------------------------------------------
	// 				// weights computed 

	// 				leave = true; // Using double equals sign here caused frustration for a bit  


	// 				DOFl += 1; // line used, so skip on next read 

	// 			} // CMSSWID's match 

	// 			else{ extra_lines += 1;} // ID's don't match 

	// 		} // If DOF line contains 9 doubles

	// 		else{ nine_params = false;} // doesn't contain 9 doubles

	// 		if (!nine_params){	

	// 			extra_lines += 1; 


	// 			if (d1 == d1_){
	// 				leave = true; // if ID's match on less than 5 param line in DOF, need to skip to next param line. 
	// 			}


	// 		} // if (!nine_params) 

	// 		} // read Full_DOF.txt line

	// 	} // XTAL_params line with 5 doubles 

	// current_line += 1;

	// // Update user 
	// if (current_line%5000 == 0) cout << "current_line = " << current_line << endl;

	// } // get line of XTAL_Params_MMMYY.txt 
	
	// // TCanvas *c1 = new TCanvas("c1","c1",800,600);
	// // h1->Draw();
	// // c1->SaveAs("plot.pdf");

///////////////////////////////////////////////////////////////////////


} // End of main function 