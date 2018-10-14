// Abe Tishleman-Charny
// 24 May 2018
// BD Plot

#include "recon_amp_noclhep.cpp"

//tuple<bool, int, int, int, int, int, int, double, int, bool> DOF_error(bool plot_EE_minus, bool plot_EE_plus, int sts_row, int EB_count, int EE_count, int extra_lines, int skip_count,int max_rows, double ts, double EB_w[], double EE_w[], bool plot_EB, bool normalized_A, bool normalized_t0, bool ideal_weights, string weights_type, string PY) // tuple<returned variables' types> name(input variables)
//void DOF_bias(bool plot_EE_minus, bool plot_EE_plus, int sts_row, int EB_count, int EE_count, int extra_lines, int skip_count,int max_rows, double ts, double EB_w[], double EE_w[], bool plot_EB, bool normalized_A, bool normalized_t0, bool ideal_weights, string weights_type, string PY) // tuple<returned variables' types> name(input variables)
void DOF_bias(bool plot_EB, bool plot_EE_minus, bool plot_EE_plus, int max_rows, double ts, bool normalized_A, bool normalized_t0, bool ideal_weights, string weights_type, string PY)
{
	// Create DOF Histogram

	int DOF1min = 0, DOF1max = 0, DOF2min = 0, DOF2max = 0;

	if (plot_EB){
		DOF1min = -85;
		DOF1max = 85;
		DOF2min = 0;
		DOF2max = 360;
	}

	if (plot_EE_minus || plot_EE_plus){
		DOF1min = 0; 
		DOF1max = 100;
		DOF2min = 0;
		DOF2max = 100;
	}

	// Weights
       
	//double online[10] = {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0}; // old, pre-multifit weights 
	double online_EB[10] = {0, 0, -0.5625, -0.546875, 0.25, 0.484375, 0.375, 0, 0, 0}; 
	double online_EE[10] = {0, 0, -0.65625, -0.515625, 0.25, 0.515625, 0.40625, 0, 0, 0};
 
	// Initialize
	double EB_w[10] = {0.}, EE_w[10] = {0.};

	//for (int i = 0; i < 10; i++){
	//	EB_w[i] = 0.0;
	//	EE_w[i] = 0.0;
	//}

	if (online_weights){
		for (int i = 0; i < 10; i++){
			EB_w[i] = online_EB[i];
			EE_w[i] = online_EE[i];

		}

        }        

	/*if (presentation_weights){
		for (int i = 0; i < 10; i++){
			EB_w[i] = presentationEB[i];
			EE_w[i] = presentationEE[i];
			
		}
	}*/

	// Make histogram(s)

	// Titles
	ostringstream ts_range_title, single_ts_title;
        
	ostringstream DOF_bias_title;

	if (plot_EB){
          DOF_bias_title << "EB, ";
          }

	if (plot_EE_minus){
	DOF_bias_title << "EE-, ";	
	}
	if (plot_EE_plus){
	ts_range_title << "EE+, ";	
	single_ts_title << "EE+, ";	
	}
        

  	ts_range_title << "Bias vs. Time Shift, ";
	single_ts_title << "Bias, ts = " << ts << "ns, ";

	if (plot_EC){
		ts_range_title << "By Eta Range, ";
	
	}

	if (ideal_weights) {
		ts_range_title << "Ideal Weights";
		single_ts_title << "Ideal Weights";
		}

	if (!ideal_weights) {
		ts_range_title << "Online Weights";
		single_ts_title << "Online Weights";
		}

	/*if (max_rows == -1) {
		ts_range_title << "All XTALs";
		single_ts_title << "All XTALs";
		}*/

	else {
		ts_range_title << max_rows << " XTALS per ts";	
		single_ts_title << max_rows << " XTALS";	
		}

  	TString single_ts_title_string = single_ts_title.str(); 

	TH2F *DOF_h = new TH2F("DOF_h",single_ts_title_string,(DOF1max - DOF1min),DOF1min,DOF1max,(DOF2max - DOF2min),DOF2min,DOF2max); // single ts






	bool skip_this_line = false;

	// Want to scan one row at at time. 

	// Tuple parameters
	bool full = false; // If this tuple is running, the histogram is not full. 
	bool side_filled = false;
	int DOF1, DOF2;
	double error;
	int row = sts_row;

  	// Open Files

	// XTAL_Info_Full_PY_WT.txt

	stringstream params_ss;
	params_ss << "data/XTAL_Info_Full_" << PY << "_" << weights_type <<  ".txt";	
	string params_path = params_ss.str();

  	ifstream inInfoFile; // Input File stream class object  
  	inInfoFile.open(params_ss.str()); // apply XTAL_Params to in file stream

//	stringstream weights_ss;
//	weights_ss << "data/" << weights_type << "_" << PY << ".txt";	
//	string weights_path = weights_ss.str();

//        ifstream inweightsFile;
//        inweightsFile.open(weights_path); // precomputed weights 

  	if (!inInfoFile) {
  	  cout << "Unable to open Param file\n";
  	  exit(1); // terminate with error
 	 }

//  	if (!inweightsFile) {
//  	  cout << "Unable to open weights file\n";
//  	  exit(1); // terminate with error
// 	 }

	string InfoLine; 	  

	// Skip to current row in main loop
	
	int initial_skip = row;

	for(initial_skip; initial_skip > 0; initial_skip --){ 
		inInfoFile.ignore(1000,'\n');
		//inweightsFile.ignore(1000,'\n');
		}

	if ((plot_EB == false) && ( (plot_EE_minus) || (plot_EE_plus) )){ // if EE only
	  //cout << "Skipping to EE\n";
	  int EE_Skip = 60494;
	  // skip to first row of EE params and weights, aka skip 60494 rows.
	 
	    while(EE_Skip !=0){ // Skip 1000 characters or until new line 
	      inInfoFile.ignore(1000,'\n'); // count is number of rows read before this one
	      //inweightsFile.ignore(1000,'\n');
	      EE_Skip -= 1;
	    }

	}

	    // If only want EE+, skip EE- lines
	    if (plot_EE_plus){

	        //cout << "Skipping to EE+\n";
	        //int EE_plus_Skip = 7324;
	        int EE_plus_Skip = 7200;
	  
	        while(EE_plus_Skip !=0){
		
		  inInfoFile.ignore(1000,'\n');
	          //inweightsFile.ignore(1000,'\n');
		  EE_plus_Skip -= 1;
		}		

	  }

	  // Check that there are still lines to read 
	  if (!(getline(inInfoFile, InfoLine))){

		//cout << "No lines to read in XTAL_Params.txt or weights.txt.\n";
		cout << "No lines to read in XTAL Info file.\n";
		skip_this_line = true;
		full = true;
		return make_tuple(skip_this_line, EB_count, EE_count, extra_lines, skip_count, DOF1, DOF2, error, row, full); 

	    }

	   getline(inInfoFile, InfoLine);

	   // Check row
	   if (row == max_rows){
		cout << "Maximum desired lines reached." << endl;
		skip_this_line = true;
		full = true;
		return make_tuple(skip_this_line, EB_count, EE_count, extra_lines, skip_count, DOF1, DOF2, error, row, full); 
		}

	   //if ((row%5000) == 0){
	   if ((row%1000) == 0){
	      cout << "Reading line " << row << endl;
	      }

	   stringstream s(InfoLine); // stringstream 's' operates on string 'InfoLine'

	double total_bias = 0.0, XTAL_count = 0.0; // Set double because want double division later 
	int merged_row = 0;

	double min = 50., max = -50;

	while( getline(inMergedFile, merged_line) ){ // While there are merged data file rows to read //

		//cout << "On Merged data row: " << merged_row << endl;

		stringstream m_s(merged_line);

		double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19;

		if (m_s >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14 >> d15 >> d16 >> d17 >> d18 >> d19){ // if 19 double on line  
	
			bool in_range = false; 

			vector <double> XTAL_Params = {d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19};
		
			//double ID, DOF1, DOF2, DOF3, eta, A, t_0, alpha, beta, w1, w2, w3, w4, w5, w6, w7, w8, w9, w10;

			//vector <double> Param_Names = {ID, DOF1, DOF2, DOF3, eta, A, t_0, alpha, beta, w1, w2, w3, w4, w5, w6, w7, w8, w9, w10};

			double ID = XTAL_Params[0], DOF1 = XTAL_Params[1], DOF2 = XTAL_Params[2], DOF3 = XTAL_Params[3], eta = XTAL_Params[4], A = XTAL_Params[5], t_0 = XTAL_Params[6], alpha = XTAL_Params[7], beta = XTAL_Params[8];

			vector <double>i_weights;

			// This assumes size of XTAL_Params and weights. 
			for (int i = 0; i < XTAL_Params.size() - 9; i++){
				i_weights.push_back(XTAL_Params[i+9]);
			}

			if ( (eta >= eta_min ) && ( eta < eta_max) ) in_range = true;  // eta in range 

			if(in_range){ // if in range 

				if (eta < min) min = eta;
				if (eta > max) max = eta; 

				// Set Weights 

		     		double weights[10] = {0.}; // reset weights for current line  
		
				// EB Line
				if ((ID >= 838861313) && (ID <= 838970216)){ //&& (plot_EB)){
					//EB_count += 1;
					//cout << "EB Line\n";
					if (!ideal_weights){ 
						for (int i = 0; i < 10; i++) weights[i] = EB_w[i];
						}
					}

				// EE Line
				if ((ID >= 872415401)){ //&& ( (plot_EE_minus) || (plot_EE_plus) )){
					// EE_count += 1;
					//cout << "EE Line\n";
					if (!ideal_weights){
						for (int i = 0; i < 10; i++) weights[i] = EE_w[i];
						}
					}

				if (ideal_weights){

					for (int i = 0; i < 10; i++){
						weights[i] = i_weights[i];		
					}				

				}

				// Get Params

				//double A = pd2, t_0 = pd3, alpha = pd4, beta = pd5; 

				if (normalized_A == true) A = 1.0; // amp of 1
				if (normalized_t0 == true) t_0 = 125.0; // 125 ns
				      
				// Reconstruct Amplitude 

				double ratio = 0.0;

				// Check for nan weights 
				bool zero_weights = true; // assume true so one non zero value triggers false
				for (int ii = 0; ii < 10; ii++) { 
				  //cout << "weights[" << ii << "] = " << weights[ii] << endl;
				  if (weights[ii] != 0)zero_weights = false;
				}

				if (zero_weights){
				  cout << "Merged Data Row " << merged_row << endl;
				  //cout << "debug_val = " << debug_val << endl;
				  cout << "check weights array.\n";
				  cout << "exiting program.\n";
				  exit(1);
				}

				// Calculate Bias 

				if (ideal_weights){ratio = (recon_amp_noclhep(A, t_0, ts, alpha, beta, weights) / A ) ;} // Non-normalized A
				if (!ideal_weights){ratio = recon_amp_noclhep(A, t_0, ts, alpha, beta, weights);} // Normalized A	

				double bias = (ratio - 1);
				//cout << "bias = " << bias << "\n";
				// add to total error 

				total_bias += bias; 
				XTAL_count += 1;

				bias_dist->Fill(bias);

				//cout << "XTAL count = " << XTAL_count << endl;

				//if ((merged_row >= 21036) && (merged_row <= 21050) && (merged_row%1 == 0) && (eta_min == -1.16)){
//				if (merged_row == 21036){
//				    cout << "merged row = " << merged_row << endl;
//				    cout.precision(17);
//				    for (int ii = 0; ii < 10; ii++) { cout << "weights[" << ii << "] = " << weights[ii] << endl;}					
//				    cout << "ratio = " << ratio << endl;
//				    cout << "bias = " << bias << endl;
//				    cout << "abs(bias) = " << abs(bias) << endl;
//				    cout << "total_bias =  " << total_bias << endl;
//				}

//				// See if things are going well 
//			    	if ((merged_row%1000) == 0){
//				    cout << "merged_row " << merged_row << endl;
//				    for (int ii = 0; ii < 10; ii++) { cout << "weights[" << ii << "] = " << weights[ii] << endl;}
//				    cout << "ratio = " << ratio << endl;
//				    cout << "bias = " << bias << endl;
//				    cout << "abs(bias) = " << abs(bias) << endl;
//				    cout << "total_bias =  " << total_bias << endl;
//				}
				
			} // if in range 


//			if ( (!in_range) && ( (abs(eta_min) == 1.479) || (abs(eta_min) == 85) || (abs(eta_max) == 85) || (abs(eta_max) == 1.479) ) ){

//				if ( (ID >= 1.479) || (ID <= 85) || (ID >= 1.479) || (ID <= 85) ){
//					cout << "Missing ID = " << ID << endl;
//				}
////-84 838903809
////-85 838904680
//			}	


		} // if 6 doubles on eta line

		// Check row
		if (merged_row == max_rows){
			cout << "Maximum desired rows reached." << endl;
			break;
		}

//		if ((merged_row%30000) == 0){
//			cout << "Reading merged data row " << merged_row << endl;
//		}

		merged_row += 1;

	} // While there are merged data lines left to read 
	  
        //inMergedFile.close();

	//cout << "min eta value in range = " << min << endl;
	//cout << "max eta value in range = " << max << endl;

	ostringstream bias_dist_title;
	bias_dist_title << "bin/dist/Bias_Dist_" << eta_min << "_" << eta_max << "_ts" << ts << "ns_";
	if (ideal_weights) bias_dist_title << weights_type << "_" << PY;
	if (!ideal_weights) bias_dist_title << "Online_" << PY;

	if (note_exists) bias_dist_title << "_" << note;

	bias_dist_title << ".root";

	TString bias_dist_title_string = bias_dist_title.str();
	if ( (ts > -1*pow(10,-13)) && ( ts < pow(10,-13) ) ){
 		bias_dist->SaveAs(bias_dist_title_string); // only save 0ts distributions 
	}	
	bias_dist->~TH1F();

	return make_tuple(total_bias, XTAL_count);

}
