// Abe Tishleman-Charny
// 24 May 2018
// The purpose of this function is to return the sum of the absolute values of the errors for each XTAL, where error is defined as (recon_amp / amp ) - 1

#include "recon_amp_noclhep.cpp"

tuple<double, double> EC_bias(int max_rows, double ts, double EB_w[], double EE_w[], bool normalized_A, bool normalized_t0, bool ideal_weights, string weights_type, string PY, double ieta_min, double ieta_max) 
{
	int initial_skip = 0; // Used for testing
	bool verbosity = false;

	cout << "-------------------------------\n";
	cout << "Computing Total Error for:\n";
	cout << "Abs(Eta)_min = " << ieta_min << endl; // minimum absolute values of eta for this loop
	cout << "Abs(Eta)_max = " << ieta_max << endl; // maximum abs value of eta to compute bias for this loop
	cout << "Computing Total Error for\n";
	cout << "Time Shift = " << ts << "ns\n";

  	// Open XTAL_Params and Weights files

	stringstream params_ss, weights_ss;
	params_ss << "data/XTAL_Params_" << PY << ".txt"; // (ID, A, t0, alpha, beta) values	
	weights_ss << "data/" << weights_type << "_" << PY << ".txt"; // (ID, weights)

	string params_path = params_ss.str();
	string weights_path = weights_ss.str();

  	ifstream inFile, inweightsFile; // Input File stream object  

  	inFile.open(params_path); // apply XTAL_Params to inFile stream
        inweightsFile.open(weights_path); // open precomputed weights text file 

  	if (!inFile) {
  	  cout << "Unable to open Param file\n";
  	  exit(1); // terminate with error
 	 }

  	if (!inweightsFile) {
  	  cout << "Unable to open weights file\n";
  	  exit(1); // terminate with error
 	 }

	string line, weights_line; // for storing XTAL_Params and weights lines 	  

	// Read XTAL_Params, weights lines 

	// Variables that reset before going through XTAL_Params and weights from beginning 
	int EB_count = 0, EE_count = 0, extra_lines = 0, row = 0;
	double XTAL_count = 0.0, total_error = 0.0;; // double because want double divison later 	

	// Initial skip 
	while(initial_skip !=0){
	  inFile.ignore(1000,'\n');
	  inweightsFile.ignore(1000,'\n');
	  initial_skip -= 1;
	}

	while((getline(inFile, line)) && (getline(inweightsFile, weights_line))) { // get line of XTAL_Params.txt and weights, loop
	   // I think while this is true it performs the action, obtaining the next line .. ?

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
	   double w0, w1, w2, w3, w4, w5, w6, w7, w8, w9, w10; // ID, weights

	   if( (s >> d1 >> d2 >> d3 >> d4 >> d5) && (ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5 >> w6 >> w7 >> w8 >> w9 >> w10)){ // Do if on XTAL_params line with desired 's' stream extraction DOF	  

		// 2017 params and weights
		if (string(PY) == "2017"){
			if ( (d1 == 838868019) || (d1 == 838871589) || (d1 == 838882900) || (d1 == 838882985) || (d1 == 838900809) || (d1 == 838949036) || (d1 == 838951621) || (d1 == 872436486) ) continue; // These cmsswid's yield nan (not a number) weights. For now skipping them, but should investigate why nan weights are obtained from these waveforms. This could be insightful.   
		}
		
		// 2018 params and weights 
		if (string(PY) == "2018"){
			if ( (d1 == 838864037) || (d1 == 838869123) || (d1 == 838874865) || (d1 == 838891641) || (d1 == 838958295) || (d1 == 838966532) ) continue;
		}

		double weights[10] = {0.}; // reset weights for current line  
		string DOF; // DOF file string
		int DOF_skip_count = 0;

		// Always open same DOF file, but need to choose correct EB/EE weights for online. 

		// EB Line
		if ((d1 >= 838861313) && (d1 <= 838970216)){ //&& (plot_EB)){
			EB_count += 1;
			//DOF = "data/EB_DOF.txt";
			DOF = "data/Compact_DOF.txt";
			//int skip_count = EB_count;
			//cout << "skip_count = " << skip_count << "\n";
			if (!ideal_weights){ 
				for (int i = 0; i < 10; i++) weights[i] = EB_w[i];
				}
			}

		// EE Line
		if ((d1 >= 872415401)){ //&& ( (plot_EE_minus) || (plot_EE_plus) )){
			//cout << "On EE\n";
			//if (EB_Only) break;
			EE_count += 1;
			DOF = "data/Compact_DOF.txt";
			//int skip_count = EE_count;
			if (!ideal_weights){
				for (int i = 0; i < 10; i++) weights[i] = EE_w[i];
				}
			}
		//}  

		//cout << "DOF = " << DOF << "\n";
		//cout << "plot_EE = " << plot_EE << "\n";
		ifstream inparamFile; // Input File stream class object  
		inparamFile.open(DOF); // open from beginning each time and skip desired number of lines 
		// There may be a way to just open once and not need to skip lines every time. This may be much more efficient.

		if (!inparamFile) {
		  cout << "Unable to open Info file\n";
		  exit(1); // terminate with error
		}

		string param_line; 

		// Skip desired number of lines 

		// skip_count should be EB_count or EE_count.
		//int skip_count = ; // skip count * number of characters in a line

		DOF_skip_count += EB_count;
		DOF_skip_count += EE_count;
		DOF_skip_count += extra_lines; // extra_lines updated every line 

		while(DOF_skip_count !=0){
		  
		  inparamFile.ignore(1000,'\n'); // count is number of rows read before this one
		  DOF_skip_count -= 1;
		}

		cout.precision(17);

		//cout << "d1 = " << d1 << endl;
		//cout << "row = " << row << endl;

		if (row%5000 == 0){
		  cout << "Row = " << row << endl;
		  cout << "d1 = " << d1 << endl;

		}
		/*if(d1 == 872418966){ // should have abs(eta) between 1.8 and 2.1 
			
			//cout << "debug\n";
			verbosity = true;
			cout << "d1 = " << d1 << endl;
			cout << "row = " << row << endl;
			//cout << "eta = " << eta << endl;
			//cout << "abs(eta) = " << abs(eta) << endl;

		}*/

		bool leave = false; // set true when ID's match
		bool in_range = false; // set true when ID's match and eta in range 

		// Match ID's between Params and Info files, then
		// get EB, EE DOF for given ID.
		while( (getline(inparamFile, param_line)) && (leave == false)) { // read EB/EE_DOF line
	
		//while( (getline(inparamFile, param_line)) && (getline(inweightsFile, weights_line)) &&  (leave == false)) { // read EB/EE_DOF line
			//cout << "Extra_lines = " << extra_lines << "\n";

	      		//double d1_, d2_, d3_, d4_, d5_, d6_;
			double d1_, d2_, d3_, d4_, d5_; 
			//double w0, w1, w2, w3, w4, w5, w6, w7, w8, w9, w10;

			// d1_ = cmsswID, d2_ = ieta or ix, d3_ = iphi or iy, d4_ = 0 or iz (+/-1), d5_ = eta
			// ^^ For Compact_DOF.txt

			// w0 = CMSSWID, w1 = first weight, w2 = ... (not necessarily starting at 0ns)

			//if (row == 4625){

			
                        stringstream ss(param_line);

			  //cout << "row = " << row << endl;
			  //cout << "(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_) = " << bool(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_) << endl;
			  //cout << "(ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5) = " << bool(ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5) << endl;	
			  //debug_val += 1;
			//}

			// Need to handle 5 or 10 weights. 

			//if((ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_) && (ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5 >> w6 >> w7 >> w8 >> w9 >> w10)){ // If EB/EE_DOF.txt and weights.txt line contains doubles (if not, may have nan). If they do, see if IDs match.
			//if((ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_) && (ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5)){ // If EB/EE_DOF.txt and weights.txt line contains doubles (if not, may have nan). If they do, see if IDs match.
			if(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_){ // If DOF line contains 5 doubles
	

				if (verbosity){
					cout.precision(17);
					cout << "d1 = " << d1 << endl;
					cout << "d1_ = " << d1_ << endl;
					cout << "w0 = " << w0 << endl;
				  }

				//if (d1 == d1_){ // can pair DOF with XTAL, and extract correct weights 

				if ((d1 == d1_) && (d1 == w0)){ // All ID's match. Now check eta

					double eta = d5_;

					if(d1_ == 872418966){ // should have abs(eta) between 1.8 and 2.1 

						cout << "debugging\n";
						cout << "All ID's match\n";
						cout << "d1_ = " << d1_ << endl;
						cout << "eta = " << eta << endl;
						cout << "abs(eta) = " << abs(eta) << endl;

					}


					//cout << "ieta_min = " << ieta_min << endl;
					//cout << "eta = " << eta << endl;
					//cout << "ieta_max = " << ieta_max << endl;

					// if eta is out of range, don't extract weights 
					// check if eta is in range
					if ( ( ieta_min <= abs(eta) ) && ( ieta_max > abs(eta) )  ){

					  in_range = true;
					  //cout << "All three ID's match and eta in range\n";

					}
	
					else{
	
					  // in_range remains false

					  //cout << "All three ID's match but eta is out of range\n";
					  //continue;
					  //stringstream s_(line);

					  //getline(inFile, line);
					  //getline(inweightsFile, weights_line);

					  //inFile.ignore(1000,'\n');
					  //inweightsFile.ignore(1000,'\n');

					  //debug_val += 1;
					  //if (debug_val == 3) exit(0);
				
					  }
					
					if (ideal_weights){

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
					}

					  //for (int l = 0; l < 10; l++)
						//{
						//cout << "weights[" << l <<"] = " << weights[l] << endl;
						//}

		                          //}

					  leave = true;

					} // All ID's match 
			
				else { // DOF ID doesn't match Params and Weights. Read next DOF line. 

				  extra_lines += 1;
				  //if (ieta_max == 1.8){debug_val += 1;
				  //if (debug_val == 3) exit(0);}
				} // keep track of number of extra lines to skip next time 

			} // if DOF line contains 5 doubles

		} // read EB/EE_DOF line

	  // Only compute the bias, add to total bias, and add XTAL if eta is in range. 
	  if (in_range){

		  double A = d2, t_0 = d3, alpha = d4, beta = d5; // Double_t ?  

		  if (normalized_A == true) A = 1.0; // amp of 1
		  if (normalized_t0 == true) t_0 = 125.0; // 125 ns
		      
		  // Reconstruct Amplitude 
		  //recon_amp(A, t_0, ts, alpha, beta, weights);

		  //cout << "Recon_amp = " << recon_amp(A, t_0, ts, alpha, beta, weights,ideal_weights) << "\n";
		  double ratio = 0.0;

		  // Check for nan weights 
		  bool zero_weights = true; // assume true so one non zero value triggers false
		  for (int ii = 0; ii < 10; ii++) { 
		    //cout << "weights[" << ii << "] = " << weights[ii] << endl;
		    if (weights[ii] != 0)zero_weights = false;
		  }

		  if (zero_weights){
		    cout << "row " << row << endl;
		    //cout << "debug_val = " << debug_val << endl;
		    cout << "check weights array.\n";
		    cout << "exiting program.\n";
		    exit(1);
		  }

		  //if(in_range){
		    if (ideal_weights){ratio = (recon_amp_noclhep(A, t_0, ts, alpha, beta, weights) / A ) ;} // Non-normalized A
		    if (!ideal_weights){ratio = recon_amp_noclhep(A, t_0, ts, alpha, beta, weights);} // Normalized A	
		  
		  //cout << "ratio = " << ratio << endl;

		  double amp_error = (ratio - 1);
		  //cout << "amp_error = " << amp_error << "\n";
		  // add to total error 

		  //total_error += abs(amp_error);
		  total_error += amp_error; // Only do this if eta is in range 
		  XTAL_count += 1;

		  // See if things are going well 
	    	  if ((row%100000) == 0){
		      cout << "row " << row << endl;
		      for (int ii = 0; ii < 10; ii++) { cout << "weights[" << ii << "] = " << weights[ii] << endl;}
		      cout << "ratio = " << ratio << endl;
		      cout << "amp_error = " << amp_error << endl;
		      cout << "abs(amp_error) = " << abs(amp_error) << endl;
		      cout << "total_error =  " << total_error << endl;
		      }

	  } // if in_range

	  inparamFile.close();

	 } // Do if on XTAL_params and weights line with desired 's' stream extraction values

	  row += 1; // Finished reading XTAL_params, weights rows 

	} // Loop while still lines left in XTAL_params and weights, and desired maximum hasn't been reached
	  // Only break this if you want to leave this entire function 
	  
      inFile.close();


    return make_tuple(total_error, XTAL_count);

}
