// Abe Tishleman-Charny
// 24 May 2018
// The purpose of this tuple is to return the total bias and number of crystals in a given eta range with online or ideal weights.

#include "recon_amp_noclhep.cpp"

tuple<double, double, double> EC_bias(int max_rows, double ts, double EB_w[], double EE_w[], bool normalized_A, bool normalized_t0, bool ideal_weights, string weights_type, string PD, double eta_min, double eta_max, int merged_skip, bool note_exists, string note, bool plot_BH) 
{
	cout << "Time Shift = " << ts << "ns\n";

	//TH2F *outliers = new TH2F("outliers","outliers",100,0,100,100,0,100);

	// Can choose to save distribution of bias values for given eta range 
	TH1F *bias_dist = new TH1F("bias_dist","bias_dist",400,-0.3,0.3);

	// Open Merged Data file 
	stringstream merged_ss;
	//cout << "PD = " << PD << endl;
	
	//merged_ss << "data/Merged_data_" << PD << "_" << weights_type << ".txt";

	cout << "weights_type = " << weights_type << endl;

	string path_WT = weights_type; // same for ideal weights, different for online weights
	if (string(weights_type) == "online" || string(weights_type) == "Online") 
		path_WT = "PedSub0+5"; // May need to change this for different weights configurations. 

	merged_ss << "data/XTAL_Info_Full_" << PD << "_" << path_WT << ".txt";
	string merged_path = merged_ss.str();
	
	ifstream inMergedFile;
	inMergedFile.open(merged_path);

  	if (!inMergedFile) {
  	  cout << "Unable to open Merged Data file\n";
	  cout << "path: " << merged_path << endl;
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

			//if ( (eta >= eta_min ) && ( eta < eta_max) ) in_range = true;  // eta in range 
			if ( (eta >= eta_min ) && ( eta < eta_max) && (eta != 0) ) in_range = true;  // eta in range. If eta = 0, no available eta value for that crystal. 

			

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

				// Need to be careful with this cut. Only apply if justified or testing. 
				//if (bias >= -0.06)
				bias_dist->Fill(bias);

				//cout << "bias = " << bias << endl;


				// if (bias < -0.06){
				// 	// cout << "Outlier\n";
				// 	// cout << "ix = " << DOF1 << endl;
				// 	// cout << "iy = " << DOF2 << endl;
				// 	outliers->Fill(DOF1,DOF2,1);

				// }

				//  else{
				//  	outliers->Fill(DOF1,DOF2,-1);
				//  }



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




			// if(!in_range && (ID >= 872415401) && DOF3 == -1 ) outliers->Fill(DOF1,DOF2,-1);




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

	double stddev = bias_dist->GetRMS();

	ostringstream bias_dist_path, bias_dist_title, pdf_title, png_title;
	bias_dist_title << "Bias " << eta_min << " to " << eta_max << " ts = " << ts << "ns ";
	bias_dist_path << "bin/tmp/Bias_Dist_" << eta_min << "_" << eta_max << "_ts" << ts << "ns_";
	pdf_title << "bin/tmp/Bias_Dist_" << eta_min << "_" << eta_max << "_ts" << ts << "ns_";
	png_title << "bin/tmp/Bias_Dist_" << eta_min << "_" << eta_max << "_ts" << ts << "ns_";

	if (ideal_weights) bias_dist_path << weights_type << "_" << PD;
	if (!ideal_weights) bias_dist_path << "Online_" << PD;
	if (ideal_weights) pdf_title << weights_type << "_" << PD;
	if (!ideal_weights) pdf_title << "Online_" << PD;
	if (ideal_weights) png_title << weights_type << "_" << PD;
	if (!ideal_weights) png_title << "Online_" << PD;
	if (ideal_weights) bias_dist_title << weights_type << " " << PD;
	if (!ideal_weights) bias_dist_title << "Online " << PD;

	if (note_exists) bias_dist_path << "_" << note;
	if (note_exists) pdf_title << "_" << note;
	if (note_exists) png_title << "_" << note;
	//if (note_exists) bias_dist_title << " ";

	bias_dist_path << ".root";
	pdf_title << ".pdf";
	png_title << ".png";

	// Make separate option for plotting distributions? 
	TString bias_dist_path_string = bias_dist_path.str();
	TString pdf_title_string = pdf_title.str();
	TString png_title_string = png_title.str();
	TString bias_dist_title_string = bias_dist_title.str();
	//if ( (ts > -1*pow(10,-13)) && ( ts < pow(10,-13) ) ){
	if (plot_BH){
 		
		TCanvas *cc = new TCanvas("cc","cc",800,600);
		bias_dist->Draw();
		bias_dist->SetTitle(bias_dist_title_string);
		bias_dist->SaveAs(bias_dist_path_string); 
		cc->SaveAs(pdf_title_string);
		cc->SaveAs(png_title_string);
		cc->~TCanvas();
	}	

	TCanvas *cc = new TCanvas("cc","cc",800,600);
	Int_t palette[5];
    palette[0] = 41;
    palette[1] = 2;
    gStyle->SetPalette(2,palette);
	//gStyle->SetOptStat(0);
	//outliers->Draw("colz1");
	//cc->SaveAs("outliers.png");
	//cc->SaveAs("outliers.pdf");
	//gStyle->SetOptStat(1);
	cc->~TCanvas();

	//outliers->~TH2F();
	bias_dist->~TH1F();

	return make_tuple(total_bias, XTAL_count, stddev);

}
