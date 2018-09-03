// Abe Tishleman-Charny
// 5 July 2018
// The purpose of this function is to return degrees of freedom and error for either EB or EE, with error defined as (recon_amp / amp ) - 1

#include "recon_amp_noclhep.cpp"

tuple<bool, int, int, int, int, int, int, double, int, bool> DOF_error(bool plot_EE_minus, bool plot_EE_plus, int sts_row, int EB_count, int EE_count, int extra_lines, int skip_count,int max_rows, double ts, double EB_w[], double EE_w[], bool plot_EB, bool normalized_A, bool normalized_t0, bool ideal_weights, string weights_type, string PY) // tuple<returned variables' types> name(input variables)
{

	bool skip_this_line = false;

	// Want to scan one row at at time. 

	// Tuple parameters
	bool full = false; // If this tuple is running, the histogram is not full. 
	bool side_filled = false;
	int DOF1, DOF2; // probably will change to DOF1, DOF2
	double error;
	int row = sts_row;

  	// Open Files

	// XTAL_Params: (rawid, A, t0, alpha, beta) values
	// weights.txt: (rawid, desired number of weights)

	stringstream params_ss;
	params_ss << "data/XTAL_Params_" << PY << ".txt";	
	string params_path = params_ss.str();

  	ifstream inFile; // Input File stream class object  
  	inFile.open(params_ss.str()); // apply XTAL_Params to in file stream

	stringstream weights_ss;
	weights_ss << "data/" << weights_type << "_" << PY << ".txt";	
	string weights_path = weights_ss.str();

        ifstream inweightsFile;
        inweightsFile.open(weights_path); // precomputed weights 

  	if (!inFile) {
  	  cout << "Unable to open Param file\n";
  	  exit(1); // terminate with error
 	 }

  	if (!inweightsFile) {
  	  cout << "Unable to open weights file\n";
  	  exit(1); // terminate with error
 	 }

	string line, weights_line; 	  

	// Skip to current row in main loop
	
	int initial_skip = row;

	for(initial_skip; initial_skip > 0; initial_skip --){ 
		inFile.ignore(1000,'\n');
		inweightsFile.ignore(1000,'\n');
		}

	if ((plot_EB == false) && ( (plot_EE_minus) || (plot_EE_plus) )){ // if EE only
	  //cout << "Skipping to EE\n";
	  int EE_Skip = 60494;
	  // skip to first row of EE params and weights, aka skip 60494 rows.
	 
	    while(EE_Skip !=0){ // Skip 1000 characters or until new line 
	      inFile.ignore(1000,'\n'); // count is number of rows read before this one
	      inweightsFile.ignore(1000,'\n');
	      EE_Skip -= 1;
	    }

	}

	    // If only want EE+, skip EE- lines
	    if (plot_EE_plus){

	        cout << "Skipping to EE+\n";
	        //int EE_plus_Skip = 7324;
	        int EE_plus_Skip = 7200;
	  
	        while(EE_plus_Skip !=0){
		
		  inFile.ignore(1000,'\n');
	          inweightsFile.ignore(1000,'\n');
		  EE_plus_Skip -= 1;
		}		

	  }

	// Read line of (rawid, A, t0, alpha, beta) values

	// Variables that reset before going through XTAL_Params.txt
	
	//cout << "Right before checking XTAL_Params and Weights lines.\n";
	//cout << "bool(getline(inFile, line)) = " << bool(getline(inFile, line)) << endl;
	//cout << "bool(getline(inweightsFile, weights_line)) = " << bool(getline(inweightsFile, weights_line)) << endl;


	//while((getline(inFile, line))) { // XTAL_Params.txt loop
	//while((getline(inFile, line)) && (getline(inweightsFile, weights_line))) { // get line of XTAL_Params.txt and weights, loop

	  // Check that there are still lines to read 
	  if (!(getline(inFile, line)) || !(getline(inweightsFile, weights_line))){

		cout << "No lines to read in XTAL_Params.txt or weights.txt.\n";
		skip_this_line = true;
		full = true;
		return make_tuple(skip_this_line, EB_count, EE_count, extra_lines, skip_count, DOF1, DOF2, error, row, full); 

	    }

	   getline(inFile, line);
	   getline(inweightsFile, weights_line);

	   // Variables that reset each line 
	   //int ieta = 0, iphi = 0; // EB DOF
	   //int ix = 0, iy = 0; // EE DOF

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

	   stringstream s(line); // stringstream 's' operates on string 'line'
	   double d1, d2, d3, d4, d5; // d1 = ID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta   

	   if(s >> d1 >> d2 >> d3 >> d4 >> d5){ // XTAL_params row has numbers    

		// 2018 Params
		if (string(PY) == "2018"){
			if ( (d1 == 838864037) || (d1 == 838869123) || (d1 == 838874865) || (d1 == 838891641) || (d1 == 838958295) || (d1 == 838966532) ){ 
			skip_this_line = true;
			row += 1;
			cout << "Line skipped by hand.\n";
			return make_tuple(skip_this_line, EB_count, EE_count, extra_lines, skip_count, DOF1, DOF2, error, row, full);
			}
		}
		// 2017 Params
		if (string(PY) == "2017"){
			if ( (d1 == 838868019) || (d1 == 838871589) || (d1 == 838882900) || (d1 == 838882985) || (d1 == 838900809) || (d1 == 838949036) || (d1 == 838951621) || (d1 == 872436486) ){
				skip_this_line = true;
				row += 1;
				cout << "Line skipped by hand.\n";
				return make_tuple(skip_this_line, EB_count, EE_count, extra_lines, skip_count, DOF1, DOF2, error, row, full); 

			  } // These cmsswid's yield nan (not a number) weights. For now skipping them, but should investigate why nan weights are obtained from these waveforms. This could be insightful. 
		}  
		
		double weights[10] = {0.}; // reset weights for current line  
		string Parameters;
		//int skip_count = 0;

		// EB Line
		if ((d1 >= 838861313) && (d1 <= 838970216) && (plot_EB)){
			EB_count += 1;
			Parameters = "data/EB_DOF.txt";
			int skip_count = EB_count;
			//cout << "skip_count = " << skip_count << "\n";
			if (!ideal_weights){ 
				for (int i = 0; i < 10; i++) weights[i] = EB_w[i];
				}
			}

		// EE Line
		if ((d1 >= 872415401) && ( (plot_EE_minus) || (plot_EE_plus) )){
			//cout << "On EE\n";
			//if (EB_Only) break;
			EE_count += 1;
			Parameters = "data/EE_DOF.txt";
			int skip_count = EE_count;
			if (!ideal_weights){
				for (int i = 0; i < 10; i++) weights[i] = EE_w[i];
				}
			} 
	
		//cout << "Parameters = " << Parameters << "\n";
		//cout << "plot_EE = " << plot_EE << "\n";
		ifstream inparamFile; // Input File stream class object  
		inparamFile.open(Parameters); // open from beginning each time and skip desired number of lines 
		// There may be a way to just open once and not need to skip lines every time. This may be much more efficient.
		
		if ((!inparamFile) && (!plot_EE_minus) && (!plot_EE_plus) ){ 
			
			cout << "Not in Param file, not plotting EE.\n";
			full = true;
			skip_this_line = true;
			return make_tuple(skip_this_line, EB_count, EE_count, extra_lines, skip_count, DOF1, DOF2, error, row, full); 

		}// if up to EE lines but don't want EE, leave loop.

		if (!inparamFile) {
		  cout << "Unable to open Info file\n";
		  exit(1); // terminate with error
		}

		string param_line; 

		// Skip desired number of lines 

		// skip_count should be EB_count or EE_count.
		//int skip_count = ; // skip count * number of characters in a line

		skip_count += extra_lines; // extra_lines updated every line 

		while(skip_count !=0){
		  inparamFile.ignore(1000,'\n'); // count is number of rows read before this one
		  //inweightsFile.ignore(1000,'\n');
		  skip_count -= 1;
		}

		bool leave = false;
		//extra_lines = 0;

		//cout << "Right before reading EB/EE_DOF line\n";
		//cout << "bool(getline(inparamFile, param_line)) = " << bool(getline(inparamFile, param_line)) << endl;

		// Match ID's between Params and Info files, then
		// get EB, EE DOF for given ID.
		while( (getline(inparamFile, param_line)) && (leave == false)) { // read EB/EE_DOF line
	
		//while( (getline(inparamFile, param_line)) && (getline(inweightsFile, weights_line)) &&  (leave == false)) { // read EB/EE_DOF line
			//cout << "Extra_lines = " << extra_lines << "\n";

	      		double d1_, d2_, d3_, d4_, d5_, d6_;
			double w0, w1, w2, w3, w4, w5, w6, w7, w8, w9, w10;

			// EB: d1_ = ID, d4_ = iphi, d5_ = ieta
			// EE: d1_ = ID, d5_ = ix, d6_ = iy

			// w0 = CMSSWID, w1 = first weight, w2 = ... (not necessarily starting at 0ns)

                        stringstream ss(param_line);
                        stringstream ww(weights_line);

			//if (debug condition){
			  //cout << "row = " << row << endl;
			  //cout << "(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_) = " << bool(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_) << endl;
			  //cout << "(ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5) = " << bool(ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5) << endl;	
			  //debug_val += 1;
			//}


			if((ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_) && (ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5 >> w6 >> w7 >> w8 >> w9 >>w10)){ // If EB/EE_DOF.txt and weights.txt line contains doubles (if not, may have nan). If they do, see if IDs match.

				//cout.precision(17);
				//cout << "d1 = " << d1 << endl;
				//cout << "d1_ = " << d1_ << endl;
				//cout << "w0 = " << w0 << endl;

				//if (row == 4625){

				//cout << "d1 = " << d1 << endl;
				//cout << "d1_ = " << d1_ << endl;
				//cout << "w0 = " << w0 << endl;

				//}		

				//if (d1 == d1_){ // can pair DOF with XTAL, and extract correct weights 
				if ((d1 == d1_) && (d1 == w0)){ // can pair DOF with XTAL, and extract correct weights 

				  //cout << "All IDs match\n";
				  //cout << "In matching ID loop\n";				  

				  //if (d1_ == w0){
					// if here, extract weights	
				    //cout << "ID matches weights' ID\n";
					
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


				  // EB Line
				  if ((d1 >= 838861313) && (d1 <= 838970216))
				  {
				    	
				    DOF1 = d5_; // ieta
				    DOF2 = d4_; // iphi

				  }

				  // EE Line
				  if (d1 >= 872415401)
				  {
				    // if side = 1 (read all -1 rows)
				    if ( (!side_filled) && (d4_ == 1) ) side_filled = true;

				    // If want EB- and it's full, exit
				    if ((side_filled) && (plot_EE_minus)){
					cout << "Finished reading EB- lines\n"; 
					full = true;
					skip_this_line = true;
					return make_tuple(skip_this_line, EB_count, EE_count, extra_lines, skip_count, DOF1, DOF2, error, row, full);

				    }
				    // Two cases in which you want to save values
 				    if( ( (plot_EE_minus) && (!side_filled)) || ( (plot_EE_plus) && (side_filled) )){ 
				      DOF1 = d5_; // ix
				      DOF2 = d6_; // iy
				      }

				    // If want to plot EE+ but not there yet, skip line
				    if ( (plot_EE_plus) && (!side_filled) ){
					cout << "Not up to EE+.\n";
					skip_this_line = true;
					row += 1;
					return make_tuple(skip_this_line, EB_count, EE_count, extra_lines, skip_count, DOF1, DOF2, error, row, full);

					}

				  }

				  leave = true;

				}
			
				else {
				  //if(row == 4625) cout << "IDs don't match\n";
				  extra_lines += 1;
				} // keep track of number of extra lines to skip next time 

			} // If EB/EE_DOF.txt and weights.txt line contains doubles (if not, may have nan)

		} // read EB/EE_DOF line

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

	  if (ideal_weights){ratio = (recon_amp_noclhep(A, t_0, ts, alpha, beta, weights) / A ) ;} // Non-normalized A
	  if (!ideal_weights){ratio = recon_amp_noclhep(A, t_0, ts, alpha, beta, weights);} // Normalized A

	  //cout << "ratio = " << ratio << endl;

	  error = (ratio - 1);

	  //total_error += abs(amp_error);

	  //if (error == 0) cout << "recon/true - 1 = 0\n";

	  // See if things are going well 
    	  if ((row%100000) == 0){
	      cout << "row " << row << endl;
	      for (int ii = 0; ii < 10; ii++) { cout << "weights[" << ii << "] = " << weights[ii] << endl;}
	      cout << "ratio = " << ratio << endl;
	      cout << "error = " << error << endl;
              }
 
/*
	  // Fill Histograms	  

	  // EB 
	  if ((d1 >= 838861313) && (d1 <= 838970216)){ 
		//EB->Fill(ieta,iphi,ratio);
		//EBE->Fill(ieta,iphi,amp_error);
	  }

	  // EE 
	  if (d1 >= 872415401)
	      {
		//cout << "Filling Endcap\n";
	        if(!side_filled){ 
			//EE1->Fill(ix,iy,ratio);
			//EE1E->Fill(ix,iy,amp_error);
		}
	        if(side_filled){ 
			//EE2->Fill(ix,iy,ratio);
			//EE2E->Fill(ix,iy,amp_error);
		}
			
		
 	        }
*/
	   } // XTAL_params row has numbers

	//} // Loop while still lines left in XTAL_params and weights, and desired maximum hasn't been reached

	// Done Scanning row

	row += 1;

	//inparamFile.close();
	//inFile.close();

	if((row == max_rows)) full = true; //|| (finished reading XTAL_Params)) full = true;

	//cout << "Done Scanning Row.\n";
	//cout << "DOF1 = " << DOF1 << endl;
	//cout << "DOF2 = " << DOF2 << endl;
	//cout << "error = " << error << endl;

	return make_tuple(skip_this_line, EB_count, EE_count, extra_lines, skip_count, DOF1, DOF2, error, row, full);

}
