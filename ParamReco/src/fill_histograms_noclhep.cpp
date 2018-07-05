// Abe Tishleman-Charny
// 24 May 2018
// The purpose of this function is to plot EB and EE metrics as functions of DOF

#include "recon_amp_noclhep.cpp"

double fill_histograms(int max_rows, double ts, double EB_w[], double EE_w[], bool Fill_EB, bool Fill_EE, bool normalized_A, bool normalized_t0, bool ideal_weights)
{
	
	cout << "Time Shift = " << ts << "ns\n";
	bool test_skip = false; // If want to skip lines to test things 

	int debug_val = 0;
	
	double total_error = 0.0; // reset total error for given ts

	// Parameters
	bool side_filled = false; // First EE side unfilled at start.
	
	// Initialize Histograms
 	ostringstream sss1, sss2, sss3;
	ostringstream sss4, sss5, sss6;

	sss4 << "EB Error, ts = " << ts << " ns";
	sss5 << "EE- Error, ts = " << ts << " ns";
	sss6 << "EE+ Error, ts = " << ts << " ns";

	TString EBerror = sss4.str();
	TString EEerror1 = sss5.str();
	TString EEerror2 = sss6.str();

	// EB
  	sss1 << "EB, " << "ts = " << ts << " ns";
  	TString histo_title1 = sss1.str(); 
	//TH2F *EB = new TH2F("EB",histo_title1,170,-85,85,360,0,360); // (ieta, iphi)
	//TH2F *EBE = new TH2F("EB Error",EBerror,170,-85,85,360,0,360); // EB error (amount off from perfectly accurate reconstruction)

	// EE
  	sss2 << "EE, -z Side, " << "ts = " << ts << " ns"; 
	sss3 << "EE, +z Side, " << "ts = " << ts << " ns";
  	TString histo_title2 = sss2.str();
	TString histo_title3 = sss3.str();

	//TH2F *EE1 = new TH2F("EE -",histo_title2,100,0,100,100,0,100); // (ix, iy)
  	//TH2F *EE2 = new TH2F("EE +",histo_title3,100,0,100,100,0,100);
	//TH2F *EE1E = new TH2F("EE - Error",EEerror1,170,-85,85,360,0,360); // error
	//TH2F *EE2E = new TH2F("EE + Error",EEerror2,170,-85,85,360,0,360); // error 

  	// Open File
  	TString File("data/XTAL_Params.txt"); // Contains (rawid, A, t0, alpha, beta) values
  	ifstream inFile; // Input File stream class object  
  	inFile.open(File); // apply XTAL_Params to in file stream

        ifstream inweightsFile;
        inweightsFile.open("weights.txt");

	string weights_line;

  	if (!inFile) {
  	  cout << "Unable to open Param file\n";
  	  exit(1); // terminate with error
 	 }

	string line; 
	double samples[10] = {0.};
	//double samples[10];

	int row = 0;	  
	//double min = 100., max = 0.0;

	if ((Fill_EB == false) && (Fill_EE == true)){ // if EE only

	  int EE_Skip = 60494;
	  // skip to first row of EE params, aka skip 60494 rows 
	 
	    while(EE_Skip !=0){ // Skip 1000 characters or until new line 
	      inFile.ignore(1000,'\n'); // count is number of rows read before this one
	      EE_Skip -= 1;
	    }

	  }

	//cout << "Before skip\n";

	if (test_skip == true){ // skip lines to test algo

	  int testing = 60490; // 494 left in EB 
	 
	    while(testing !=0){ // Skip 1000 characters or until new line 
	      inFile.ignore(1000,'\n'); // count is number of rows read before this one
	      testing -= 1;
	    }

	  }

	//cout << "After skip\n";

	// Read line

	// Number rows of each type read so far
	int EB_count = 0, EE_count = 0, extra_lines = 0;

	//while((getline(inFile, line))) { // XTAL_Params.txt loop
	while((getline(inFile, line)) && (getline(inweightsFile, weights_line))) { // XTAL_Params.txt and weights loop


	   int ieta = 0, iphi = 0; // EB DOF
	   int ix = 0, iy = 0; // EE DOF

	   // Check row
	   if (row == max_rows){
		cout << "Maximum desired lines reached." << endl;
		break;
		}

	   if ((row%5000) == 0){

	      cout << "Reading line " << row << endl;
	      }

	   stringstream s(line); // stringstream 's' operates on string 'line'
	   double d1, d2, d3, d4, d5;

	   // d1 = ID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta   

	   if(s >> d1 >> d2 >> d3 >> d4 >> d5){ // if s extracts variables of this type and order
	   

		if ( (d1 == 838868019) || (d1 == 838871589) || (d1 == 838882900) || (d1 == 838882985) || (d1 == 838900809) || (d1 == 838949036) || (d1 == 838951621) ) { continue; } // These cmsswid's yield nan weights. Currently removing them from list, but should investigate why nan weights are obtained from waveform. This could be insightful.   
		
double weights[10] = {0.}; // reset weights 
		string Parameters;
		int skip_count = 0;

		// EB Line
		if ((d1 >= 838861313) && (d1 <= 838970216) && (Fill_EB)){
			EB_count += 1;
			//TString Parameters("data/EB_Info.txt");
			Parameters = "data/EB_Info.txt";
			int skip_count = EB_count;
			//cout << "skip_count = " << skip_count << "\n";
			//for (int i = 0; i < 10; i++)
			//{
			//	weights[i] = EB_w[i];
			//}

		}

		// EE Line
		if ((d1 >= 872415401) && (Fill_EE)){
			//cout << "On EE\n";
			//if (EB_Only) break;
			EE_count += 1;
			//TString Parameters("data/EE_Info.txt");
			Parameters = "data/EE_Info.txt";
			int skip_count = EE_count;
			//for (int i = 0; i < 10; i++)
			//{
			//	weights[i] = EE_w[i];
			//}

		}  
	
		//cout << "Parameters = " << Parameters << "\n";
		//cout << "Fill_EE = " << Fill_EE << "\n";
		ifstream inparamFile; // Input File stream class object  
		inparamFile.open(Parameters); // reopen each time to start over and skipped desired number of lines 
		
		if ((!inparamFile) && (!Fill_EE)) break; // if up to EE lines but don't want EE, leave loop.

		if (!inparamFile) {
		  cout << "Unable to open Info file\n";
		  exit(1); // terminate with error
		}

		string param_line; 

		// Skip desired number of lines 

		// skip_count should be EB_count or EE_count.
		//int skip_count = ; // skip count * number of characters in a line

		skip_count += extra_lines;
		
		//if (row%10 == 0){ 
		//  cout << "Row " << row << endl;
		//  cout << "extra_lines = " << extra_lines << endl;
		//}

		while(skip_count !=0){
		  inparamFile.ignore(1000,'\n'); // count is number of rows read before this one
		  //inweightsFile.ignore(1000,'\n');
		  skip_count -= 1;
		}

		bool leave = false;
		//extra_lines = 0;

		// Match ID's between Params and Info files, then
		// get EB, EE DOF for given ID.
		while( (getline(inparamFile, param_line)) && (leave == false)) { // read EB/EE_Info line
	
		//while( (getline(inparamFile, param_line)) && (getline(inweightsFile, weights_line)) &&  (leave == false)) { // read EB/EE_Info line
			//cout << "Extra_lines = " << extra_lines << "\n";


			//if ( (d1 == 838868019) || (d1 == 838868019) || (d1 == 838868019) || (d1 == 838868019) || (d1 == 838868019) || (d1 == 838868019) || (d1 == 838868019) ) { break; } // These cmsswid's yield nan weights. Currently removing them from list  

			//double param_value;
	      		double d1_, d2_, d3_, d4_, d5_, d6_;
			double w0, w1, w2, w3, w4, w5, w6;

			stringstream ss(param_line);
			stringstream ww(weights_line);
			// EB: d1_ = ID, d4_ = iphi, d5_ = ieta
			// EE: d1_ = ID, d5_ = ix, d6_ = iy
			//if (row == 4625){

			  //cout << "inside read EB/EE info line\n";
			  //cout << "(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_) = " << bool(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_) << endl;
			  //cout << "(ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5) = " << bool(ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5) << endl;	
			  //debug_val += 1;
			//}

			if((ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_) && (ww >> w0 >> w1 >> w2 >> w3 >> w4 >> w5)){ // if line has numbers, see if ID's match. 


			//if(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_ >> d6_){ // if line has numbers, see if ID's match. 
			  // d5_ = ix, d6_ = iy

				//cout << "w0 = " << w0 << endl;
				//cout << "w1 = " << w1 << endl;

				//cout << "Right after checking stringstream extraction\n";
				cout.precision(17);
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
			
				else {
				  if(row == 4625) cout << "IDs don't match\n";
				  extra_lines += 1;
				} // keep track of number of extra lines to skip next time 

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
	  //recon_amp(A, t_0, ts, alpha, beta, weights);

	  //cout << "Recon_amp = " << recon_amp(A, t_0, ts, alpha, beta, weights,ideal_weights) << "\n";
	  double ratio = 0.0;

	  // Want to already have weights read from text file here.
	  // Then call recon_amp with read weights passed 

	  //bool zero_weights = true; // assume true so one non zero value triggers false
	  //for (int ii = 0; ii < 10; ii++) { 
	    //cout << "weights[" << ii << "] = " << weights[ii] << endl;
	    //if (weights[ii] != 0)zero_weights = false;
	  //}

	  //if (zero_weights){

	    //cout << "row " << row << endl;
	    //cout << "debug_val = " << debug_val << endl;
	    //cout << "set of weights is all zeros.\n";
	    //cout << "exiting program.\n";
	    //exit(1);

	  //}

	  if (!ideal_weights){ratio = recon_amp(A, t_0, ts, alpha, beta, weights, ideal_weights);} // Normalized A
	  if (ideal_weights){ratio = (recon_amp(A, t_0, ts, alpha, beta, weights, ideal_weights) / A ) ;} // Non-normalized A

	  //cout << "ratio = " << ratio << endl;

	  double amp_error = (ratio - 1);
	  //cout << "amp_error = " << amp_error << "\n";
	
	  // add to total error 

	  total_error += abs(amp_error);

    	  if ((row%10000) == 0){
	      cout << "row " << row << endl;
	      for (int ii = 0; ii < 10; ii++) { cout << "weights[" << ii << "] = " << weights[ii] << endl;}
	      cout << "ratio = " << ratio << endl;
	      cout << "total_error =  " << total_error << endl;
              }
 

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

	   } // Do if on line with desired 's' stream extraction parameters

	  row += 1;

	  } // Loop while still lines left and desired maximum hasn't been reached

	  //inparamFile.close();
	  inFile.close();

	// take total error for ts and fill 1D histogram with total of abs error for each ts 

	return total_error;
	
////////////////////

	  // Currently, I need to draw EE1 and EE2 in this file. I don't understand why.

	  // Try plotting with different mins and maxes? 
	  //double zmin = 0.99, zmax = 1.01;

/*

	  time_t current_time = time(0);

	  //double zmin = 0.995, zmax = 1.005; // 0.5%

	  gStyle->SetOptStat(0); // no stats box

	  TCanvas *c1 = new TCanvas("c1","c1",800,600);
	  c1->cd();
	  EBE->Draw();
	  c1->Update();
	  //EB->GetZaxis()->SetRangeUser(zmin,zmax);
	  EBE->GetZaxis()->SetLabelSize(0.02);
	  EBE->GetXaxis()->SetTitle("iEta");
	  EBE->GetXaxis()->SetTitleOffset(1.1);
	  EBE->GetYaxis()->SetTitle("iPhi");
	  EBE->GetYaxis()->SetTitleOffset(1.2);
	  EBE->Draw("COLZ");
	  ostringstream error_plot;
	  //error_plot << "Err
	  c1->SaveAs("bin/Error_Plot.pdf");

*/

/*

	  ostringstream oss1, oss2, oss3, oss4, oss5, oss6;

	if (Fill_EB){

	  TCanvas *c1 = new TCanvas("c1","c1",800,600);

	  c1->cd();
	  EB->Draw();
	  c1->Update();
	  EB->GetZaxis()->SetRangeUser(zmin,zmax);
	  EB->GetZaxis()->SetLabelSize(0.02);
	  EB->GetXaxis()->SetTitle("iEta");
	  EB->GetXaxis()->SetTitleOffset(1.1);
	  EB->GetYaxis()->SetTitle("iPhi");
	  EB->GetYaxis()->SetTitleOffset(1.2);
	  //c1->SetBatch(kFALSE);

	  EB->Draw("COLZ");

	  //oss1 << "bin/EB_ts_" << ts << "_" << ideal_weights << "_"  << current_time << ".pdf";
	  //oss2 << "bin/EB_ts_" << ts << "_" << ideal_weights << "_"  << current_time << ".root"; 
	  oss1 << "bin/EB_ts_" << ts << "_" << current_time << ".pdf";
	  oss2 << "bin/EB_ts_" << ts << "_" << current_time << ".root"; 
	  TString plot_title1 = oss1.str();
	  TString plot_title2 = oss2.str();
	  c1->SaveAs(plot_title1);
	  //c1->SaveAs(plot_title2);

	  }

	if (Fill_EE){

	  TCanvas *c2 = new TCanvas("c2","c2",800,600);

	  c2->cd();
	  EE1->Draw();
	  c2->Update();
	  EE1->GetZaxis()->SetRangeUser(zmin,zmax);
	  EE1->GetZaxis()->SetLabelSize(0.02);
	  EE1->GetXaxis()->SetTitle("ix");
	  EE1->GetXaxis()->SetTitleOffset(1.1);
	  EE1->GetYaxis()->SetTitle("iy");
	  EE1->GetYaxis()->SetTitleOffset(1.2);
	  //c1->SetBatch(kFALSE);

	  EE1->Draw("COLZ");

////////////////////

	  TCanvas *c3 = new TCanvas("c3","c3",800,600);

	  c3->cd();
	  EE2->Draw();
	  c3->Update();
	  EE2->GetZaxis()->SetRangeUser(zmin,zmax);
	  EE2->GetZaxis()->SetLabelSize(0.02);
	  EE2->GetXaxis()->SetTitle("ix");
	  EE2->GetXaxis()->SetTitleOffset(1.1);
	  EE2->GetYaxis()->SetTitle("iy");
	  EE2->GetYaxis()->SetTitleOffset(1.2);
	  //c1->SetBatch(kFALSE);

	  EE2->Draw("COLZ");

	  oss3 << "bin/EE-_ts_" << ts << "_" << current_time << ".pdf";
	  oss4 << "bin/EE-_ts_" << ts << "_" << current_time << ".root"; 
	  oss5 << "bin/EE+_ts_" << ts << "_" << current_time << ".pdf";
	  oss6 << "bin/EE+_ts_" << ts << "_" << current_time << ".root"; 

	  TString plot_title3 = oss3.str();
	  TString plot_title4 = oss4.str();
	  TString plot_title5 = oss5.str();
	  TString plot_title6 = oss6.str();

	  c2->SaveAs(plot_title3);
	  //c2->SaveAs(plot_title4);
	  c3->SaveAs(plot_title5);
	  //c3->SaveAs(plot_title6);

	  }

*/

}
