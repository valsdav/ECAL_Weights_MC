// 
// Abe Tishelman-Charny 
// 13 April 2018
//
// The purpose of this macro is to plot reconstructed amplitudes of 
// ECAL XTAL's using alpha beta function.
//

void params_reco(){
 
  // Choose normalization conditions 
  bool normalized_A = false;
  bool normalized_t0 = false;

  //bool normalized_t0 = false;

  // Histogram parameters
  int bins = 175000;
  double min = 0.0, max = 1.75000;

  ostringstream htitle1, htitle2;

  htitle1 << "EB Reconstructed Amplitude";
  htitle2 << "EE Reconstructed Amplitude"; 

  if (normalized_A == true){
    htitle1 << ", Normalized A";
    htitle2 << ", Normalized A";
    }

  if (normalized_t0 == true){
    htitle1 << ", Normalized t_0";
    htitle2 << ", Normalized t_0";
    }  

  TString *h1t = new TString(htitle1.str());
  TString *h2t = new TString(htitle2.str());

  TH1F *h1 = new TH1F("h1",*h1t,bins,min,max); // Barrel
  TH1F *h2 = new TH1F("h2",*h2t,bins,min,max); // Endcap

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


  // Read each line of file
  int count = -1;
    while(getline(inFile, line)) { // do while there's a line to read
      count = count +1; // start on zeroeth line 

      if (count == max_rows){
	cout << "Maximum desired lines reached." << endl;
        break;
	}

    if ((count%1000) == 0){

      cout << "Reading line " << count << endl;
      }

    stringstream s(line); // stringstream 's' operates on string 'line'
    double d1, d2, d3, d4, d5;

    if(s >> d1 >> d2 >> d3 >> d4 >> d5){
 
    // d1 = ID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta     

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
  //TString *formula = new TString("[0] * pow(1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])");
  //TString *formula = new TString("[0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])");
  TString *formula = new TString("( (1 + (x-[1]) / ([2]*[3]) ) > 0.0)*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + ((1 + (x-[1]) / ([2]*[3]) <= 0.0 ))*(0)");

  double dt = alpha*beta/2.0;
  double xmin = (-1.0)*alpha*beta + t_0 + dt; // time of first non-imaginary value + dt
  double xmax = t_0 + 4*dt;

  TF1 *function_alphabeta = new TF1(*name,*formula,xmin,xmax);

  function_alphabeta->SetParameter (0, A);    
  function_alphabeta->SetParameter (1, t_0);   
  function_alphabeta->SetParameter (2, alpha);  
  function_alphabeta->SetParameter (3, beta);  
 
  //cout << "function_alphabeta->Eval(-ab+t0) = " << function_alphabeta->Eval(-alpha*beta+t_0) << "\n" << endl;
  //cout << "function_alphabeta->Eval(-ab+t0) = " << function_alphabeta->Eval(-alpha*beta+t_0+1) << "\n" << endl;

  double amp = 0.;

  for (int k = 0; k < 10; k++ ){

    samples[k] = 0.;

    }

  double w[10] = {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0}; // ECAL weights 
  int samp_number = 4; // assuming first four samples are zero (pedestal) and problem with -nan fourth sample. Also, fourth weight is zero so this sample isn't considered anyway.

  for(double i = xmin; i < xmax; i += dt){

    samples[samp_number] = function_alphabeta->Eval(i);

    samp_number++ ;    

    }

  for (int j = 0; j < 10; j++ ){

    //cout << "samples[" << j << "] = " << samples[j] << "\n" << endl;
    //cout << "w[" << j << "] = " << w[j] << "\n" << endl;

    //cout << samples[j]*w[j] << "\n" << endl;

    amp += samples[j]*w[j]; 

  }

  //cout << "amp = " << amp << "\n" << endl;

  // Barrel
  if ( (d1 >= 838861313) && (d1 <= 838970216) ) {

    h1->Fill(amp);

    }

  // Endcap
  if ( d1 > 838970216 ) {

    h2->Fill(amp);

    }

////////////////////////////////////////////////////////////////////////////////////////////


    } // Do if on line with desired 's' stream extraction parameters
     
  } // Loop while still lines left and desired maximum hasn't been reached

  inFile.close();

  // Create Canvas and draw 

  double width = 1000.;
  double height = 1000.;

  TCanvas *c1 = new TCanvas("c1","c1", width, height);
  c1->Divide(2,1);
  c1->Draw();
  c1->cd(1); // Change to first subpad of canvas
  h1->Draw();
  c1->cd(2); // Change to second subpad of canvas
  h2->Draw();

  time_t result = time(0); // save with time since epoch to avoid overwriting files

  // Save plot as png and root files.
  ostringstream oss1, oss2;
  oss1 << "bin/Plot_" << result << ".png";
  oss2 << "bin/Plot_" << result << ".root"; 

  if (normalized_A == true){
    oss1 << "Normalized_A";
    oss2 << "Normalized_A";
    }

  if (normalized_t0 == true){
    oss1 << "Normalized_t0";
    oss2 << "Normalized_t0";
    } 

  TString plot_title1 = oss1.str();
  TString plot_title2 = oss2.str();

  c1->SaveAs(plot_title1);
  c1->SaveAs(plot_title2);

}
