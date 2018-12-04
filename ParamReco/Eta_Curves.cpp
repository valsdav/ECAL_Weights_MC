// Abe Tishleman-Charny
// 24 May 2018
// The purpose of this tuple is to return the total bias and number of crystals in a given eta range with online or ideal weights.

#include <boost/algorithm/string.hpp> // for splitting section string 

#include "recon_amp_noclhep.cpp"

tuple<double, double, double> EC_bias(int max_rows, double ts, double EB_w[], double EE_w[], bool normalized_A, bool normalized_t0, bool ideal_weights, string WC, string PD, double eta_min, double eta_max, int DOF_P_skip, bool note_exists, string note, bool plot_BH) 
{
	cout << "Time Shift = " << ts << "ns\n";
	//cout << "WC = " << WC << endl;

	//TH2F *outliers = new TH2F("outliers","outliers",100,0,100,100,0,100);

	// Can choose to save distribution of bias values for given eta range 
	TH1F *bias_dist = new TH1F("bias_dist","bias_dist",400,-0.3,0.3);

	// Open DOF_P
	stringstream DOF_P_p_ss; // ss for path 

	// Open XTAL by XTAL info to create and sample waveforms
	// Need this for all WC 
	//DOF_P_p_ss << "data/DOF_P_" << PD << "_2_1" << ".txt"; // may later make separate file to just be _1 instead of 2_1 

	ifstream inDOF_PFile;
	string DOF_P_path = "";

	// Using Ideal Weights 
	if (WC != "0" && WC != "1"){
		DOF_P_p_ss << "data/DOF_P_" << PD << "_" << WC << "_1" << ".txt"; // may later make separate file to just be _1 instead of 2_1 
		DOF_P_path = DOF_P_p_ss.str();

		//ifstream inDOF_PFile;

		inDOF_PFile.open(DOF_P_path);
	}

  	if (!inDOF_PFile) {
  	  cout << "Unable to open DOF_P file\n";
	  cout << "path: " << DOF_P_path << endl;
  	  exit(1); // terminate with error
 	 }

	// Online weights or single XTAL Ideal Weights. Only need DOF_P file. 
	if (WC == "0" || WC == "1"){
		DOF_P_p_ss << "data/DOF_P_" << PD << "_2_1.txt"; // may later make separate file to just be _1 instead of 2_1 
		DOF_P_path = DOF_P_p_ss.str();

		//ifstream inDOF_PFile;

		inDOF_PFile.open(DOF_P_path);
	}

  	if (!inDOF_PFile) {
  	  cout << "Unable to open DOF_P file\n";
	  cout << "path: " << DOF_P_path << endl;
  	  exit(1); // terminate with error
 	 }

	string DOF_P_line;
	//stringstream DOF_P_ss;

	// 
	//

	// Open DOF_P_WC
	stringstream DOF_P_WC_p_ss;

	// Need this is WC is not 0 or 1 
	// DOF_P_WC_p_ss << "data/DOF_P_" << PD << "_" << WC << ".txt";
	// string DOF_P_WC_path = DOF_P_WC_p_ss.str();
	
	ifstream inDOF_P_WC_File;

	if ((WC != "0") && (WC != "1") ){
		DOF_P_WC_p_ss << "data/DOF_P_" << PD << "_" << WC << ".txt";
		string DOF_P_WC_path = DOF_P_WC_p_ss.str();
		
		inDOF_P_WC_File.open(DOF_P_WC_path);

  	if (!inDOF_P_WC_File) {
  	  cout << "Unable to open DOF_P_WC file\n";
	  cout << "path: " << DOF_P_WC_path << endl;
  	  exit(1); // terminate with error
 	 }

	}

	string DOF_P_WC_line;

	//stringstream DOF_P_WC_ss;

	// Initial skip, number of eta lines already read. 
	//cout << "Skipping " << DOF_P_skip << " merged data rows..." << endl;

	//int temp_eta_skip = DOF_P_skip;

	while(DOF_P_skip !=0){
	  inDOF_PFile.ignore(1000,'\n');
	  DOF_P_skip -= 1;
	}

	double total_bias = 0.0, XTAL_count = 0.0; // Set double because want double division later 
	int merged_row = 0;

	//vector <double> DOF_P_vals = {d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19};
	vector <double> DOF_P_vals;
	vector <double> DOF_P_WC_vals;

	for (int i = 0; i < 23; i++){
		DOF_P_vals.push_back(0);
		DOF_P_WC_vals.push_back(0);
	}
	//double CMSSWID = DOF_P_vals[0], DOF1 = DOF_P_vals[1], DOF2 = DOF_P_vals[2], DOF3 = DOF_P_vals[3], eta = DOF_P_vals[4], A = DOF_P_vals[5], t0 = DOF_P_vals[6], alpha = DOF_P_vals[7], beta = DOF_P_vals[8];
	double CMSSWID, DOF1, DOF2, Strip, XTAL, DOF3, DOF4, eta, eta_ring, A, t0, alpha, beta; 
	vector <double> i_weights = {0,0,0,0,0,0,0,0,0,0};

	double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20, d21, d22, d23;
	string s1, ID;
	double d2_, d3_, d4_, d5_, d6_, d7_, d8_, d9_, d10_, d11_, d12_, d13_, d14_, d15_, d16_, d17_, d18_, d19_, d20_, d21_, d22_, d23_;
	double SP1 = 0, SP2 = 0, SP3 = 0, SP4 = 0; // Section Parameters from DOF_P
	double SP1_ = 0, SP2_ = 0, SP3_ = 0, SP4_ = 0; // Section Parameters from DOF_P_WC
	vector<string> split_ID; 
	vector<double> SPs = {SP1, SP2, SP3, SP4};
	vector<double> SP_s = {SP1_,SP2_,SP3_,SP4_};
	//stringstream 
	string Section; // section of current crystal in loop 
	bool section_found = false;
	bool in_range;

	double min = 50., max = -50;

	//cout << "before first loop\n";

	while( getline(inDOF_PFile, DOF_P_line) ){ // While there are merged data file rows to read 

		stringstream DOFP_s(DOF_P_line);

		if (DOFP_s >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14 >> d15 >> d16 >> d17 >> d18 >> d19 >> d20 >> d21 >> d22 >> d23){ // if 23 doubles on DOF_P line  
	
			in_range = false; 

			DOF_P_vals = {d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20, d21, d22, d23};

			CMSSWID = DOF_P_vals[0], DOF1 = DOF_P_vals[1], DOF2 = DOF_P_vals[2], Strip = DOF_P_vals[3], XTAL = DOF_P_vals[4], DOF3 = DOF_P_vals[5], DOF4 = DOF_P_vals[6], eta = DOF_P_vals[7], eta_ring = DOF_P_vals[8], A = DOF_P_vals[9], t0 = DOF_P_vals[10], alpha = DOF_P_vals[11], beta = DOF_P_vals[12]; 

			// Define section
			// if WC = 2, there are four SP's 
			// Setup for WC=2 first then add other later 

			// EB Line
			if ((CMSSWID >= 838861313) && (CMSSWID <= 838970216)) SP1 = 0;

			// EE Line
			if ((CMSSWID >= 872415401)) SP1 = 1;

			SP2 = DOF1, SP3 = DOF2, SP4 = Strip;
			SPs = {SP1, SP2, SP3, SP4};

			// for (int i = 0; i < 4; i++){
			// 	//cout << "SPs[" << i << "] = " << SPs[i] << endl; 
			// }

			//vector <double>i_weights;

			// This assumes size of DOF_P_vals and weights. 
			if(ideal_weights){
				for (int i = 0; i < DOF_P_vals.size() - 13; i++){
				i_weights[i] = (DOF_P_vals[i+13]);
				//cout << "ideal weight = " << i_weights[i] << endl;
					}
			}	


			// if WC = 0, use online weights.
			// if WC = 1, use ideal weights from DOF_P file
			// If WC != 0 or 1, need to get ideal weights from DOF_P_WC

			section_found = false;

			//cout << "before dofpwc\n";

			//int j = 0;
			//inDOF_P_WC_File.seekg(227);
			// Go back to beginning of DOF_P_WC file 
			if (WC != "0") inDOF_P_WC_File.seekg(0);
			// Could skip a certain number of sections since crystals are ordered with sections. \

			

			while( getline(inDOF_P_WC_File, DOF_P_WC_line) && (WC != "0") && (WC != "1") && (ideal_weights) && (!section_found) ){ // Get Section ideal weights if not using online or WC 1 weights, already would be obtained without this loop 
			//cout << "in dofpwc\n";
				//cout << "Reading \n";
				//cout << "ifstream::tellg(): " << inDOF_P_WC_File.tellg() << endl;
				// Assuming DOF_P_WC header line format:
				// ID	SM/iz	TT/SC	Strip	XTAL	iphi/ix	ieta/iy	eta	eta_ring	A	t0	alpha	beta	w1	w2	w3	w4	w5	w6	w7	w8	w9	w10
				// If separated by tabs, this next line will move the ifstream to the first line after the header line 
				//inDOF_P_WC_File.seekg(227); // 352? 

				stringstream DOF_P_WC_s(DOF_P_WC_line);

				//if (j == 5) break;

				if (DOF_P_WC_s >> s1 >> d2_ >> d3_ >> d4_ >> d5_ >> d6_ >> d7_ >> d8_ >> d9_ >> d10_ >> d11_ >> d12_ >> d13_ >> d14_ >> d15_ >> d16_ >> d17_ >> d18_ >> d19_ >> d20_ >> d21_ >> d22_ >> d23_){ // if 1 string, 22 doubles on DOF_P_WC line  

					DOF_P_WC_vals = {d2_, d2_, d3_, d4_, d5_, d6_, d7_, d8_, d9_, d10_, d11_, d12_, d13_, d14_, d15_, d16_, d17_, d18_, d19_, d20_, d21_, d22_, d23_}; // save d2_ twice for now because can't have multitype vector 
					// ID = s1. Get section from this 
					// SP1 =, SP2 =, ...
					// If SP's equal ones obtained from single xtal, save ideal weights, section found = true (exit loop)

					ID = s1;
					boost::split(split_ID, ID, [](char c){return c == '_';}); 
					//cout << "split_ID[0] = " << split_ID[0] << endl;

					// check if DOF_P XTAL matches section of DOF_P_WC line 

					//cout << "test\n";

					// By strip
					if (WC == "2"){

						for (int i = 0; i < 4; i++){ // 4 SP's in ID 
							SP_s[i] = stod(split_ID[i]);
							//cout << "SP_s[" << i << "] = " << SP_s[i] << endl; 
							//cout << "SPs[" << i << "] = " << SPs[i] << endl; 
						
							}
						if ( (SPs[0] == SP_s[0]) && (SPs[1] == SP_s[1]) && (SPs[2] == SP_s[2]) && (SPs[3] == SP_s[3]) ){
							//cout << "Section found\n";
							section_found = true;

							for (int i = 0; i < DOF_P_WC_vals.size() - 13; i++){
								i_weights[i] = (DOF_P_WC_vals[i+13]);
								//cout << "ideal weight[" << i << "] = " << i_weights[i] << endl;
							}

						}

					}

					// By TT/SC 
					if (WC == "3"){
						for (int i = 0; i < 3; i++){ // 3 SP's in ID 
							SP_s[i] = stod(split_ID[i]);
							//cout << "SP_s[" << i << "] = " << SP_s[i] << endl; 
							//cout << "SPs[" << i << "] = " << SPs[i] << endl; 
						
							}
						if ( (SPs[0] == SP_s[0]) && (SPs[1] == SP_s[1]) && (SPs[2] == SP_s[2]) ){
							//cout << "Section found\n";
							section_found = true;

							for (int i = 0; i < DOF_P_WC_vals.size() - 13; i++){
								i_weights[i] = (DOF_P_WC_vals[i+13]);
								//cout << "ideal weight[" << i << "] = " << i_weights[i] << endl;
							}

						}

					}

				} // if 1 string, 22 doubles on DOF_P_WC line  

				//j += 1;
				//cout << "j = " << j << endl;
				//cout << "section_found = " << section_found << endl;
				//if (j == 5) break;

			} // Get Section ideal weights if not using online or WC 1 weights, already would be obtained without this loop 


			//cout << "Outside WC loop\n";

			//if ( (eta >= eta_min ) && ( eta < eta_max) ) in_range = true;  // eta in range 

			if ( (eta >= eta_min ) && ( eta < eta_max) && (eta != 0) ) in_range = true;  // eta in range. If eta = 0, no available eta value for that crystal. 

			if(in_range){ // if in range 

				if (eta < min) min = eta;
				if (eta > max) max = eta; 

				// Set Weights 

		     		double weights[10] = {0.}; // reset weights for current line  
		
				// EB Line
				if ((CMSSWID >= 838861313) && (CMSSWID <= 838970216)){ //&& (plot_EB)){
					//EB_count += 1;
					//cout << "EB Line\n";
					if (!ideal_weights){ 
						for (int i = 0; i < 10; i++) weights[i] = EB_w[i];
						}
					}

				// EE Line
				if ((CMSSWID >= 872415401)){ //&& ( (plot_EE_minus) || (plot_EE_plus) )){
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

				for (int i = 0; i < 10; i++){
					//cout << "weights[" << i << "] = " << weights[i] << endl;
				}

				// Get Params

				//double A = pd2, t0 = pd3, alpha = pd4, beta = pd5; 

				if (normalized_A == true) A = 1.0; // amp of 1
				if (normalized_t0 == true) t0 = 125.0; // 125 ns
				      
				// Reconstruct Amplitude 

				double ratio = 0.0;

				// Check for nan weights 
				bool zero_weights = true; // assume true so one non zero value triggers false
				for (int ii = 0; ii < 10; ii++) { 
				  //cout << "weights[" << ii << "] = " << weights[ii] << endl; // Print weights option 
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

				if (ideal_weights){ratio = (recon_amp_noclhep(A, t0, ts, alpha, beta, weights) / A ) ;} // Non-normalized A
				if (!ideal_weights){ratio = recon_amp_noclhep(A, t0, ts, alpha, beta, weights);} // Normalized A	

				double bias = (ratio - 1);
				//cout << "bias = " << bias << "\n";
				// add to total error 

				total_bias += bias; 
				XTAL_count += 1;

				// Need to be careful with this cut. Only apply if justified or testing. 
				//if (bias >= -0.06)
				bias_dist->Fill(bias);

				
			} // if in range 

		} // if 23 doubles on DOF_P line 

		// Check row
		if (merged_row == max_rows){
			cout << "Maximum desired rows reached." << endl;
			break;
		}

		merged_row += 1;

	} // While there are merged data lines left to read 
	  
        //inDOF_PFile.close();

	//cout << "min eta value in range = " << min << endl;
	//cout << "max eta value in range = " << max << endl;

	double stddev = bias_dist->GetRMS();

	ostringstream bias_dist_path, bias_dist_title, pdf_title, png_title;
	bias_dist_title << "Bias " << eta_min << " to " << eta_max << " ts = " << ts << "ns ";
	bias_dist_path << "bin/tmp/Bias_Dist_" << eta_min << "_" << eta_max << "_ts" << ts << "ns_";
	pdf_title << "bin/tmp/Bias_Dist_" << eta_min << "_" << eta_max << "_ts" << ts << "ns_";
	png_title << "bin/tmp/Bias_Dist_" << eta_min << "_" << eta_max << "_ts" << ts << "ns_";

	bias_dist_path << WC << "_" << PD;
	pdf_title << WC << "_" << PD;
	png_title << WC << "_" << PD;
	bias_dist_title << WC << "_" << PD;

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
