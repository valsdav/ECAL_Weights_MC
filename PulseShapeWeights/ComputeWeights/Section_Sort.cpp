// Abraham Tishelman-Charny
//

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
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;

// Include ideal weights algorithm 
//#include "ComputeWeights.cpp"
#include "Calc_Weights.cpp"

void Section_Sort(int max_sections, string PD, string WC, string note){

	cout << "In Section_Sort.cpp\n";

	// copy DOF_P file
	// Open copy
	// Order by user chosen sections
	//// Read line of copy
	//// Identify Section it's in
	//// Search rest of copy file lines until all xtals in section are found
	//// compute weights? save in vector and add other xtals weights in section then average before adding to line of new output file? 

	//// For now, save average params and pure average weights. Can even save both... since average params will be right there. 

	// side note: Can you save vectors into string streams? 

	//// or save params in vector, add other xtal params in section, average before adding to line of new output file. 
	//// Add line to new output file: ID DOF(avg?) P(avg?) --OR-- ID DOF(avg) P(avg) w
	// Save output file 

	// Copy DOF_P file into tmp file so lines can be deleted 
	//stringstream tmpcpy_ss, dofp_ss;
	stringstream dofp_ss;
	//tmpcpy_ss << "tmp/tmp_DOF_P_" << PD << note << ".txt";
	dofp_ss << "data/DOF_P_" << PD << "_" << note << ".txt";
	//string tmpcpy_s = tmpcpy_ss.str();
	string dofp_s = dofp_ss.str();

	//fs::copy_file(dofp_s,tmpcpy_s);

	// Create output File 1
	stringstream DOFPWC_ss;
	DOFPWC_ss << "bin/testing_DOF_P_" << PD << "_" << WC << "_" << note << ".txt";
	string dofpwc_s = DOFPWC_ss.str(); // P_DOF Output File Path 

	cout << "output file path = " << dofpwc_s << endl;

	ofstream DOFPWC_f;
	DOFPWC_f.open(dofpwc_s);

	// This will have a new header in the ID column, since the goal is to sort by section with one section per line. 
	DOFPWC_f << "ID\tSM/iz\tTT/SC\tStrip\tXTAL\tiphi/ix\tieta/iy\teta\teta_ring\tA\tt0\talpha\tbeta\tw1\tw2\tw3\tw4\tw5\tw6\tw7\tw8\tw9\tw10\n";

	// // //

	// Create output File 2
	stringstream DOFPWC_1_ss;
	DOFPWC_1_ss << "bin/testing_DOF_P_" << PD << "_" << WC << "_1_" << note << ".txt";
	string dofpwc_1_s = DOFPWC_1_ss.str(); // P_DOF Output File Path 

	cout << "output file path = " << dofpwc_1_s << endl;

	ofstream DOFPWC_1_f;
	DOFPWC_1_f.open(dofpwc_1_s);

	// This will have same header, as the goal is just to sort by section 
	DOFPWC_1_f << "CMSSWID\tSM/iz\tTT/SC\tStrip\tXTAL\tiphi/ix\tieta/iy\teta\teta_ring\tA\tt0\talpha\tbeta\tw1\tw2\tw3\tw4\tw5\tw6\tw7\tw8\tw9\tw10\n";

	// Output file streams
	// Both of these files will be in order, but one will have all XTAL info and the other will list it by section. 
	stringstream DOFPWC_ofs; // DOFPWC output file stream. Done by section ID
	stringstream DOFPWC_1_ofs; // DOFPWC_1_ output file stream. Done by XTAL ID. 

	string ID; 
	stringstream ID_ss;

	// Save average DOF's, parameters and weights into section ordered output file 
	vector<double> DOFs = {0,0,0,0,0,0,0,0};
	vector<double> DOFs_sum = {0,0,0,0,0,0,0,0};

	vector<double> parameters = {0,0,0,0};
	vector<double> parameters_sum = {0,0,0,0};

	vector<double> weights; 
	vector<double> weights_sum = {0,0,0,0,0,0,0,0,0,0};

	int num_DOFs = 0;
	int num_parameters = 0;
	int num_weights = 0;

	int max_lines = -1; // Max lines to check per section xtal search 

	// ordered by sections 

	// Open temporary DOF_P file 
	//stringstream aa;
	//aa << "bin/testing_DOF_P_" << PD << "_" << note << ".txt";
	//string DOFP_path = aa.str();

  	// ifstream inDOFPFile; // Input File stream objects
  	// inDOFPFile.open(tmpcpy_s); // XTAL_Params: inParamsFile stream // in means input, not like currently 'in' this file.. 

  	// if (!inDOFPFile) {
  	//   cout << "Unable to open DOF_P tmp file\n";
	//   cout << "Make sure " << tmpcpy_s << " leads to a file\n";
	//   cout << "Exiting\n";
  	//   exit(1); // terminate with error
 	//  }

	// Loop Parameters
	int line_number = 0;
	//bool manual_exit = false; // Can be used for debugging/testing 
	//bool skip = false;	

	// Create variables here, update during loop 

	// Initialize a bunch more variables so then can just be updated every loop. 
	double CMSSWID, DOF1, DOF2, Strip, XTAL, DOF5, DOF6, eta, eta_ring, A, t0, alpha, beta;
	//double CMSSWID_, DOF1_, DOF2_, Strip_, XTAL_, DOF5_, DOF6_, eta_, eta_ring_, A_, t0_, alpha_, beta_;
	//double w1, w2, w3, w4, w5, w6, w7, w8, w9, w10;

	double ts = 0.0; // Simulated Time Shift. Usually do not use here but in theory could use for computing ideal weights given some early or late sampling. 

	int count_ = 0;
	int DOFl = 0;
	int extra_lines = 0;
	bool nine_params;
	
	bool leave = false;
	int DOF_skip_count = 0; 
	double DOF_ID = 0;
	int first_unused_line = 0;

	//string line; // string to hold tmp_DOF_P_PD_note.txt line information 


	// Start searching for XTALS in 'section 1'
	// Once all are found, restart DOF_P file search and search for all XTALS in 'section 2'
	// ...
	// Once all sections are filled, exit 

	// If WC = 2:
	// Unique section defined by SM/iz_TT/SC_Strip 

	// SM [0,35]
	// iz (-1)U(1)
	// search until section has 5, or until no more lines to read (since Some EE strips may not have 5 crystals. I'm also not sure if all EE SC's have 5 strips... )
	// EE: Search until strip has 5, or SC has 25, or iz has 7324 XTALS, or no more lines to read 
	// EB: Search until strip has 5 (in theory all EB strips should have 5.)

	// First find all EB sections
	// Find all xtals with 0_0_1_1. After finding 5, restart search for
	// "                 " 0_0_1_2. 

	// Current Section Search Parameters (SP = Section Parameter)
	int SP1 = 0, SP2 = 0, SP3 = 1, SP4 = 1;

	bool EE_line = false;
	int section_pop = 0; // population in current section 
	int num_sections_full = 0; // total number of sections filled
	bool section_full = false;
	bool all_sections_full = false;

	// Start Search 
	while( (!all_sections_full) && (num_sections_full < max_sections) ) { // This second while was messing things up somehow. Probably the file stream or something. 
	
		cout << "Starting search\n";

		ifstream inDOFPFile; // Input File stream object
		inDOFPFile.open(dofp_s); // XTAL_Params: inParamsFile stream // in means input, not like currently 'in' this file.. 

		if (!inDOFPFile) {
		cout << "Unable to open DOF_P tmp file\n";
		cout << "Make sure " << dofp_s << " leads to a file\n";
		cout << "Exiting\n";
		exit(1); // terminate with error
		}

		// // Reset section stats 
		section_pop = 0;
		section_full = false;

		// Reset DOF, parameter, weights sums
		for (int i = 0; i < 8; i++){
			DOFs_sum[i] = 0;
			}

		for (int i = 0; i < 4; i++){
			parameters_sum[i] = 0;
			}

		num_parameters = 0;
		num_DOFs = 0;

		for (int i = 0; i < 10; i++){
			weights_sum[i] = 0;
		}

		num_weights = 0;

		line_number = 0;
		string line; // string to hold tmp_DOF_P_PD_note.txt line information 

		// cout << "right before entering file\n";
		// // Read DOFP file from beginning 
		// cout << "Need both of these to be true\n";
		// cout << "bool((getline(inDOFPFile, line))) = " << bool((getline(inDOFPFile, line))) << endl;
		// cout << "!section_full = " << !section_full << endl;

		while((getline(inDOFPFile, line)) && (!section_full) ) { // get line of tmp_DOF_P
		//while((getline(inDOFPFile, line))) { // get line of tmp_DOF_P

		// why is getline executed just from being in the while condition? This I currently don't understand. 
		//cout << "Reading DOFP file\n";

		// If user defined max lines is reached, stop reading DOFP
		if (line_number == max_lines){
			cout << "---Maximum desired lines reached---\n"; 
			cout << "---Exiting---\n";

			all_sections_full = true; // lying to the program so it will exit early.
			break;
		}

		stringstream s(line); // convert 'line' to stream 's'

		// 13 params in DOF_P
		// CMSSWID	SM/iz	TT/SC	Strip	XTAL	iphi/ix	ieta/iy	eta	eta_ring	A	t0	alpha	beta

		double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13;  

		//cout << "checking if 13 params\n";

		if((s >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13)){ // Do if on DOF_P line with 13 doubles (this should always be the case)	  
			//cout << "DOFP line contains 13 doubles\n";
			CMSSWID = d1, DOF1 = d2, DOF2 = d3, Strip = d4, XTAL = d5, DOF5 = d6, DOF6 = d7, eta = d8, eta_ring = d9, A = d10, t0 = d11, alpha = d12, beta = d13;

			cout.precision(17);
			//cout << "CMSSWID = " << CMSSWID << endl; // for user 

			// EB or EE 
			if ( (872415401 <= CMSSWID) && (CMSSWID <= 872444476) ) 
				EE_line = true;
			else 
				EE_line = false;

			// Is this line in the currently searched for section? 

	//////////////////////////////////

			if (WC == "2"){
					
				if ( (EE_line == SP1) && (DOF1 == SP2) && (DOF2 == SP3) && (Strip == SP4) ){

					section_pop += 1;

					// Sometimes the parameters on a line are zero. I think this should be filtered out up to this function though. 
					if (d10 == 0){
						cout << "\t On Line " << line_number << "\t Param file amplitude is zero\n";
						//leave = true;
					}
				
					//else leave = false;

					// Fill DOFPWC_1 line (XTAL Format)

					DOFPWC_1_ofs.precision(17);
					DOFPWC_1_ofs << CMSSWID << "\t";

					DOFPWC_1_ofs << DOF1 << "\t" << DOF2 << "\t" << Strip << "\t" << XTAL << "\t" << DOF5 << "\t" << DOF6  << "\t" << eta << "\t" << eta_ring << "\t" << A << "\t" << t0 << "\t" << alpha << "\t" << beta << "\t";

					DOFs_sum[0] += DOF1;
					DOFs_sum[1] += DOF2;
					DOFs_sum[2] += Strip;
					DOFs_sum[3] += XTAL;
					DOFs_sum[4] += DOF5;
					DOFs_sum[5] += DOF6;
					DOFs_sum[6] += eta;
					DOFs_sum[7] += eta_ring;

					num_DOFs += 1;

					parameters_sum[0] += A;
					parameters_sum[1] += t0;
					parameters_sum[2] += alpha;
					parameters_sum[3] += beta;

					num_parameters += 1;

					// Calc weights 
					weights = Calc_Weights(A,t0,alpha,beta); // no time shift now

					for (int i = 0; i < 10; i++)
						weights_sum[i] += weights[i];
					num_weights += 1;

					for (int i = 0; i < 10; i++){
						if (i != 9)
							DOFPWC_1_ofs << weights[i] << "\t";
							//weights[i] = 0;
						else 
							DOFPWC_1_ofs << weights[i] << "\n";
							//weights[i] = 0;

					}

					DOFPWC_1_f << DOFPWC_1_ofs.str(); // Add line to xtal format file 
					DOFPWC_1_ofs.str(""); // Reset stringstream

					// Was that the final crystal in the currently searched for section? 

					if ( (WC == "2") && (section_pop == 5) ){ // Section Full. Might need different conditions for EE. 

						cout << "Section " << SP1 << "_" << SP2 << "_" << SP3 << "_" << SP4 << " is full\n";

						// Add ID

						ID_ss << SP1 << "_" << SP2 << "_" << SP3 << "_" << SP4 << "\t";
						ID = ID_ss.str();
						ID_ss.str(""); // reset ID_ss 

						// Fill Section formatted output file 
						DOFPWC_ofs << ID;

						// Add avg DOF
						for (int i = 0; i < 8; i++){
							DOFs[i] = DOFs_sum[i] / num_DOFs;
							if (i != 7)
								DOFPWC_ofs << DOFs[i] << "\t";
							else 
								DOFPWC_ofs << DOFs[i] << "\t";
						}

						// Add avg Params 
						for (int i = 0; i < 4; i++){
							parameters[i] = parameters_sum[i] / num_parameters;
							if (i != 3)
								DOFPWC_ofs << parameters[i] << "\t";
							else 
								DOFPWC_ofs << parameters[i] << "\t";
						}

						// Add avg Weights 
						for (int i = 0; i < 10; i++){
							weights[i] = weights_sum[i] / num_weights;
							if (i != 9)
								DOFPWC_ofs << weights[i] << "\t";
							else 
								DOFPWC_ofs << weights[i] << "\n";
						}

						DOFPWC_f << DOFPWC_ofs.str();
						DOFPWC_ofs.str("");
						// add to DOF_P_WC output file

						// reset weights sum to start new average for next section 
						// for (int i = 0; i < 10; i++)
						// 	weights_sum[i] = 0;
						// num_weights = 0;

						section_full = true; // stop searching for xtals in same section. Reopen tmp file which should now not contain lines of xtals in filled sections. 
						num_sections_full += 1;

					} // Section full 

					// if (WC == "3")

					// if (WC == "4")

				} // Crystal in section 


		} // WC = 2

	/////////////////////////////////////


			//string second_line; 
				
			// Read next line 
			//while( getline(inDOFPFile, second_line) && (!section_full)){
			//stringstream second_ss(second_line);
			//double d1_, d2_, d3_, d4_, d5_, d6_, d7_, d8_, d9_, d10_, d11_, d12_, d13_;

			//if((second_ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_ >> d7_ >> d8_>> d9_ >> d10_ >> d11_ >> d12_ >> d13_)){

				//CMSSWID_ = d1_, DOF1_ = d2_, DOF2_ = d3_, Strip_ = d4_, XTAL_ = d5_, DOF5_ = d6_, DOF6_ = d7_, eta_ = d8_, eta_ring_ = d9_, A_ = d10_, t0_ = d11_, alpha_ = d12_, beta_ = d13_;

				//cout.precision(17);
				//cout << "on next line\n";
				//cout << "CMSSWID_ " << CMSSWID_ << endl;


			// Next line xtal not in same section 

			//} // Next line contains all doubles 

			//} // while in second line and section not full 


			} // Do if on DOF_P line with 13 doubles (this should always be the case)

		line_number += 1;

		// Update user 
		//if (line_number%25 == 0) cout << "line_number = " << line_number << endl;
		if (line_number%5000 == 0) cout << "line_number = " << line_number << endl;

		} // get line of tmp_DOF_P if more lines to read and section not full 

		//cout << "Stopped reading DOF_P line\n";

		// Was final section just filled?
		if ( (section_full) && (WC == "2") && (SP1 == 1) && (SP2 == 1) && (SP1 == 316) && (SP1 == 5) ){

			cout << "All sections full\n";
			all_sections_full = true; // stop reading DOF_P

		}

		//if not, Define new section and restart search

		else{
			
			// If that was an EB section
			if (SP1 == 0){

				// If that was the last strip in TT
				if (SP4 == 5){
					SP4 = 1;

					// If that was the last TT in SM

					if (SP3 == 68){
						SP3 = 1;

						// If that was the last SM in EB

						if (SP2 == 35){
							cout << "Just filled final EB section\n";

						}

						// if not last SM, increment
						else
							SP2 += 1;

					}

					else{
						// if not last TT, increment
						SP3 += 1;

					}


				}

				else{
					// if not last strip, increment
					SP4 += 1;

				}
				

				// If that was the last EB section
				if ( (SP1 == 0) && (SP2 == 35) && (SP1 == 68) && (SP1 == 5) ){

					SP1 = 1; // Start looking for EE sections 
					SP2 = -1;
					SP3 = 1;
					SP4 = 1; 

				}

			}

			// If that was an EE section
			if (SP1 == 1){

				// If that was the last strip in DOF2
				if (SP4 == 5){
					SP4 = 1;

				}

				// If that was the last 

				if (SP4 == 5){
					SP4 = 0;
					SP3 += 1;

				}

			}

		}



	if (num_sections_full == max_sections){

		cout << "max desired number of sections reached\n";
		cout << "exiting\n";
		break;
	}

} // While all sections not filled 


} // End of main function 

// main(){

//     cout << "In local test of Section_Sort.cpp\n";
//     int a = 10;
//     string b = "Oct17";
//     string c = "2";
//     string d = "test";

//     Section_Sort(a, b, c, d);
// }