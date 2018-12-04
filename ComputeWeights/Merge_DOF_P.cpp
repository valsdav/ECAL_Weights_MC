// Use this to merge DOF and Parameters text files

using namespace std;

#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iterator>
#include <string>
#include <chrono>
#include <cmath>

#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;


void Merge_DOF_P(int max_lines, string PD, string WC, string note){

    cout << "In Merge_DOF_P\n";

    // open XTAL Params
    // match ID
    // place all values on line of output file
    // create outputfile with CMSSWID, DOF, P

    // Create DOF_P output file
	stringstream DOFP_ss;
	//DOFP_ss << "bin/testing_DOF_P_" << PD << "_" << WC << "_" << note << ".txt";
    DOFP_ss << "data/DOF_P_" << PD << "_" << note << ".txt"; // put in bin because this is the final output 
	string DOFP_s = DOFP_ss.str(); // Output File Path 

	cout << "output file path = " << DOFP_s << endl;

	ofstream DOFP_f;
	DOFP_f.open(DOFP_s);
	DOFP_f << "CMSSWID\tSM/iz\tTT/SC\tStrip\tXTAL\tiphi/ix\tieta/iy\teta\teta_ring\tA\tt0\talpha\tbeta\n";

	// Open XTAL Params file data/XTAL_Params_MMMYY.txt (CMSSWID, A, t0, alpha, beta)
	stringstream P_ss;
	P_ss << "data/XTAL_Params_" << PD << ".txt";
	string P_s = P_ss.str();
  	ifstream inParamsFile; // Input File stream objects
  	inParamsFile.open(P_s); // XTAL_Params: inParamsFile stream

  	if (!inParamsFile) {
  	  cout << "Unable to open Param file\n";
	  cout << "Make sure " << P_s << " leads to a file\n";
	  cout << "Exiting\n";
  	  exit(1); // terminate with error
 	 }


	// Define Loop Parameters
	int current_line = 0;
	bool manual_exit = false; // Can be used for debugging/testing 

	// Create variables here, update during loop 
    stringstream DOFP_ofs; // DOFP output file stream 

	// Initialize a bunch more variables so then can just be updated every loop. 
	double CMSSWID, A, t_0, alpha, beta, ID, DOF1, DOF2, DOF3, DOF4, DOF5, DOF6, DOF7, eta, eta_ring;
	double ts = 0.0; // Simulated Time Shift. Usually do not use here but in theory could use for computing ideal weights given some early or late sampling. 

	int count_ = 0;
	int DOFl = 0;
	int extra_lines = 0;
	bool nine_params;
	
	bool leave = false;
	int DOF_skip_count = 0; 
	double DOF_ID;

    string line; // string to hold XTAL_Params_MMMYY.txt line information 

    // Start reading XTAL_Params file 

	while((getline(inParamsFile, line)) && (!manual_exit) ) { // get line of XTAL_Params_MMMYY.txt loop
	// why is getline executed just from being in the while condition? This I currently don't understand. 

	   //skip = false;

	   // If user defined max lines is reached, stop reading XTAL params lines 
	   if (current_line == max_lines){
		cout << "---Maximum desired lines reached---\n"; 
		cout << "---Exiting---\n";

		break;
		}

	   stringstream s(line); // convert 'line' to stream 's'

	   double d1, d2, d3, d4, d5; // d1 = CMSSWID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta   

	   if((s >> d1 >> d2 >> d3 >> d4 >> d5)){ // Do if on XTAL_params line with 5 doubles	  

		// Sometimes the parameters on a line are zero. In this case, don't check the Full_DOF file, but still add to the current_line iterator before leaving. 
		if (d2 == 0){
			cout << "\t On Line " << current_line << "\t Param file amplitude is zero\n";
			leave = true;
		}
	
		else leave = false;

		// Open Full_DOF.txt 
		// Format: CMSSWID	SM/iz	TT/SC	Strip	XTAL	iphi/ix	ieta/iy	eta eta_ring
        // Place this outside loop? 
		stringstream ssDOF;
		ssDOF << "data/Full_DOF.txt"; 
		string DOF_path = ssDOF.str();

		ifstream inDOFFile; 
		inDOFFile.open(DOF_path); 

		if (!inDOFFile) {
		  cout << "Unable to open DOF file\n";
		  cout << "Make sure " << DOF_path << " leads to a file\n";
		  exit(1); // terminate with error
		}

		string DOF_line; 
		
		// DOF_skip_count is number of rows read before this one
		DOF_skip_count = 0; // Initialize

		DOF_skip_count += extra_lines; // Updated when ID's don't match or incorrect number of doubles on line 
		DOF_skip_count += DOFl; // lines used 

		//cout << "skipping " << DOF_skip_count << "lines\n";

		while(DOF_skip_count !=0){
		  //cout << "skipping " << DOF_skip_count << "lines\n";
		  inDOFFile.ignore(1000,'\n'); 
		  DOF_skip_count -= 1;
		}

		// Read Full_DOF.txt line 
		while((getline(inDOFFile, DOF_line)) && (leave == false)) { // read Full_DOF.txt line

		nine_params = false;
        stringstream ss(DOF_line);

		double d1_, d2_, d3_, d4_, d5_, d6_, d7_ ,d8_, d9_;
	
			if(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_ >> d7_ >> d8_ >> d9_){ // If DOF line contains 9 doubles

				DOF_ID = d1_;
				nine_params = true; 

				if ((d1_ == d1)){ // CMSSWID's match 
					// For this XTAL, can compute weights. 

					// From current DOF line 
					CMSSWID = d1_, DOF1 = d2_, DOF2 = d3_, DOF3 = d4_, DOF4 = d5_, DOF5 = d6_, DOF6 = d7_, eta = d8_, eta_ring = d9_;
					// CMSSWID	SM/iz	TT/SC	Strip	XTAL	iphi/ix	ieta/iy	eta eta_ring

					// From current XTAL_Params line 
					A = d2;
					t_0 = d3;
					alpha = d4;
					beta = d5;
			
					// Fill output file line with:
					// CMSSWID SM/iz	TT/SC	Strip	XTAL	iphi/ix	ieta/iy	eta	eta_ring A t0 alpha beta 

                    DOFP_ofs.precision(17);
                    DOFP_ofs << CMSSWID << "\t";

                    DOFP_ofs.precision(9);					
                    DOFP_ofs << DOF1 << "\t" << DOF2 << "\t" << DOF3 << "\t" << DOF4 << "\t" << DOF5 << "\t" << DOF6  << "\t" << eta << "\t" << eta_ring << "\t" << A << "\t" << t_0 << "\t" << alpha << "\t" << beta << "\t";

                    DOFP_ofs << "\n";
                    DOFP_f << DOFP_ofs.str();
                    DOFP_ofs.str("");				

					leave = true; // Using double equals sign here caused frustration for a bit  

					DOFl += 1; // line used, so skip on next read 

				} // CMSSWID's match 

				else{ extra_lines += 1;} // ID's don't match 

			} // If DOF line contains 9 doubles

			else{ nine_params = false;} // doesn't contain 9 doubles

			if (!nine_params){	

				extra_lines += 1; 


				if (d1 == d1_){
					leave = true; // if ID's match on less than 5 param line in DOF, need to skip to next param line. 
				}


			} // if (!nine_params) 

			} // read Full_DOF.txt line

		} // XTAL_params line with 5 doubles 

	current_line += 1;

	// Update user 
	if (current_line%5000 == 0) cout << "current_line = " << current_line << endl;

	} // get line of XTAL_Params_MMMYY.txt 

    // This is equal to DOF_P_1_note.txt because already ordered by CMSSWID
    // reflect this by making a copy with path title IF it doesn't already exist 

    DOFP_f.close();

    bool copy_exists = false; // Merged DOF_P file, sorted by section, exists
    stringstream DOFPWC_ss;
    DOFPWC_ss << "data/DOF_P_" << PD << "_" << WC << "_" << note << ".txt";
    string DOFPWC_s = DOFPWC_ss.str(); // Output File Path 
    ifstream ce(DOFPWC_s);
    copy_exists = ce.good();

	// Removing this for now because there are no weights here 
    // if ((WC == "1") && (!copy_exists)){
    //     cout << "Creating copy of DOF_P for DOF_P_1 file\n";

    //     string DOFP_s_copy = DOFP_s;

    //     //cout << DOFP_s_copy << endl;
    //     //cout << DOFPWC_s << endl;

    //     fs::copy_file(DOFP_s_copy,DOFPWC_s);

    // }

}

// main(){

//     cout << "In local test of Merge_DOF_P.cpp\n";
//     int a = 10;
//     string b = "Oct17";
//     string c = "1";
//     string d = "test";

//     Merge_DOF_P(a, b, c, d);
// }