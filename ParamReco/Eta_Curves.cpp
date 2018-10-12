// Abe Tishleman-Charny
// 24 May 2018
// The purpose of this tuple is to return the total bias and number of crystals in a given eta range with online or ideal weights.

#include "recon_amp_noclhep.cpp"

tuple<double, double> EC_bias(int max_rows, double ts, double EB_w[], double EE_w[], bool normalized_A, bool normalized_t0, bool ideal_weights, string weights_type, string PY, double eta_min, double eta_max, int merged_skip, bool note_exists, string note) 
{

	cout << "Time Shift = " << ts << "ns\n";

	// Can choose to save distribution of bias values for given eta range 
	TH1F *bias_dist = new TH1F("bias_dist","bias_dist",40,-0.3,0.3);

	// Open Merged Data file 
	stringstream merged_ss;
	//merged_ss << "data/Merged_data_" << PY << "_" << weights_type << ".txt";
	merged_ss << "data/XTAL_Info_Full_" << PY << "_" << weights_type << ".txt";
	string merged_path = merged_ss.str();
	ifstream inMergedFile;
	inMergedFile.open(merged_path);

  	if (!inMergedFile) {
  	  cout << "Unable to open Merged Data file\n";
  	  exit(1); // terminate with error
 	 }

	string merged_line;

	// Initial skip, number of eta lines already read. 
	//cout << "Skipping " << merged_skip << " merged data rows..." << endl;

	//int temp_eta_skip = merged_skip;

	while(merged_skip !=0){
	  inMergedFile.ignore(1000,'\n');
	  merged_skip -= 1;
	}

	double total_bias = 0.0, XTAL_count = 0.0; // Set double because want double division later 
	int merged_row = 0;

	double min = 50., max = -50;

	while( getline(inMergedFile, merged_line) ){ // While there are merged data file rows to read 

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

			// Switch to only check_eta, include transition regions

			//if ( (check_eta) && (ID >= 872415401) ){
		
				//if ( (eta >= eta_min ) && ( eta < eta_max) ) in_range = true;

			//}

			//else if ( (!check_eta) && ((ID >= 838861313) && (ID <= 838970216)) ){ // EB only 
		

//				if (eta_max == 85){
//					if ( (DOF1 >= eta_min ) && ( DOF1 <= eta_max) ) in_range = true; // If last EB range, need to include iEta = 85 because it won't be includede in first EE range
//				}

//				else{
//					if ( (DOF1 >= eta_min ) && ( DOF1 < eta_max) ) in_range = true;
//				}
				

				//if ( (DOF1 >= eta_min ) && ( DOF1 < eta_max) ) in_range = true;

			//}

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
