void color_plot(){

  // Want to plot EB reconstructed amplitude as a function of iEta and iPhi 
  time_t initial = time(0); // initial time to calculate total time 

  const int max_rows = 1000; // < 0 to read all rows 

  // Choose normalization conditions 
  bool normalized_A = false;
  bool normalized_t0 = false;

  TH2F *amps = new TH2F("Reconstructed Amplitude","Reconstructed Amplitude",170,-85,85,360,0,360);

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

    // Read line

    while((getline(inFile, line))) { // crystal_parameters.txt loop
      // start on zeroeth row 

      Double_t iphi = 0, ieta = 0;
      Double_t recon_amp = 0.0;

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

	if ((d1 >= 838861313) && (d1 <= 838970216)){ // Only have data for EB rn

		TString Parameters("data/XTAL_Info.txt");
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

      				 //double iphi = 0, ieta = 0;
     				 //double recon_amp = 0.0;

				  iphi = d4_;
				  ieta = d5_;

				  //cout << "ID's match\n" << endl;
				  //xval[valcount] = d5_; 
				  //cout << "xval[" << valcount << "] = " << d5_ << "\n" << endl;	
				  // then make yval the amplitude which you can += and / for average or do whatever you want with 
				  	
				  leave = true;
				  //cout << "d5_ = " << d5_ << '\n' << endl;
				  //h->Fill(d5_);

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

	    recon_amp += samples[k]*w[k]; 
	    }

	  if (recon_amp < min){ min = recon_amp;}
	  if (recon_amp > max){ max = recon_amp;}

	  //amps->Fill(iphi,ieta,recon_amp);
	  //amps->Fill(1,1,1.0);

	  //double ratio = amp / d2;

	  //yval[valcount] = amp;
	  //yval[valcount] = ratio;

       //  */        


	  //yval[valcount] = d5; // A = d2, t_0 = d3, alpha = d4, beta = d5; 
	  //valcount += 1;

	}
	  //amps->Fill(iphi,ieta,recon_amp);
	  //amps->Fill(5,5,5);
    } // Do if on line with desired 's' stream extraction parameters
    
  cout << "iphi = " << iphi << "\n" << endl;
  cout << "ieta = " << ieta << "\n" << endl;
  cout << "recon_amp = " << recon_amp << "\n" << endl;
 
  amps->Fill(iphi,ieta,recon_amp);
  //amps->Fill(5,5,5);

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
  c1->Update();
  //c1->Divide(1,1);
  //c1->cd(1);
  amps->Draw("COLZ");
  c1->Update();

  //TLine *vertline = new TLine(1.0,0,1.0,c1_1->GetUymax()); // xmin, ymin, xmax, ymax 
  amps->GetZaxis()->SetRangeUser(min,max);

  amps->Draw("COLZ");

  cout << "min = " << min << "\n" << endl;
  cout << "max = " << max << "\n" << endl;

  //c1->SetBatch(kFALSE);

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
  oss1 << "bin/Canvas_" << result << ".pdf";
  oss2 << "bin/Canvas_" << result << ".root"; 

  TString plot_title1 = oss1.str();
  TString plot_title2 = oss2.str();

  c1->SaveAs(plot_title1);
  c1->SaveAs(plot_title2);

  time_t difference = result - initial;
  double minutes = double(difference) / 60.;

  cout << "That took " << minutes << " minutes.\n" << endl;
  
}
