// 
// Abe Tishelman-Charny 
// 13 April 2018
//
// The purpose of this macro is to plot the average reconstructed amplitude for each eta averaged over 360 phi, 

void eta_reco(){
 
  // Choose normalization conditions 
  bool normalized_A = true;
  bool normalized_t0 = true;

  ostringstream etatitle;
  etatitle << "Average Amplitude vs. ieta"; // relies on data ordered by cmsswId
  TString etatitle_(etatitle.str());

  // Each eta has 360 phi 
  // ieta range is -85 to 85, from negative z side to positive z 

  // ieta[0] => ieta = -1 ... ieta[84] => ieta = -85 ... ieta[85] => ieta = 1 ... ieta[169] => ieta = 85
  // this is currently useful as it's the order of eta's in the current data text file. 

  // Create x and y arrays to later plot 
  Int_t n = 170; // 85+85 psuedorapidity values
  Double_t ieta[170]; // Eta index or value
  Double_t ieta_amp[170]; // corresponding reconstructed amplitude for certain # of events 
  for (Int_t i = 0; i < n; i++) {
     
     if (i < 85) {
       ieta[i] = (-1.0*i) - 1.0; 
       //cout << "ieta[" << i << "] = " << ieta[i] << "\n" << endl;
       }

     if (i >= 85) {
       ieta[i] = (i - 84); 
       //cout << "ieta[" << i << "] = " << ieta[i] << "\n" << endl;
       }

     ieta_amp[i] = 0.0;
     } 
 

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

  int max_rows = -1; // < 0 to read all rows 

  string line; 
  double samples[10];

  int count = 0;
  int ietacounter = 0;
  int iphicounter = 0;  

  // Read each line of file
  //int count = -1;
    while(getline(inFile, line)) { // do while there's a line to read
      // start on zeroeth line 

      if (count == max_rows){
	cout << "Maximum desired lines reached." << endl;
        break;
	}

    if ((count%1000) == 0){

      cout << "Reading line " << count << endl;
      }

    stringstream s(line); // stringstream 's' operates on string 'line'
    double d1, d2, d3, d4, d5;

    if(s >> d1 >> d2 >> d3 >> d4 >> d5){ // if s extracts pieces of this type in order, run loop
 
    // d1 = ID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta   

////////////////////////////////////////////////////////////////////////////////////////////

    //if ((ietacounter == 169) && (iphicounter == )){
    //if ((ietacounter == 0) && (iphicounter == 0)){

    //last_ID = d1;
    //cout << "d1 = " << d1 << "\n" << endl;
    //break;
    //}

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

  // samples

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

  // Add phi amp value, average after going through all rows

  ieta_amp[ietacounter] += amp; // do 360 times for each ietacounter 

  // Update counters

  iphicounter += 1;

  // started at 0, so if counter is at 360th after getting one added just now, it just read its 360th line 
  if (iphicounter == 360) { 

    //cout << "ietacounter = " << ietacounter << "\n" << endl;
    //cout << "ieta[" << ietacounter << "] = " << ieta[ietacounter] << "\n"  << endl;
    //cout << "ieta_amp[" << ietacounter << "] = " << ieta_amp[ietacounter] << "\n"  << endl;
    //cout << "count = " << count << "\n" << endl;
    
    iphicounter = 0;
    ietacounter += 1;
    }

////////////////////////////////////////////////////////////////////////////////////////////

    } // Do if on line with desired 's' stream extraction parameters
     
  count = count +1; 

  // Check if all eta's are filled 
  if (ietacounter == 170){

    last_ID = d1;
    cout << "last_ID = " << d1 << "\n" << endl;
    cout << "ietacounter = " << ietacounter << "\n" << endl;
    cout << "ieta[" << ietacounter << "] = " << ieta[ietacounter] << "\n"  << endl;
    cout << "ieta_amp[" << ietacounter << "] = " << ieta_amp[ietacounter] << "\n"  << endl;
    cout << "count = " << count << "\n" << endl;
    break;

    }

  } // Loop while still lines left and desired maximum hasn't been reached

  inFile.close();

  // Divide by 360 to average over phi
  for (Int_t i = 0; i < n; i++) {
     
     ieta_amp[i] = ieta_amp[i] / 360; 

     } 

  // Order data by increasing x

  double x[170], y[170];

  for (int i = 0; i < n; i++){


    if (i <= 84){
      x[i] = ieta[ 84 - i ];
      y[i] = ieta_amp[84 - i];
      }

    if (i > 84){
      x[i] = ieta[i];
      y[i] = ieta_amp[i];
      }


    }

  // Plot
  TGraph* gr = new TGraph(n,x,y);
  gr->GetYaxis()->SetRangeUser(0.9,1.1);
  gr->GetXaxis()->SetRangeUser(-85,85);
  gr->SetTitle(etatitle_);
  gr->SetMarkerColor(1);
  gr->SetMarkerStyle(8);
  gr->SetMarkerSize(1);
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
