void plot_params(){

  // Create Histogram
  int bins = 100000;
  //int min = 0;
  //int max = 150;

  TH1F *h1 = new TH1F("h1","Amplitude",bins,0.2,0.3);
  TH1F *h2 = new TH1F("h2","t_0",bins,120,125);
  TH1F *h3 = new TH1F("h3","Alpha",bins,1.1,1.3);
  TH1F *h4 = new TH1F("h4","Beta",bins,39,42);

  // Open File
  TString File("crystal_parameters.txt");

  ifstream inFile; // Input File stream class object  
  inFile.open(File);

  if (!inFile) {
    cout << "Unable to open file ";
    exit(1); // terminate with error
  }
  
  int max_rows = 100;
  string line;

  int count = -1;
    while(getline(inFile, line)) { // do while there's a line to read
      count = count +1; // start on zeroeth line 

      if (count == max_rows){
	cout << "Maximum desired lines reached." << endl;
        break;
	}

    cout << " Reading line " << count << endl;

    stringstream s(line); // stringstream 's' operates on string 'line'
    double d1, d2, d3, d4, d5;

    if(s >> d1 >> d2 >> d3 >> d4 >> d5){
 
    // d1 = ID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta     
    
    cout << "d2 = " << d2 << endl;    
    cout << "d3 = " << d3 << endl;    
    cout << "d4 = " << d4 << endl;
    cout << "d5 = " << d5 << endl;

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

}
