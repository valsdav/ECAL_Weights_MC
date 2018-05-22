void color_plot(){

  // Want to plot EB reconstructed amplitude as a function of iEta and iPhi 
  time_t initial = time(0); // initial time to calculate total time 

  const int max_rows = -1; // < 0 to read all rows 

  double time_shift = +7.0; // Positive/Negative: shift waveform to Left/Right

  // Set conditions 
  bool EE_Only = true; // Skip to row 60495 of crystal_parameters.txt
  bool normalized_A = false;
  bool normalized_t0 = false;
  bool side_filled = false;

  ostringstream sss1, sss2;
  sss1 << "Recon Amp / Peak Samp, - side," << " time_shift = " << time_shift << "ns"; 
  sss2 << "Recon Amp / Peak Samp, + side," << " time_shift = " << time_shift << "ns"; 
  TString histo_title1 = sss1.str();
  TString histo_title2 = sss2.str();

  TH2F *amps1 = new TH2F("-",histo_title1,100,0,100,100,0,100);
  TH2F *amps2 = new TH2F("+",histo_title2,100,0,100,100,0,100);

  // Fill histo with (iEta, iPhi, reconamp)

  // Each eta has 360 phi 
  // ieta range is -85 to 85, from negative z side to positive z 

  // ieta[0] => ieta = -1 ... ieta[84] => ieta = -85 ... ieta[85] => ieta = 1 ... ieta[169] => ieta = 85
  // this is currently useful as it's the order of eta's in the current data text file. ** or may not be, need to verify that

  // Create x and y arrays 
  // Barrel: 838861313 - 838970216 inclusive
  // Endcap: 838970216 and up

  // Open File

  TString File("data/crystal_parameters.txt");

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
  
  double min = 100., max = 0.0;

  if (EE_Only == true){

    int EE_Skip = 60494;
    // skip to first EE row, aka skip 60494 rows
 
    while(EE_Skip !=0){ // Skip 1000 characters or until new line 
      inFile.ignore(1000,'\n'); // count is number of rows read before this one
      EE_Skip -= 1;
    }

  }

    // Read line

    while((getline(inFile, line))) { // crystal_parameters.txt loop
      // start on zeroeth row 

      Double_t iphi = 0, ieta = 0;
      Double_t recon_amp = 0.0;
      int ix = 0, iy = 0; // EE XTAL position indexes 

      // Check row
      if (count == max_rows){
	cout << "Maximum desired lines reached." << endl;
        break;
	}

      if ((count%500) == 0){

      cout << "Reading line " << count << endl;
      }

      stringstream s(line); // stringstream 's' operates on string 'line'
      double d1, d2, d3, d4, d5;

      // d1 = ID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta  

      if(s >> d1 >> d2 >> d3 >> d4 >> d5){ // if s extracts pieces of this type in order, run loop

        // Open XTAL_Info for eta(d1)

	//if ((d1 >= 838861313) && (d1 <= 838970216)){ // Only have data for EB rn
	  if (d1 >= 872415401){ // EE  

		//TString Parameters("data/XTAL_Info.txt");
		TString Parameters("data/EE_Data.txt");
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
	      		double d1_, d2_, d3_, d4_, d5_, d6_;

			// d1_ = ID, d4_ = iphi, d5_ = ieta, Bigger data file 
			// d5_ = ix, d6_ = iy, EE Data

			stringstream ss(param_line);

		        if(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_){ // if line has numbers, see if ID's match. 
			  // d5_ = ix, d6_ = iy

				//cout.precision(17);
				//cout << "d1 = " << d1 << "\n" << endl;
				//cout << "d1_ = " << d1_ << "\n" << endl;

				if (d1 == d1_){ // can pair phi or eta value with this XTAL

				  // Check if finished filling first endcap
				  if (!side_filled){

				    if (d4_ == 1){ // if side = 1 (read all -1 rows)

				      side_filled = true;
	 			    }

				  }

				  ix = d5_; // ix
				  iy = d6_; // iy

				  //cout << "ID's match\n" << endl;
				  //xval[valcount] = d5_; 
				  //cout << "xval[" << valcount << "] = " << d5_ << "\n" << endl;	
				  // then make yval the amplitude which you can += and / for average or do whatever you want with 
				  	
				  leave = true;

				}
		        
			}

		} 

	  // Calculate Amplitude 

          // /*

	  Double_t A = d2, t_0 = d3, alpha = d4, beta = d5; 

	  if (normalized_A == true){

	      A = 1.0; // Expected recon. amplitude
	      }  

	  if (normalized_t0 == true){

	      t_0 = 125.0; // 125 ns
	      }

	  // introduce time shift in formula. I guess just set t0 -> t0 + time_shift
	  // time_shift

	  TString *name = new TString("function_alphabeta");
	  TString *formula = new TString("( (1 + (x-[1]) / ([2]*[3]) ) > 0.0)*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + ((1 + (x-[1]) / ([2]*[3]) <= 0.0 ))*(0)");

	  //double dt = alpha*beta/2.0;
	  //double xmin = (-1.0)*alpha*beta + t_0 + dt; // time of first non-imaginary value + dt
	  //double xmin = t_0 - dt;
	  //double xmax = t_0 + 4*dt;
	  double xmin = 100.; // Start Sampling at 100ns
	  double xmax = 250.; // End Sampling at 250ns 
	  double dt = 25;

	  TF1 *function_alphabeta = new TF1(*name,*formula,xmin,xmax);

	  function_alphabeta->SetParameter (0, A);    
	  function_alphabeta->SetParameter (1, t_0 + time_shift); // time shift here    
	  function_alphabeta->SetParameter (2, alpha);  
	  function_alphabeta->SetParameter (3, beta);  

	  // weights 
	  double w[10] = {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0}; // EB weights 
	  int samp_number = 4; // assuming first four samples are zero (pedestal) and problem with -nan fourth sample. Also, fourth weight is zero so this sample isn't considered anyway.

	  // Initialize Samples

	  for (int k = 0; k < 10; k++){

	    samples[k] = 0.;
	    }

	  // Extract Samples From Waveform
	  for(double j = xmin; j < xmax; j += dt){

	    samples[samp_number] = function_alphabeta->Eval(j);
	    samp_number++ ;    
	    }

	  // Calculate Amplitude
	  for (int k = 0; k < 10; k++ ){

	    recon_amp += samples[k]*w[k]; 
	    }

	  //double ratio = recon_amp / samples[5];
	  double ratio = recon_amp / d2;
	  //cout << "ratio = " << ratio << "\n" << endl;

	  if (ratio < min){ min = ratio;}
	  if (ratio > max){ max = ratio;}

	  //amps->Fill(iphi,ieta,recon_amp);
	  //amps->Fill(1,1,1.0);

          //  */        
	  if (!side_filled){ amps1->Fill(ix,iy,ratio); }
	  if (side_filled){ amps2->Fill(ix,iy,ratio); }

  	  //amps1->Fill(ieta,iphi,ratio);

	  //yval[valcount] = d5; // A = d2, t_0 = d3, alpha = d4, beta = d5; 
	  //valcount += 1;

	}
	  //amps->Fill(iphi,ieta,recon_amp);
	  //amps->Fill(5,5,5);
    } // Do if on line with desired 's' stream extraction parameters
    
  //cout << "ix = " << ix << "\n" << endl;
  //cout << "iy = " << iy << "\n" << endl;
  //cout << "recon_amp = " << recon_amp << "\n" << endl;

  count = count + 1; 

  } // Loop while still lines left and desired maximum hasn't been reached

  inparamFile.close();
  inFile.close();

  //cout << "valcount = " << valcount << "\n" << endl;
  //int current_eta = -85;

  // Create ieta_vals array to plot avg amp vs ieta_vals

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

  // Plot

  //TMultiGraph *mg = new TMultiGraph();
  //mg->Update();
  //mg->SetTitle("Reconstructed Amplitude vs. iEta; iEta; Recon. Amp."); // Don't know why this isn't working 
  //mg->SetTitle("Raw Amp vs. iEta");

  //TGraph* gr = new TGraph(valcount,xval,yval);
  //TGraph* avg = new TGraph(170,ieta_vals,avg_amp);
  //gr->GetYaxis()->SetRangeUser(0.9,1.1);
  //gr->GetXaxis()->SetRangeUser(-85,85);
  //gr->SetTitle(etatitle_);
  //gr->SetMarkerColor(1); // Black
  //gr->SetMarkerStyle(1);

  //avg->SetMarkerStyle(7);  // marker customization is for scatter plots
  //avg->SetMarkerColor(4); // line ' ' for line plots 
  //avg->SetLineColor(2);
  //avg->SetLineStyle(9);
  //gr->SetMarkerSize(1);

  //mg->Add(horzline);
  //mg->Add(gr,"AP"); // scatter plot, draw axis where scatter plot data is 
  //mg->Add(avg,"P"); // line plot 

  TCanvas *c1 = new TCanvas("c1","c1",800,600);

  c1->SetBatch(kFALSE);
  amps1->Draw();
  c1->Update();

  //amps1->GetZaxis()->SetRangeUser(min,max);
  amps1->GetZaxis()->SetRangeUser(0.95,1.05);
  amps1->Draw("COLZ");

  cout << "min = " << min << "\n" << endl;
  cout << "max = " << max << "\n" << endl;

  TCanvas *c2 = new TCanvas("c2","c2",800,600);

  c2->SetBatch(kFALSE);
  c2->cd();
  amps2->Draw();
  c2->Update();
 
  amps2->GetZaxis()->SetRangeUser(0.99,1.02);
  amps2->Draw("COLZ");

  //TLegend *legend = new TLegend(0.1,0.7,0.48,0.9);
  //legend->SetHeader("Legend","C"); // option "C" allows to center the header
  //legend->AddEntry(h1,"Histogram filled with random numbers","f");
  //legend->AddEntry("f1","Function abs(#frac{sin(x)}{x})","l");
  //legend->AddEntry("gr","Graph with error bars","lep");
  //legend->AddEntry(gr,"Data","p");
  //legend->AddEntry("avg","Average","l");
  //legend->AddEntry("fitfunc","Fit","l");
  //gStyle->SetOptStat(kTRUE);
  //legend->Draw();

  //gStyle->SetOptStat(kFALSE);
  //mg->Draw();
  
  //c1->Update();
  //TLine *horzline = new TLine(c1->GetUxmin,1.0,c1->GetUxmax,1.0); // xmin, ymin, xmax, ymax 
  //TLine *horzline = new TLine(-85,1.0,85,1.0); // xmin, ymin, xmax, ymax 
  //horzline->SetLineColor(2);
  //horzline->SetLineStyle(9);
  //horzline->Draw();

  //c1->BuildLegend();
  // TGraphPolar for phi plots 

  time_t result = time(0); // save with time since epoch to avoid overwriting files

  // Save plot as png and root files.
  ostringstream oss1, oss2, oss3;
  oss1 << "bin/Canvas_" << result << "ts_" << time_shift << ".pdf";
  oss2 << "bin/Canvas_" << result << "ts_" << time_shift << ".root"; 

  TString plot_title1 = oss1.str();
  TString plot_title2 = oss2.str();

  c1->SaveAs(plot_title1);
  c1->SaveAs(plot_title2);

  time_t difference = result - initial;
  double minutes = double(difference) / 60.;

  cout << "That took " << minutes << " minutes.\n" << endl;
  
}
