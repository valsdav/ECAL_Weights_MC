// Abe Tishelman-Charny
// 7 May 2018

// The purpose of this macro is to plot reconstructed amplitude for EE XTALS as functions of desired variables.

void EE_Reco(){

  time_t initial = time(0); // save with time since epoch to avoid overwriting files

  bool time_cut = true; // Run file faster for testing 
  const int max_rows = 2000; // < 0 to read all rows 

  // Choose normalization conditions 
  bool EE_Only = true; // Skip to row 60495 of crystal_parameters.txt
  bool normalized_A = true;
  bool normalized_t0 = true;
  bool side_filled = false;

  // note: may want to try vectors instead of arrays in future

  double xval1[20000]; // more than max # EE crystals. maybe better to use vector then convert to array for TGraph plot. This would allow dynamic size but would take longer to run. 
  double yval1[20000]; // hardcoded for now
  double ampval1[20000];
  int valcount1 = 0;

  double xval2[20000]; // more than max # EE crystals. maybe better to use vector then convert to array for TGraph plot. This would allow dynamic size but would take longer to run. 
  double yval2[20000]; // hardcoded for now
  double ampval2[20000];
  int valcount2 = 0;

  //ostringstream plottitle;
  //plottitle << "Average Amplitude vs. ieta"; // relies on data ordered by cmsswId
  //TString plottitle_(plottitle.str());

  // Open File

  TString File("crystal_parameters.txt");

  ifstream inFile; // Input File stream class object  
  inFile.open(File);

  if (!inFile) {
    cout << "Unable to open file ";
    exit(1); // terminate with error
  }

  // get d1, skip certain number of lines based on d1 value so don't have to read every line 

  string line; 
  double samples[10];
  int count = 0;

  // Read line

  if (EE_Only == true){

    int EE_Skip = 60494;
    // skip to first EE row, aka skip 60494 rows
 
    while(EE_Skip !=0){ // Skip 1000 characters or until new line 
      inFile.ignore(1000,'\n'); // count is number of rows read before this one
      EE_Skip -= 1;
    }

  }

  if (time_cut){
    int i = 6000;
    count += i;
    max_rows += i;
    while(i != 0){
      inFile.ignore(1000,'\n');
      i -= 1;
    }

  }

    while((getline(inFile, line))) { // crystal_parameters.txt loop

      // start on zeroeth row 

      // Check row
      if (count == max_rows){
	cout << "Maximum desired lines reached." << endl;
        break;
	}

      if ((count%500) == 0){

      cout << "Reading line " << count << endl;
      }

      stringstream s(line); // stringstream 's' operates on string 'line'

      // d1 = ID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta  
      double d1, d2, d3, d4, d5;
      //cout << "On This Line\n" << endl;

      if(s >> d1 >> d2 >> d3 >> d4 >> d5){ // if s extracts pieces of this type in order, run loop

	//if (d1 >= 872415401){ // EE only

	TString Parameters("EE_Data.txt");
	ifstream inparamFile; // Input File stream class object  
	inparamFile.open(Parameters); // reopen each time to start over and skipped desired number of lines 

	if (!inparamFile) {
	  cout << "Unable to open file ";
	  exit(1); // terminate with error
	}

	string param_line; 
	// Only start searching file after proper number of lines are skipped

	int skip_count = count; // skip count * number of characters in a line

	while(skip_count !=0){ // Skip 1000 characters or until new line 
	  inparamFile.ignore(1000,'\n'); // count is number of rows read before this one
	  skip_count -= 1;
	}

	bool leave = false;

	while( (getline(inparamFile, param_line)) && (leave == false)) { // read XTAL_Info.txt line

		// d4_ sides = +/- 1, each side has same xy coordinate system. Assuming -1 is negative z side, same side as negative eta.
		// d1_ = cmsswId, d2_ = dbID, d3_ = hashedId, d4_ = side, d5_ = ix, d6_ = iy, ... there are more 
      		double d1_, d2_, d3_, d4_, d5_, d6_;

		stringstream ss(param_line);

		if(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_){ // if line has numbers, see if ID's match. 

			//cout.precision(17);
			//cout << "d1 = " << d1 << "\n" << endl;
			//cout << "d1_ = " << d1_ << "\n" << endl;

			if (d1 == d1_){ // can pair phi or eta value with this XTAL

			  //cout << "ID's match\n" << endl;

			  // Put in either -1 side or +1 side arrays
			  if (!side_filled){

			    if (d4_ == 1){

			      side_filled = true;
 			    }

			  }

			  if (!side_filled){

			    xval1[valcount1] = d5_; 
			    yval1[valcount1] = d6_; 
			  }

			  if (side_filled){

			    xval2[valcount2] = d5_;
			    yval2[valcount2] = d6_;

			  }

			  // then make yval the amplitude which you can += and / for average or do whatever you want with 	
			  leave = true;
			  //cout << "d5_ = " << d5_ << '\n' << endl;
			  //h->Fill(d5_);

			}
		
		}

	} 

	  // Calculate Amplitude 

	  Double_t A = d2, t_0 = d3, alpha = d4, beta = d5; 

	  if (normalized_A == true){

	      A = 1.0; // Expected recon. amplitude
	      }  

	  if (normalized_t0 == true){

	      t_0 = 125.0; // 125 ns
	      }

	  TString *name = new TString("function_alphabeta");
	  TString *formula = new TString("( (1 + (x-[1]) / ([2]*[3]) ) > 0.0)*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + ((1 + (x-[1]) / ([2]*[3]) <= 0.0 ))*(0)");

	  double dt = 25;
	  //double xmin = (-1.0)*alpha*beta + t_0 + dt; // time of first non-imaginary value + dt
	  double xmin = t_0 - dt;
	  double xmax = t_0 + 4*dt;

	  TF1 *function_alphabeta = new TF1(*name,*formula,xmin,xmax);

	  function_alphabeta->SetParameter (0, A);    
	  function_alphabeta->SetParameter (1, t_0);   
	  function_alphabeta->SetParameter (2, alpha);  
	  function_alphabeta->SetParameter (3, beta);  

	  double amp = 0.;

	  // weights 
	  double w[10] = {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0}; // ECAL weights 
	  int samp_number = 4; // assuming first three samples (0, 1, 2) are zero (pedestal), also currently have problem with -nan fourth (3) sample. However, fourth weight is zero so this sample isn't considered anyway. Need to consider this in the future if the fourth weight is non-zero.

	  // Note also final weight is 0 

	  // Samples

	  for (int k = 0; k < 10; k++){

	    samples[k] = 0.;
	    }

	  for(double j = xmin; j <= xmax; j += dt){ // use xmax as last sample even though 10th cms weight is 0 

	    samples[samp_number] = function_alphabeta->Eval(j);
	    //cout << "samples[" << samp_number << "] = " << samples[samp_number] << "\n" << endl;
	    samp_number++;    
	    }

	  for (int k = 0; k < 10; k++ ){

	    amp += samples[k]*w[k]; 
	    }

	  //cout << "amp = " << amp << "\n" << endl;
	  if (!side_filled){
	    ampval1[valcount1] = amp;
	    valcount1 += 1;
	  }

	  if (side_filled){
	    ampval2[valcount2] = amp;
	    valcount2 += 1;
	  }

	//}

    } // Do if on line with desired 's' stream extraction parameters
     

  count = count +1; 

  } // Loop while still lines left and desired maximum hasn't been reached

  inparamFile.close();
  inFile.close();

  cout << "valcount1 = " << valcount1 << "\n" << endl;
  cout << "valcount2 = " << valcount2 << "\n" << endl;

/*
  bool reached_zero = false;

  for (int i = 0; i < 170; i++){

      if (i == 85){

	  reached_zero = true;
	  
	}

      ieta_vals[i] = (-85 + i + reached_zero);
      //current_eta += 1; 
    }

  // Want to create average array from vals.
  //int zero_vals = 0;
  int value_counter[170] = {0};

  reached_zero = false;
	
  for (int i = 0; i < 170; i++){

      if (i == 85){

	  reached_zero = true;
	  
	}

    for (int a = 0; a < valcount; a++){ // number of amplitudes 

      if ( (xval[a] == (-85 + i + int(reached_zero))) && (yval[a] != 0) ) {
	    //cout << "in loop\n" << endl;
	    avg_amp[i] += yval[a]; 
	    value_counter[i] += 1; 
	    //cout << "value_counter[" << i << "] = " << value_counter[i] << "\n" << endl;
            
	  }
	  //cout << "value_counter[" << i << "] = " << value_counter[i] << "\n" << endl;
	  //if (int(yval[a]) == 0){

	   // zero_vals += 1;
	  //}


  } // values

  if (value_counter[i] != 0){

      avg_amp[i] /= value_counter[i];
      cout << "avg_amp[" << i << "] = " << avg_amp[i] << "\n" << endl;
    }

  } // etas

*/


  //zero_vals /= valcount;

  //cout << "zero_vals = " << zero_vals << "\n" << endl;

  /*for ( int k = 84; k < 85; k++){//k < 170; k++){
      cout << "value_counter[" << k << "] = " << value_counter[k] << "\n" << endl;
      cout << "ieta_vals[" << k << "] = " << ieta_vals[k] << "\n" << endl;
      cout << "avg_amp[" << k << "] = " << avg_amp[k] << "\n" << endl;
    }*/

  /*for ( int k = 0; k < 30; k++){//k < 170; k++){
      cout << "value_counter[" << k << "] = " << value_counter[k] << "\n" << endl;
      cout << "ieta_vals[" << k << "] = " << ieta_vals[k] << "\n" << endl;
      cout << "avg_amp[" << k << "] = " << avg_amp[k] << "\n" << endl;
    }*/

  TCanvas *c1 = new TCanvas("c1","c1",800,600);
  gStyle->SetPalette(1);
  c1->Divide(2,1);

  /*for (int i = 0; i < max_rows; i++){

    cout << "xval[" << i << "] = " << xval[i] << "\n" << endl;
    cout << "yval[" << i << "] = " << yval[i] << "\n" << endl;
    cout << "ampval[" << i << "] = " << ampval[i] << "\n" << endl;

  }*/

  TGraph2D* gr1 = new TGraph2D(valcount1,xval1,yval1,ampval1);
  gr1->SetName("side_-1");
  gr1->SetTitle("side -1");
  gr1->GetXaxis()->SetTitle("ix");
  gr1->GetYaxis()->SetTitle("iy");
  gr1->GetZaxis()->SetTitle("Recon. Amp.");
  gr1->SetAxisRange(0,1,"Z");

  TGraph2D* gr2 = new TGraph2D(valcount2,xval2,yval2,ampval2);
  gr2->SetName("side_+1");
  gr2->SetTitle("side +1");
  gr2->GetXaxis()->SetTitle("ix");
  gr2->GetYaxis()->SetTitle("iy");
  gr2->GetZaxis()->SetTitle("Recon. Amp.");

  c1->SetBatch(kTRUE); // Don't show graphical display 

  c1->cd(1);
  gr1->Draw("colz");
  //gr1->Draw("surf1");

  c1->cd(2);
  gr2->Draw("colz");
  //gr2->Draw("surf1");

  c1->SetBatch(kFALSE); // Show graphical display 
  c1->Draw();

  time_t result = time(0); // save with time since epoch to avoid overwriting files

  // Save plot as png and root files.
  ostringstream oss1, oss2, oss3;
  oss1 << "bin/Canvas_" << result << ".png";
  oss2 << "bin/Canvas_" << result << ".root"; 

  TString plot_title1 = oss1.str();
  TString plot_title2 = oss2.str();

  c1->SaveAs(plot_title1);
  c1->SaveAs(plot_title2);

  time_t difference = result - initial;
  double minutes = double(difference) / 60.;

  cout << "That took " << minutes << " minutes.\n" << endl;

}
