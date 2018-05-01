// Want to try searching crystal_parameters for d1, then searching XTAL_Info for eta value.

void eta_plot(){
 
  // Plot average in red? line graph? line graph and dots?
  // Calc Average, separate scatter plot on same pad 

  const int max_rows = 100; // < 0 to read all rows 

  // Choose normalization conditions 
  bool normalized_A = true;
  bool normalized_t0 = true;

  // const int array_size = max_rows+1;
  // note: may want to try vectors instead of arrays in future

  double avg_amp[170]; // for each ieta 
  double xval[80000]; // more than max # crystals. prob better to use vector then convert to array for TGraph plot.
  double yval[80000]; // hardcoded for now
  //double data[170][360]; // 170 ieta, 360 iphi

  //int ietacounter = 0, iphicounter = 0;

  TH1F * h = new TH1F("iEta","iEta",170,-85,85);

  int valcount = 0;

  ostringstream etatitle;
  etatitle << "Average Amplitude vs. ieta"; // relies on data ordered by cmsswId
  TString etatitle_(etatitle.str());

  // Each eta has 360 phi 
  // ieta range is -85 to 85, from negative z side to positive z 

  // ieta[0] => ieta = -1 ... ieta[84] => ieta = -85 ... ieta[85] => ieta = 1 ... ieta[169] => ieta = 85
  // this is currently useful as it's the order of eta's in the current data text file. ** or may not be, need to verify that

  // Create x and y arrays 
  // Barrel: 838861313 - 838970216 inclusive
  // Endcap: 838970216 and up

  // Open File

  TString File("crystal_parameters.txt");

  ifstream inFile; // Input File stream class object  
  inFile.open(File);

  if (!inFile) {
    cout << "Unable to open file ";
    exit(1); // terminate with error
  }

// get d1, skip certain number of lines of eta values based on d1 value so don't have to read every line 

  string line; 
  double samples[10];

  int count = 0;
  //int ietacounter = 0;
  //int iphicounter = 0;  

    // Read line

    while((getline(inFile, line))) { // crystal_parameters.txt loop
      // start on zeroeth row 

      // Check row
      if (count == max_rows){
	cout << "Maximum desired lines reached." << endl;
        break;
	}

      if ((count%1000) == 0){

      cout << "Reading line " << count << endl;
      }

      stringstream s(line); // stringstream 's' operates on string 'line'
      double d1, d2, d3, d4, d5;

      // d1 = ID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta  

      if(s >> d1 >> d2 >> d3 >> d4 >> d5){ // if s extracts pieces of this type in order, run loop

        // Open XTAL_Info for eta(d1)

	if ((d1 >= 838861313) && (d1 <= 838970216)){ // Only have data for EB rn

		TString Parameters("XTAL_Info.txt");
		ifstream inparamFile; // Input File stream class object  
		inparamFile.open(Parameters); // reopen each time to start over and skipped desired number of lines 

		if (!inparamFile) {
		  cout << "Unable to open file ";
		  exit(1); // terminate with error
		}

		string param_line; 

		// Only start searching file after proper number of lines are skipped

		int skip_count = count; // skip count * number of characters in a line

		while(skip_count !=0){
		  inparamFile.ignore(1000,'\n'); // count is number of rows read before this one
		  skip_count -= 1;
		}

		bool leave = false;

		while( (getline(inparamFile, param_line)) && (leave == false)) { // read XTAL_Info.txt line

			//double param_value;
	      		double d1_, d2_, d3_, d4_, d5_;

			// d1_ = ID, d4_ = iphi, d5_ = ieta

			stringstream ss(param_line);

		        if(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_){ // if line has numbers, see if ID's match. 

				//cout.precision(17);
				//cout << "d1 = " << d1 << "\n" << endl;
				//cout << "d1_ = " << d1_ << "\n" << endl;

				if (d1 == d1_){ // can pair phi or eta value with this XTAL

				  //cout << "ID's match\n" << endl;
				  xval[valcount] = d5_; 	
				  // then make yval the amplitude which you can += and / for average or do whatever you want with 	
				  leave = true;
				  //cout << "d5_ = " << d5_ << '\n' << endl;
				  //h->Fill(d5_);

				}
		        
			}

		} 

	////////////////////////////////////////////////////////////////////////////////////////////

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

	  //double dt = alpha*beta/2.0;
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
	  int samp_number = 4; // assuming first four samples are zero (pedestal) and problem with -nan fourth sample. Also, fourth weight is zero so this sample isn't considered anyway.

	  // Samples

	  for (int k = 0; k < 10; k++){

	    samples[k] = 0.;
	    }

	  for(double j = xmin; j < xmax; j += dt){

	    samples[samp_number] = function_alphabeta->Eval(j);
	    samp_number++ ;    
	    }

	  for (int k = 0; k < 10; k++ ){

	    amp += samples[k]*w[k]; 
	    }

	  yval[valcount] = amp;
	  valcount += 1;

	  // Add phi amp value, average after going through all rows

	  // ieta_amp[ietacounter] += amp; // do 360 times for each ietacounter 

	///////////////////////////////////////////////////////////////////////////////////////

	}

    } // Do if on line with desired 's' stream extraction parameters
     

  count = count +1; 

  } // Loop while still lines left and desired maximum hasn't been reached

  inparamFile.close();
  inFile.close();

  //h->Draw();

  //for (int i = 0; i < valcount; i++){

	//cout << "xval [" << i << "] = " << xval[i] << "\n" << endl;
	//cout << "yval [" << i << "] = " << yval[i] << "\n" << endl;
	//}
  // Plot
  TGraph* gr = new TGraph(valcount,xval,yval);
  //gr->GetYaxis()->SetRangeUser(0.9,1.1);
  //gr->GetXaxis()->SetRangeUser(-85,85);
  //gr->SetTitle(etatitle_);
  gr->SetMarkerColor(1);
  gr->SetMarkerStyle(8);
  //gr->SetMarkerSize(1);
  gr->Draw("ap"); // a to plot axis, p to plot as points 

  time_t result = time(0); // save with time since epoch to avoid overwriting files

  // Save plot as png and root files.
  ostringstream oss1, oss2, oss3;
  oss1 << "bin/Canvas_" << result << ".png";
  oss2 << "bin/Canvas_" << result << ".root"; 

  TString plot_title1 = oss1.str();
  TString plot_title2 = oss2.str();

  c1->SaveAs(plot_title1);
  c1->SaveAs(plot_title2);

}
