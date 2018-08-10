// Abe Tishleman-Charny
// 24 May 2018
// The purpose of this function is to return the sum of the absolute values of the errors for each XTAL, where error is defined as (recon_amp / amp ) - 1

#include "recon_amp_noclhep.cpp"

tuple<double, double> total_error(int max_rows, double ts, double EB_w[], double EE_w[], bool plot_EB, bool plot_EE, bool plot_EE_minus, bool plot_EE_plus, bool normalized_A, bool normalized_t0, bool ideal_weights) 
{
	//bool test_skip = false; // If want to skip lines to test things 
	//int debug_val = 0;
	cout << "Computing Total Error for\n";
	cout << "Time Shift = " << ts << "ns\n";
	
	double total_error = 0.0;

	// Parameters
	bool side_filled = false; // First EE side unfilled at start.

  	// Open Files
  	//TString File("data/XTAL_Params.txt"); // (rawid, A, t0, alpha, beta) values
  	ifstream inFile; // Input File stream class object  
  	inFile.open("data/XTAL_Params_2018.txt"); // apply XTAL_Params to in file stream

        ifstream inweightsFile;
<<<<<<< HEAD
        //inweightsFile.open("data/NegWeights.txt"); // precomputed weights 
	inweightsFile.open("data/PedSub1+4.txt"); // precomputed weights 
=======
        inweightsFile.open("data/PedSub1+4_2018.txt"); // precomputed weights 

>>>>>>> Weights_Test

  	if (!inFile) {
  	  cout << "Unable to open Param file\n";
  	  exit(1); // terminate with error
 	 }

  	if (!inweightsFile) {
  	  cout << "Unable to open weights file\n";
  	  exit(1); // terminate with error
 	 }

	string line, weights_line; 	  

	if ((plot_EB == false) && (plot_EE == true)){ // if EE only
	  cout << "Skipping to EE\n";
	  int EE_Skip = 60494;
	  // skip to first row of EE params, aka skip 60494 rows.
	  // Might need to also do this with weights file 
	 
	    while(EE_Skip !=0){ // Skip 1000 characters or until new line 
	      inFile.ignore(1000,'\n'); // count is number of rows read before this one
	      inweightsFile.ignore(1000,'\n');
	      EE_Skip -= 1;
	    }
	
	}

	if (plot_EE_plus){
	  cout << "Skipping to EE+\n";
	  int EE_plus_Skip = 7324;
	  //int EE_plus_Skip = 7100;
	  
	  while(EE_plus_Skip !=0){
		
		inFile.ignore(1000,'\n');
	        inweightsFile.ignore(1000,'\n');
		EE_plus_Skip -= 1;
		}		

	  }

	/*if (test_skip == true){ // skip lines to test algo

	  int testing = 60490; // 494 left in EB 
	 
	    while(testing !=0){ // Skip 1000 characters or until new line 
	      inFile.ignore(1000,'\n'); // count is number of rows read before this one
	      testing -= 1;
	    }

	  }*/

	// Read line of (rawid, A, t0, alpha, beta) values

	// Variables that reset before going through XTAL_Params.txt
	int EB_count = 0, EE_count = 0, extra_lines = 0, row = 0;
	
	//cout << "Right before checking XTAL_Params and Weights lines.\n";
	//cout << "bool(getline(inFile, line)) = " << bool(getline(inFile, line)) << endl;
	//cout << "bool(getline(inweightsFile, weights_line)) = " << bool(getline(inweightsFile, weights_line)) << endl;


	double XTAL_count = 0;

	//while((getline(inFile, line))) { // XTAL_Params.txt loop
	while((getline(inFile, line)) && (getline(inweightsFile, weights_line))) { // get line of XTAL_Params.txt and weights, loop

	   // Variables that reset each line 
	   //int ieta = 0, iphi = 0; // EB DOF
	   //int ix = 0, iy = 0; // EE DOF

	   // Check row
	   if (row == max_rows){
		cout << "Maximum desired lines reached." << endl;
		break;
		}

	   if ((row%5000) == 0){
	      cout << "Reading line " << row << endl;
	      }

	   stringstream s(line); // stringstream 's' operates on string 'line'
	   double d1, d2, d3, d4, d5; // d1 = ID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta   

	   if(s >> d1 >> d2 >> d3 >> d4 >> d5){ // Do if on XTAL_params line with desired 's' stream extraction parameters	   

		// 2017 params and weights
		// if ( (d1 == 838868019) || (d1 == 838871589) || (d1 == 838882900) || (d1 == 838882985) || (d1 == 838900809) || (d1 == 838949036) || (d1 == 838951621) || (d1 == 872436486) ) continue; // These cmsswid's yield nan (not a number) weights. For now skipping them, but should investigate why nan weights are obtained from these waveforms. This could be insightful.   
		
		// 2018 params and weights 
		if ( (d1 == 838864037) || (d1 == 838869123) || (d1 == 838874865) || (d1 == 838891641) || (d1 == 838958295) || (d1 == 838966532) ) continue;

		double weights[10] = {0.}; // reset weights for current line  
		string Parameters;
		int skip_count = 0;

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
		if ((d1 >= 872415401) && (plot_EE)){
			//cout << "On EE\n";
			//if (EB_Only) break;
			EE_count += 1;
			Parameters = "data/EE_DOF.txt";
			int skip_count = EE_count;
			if (!ideal_weights){
				for (int i = 0; i < 10; i++) weights[i] = EE_w[i];
				}
			}
		//}  
	
		//cout << "Parameters = " << Parameters << "\n";
		//cout << "plot_EE = " << plot_EE << "\n";
		ifstream inparamFile; // Input File stream class object  
		inparamFile.open(Parameters); // open from beginning each time and skip desired number of lines 
		// There may be a way to just open once and not need to skip lines every time. This may be much more efficient.
		
		if ((!inparamFile) && (!plot_EE)) break; // if up to EE lines but don't want EE, leave loop.

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

			//if (row == 4625){

                        stringstream ss(param_line);
                        stringstream ww(weights_line);

			  //cout << "row = " << row << endl;
			  //cout << "(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_) = " << bool(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_) << endl;
			  //cout << "(ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5) = " << bool(ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5) << endl;	
			  //debug_val += 1;
			//}

			// Need to handle 5 or 10 weights. 

<<<<<<< HEAD
			//if((ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_) && (ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5 >> w6 >> w7 >> w8 >> w9 >> w10)){ // If EB/EE_DOF.txt and weights.txt line contains doubles (if not, may have nan). If they do, see if IDs match.
			if((ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_) && (ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5)){ // If EB/EE_DOF.txt and weights.txt line contains doubles (if not, may have nan). If they do, see if IDs match.
=======
			if((ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_) && (ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5 >> w6 >> w7 >> w8 >> w9 >> w10)){ // If EB/EE_DOF.txt and weights.txt line contains doubles (if not, may have nan). If they do, see if IDs match.
>>>>>>> Weights_Test
	
	
			//if(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_){ // if line has numbers, see if ID's match. 
			  // d5_ = ix, d6_ = iy

				//cout << "w0 = " << w0 << endl;
				//cout << "w1 = " << w1 << endl;

				//cout << "Right after checking stringstream extraction\n";
				//cout.precision(17);
				//cout << "d1 = " << d1 << endl;
				//cout << "d1_ = " << d1_ << endl;
				//cout << "w0 = " << w0 << endl;

				//if (row == 4625){

				//cout << "d1 = " << d1 << endl;
				//cout << "d1_ = " << d1_ << endl;
				//cout << "w0 = " << w0 << endl;

				//}		
				//cout.precision(17);
				//cout << "d1 = " << d1 << endl;
				//cout << "d1_ = " << d1_ << endl;
				//cout << "w0 = " << w0 << endl;
				//break;
	


				//if (d1 == d1_){ // can pair DOF with XTAL, and extract correct weights 
				if ((d1 == d1_) && (d1 == w0)){ // can pair DOF with XTAL, and extract correct weights 

				  //cout << "All IDs match\n";
				  //cout << "In matching ID loop\n";				  
				/*cout << "w1 = " << w1 << endl;
				cout << "w2 = " << w2 << endl;
				cout << "w3 = " << w3 << endl;
				cout << "w4 = " << w4 << endl;
				cout << "w5 = " << w5 << endl;
				cout << "w6 = " << w6 << endl;
				cout << "w7 = " << w7 << endl;
				cout << "w8 = " << w8 << endl;
				cout << "w9 = " << w9 << endl;
				cout << "w10 = " << w10 << endl;*/
				  //if (d1_ == w0){
					// if here, extract weights	
				    //cout << "ID matches weights' ID\n";
					
				    if (ideal_weights){
<<<<<<< HEAD

					    // Check if there are ten weights
					    //if (ww >> w1 >> w2 >> w3 >> w4 >> w5 >> w6 >> w7 >> w8 >> w9 >> w10){
						//cout << "ten weights\n";
						//weights[0] = w1;
						//weights[1] = w2;
						//weights[2] = w3;
						//weights[3] = w4;
						//weights[4] = w5;
						//weights[5] = w6;
						//weights[6] = w7;
						//weights[7] = w8;
						//weights[8] = w9;
						//weights[9] = w10;
					    //}					   
					   
					    // If not, assume five 
					   // else{
					      //cout << "five weights\n";
					      weights[0] = 0.0;
					      weights[1] = 0.0;
					      weights[2] = w1;				
					      weights[3] = w2;				
					      weights[4] = w3;				
					      weights[5] = w4;				
					      weights[6] = w5;				
					      weights[7] = 0.0;
					      weights[8] = 0.0;
					      weights[9] = 0.0;
					    //}
=======
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
>>>>>>> Weights_Test
				    }

				  //for (int l = 0; l < 10; l++)
					//{
					//cout << "weights[" << l <<"] = " << weights[l] << endl;
					//}

				  /*// EB Line
				  if ((d1 >= 838861313) && (d1 <= 838970216))
				  {
				    	
				    ieta = d5_; // ieta
				    iphi = d4_; // iphi

				  }

				  // EE Line
				  if (d1 >= 872415401)
				  {
				    // if side = 1 (read all -1 rows)
				    if ( (!side_filled) && (d4_ == 1) ) side_filled = true;
				    ix = d5_;
				    iy = d6_;
				
				  }*/

                                  // EE Line
                                  if (d1 >= 872415401)
                                  {
                                    // if side = 1, read all EE- rows, up to EE+.
                                    if ( (!side_filled) && (d4_ == 1) ) side_filled = true;

                                    // If only want EE- and read all EE- rows
                                    if ((side_filled) && (plot_EE_minus)){
                                        //full = true; 
                                        cout << "Finished EE-. Exiting.\n";
					return make_tuple(total_error, XTAL_count);			

                                    }
                                    // Two cases in which you want to save values
                                    // if( ( (plot_EE_minus) && (!side_filled)) || ( (plot_EE_plus) && (side_filled) )){
                                      //DOF1 = d5_; // ix
                                      //DOF2 = d6_; // iy
                                     // }

				  //if (side_filled){
		
					 //cout << "EE+ line\n";
					 //value += 1;
					 //cout << "value = " << value << endl;
					//}			
	
                                    // If want EE+ but not there yet, skip line
                                    //if ( (plot_EE_plus) && (!side_filled) ){

					//cout << "Skipping EE- Line.\n";
					//inFile.ignore(1000,'\n');				
					//inweightsFile.ignore(1000,'\n');

					//continue;
					//return make_tuple(total_error, XTAL_count);

                                        //}

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

	  double amp_error = (ratio - 1);
	  //cout << "amp_error = " << amp_error << "\n";
	  // add to total error 

	  //total_error += abs(amp_error);
	  total_error += amp_error;
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
	   } // Do if on XTAL_params line with desired 's' stream extraction parameters

	  row += 1;

	  } // Loop while still lines left in XTAL_params and weights, and desired maximum hasn't been reached

	  //inparamFile.close();
	  inFile.close();

	// take total error for ts and fill 1D histogram with total of abs error for each ts 

	return make_tuple(total_error, XTAL_count);
	
////////////////////
}
