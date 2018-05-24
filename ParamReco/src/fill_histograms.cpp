// Abe Tishleman-Charny
// 24 May 2018
// The purpose of this function is to plot EB and EE metrics as functions of DOF

void fill_histograms(int max_rows, double time_shift, double EB_w[], double EE_w[], bool EB_Only, bool EE_Only, bool normalized_A, bool normalized_t0)
{

	/*

	// Make sure parameters passed properly
	cout << "in time_shift_plot function.\n";
	cout << "max_rows = " << max_rows << "\n";
	cout << "time_shift = " << time_shift << "\n";

	for (int i = 0; i < 10; i++)
	{
		cout << "EB_w[" << i << "] = " << EB_w[i] << ", ";
		cout << "EE_w[" << i << "] = " << EE_w[i] << "\n";
	}

	cout << "EB_Only = " << EB_Only << "\n";
	cout << "EE_Only = " << EE_Only << "\n";
	cout << "normalized_A = " << normalized_A << "\n";
	cout << "normalized_t0 = " << normalized_t0 << "\n";

	*/

	// Parameters
	bool side_filled = false; // First EE side unfilled at start.
	
	// Initialize Histograms
 	ostringstream sss1, sss2, sss3;

	// EB
  	sss1 << "EB, " << "Time_shift = " << time_shift << " ns";
  	TString histo_title1 = sss1.str(); 
	TH2F *EB = new TH2F("EB",histo_title1,170,-85,85,360,0,360); // (ieta, iphi)

	// EE
  	sss2 << "EE, -z Side, " << "Time_shift = " << time_shift << " ns"; 
	sss3 << "EE, +z Side, " << "Time_shift = " << time_shift << " ns";
  	TString histo_title2 = sss2.str();
	TString histo_title3 = sss3.str();

	TH2F *EE1 = new TH2F("EE -",histo_title2,100,0,100,100,0,100); // (ix, iy)
  	TH2F *EE2 = new TH2F("EE +",histo_title3,100,0,100,100,0,100);

  	//TH2F *ratios1 = new TH2F("Ratios -","0ns / -7ns - Side",100,0,100,100,0,100);
  	//TH2F *ratios2 = new TH2F("Ratios +","0ns / -7ns + Side",100,0,100,100,0,100);

  	// Open File
  	TString File("data/XTAL_Params.txt"); // Contains (rawid, A, t0, alpha, beta) values
  	ifstream inFile; // Input File stream class object  
  	inFile.open(File); // apply XTAL_Params to in file stream

  	if (!inFile) {
  	  cout << "Unable to open file ";
  	  exit(1); // terminate with error
 	 }

	string line; 
	double samples[10] = {0.};
	//double samples[10];

	int row = 0;	  
	//double min = 100., max = 0.0;

	if (EE_Only == true){

	  int EE_Skip = 60494;
	  // skip to first row of EE params, aka skip 60494 rows 
	 
	    while(EE_Skip !=0){ // Skip 1000 characters or until new line 
	      inFile.ignore(1000,'\n'); // count is number of rows read before this one
	      EE_Skip -= 1;
	    }

	  }

	// Read line

	// Number rows of each type read so far
	int EB_count = 0, EE_count = 0; 

	while((getline(inFile, line))) { // XTAL_Params.txt loop

	   int ieta = 0, iphi = 0; // EB DOF
	   int ix = 0, iy = 0; // EE DOF

	   // Check row
	   if (row == max_rows){
		cout << "Maximum desired lines reached." << endl;
		break;
		}

	   if ((row%500) == 0){

	      cout << "Reading line " << row << endl;
	      }

	   stringstream s(line); // stringstream 's' operates on string 'line'
	   double d1, d2, d3, d4, d5;

	   // d1 = ID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta   

	   if(s >> d1 >> d2 >> d3 >> d4 >> d5){ // if s extracts variables of this type and order
	   
		double weights[10] = {0.}; // reset weights 

		// EB Line
		if ((d1 >= 838861313) && (d1 <= 838970216)){
			EB_count += 1;
			TString Parameters("data/EB_Info.txt");
			int skip_count = EB_count;
			//cout << "skip_count = " << skip_count << "\n";
			for (int i = 0; i < 10; i++)
			{
				weights[i] = EB_w[i];
			}

		}

		// EE Line
		if (d1 >= 872415401){

			//if (EB_Only) return;
			EE_count += 1;
			TString Parameters("data/EE_Info.txt");
			int skip_count = EE_count;
			for (int i = 0; i < 10; i++)
			{
				weights[i] = EE_w[i];
			}

		}  
			
		ifstream inparamFile; // Input File stream class object  
		inparamFile.open(Parameters); // reopen each time to start over and skipped desired number of lines 

		if (!inparamFile) {
		  cout << "Unable to open file ";
		  exit(1); // terminate with error
		}

		string param_line; 

		// Skip desired number of lines 

		// skip_count should be EB_count or EE_count.
		//int skip_count = ; // skip count * number of characters in a line

		while(skip_count !=0){
		  inparamFile.ignore(1000,'\n'); // count is number of rows read before this one
		  skip_count -= 1;
		}

		bool leave = false;

		// Match ID's between Params and Info files, then
		// get EB, EE DOF for given ID.
		while( (getline(inparamFile, param_line)) && (leave == false)) { // read EB/EE_Info line

			//double param_value;
	      		double d1_, d2_, d3_, d4_, d5_, d6_;

			// EB: d1_ = ID, d4_ = iphi, d5_ = ieta
			// EE: d1_ = ID, d5_ = ix, d6_ = iy

			stringstream ss(param_line);

			if(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_){ // if line has numbers, see if ID's match. 
			  // d5_ = ix, d6_ = iy

				//cout.precision(17);
				//cout << "d1 = " << d1 << "\n" << endl;
				//cout << "d1_ = " << d1_ << "\n" << endl;

				if (d1 == d1_){ // can pair DOF with XTAL

				  //cout << "ID's match\n" << endl;
				  	
				  // EB Line
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
				
				  }

				  leave = true;

				}
			
			}

		} 

	  Double_t A = d2, t_0 = d3, alpha = d4, beta = d5; 

	  if (normalized_A == true){

	      A = 1.0; // Expected recon. amplitude
	      }  

	  if (normalized_t0 == true){

	      t_0 = 125.0; // 125 ns
	      }

	  // Reconstruct Amplitude 
	  //recon_amp(A, t_0, time_shift, alpha, beta, weights);

	  //cout << "Recon_amp = " << recon_amp(A, t_0, time_shift, alpha, beta, weights) << "\n";
	  double ratio = recon_amp(A, t_0, time_shift, alpha, beta, weights) / A;

	  // Fill Histograms	  

	  // EB 
	  if ((d1 >= 838861313) && (d1 <= 838970216)) EB->Fill(ieta,iphi,ratio);

	  // EE 
	  if (d1 >= 872415401)
	      {
		//cout << "Filling Endcap\n";
	        if(!side_filled) EE1->Fill(ix,iy,ratio);
	        if(side_filled) EE2->Fill(ix,iy,ratio);
 	      }

	   } // Do if on line with desired 's' stream extraction parameters

	  row += 1;

	  } // Loop while still lines left and desired maximum hasn't been reached

	  inparamFile.close();
	  inFile.close();
	  
	  // Currently, I need to draw EE1 and EE2 in this file. I don't understand why.

	  //EE1->Draw("COLZ");

}
