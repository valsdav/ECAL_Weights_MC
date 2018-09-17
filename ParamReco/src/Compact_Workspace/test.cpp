// Abe Tishleman-Charny
// 24 May 2018
// The purpose of this function is to return the sum of the absolute values of the errors for each XTAL, where error is defined as (recon_amp / amp ) - 1

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
//tuple<double, double> EC_bias(int max_rows, double ts, double EB_w[], double EE_w[], bool normalized_A, bool normalized_t0, bool ideal_weights, string weights_type, string PY, double ieta_min, double ieta_max) {
int main(){
	bool debug = true;
	bool test_skip = false; // If want to skip lines to test things 
	int test_skip_value = 50000;
	int debug_val = 0;

	string PY = "2017";

	int max_rows = 10;
	double ieta_min = 1.8, ieta_max = 2.1;
  	// Open Files

	stringstream params_ss;
	params_ss << "data/XTAL_Params_" << 2017 << ".txt"; // (cmsswId, A, t0, alpha, beta) values	
	string params_path = params_ss.str();

  	ifstream inFile; // Input File stream class object  
  	inFile.open(params_path); // apply XTAL_Params to in file stream

	stringstream weights_ss;
	weights_ss << "data/" << "PedSub1+4" << "_" << "2017" << ".txt";	
	string weights_path = weights_ss.str();

        ifstream inweightsFile;
        inweightsFile.open(weights_path); // open precomputed weights text file 


  	if (!inFile) {
  	  cout << "Unable to open Param file\n";
  	  exit(1); // terminate with error
 	 }

  	if (!inweightsFile) {
  	  cout << "Unable to open weights file\n";
  	  exit(1); // terminate with error
 	 }

	string line, weights_line; 	  

	// Read line of (rawid, A, t0, alpha, beta) values

	// Variables that reset before going through XTAL_Params.txt
	int EB_count = 0, EE_count = 0, extra_lines = 0, row = 0;

	double XTAL_count = 0;

	//while((getline(inFile, line))) { // XTAL_Params.txt loop
	while((getline(inFile, line)) && (getline(inweightsFile, weights_line))) { // get line of XTAL_Params.txt and weights, loop

	   // Check row
	   if (row == max_rows){
		cout << "Maximum desired lines reached." << endl;
		break;
		}

	   if ((row%5000) == 0){
	      cout << "Reading line " << row << endl;
	      }

	   stringstream s(line); // stringstream 's' operates on string 'line'
           stringstream ww(weights_line);

	   double d1, d2, d3, d4, d5; // d1 = ID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta   
	   double w0, w1, w2, w3, w4, w5, w6, w7, w8, w9, w10;
		

	   if( (s >> d1 >> d2 >> d3 >> d4 >> d5) && (ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5 >> w6 >> w7 >> w8 >> w9 >> w10)){ // Do if on XTAL_params line with desired 's' stream extraction parameters	   

		// 2017 params and weights
		if (string(PY) == "2017"){
			if ( (d1 == 838868019) || (d1 == 838871589) || (d1 == 838882900) || (d1 == 838882985) || (d1 == 838900809) || (d1 == 838949036) || (d1 == 838951621) || (d1 == 872436486) ) continue; // These cmsswid's yield nan (not a number) weights. For now skipping them, but should investigate why nan weights are obtained from these waveforms. This could be insightful.   
		}
		
		// 2018 params and weights 
		if (string(PY) == "2018"){
			if ( (d1 == 838864037) || (d1 == 838869123) || (d1 == 838874865) || (d1 == 838891641) || (d1 == 838958295) || (d1 == 838966532) ) continue;
		}

		double weights[10] = {0.}; // reset weights for current line  
		string Parameters;
		int skip_count = 0;

		// EB Line
		if ((d1 >= 838861313) && (d1 <= 838970216)){ //&& (plot_EB)){
			EB_count += 1;
			//Parameters = "data/EB_DOF.txt";
			Parameters = "data/Compact_DOF.txt";
			int skip_count = EB_count;
			//cout << "skip_count = " << skip_count << "\n";
			//if (!ideal_weights){ 
				//for (int i = 0; i < 10; i++) weights[i] = EB_w[i];
				//}
			}

		// EE Line
		if ((d1 >= 872415401)){ //&& ( (plot_EE_minus) || (plot_EE_plus) )){
			//cout << "On EE\n";
			//if (EB_Only) break;
			EE_count += 1;
			Parameters = "data/Compact_DOF.txt";
			int skip_count = EE_count;
			//if (!ideal_weights){
				//for (int i = 0; i < 10; i++) weights[i] = EE_w[i];
				//}
			}
		//}  

		//cout << "Parameters = " << Parameters << "\n";
		//cout << "plot_EE = " << plot_EE << "\n";
		ifstream inparamFile; // Input File stream class object  
		inparamFile.open(Parameters); // open from beginning each time and skip desired number of lines 
		// There may be a way to just open once and not need to skip lines every time. This may be much more efficient.

		if (!inparamFile) {
		  cout << "Unable to open Info file\n";
		  exit(1); // terminate with error
		}

		skip_count += extra_lines; // extra_lines updated every line 

		//if (test_skip) skip_count += test_skip_value;

		while(skip_count !=0){
		  
		  inparamFile.ignore(1000,'\n'); // count is number of rows read before this one
		  //inweightsFile.ignore(1000,'\n');
		  skip_count -= 1;
		}

		//test_skip_value += 50000;
		//while(test_skip_value !=0){
		  
		  //inFile.ignore(1000,'\n'); // count is number of rows read before this one
		  //inweightsFile.ignore(1000,'\n');
		  test_skip_value -= 1;
		//}



		cout.precision(17);

		//cout << "d1 = " << d1 << endl;
		//cout << "row = " << row << endl;

		if (row%1000 == 0){ 

			cout << "d1 = " << d1 << endl;
			cout << "row = " << row << endl;
		}
				if(d1 == 872418966){ // should have abs(eta) between 1.8 and 2.1 
					
					cout << "debug\n";
					debug = true;
					cout << "d1 = " << d1 << endl;
					cout << "row = " << row << endl;
					//cout << "eta = " << eta << endl;
					//cout << "abs(eta) = " << abs(eta) << endl;

				}

		bool leave = false;
		bool in_range = false;
		//extra_lines = 0;

		string param_line; 

		//cout << "Right before reading EB/EE_DOF line\n";
		//cout << "bool(getline(inparamFile, param_line)) = " << bool(getline(inparamFile, param_line)) << endl;

		// Match ID's between Params and Info files, then
		// get EB, EE DOF for given ID.
		while( (getline(inparamFile, param_line)) && (leave == false)) { // read EB/EE_DOF line
	
		//while( (getline(inparamFile, param_line)) && (getline(inweightsFile, weights_line)) &&  (leave == false)) { // read EB/EE_DOF line
			//cout << "Extra_lines = " << extra_lines << "\n";

	      		//double d1_, d2_, d3_, d4_, d5_, d6_;
			double d1_, d2_, d3_, d4_, d5_; 
			//double w0, w1, w2, w3, w4, w5, w6, w7, w8, w9, w10;
			
                        stringstream ss(param_line);
                        //stringstream ww(weights_line);

			//if((ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_) && (ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5 >> w6 >> w7 >> w8 >> w9 >> w10)){ // If EB/EE_DOF.txt and weights.txt line contains doubles (if not, may have nan). If they do, see if IDs match.
			if(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_){ // If EB/EE_DOF.txt and weights.txt line contains doubles (if not, may have nan). If they do, see if IDs match.
	
	
			//if(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_){ // if line has numbers, see if ID's match. 
			  // d5_ = ix, d6_ = iy


				//cout << "Right after checking stringstream extraction\n";
				//cout.precision(17);
				//cout << "d1 = " << d1 << endl;
				//cout << "d1_ = " << d1_ << endl;
				//cout << "w0 = " << w0 << endl;


	
				//debug_val += 1;
				if (debug){
					cout.precision(17);
					cout << "--------------\n";
					cout << "d1 = " << d1 << endl;
					cout << "d1_ = " << d1_ << endl;
					cout << "w0 = " << w0 << endl;
				}

				//break;

 
				//if (d1 == d1_){ // can pair DOF with XTAL, and extract correct weights 
				if ((d1 == d1_) && (d1 == w0)){ // can pair DOF with XTAL, and extract correct weights if eta is in range. 

				//bool in_range = false;

				double eta = d5_;

				//if(d1_ == 872418966){ // should have abs(eta) between 1.8 and 2.1 

					//cout << "debug\n";
					//cout << "d1_ = " << d1_ << endl;
					cout << "eta = " << eta << endl;
					cout << "abs(eta) = " << abs(eta) << endl;

				//}


				//cout << "ieta_min = " << ieta_min << endl;
				//cout << "eta = " << eta << endl;
				//cout << "ieta_max = " << ieta_max << endl;

				// if eta is out of range, don't extract weights 
				// check if eta is in range
				if ( ( ieta_min <= abs(eta) ) && ( ieta_max > abs(eta) )  ){

				  in_range = true;
				  cout << "All three ID's match and eta in range\n";

				}
	
				else{
					  cout << "All three ID's match but eta out of range\n";

				  }

					
				    /*if (ideal_weights){

					    weights[0] = w1;
					    weights[1] = w2;
					    weights[2] = w3;				
					    weights[3] = w4;				
					    weights[4] = w5;				
					    weights[5] = w6;				
					    weights[6] = w7;				
					    weights[7] = w8;
					    weights[8] = w9;
					    weights[9] = w10;
				    }*/

				  //for (int l = 0; l < 10; l++)
					//{
					//cout << "weights[" << l <<"] = " << weights[l] << endl;
					//}

                                  //}

				  leave = true;

				}
			
				else {
				  //if(row == 4625) cout << "IDs don't match\n";
				  extra_lines += 1;
				  //if (ieta_max == 1.8){debug_val += 1;
				  //if (debug_val == 3) exit(0);}
				} // keep track of number of extra lines to skip next time 

			} // If EB/EE_DOF.txt and weights.txt line contains doubles (if not, may have nan)

		} // read EB/EE_DOF line

	  // Only compute the bias, add to total bias, and add XTAL if eta is in range. 
	  if (in_range){

	  double A = d2, t_0 = d3, alpha = d4, beta = d5; // Double_t ?  

	  //if (normalized_A == true) A = 1.0; // amp of 1
	  //if (normalized_t0 == true) t_0 = 125.0; // 125 ns
	      
	  // Reconstruct Amplitude 
	  //recon_amp(A, t_0, ts, alpha, beta, weights);

	  //cout << "Recon_amp = " << recon_amp(A, t_0, ts, alpha, beta, weights,ideal_weights) << "\n";
	  double ratio = 0.0;

	  // Check for nan weights 
	  bool zero_weights = true; // assume true so one non zero value triggers false
	  /*for (int ii = 0; ii < 10; ii++) { 
	    cout << "weights[" << ii << "] = " << weights[ii] << endl;
	    if (weights[ii] != 0)zero_weights = false;
	  }*/

	  zero_weights = false;

	  if (zero_weights){
	    cout << "row " << row << endl;
	    //cout << "debug_val = " << debug_val << endl;
	    cout << "check weights array.\n";
	    cout << "exiting program.\n";
	    exit(1);
	  }

	  //if(in_range){
	    //if (ideal_weights){ratio = (recon_amp_noclhep(A, t_0, ts, alpha, beta, weights) / A ) ;} // Non-normalized A
	    //if (!ideal_weights){ratio = recon_amp_noclhep(A, t_0, ts, alpha, beta, weights);} // Normalized A	
	  
	  //cout << "ratio = " << ratio << endl;

	  double amp_error = (ratio - 1);
	  //cout << "amp_error = " << amp_error << "\n";
	  // add to total error 

	  //total_error += abs(amp_error);
	  //total_error += amp_error; // Only do this if eta is in range 
	  XTAL_count += 1;

	  // See if things are going well 
    	  /*if ((row%100000) == 0){
	      cout << "row " << row << endl;
	      for (int ii = 0; ii < 10; ii++) { cout << "weights[" << ii << "] = " << weights[ii] << endl;}
	      cout << "ratio = " << ratio << endl;
	      cout << "amp_error = " << amp_error << endl;
	      cout << "abs(amp_error) = " << abs(amp_error) << endl;
	      cout << "total_error =  " << total_error << endl;
              }*/

	  }
 


	   //inparamFile.close();

	   } // Do if on XTAL_params line with desired 's' stream extraction parameters

	  row += 1;

	  } // Loop while still lines left in XTAL_params and weights, and desired maximum hasn't been reached

	  
	  inFile.close();

	// take total error for ts and fill 1D histogram with total of abs error for each ts 

	//return make_tuple(total_error, XTAL_count);
	
////////////////////
}
