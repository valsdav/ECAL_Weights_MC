// Abe Tishleman-Charny
// 14 October 2018
// Bias Distribution

#include "BD_Plotter.cpp"
#include "recon_amp_noclhep.cpp"

int DOF_bias(TString single_ts_title_string, bool plot_EB, bool plot_EE_minus, bool plot_EE_plus, double EB_w[], double EE_w[], int max_rows, double ts, bool normalized_A, bool normalized_t0, bool ideal_weights, string weights_type, string PY)
{

	// Create DOF and Bias Distribution histograms

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

	// Make histogram(s)

	TH2F *DOF_h = new TH2F("DOF_h",single_ts_title_string,(DOF1max - DOF1min),DOF1min,DOF1max,(DOF2max - DOF2min),DOF2min,DOF2max); // DOF Histogram

	ostringstream bias_dist_title;
	bias_dist_title << single_ts_title_string;
	bias_dist_title << "Bias Values";
	TString bias_title = bias_dist_title.str();

	TH1F *bias_dist = new TH1F("bias_dist",bias_title,100,-0.1,0.1); // bias values from DOF_h

  	// Open File

	// XTAL_Info_Full_PY_WT.txt

	stringstream Info_ss;
	Info_ss << "data/XTAL_Info_Full_" << PY << "_" << weights_type <<  ".txt";	
	string params_path = Info_ss.str();

  	ifstream inInfoFile; // Input File stream class object  
  	inInfoFile.open(Info_ss.str()); // apply XTAL_Params to in file stream

  	if (!inInfoFile) {
  	  cout << "Unable to open Crystal Info file\n";
  	  exit(1); // terminate with error
 	 }

	string InfoLine; 	  

	// Skip to current row in main loop
	
	//int initial_skip = row;

	int initial_skip = 0;

	for(initial_skip; initial_skip > 0; initial_skip --){ 
		inInfoFile.ignore(1000,'\n');
		}

	if ((plot_EB == false) && ( (plot_EE_minus) || (plot_EE_plus) )){ // if EE only
	  cout << "Skipping EB lines\n";
	  int EE_Skip = 60404; // XTAL_Info_Full_2018_PedSub0+5.txt

	  // skip to first row of EE info. 60404 lines for XTAL_Info_Full_2018_PedSub0+5.txt. Losing lines from missing eta values in DOF.txt
	 
	    while(EE_Skip !=0){ // Skip 1000 characters or until new line 
	      inInfoFile.ignore(1000,'\n'); // count is number of rows read before this one
	      EE_Skip -= 1;
	    }

	}

	// If only want EE+, skip EE- lines
	if (plot_EE_plus){

		cout << "Skipping EE- Lines\n";
		int EE_plus_Skip = 7200;

		while(EE_plus_Skip !=0){

			inInfoFile.ignore(1000,'\n');
			EE_plus_Skip -= 1;
		}		

	}

	// Tuple parameters
	bool full = false; // Start out not full  
	bool side_filled = false;
	//int DOF1 = 0, DOF2 = 0;
	double error = 0;
	int row = 0;

	while( getline(inInfoFile, InfoLine) ){ // While there are merged data file rows to read 

		//cout << "On Merged data row: " << merged_row << endl;

		stringstream s(InfoLine); // stringstream 's' operates on string 'InfoLine'

		double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19;

		if (s >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14 >> d15 >> d16 >> d17 >> d18 >> d19){ // if 19 double on line  
	
			bool plot_line = false; // Need to check if this row should be plotted based on EB EE+/-
			bool EB_line = false;
			bool EE_line = false;

			vector <double> XTAL_Params = {d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19};
			double ID = XTAL_Params[0], DOF1 = XTAL_Params[1], DOF2 = XTAL_Params[2], DOF3 = XTAL_Params[3], eta = XTAL_Params[4], A = XTAL_Params[5], t_0 = XTAL_Params[6], alpha = XTAL_Params[7], beta = XTAL_Params[8];

			// Want to plot EB 
			if (plot_EB){

				// On EB line
				if ((ID >= 838861313) && (ID <= 838970216)){
					plot_line = true;
					EB_line = true;
				}

				// Past EB lines
				if (ID >= 872415401){
					cout << "Finished reading EB lines\n";
					BD_Plotter(DOF_h, bias_dist, plot_EB, plot_EE_minus, plot_EE_plus);
					//DOF_h->SaveAs();
					//bias_dist->SaveAs();
					return 0;
				}

			}

			// Want to plot EE-
			if (plot_EE_minus){

				// Not up to EE lines yet
				if ((ID >= 838861313) && (ID <= 838970216)){
					cout << "Not up to EE- yet\n";
					plot_line = false;
				}

				// On EE- line
				if ( (ID >= 872415401) && (DOF3 == -1) ){
					//cout << "Finished reading EB lines\n";
					plot_line = true;
					EE_line = true;
				}

				// Finished reading EE- lines
				if ( (ID >= 872415401) && (DOF3 == 1) ){
					cout << "Finished reading EE- lines\n";
					BD_Plotter(DOF_h, bias_dist, plot_EB, plot_EE_minus, plot_EE_plus);
					return 0;
				}

			}

			// Want to plot EE+
			if (plot_EE_plus){

				// Not up to EE+ lines yet
				if ((ID >= 838861313) && (ID <= 838970216)){
					cout << "Not up to EE- yet\n";
					plot_line = false;
				}

				// On EE+ line
				if ( (ID >= 872415401) && (DOF3 == 1) ){
					//cout << "Finished reading EB lines\n";
					plot_line = true;
					EE_line = true;
				}

			}

			if(plot_line){ // if line should be plotted 

				vector <double>i_weights;

				// This assumes size of XTAL_Params and weights. 
				for (int i = 0; i < XTAL_Params.size() - 9; i++){
					i_weights.push_back(XTAL_Params[i+9]);
				}

				// Set Weights 
		     	double weights[10] = {0.}; // reset weights for current line  
		
				// EB Line
				if (EB_line){

					if (!ideal_weights){ 
						for (int i = 0; i < 10; i++) weights[i] = EB_w[i];
						}
				}

				// EE Line
				if (EE_line){

					if (!ideal_weights){
						for (int i = 0; i < 10; i++) weights[i] = EE_w[i];
						}
				}

				if (ideal_weights){

					for (int i = 0; i < 10; i++){
						weights[i] = i_weights[i];		
					}				

				}

				// Reconstruct Amplitude

				if (normalized_A == true) A = 1.0; // amplitude of 1
				if (normalized_t0 == true) t_0 = 125.0; // 125 ns				      

				double ratio = 0.0;

				// Check for nan weights 
				bool zero_weights = true; // assume true so one non zero value triggers false
				for (int ii = 0; ii < 10; ii++) { 
				  //cout << "weights[" << ii << "] = " << weights[ii] << endl;
				  if (weights[ii] != 0)zero_weights = false;
				}

				if (zero_weights){
				  cout << "Row " << row << endl;
				  //cout << "debug_val = " << debug_val << endl;
				  cout << "check weights.\n";
				  cout << "exiting program.\n";
				  exit(1);
				}

				// Calculate Bias 

				if (ideal_weights){ratio = (recon_amp_noclhep(A, t_0, ts, alpha, beta, weights) / A ) ;} // Non-normalized A
				if (!ideal_weights){ratio = recon_amp_noclhep(A, t_0, ts, alpha, beta, weights);} // Normalized A	

				double bias = (ratio - 1);

				// Fill histograms 
				DOF_h->Fill(DOF1,DOF2,bias);
				bias_dist->Fill(bias);

				// See if things are going well 
//			    	if ((row%1000) == 0){
//				    cout << "row " << row << endl;
//				    for (int ii = 0; ii < 10; ii++) { cout << "weights[" << ii << "] = " << weights[ii] << endl;}
//				    cout << "ratio = " << ratio << endl;
//				    cout << "bias = " << bias << endl;
//				}

			} // if line should be plotted 

		} // if 19 double on line 

		// Check row
		if (row == max_rows){
			cout << "Maximum desired rows reached." << endl;
			BD_Plotter(DOF_h, bias_dist, plot_EB, plot_EE_minus, plot_EE_plus);
			return 0;
		}

		if ((row%1000) == 0){
			cout << "Reading line " << row << endl;
		}

		row += 1;

	} // While there are XTAL Info Full lines left to read 

	cout << "Reached end of Bias_Distribution.cpp\n";
	
	BD_Plotter(DOF_h, bias_dist, plot_EB, plot_EE_minus, plot_EE_plus);
	return 0;

}
