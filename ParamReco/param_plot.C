void param_plot(){

// https://root.cern.ch/doc/master/classTLatex.html

  bool normalized_A = false;
  bool normalized_t0 = false;
  int max_rows = -1;

  // Create Histogram
  int bins = 100000;
  //int min = 0;
  //int max = 150;

  //TH1F *h1 = new TH1F("h1","Amplitude",bins,0.2,0.3);
  //TH1F *h2 = new TH1F("h2","t_0",bins,120,125);
  //TH1F *h3 = new TH1F("h3","Alpha",bins,1.1,1.3);
  //TH1F *h4 = new TH1F("h4","Beta",bins,39,42);

  TLatex Tl;
  Tl.SetTextSize(1);
  //Tl.DrawLatex(0.1,0.8,"A");

  TH1F *h1 = new TH1F("A","notlatex",bins,0.21,0.25);
  TH1F *h2 = new TH1F("t_{0}","t_{0}",bins,114,130);
  TH1F *h3 = new TH1F("#alpha","#bf{#alpha}",bins,1,1.7);
  TH1F *h4 = new TH1F("#beta","#bf{#beta}",bins,34,44);

  // Open File
  TString File("crystal_parameters.txt");

  ifstream inFile; // Input File stream class object  
  inFile.open(File);

  if (!inFile) {
    cout << "Unable to open file ";
    exit(1); // terminate with error
  }
  
  string line;

  int count = -1;
    while(getline(inFile, line)) { // do while there's a line to read
      count = count +1; // start on zeroeth line 

      if (count == max_rows){
	cout << "Maximum desired lines reached." << endl;
        break;
	}

    if ((count%1000) == 0){
      cout << " Reading line " << count << endl;
    }

    stringstream s(line); // stringstream 's' operates on string 'line'
    double d1, d2, d3, d4, d5;
    

    if(s >> d1 >> d2 >> d3 >> d4 >> d5){
 
    // d1 = ID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta     
    
    //cout << "d2 = " << d2 << endl;    
    //cout << "d3 = " << d3 << endl;    
    //cout << "d4 = " << d4 << endl;
    //cout << "d5 = " << d5 << endl;

    h1->Fill(d2);
    h2->Fill(d3);
    h3->Fill(d4);
    h4->Fill(d5);

    } 
     
  } // Loop while still lines left and desired maximum hasn't been reached

  inFile.close();

  // configure histogram range

  //double min1 = h1->GetMinimumBin(), min2 = h2->GetMinimumBin(), min3 = h3->GetMinimumBin(), min4 = h4->GetMinimumBin();
  //double max1 = h1->GetMaximumBin(), max2 = h2->GetMaximumBin(), max3 = h3->GetMaximumBin(), max4 = h4->GetMaximumBin();

  double minxval1 = 1000., minxval2 = 1000., minxval3 = 1000., minxval4 = 1000.;
  double maxxval1 = 0.0, maxxval2 = 0.0, maxxval3 = 0.0, maxxval4 = 0.0;

  for (int i = 0; i < bins; i++){
    if( (h1->GetBinContent(i) < minxval1) && (h1->GetBinContent(i) != 0) ){
      minxval1 = 0.2 + i*(0.3 - 0.2)/(bins);
    }

    if( h1->GetBinContent(i) > maxxval1 ){
      maxxval1 = 0.2 + i*(0.3 - 0.2)/(bins);
    }

  }

  for (int i = 0; i < bins; i++){

    if( (h2->GetBinContent(i) < minxval2) && (h2->GetBinContent(i) != 0) ){
      minxval2 = 120 + i*(125 - 120)/(bins);
    }

    if( h2->GetBinContent(i) > maxxval2 ){
      maxxval2 = 120 + i*(125 - 120)/(bins);
    }

  }

  for (int i = 0; i < bins; i++){

    if( (h3->GetBinContent(i) < minxval3) && (h3->GetBinContent(i) != 0) ){
      minxval3 = 1.1 + i*(1.3 - 1.1)/(bins);
    }

    if( h3->GetBinContent(i) > maxxval3 ){
      maxxval3 = 1.1 + i*(1.3 - 1.1)/(bins);
    }

  }

  for (int i = 0; i < bins; i++){

    if( (h4->GetBinContent(i) < minxval4) && (h4->GetBinContent(i) != 0) ){
      minxval4 = 39 + i*(42 - 39)/(bins);
    }

    if( h4->GetBinContent(i) > maxxval4 ){
      maxxval4 = 39 + i*(42 - 39)/(bins);
    }

  }

/*
  cout << "minxval1 = " << minxval1 << "\n" << endl;
  cout << "minxval2 = " << minxval2 << "\n" << endl;
  cout << "minxval3 = " << minxval3 << "\n" << endl;
  cout << "minxval4 = " << minxval4 << "\n" << endl;

  cout << "maxxval1 = " << maxxval1 << "\n" << endl;
  cout << "maxxval2 = " << maxxval2 << "\n" << endl;
  cout << "maxxval3 = " << maxxval3 << "\n" << endl;
  cout << "maxxval4 = " << maxxval4 << "\n" << endl;

  // h1->Rebin();
  // h1->RebinX();
  // h1->RebinAxis();


  h1->GetXaxis()->SetRangeUser(minxval1,maxxval1);
  h1->Draw();
*/

  // Create Canvas

  double width = 1500.;
  double height = 1500.;

  TCanvas *c1 = new TCanvas("c1","c1", width, height);
  c1->Divide(2,2);
  c1->Draw();
  c1->cd(1); // Change to first subpad of canvas
  h1->Draw();
  c1->cd(2); 
  h2->Draw();
  c1->cd(3);
  h3->Draw();
  c1->cd(4);
  h4->Draw();

  time_t result = time(0); // save with time since epoch to avoid overwriting files

  // Save plot as png and root files.
  ostringstream oss1, oss2;
  oss1 << "bin/Plot_" << result;
  oss2 << "bin/Plot_" << result; 

  if (normalized_A == true){
    oss1 << "Normalized_A";
    oss2 << "Normalized_A";
    }

  if (normalized_t0 == true){
    oss1 << "Normalized_t0";
    oss2 << "Normalized_t0";
    } 

  oss1 << ".png";
  oss2 << ".root"; 

  TString plot_title1 = oss1.str();
  TString plot_title2 = oss2.str();

  c1->SaveAs(plot_title1);
  c1->SaveAs(plot_title2);

}
