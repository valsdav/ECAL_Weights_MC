// The purpose of this code is to combine XTAL info files

using namespace std;

// Include root header files
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>

int main(){

	ofstream merged_file;
	merged_file.open("Merged_data_2018_PedSub1+4.txt"); // tab separated 
	merged_file << "cmsswid\tietaix\tiphiiy\t0iz\teta\tA\tt_0\talpha\tbeta\tw1\tw2\tw3\tw4\tw5\tw6\tw7\tw8\tw9\tw10\n";

  	// Open XTAL_Params and Weights files

	stringstream params_ss, weights_ss;

	//params_ss << "data/XTAL_Params_" << PY << ".txt"; // (ID, A, t0, alpha, beta) values	
	//weights_ss << "data/" << weights_type << "_" << PY << ".txt"; // (ID, weights)

	params_ss << "data/XTAL_Params_2018_copy.txt"; // (ID, A, t0, alpha, beta) values	
	weights_ss << "data/PedSub1+4_2018_copy.txt"; // (ID, weights)

	string params_path = params_ss.str(), weights_path = weights_ss.str();

  	ifstream inParamsFile, inweightsFile; // Input File stream objects 

  	inParamsFile.open(params_path); // XTAL_Params: inParamsFile stream
        inweightsFile.open(weights_path); // weights.txt: inweightsFile stream

  	if (!inParamsFile) {
  	  cout << "Unable to open Param file\n";
  	  exit(1); // terminate with error
 	 }

  	if (!inweightsFile) {
  	  cout << "Unable to open weights file\n";
  	  exit(1); // terminate with error
 	 }

	string line, weights_line; // XTAL_Params: line, weights.txt: weights_line	

	int j = 0;
	int i = 0;  
	int extra_lines = 0;
	bool manual_exit = false;
	
	while((getline(inParamsFile, line)) && (getline(inweightsFile, weights_line)) && (!manual_exit) ) { // get line of XTAL_Params.txt and weights, loop
	// why is getline executed just from being in the while condition? 

	   stringstream s(line); // convert 'line' to stream 's'
	   stringstream ww(weights_line); // convert 'weights_line' to stream ww 

	   double d1, d2, d3, d4, d5; // d1 = ID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta   
	   double w0, w1, w2, w3, w4, w5, w6, w7, w8, w9, w10; // w0 = ID, wi = weights_{i}

	   if( (s >> d1 >> d2 >> d3 >> d4 >> d5) && (ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5 >> w6 >> w7 >> w8 >> w9 >> w10)){ // Do if on XTAL_params line with 5 doubles, and weights line with 11 doubles 	  

		// Now have XTAL params and weights 		

		stringstream ssDOF;
		ssDOF << "data/Compact_DOF_copy.txt";
		string DOF_path = ssDOF.str();

		ifstream inDOFFile; 
		inDOFFile.open(DOF_path); 

		if (!inDOFFile) {
		  cout << "Unable to open Info file\n";
		  exit(1); // terminate with error
		}

		string DOF_line; 

		bool leave = false;
		int DOF_skip_count = 0;

		//DOF_skip_count += good_line_count;
		DOF_skip_count += extra_lines; // extra_lines updated every line 
		DOF_skip_count += i;

		while(DOF_skip_count !=0){
		  
		  inDOFFile.ignore(1000,'\n'); // count is number of rows read before this one
		  DOF_skip_count -= 1;
		}

		while((getline(inDOFFile, DOF_line)) && (leave == false)) { // read EB/EE_DOF line
		
		//cout << "In DOF while\n";

		bool five_params = false;

                stringstream ss(DOF_line);

		double d1_, d2_, d3_, d4_, d5_;
	
			if(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_){ // If DOF line contains 5 doubles

				five_params = true; 
	
				cout.precision(17);
				//cout << "d1_ = " << d1_ << endl;
				//cout << "d1 = " << d1 << endl;

				// If ID's match, grab DOF and eta values, then add Params and Weights 

				if ( (d1_ == d1) && (d1_ == w0)){ // All ID's match

					//cout << "ID's match\n";

					double ID = d1_; // might be better to make string but just doing double 
					double DOF1 = d2_;
					double DOF2 = d3_;
					double DOF3 = d4_;
					double eta = d5_;
					double A = d2;
					double t_0 = d3;
					double alpha = d4;
					double beta = d5;
					
					stringstream cw;

					cw.precision(17);
					cw << ID << "\t";
					cw.precision(9);					

					cw << DOF1 << "\t" << DOF2 << "\t" << DOF3 << "\t" << eta << "\t" << A << "\t" << t_0 << "\t" << alpha << "\t" << beta << "\t";
					cw.precision(17);
					cw << w1 << "\t" << w2 << "\t" << w3 << "\t" << w4 << "\t" << w5 << "\t" << w6 << "\t" << w7 << "\t" << w8 << "\t" << w9 << "\t" << w10;

					merged_file << cw.str() << "\n";
					leave = true; // stupid == 

					i += 1;

					//cout << "i = " << i << endl;
					
					//if(i == 10) manual_exit = true;

					if (i%5000 == 0) cout << "row = " << i << endl;



				} // All ID's match

				else{ extra_lines += 1;} // ID's don't match 

			} // If DOF line contains 5 doubles 

			else{ five_params = false;} // doesn't contain 5 doubles

			if (!five_params){	
				j += 1;
				leave = true;
				extra_lines += 1;
				//cout << "not five params \n";
				//cout << "param ID = " << d1 << endl;
				//cout << "DOF ID = " << d1_ << endl;
				//cout << "leave = " << leave << endl;
				//if (j == 3) exit(0);


			}


			} //readEBEEDOFLINE

		} // XTAL_params/weights line with 5/11 doubles 

	} // get line of XTAL_Params.txt and weights, loop

} // End of main function 
