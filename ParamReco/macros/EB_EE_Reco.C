// 
// Abe Tishelman-Charny 
// Started 24 April 2018
//

void EB_EE_Reco(){

  // CMS Weights: {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0}
  // How accurate is this single set of weights among the distribution of XTALS?
  // want to plot \hat{A} / A, without normalizing A

  int max_rows = 10; // < 0 to read all rows 
  int bins = 100;

  // Choose normalization conditions 
  bool normalized_A = true;
  bool normalized_t0 = true;

  TH1F *h1 = new TH1F("h1", "EB Reconstructed Amplitude", bins, 0, 1.1); // EB
  TH1F *h2 = new TH1F("h2", "EE Reconstructed Amplitude", bins, 0, 1.1); // EE

  // Open File
  TString File("data/crystal_parameters.txt");

  ifstream inFile; // Input File stream class object  
  inFile.open(File);

  if (!inFile) {
    cout << "Unable to open file\n";
    exit(1); // terminate with error
  }

  string line; 
  double samples[10];

  int count = 0; // Start on zeroeth line

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

      for(double j = xmin; j < xmax; j += dt){ // don't include xmax b/c 10th weight is 0

        samples[samp_number] = function_alphabeta->Eval(j);

        samp_number++;    
      }

      for (int k = 0; k < 10; k++ ){

        amp += samples[k]*w[k]; 
      }

      // Add to Histo

      //cout << "amp = " << amp << "\n" << endl;

      // EB
      if ((d1 >= 838861313) && (d1 <= 838970216)){

        h1->Fill(amp); 

      }

      // EE
      if (d1 >= 872415401 ){

        h2->Fill(amp); 

      }

    } // Do if on line with desired 's' stream extraction parameters
     
  count = count +1; 

  } // Loop while still lines left and desired maximum hasn't been reached

  inFile.close();

  //gStyle->SetOptStat(0); // Don't know what this does 

  Double_t width = 600, height = 800;
  TCanvas *c1 = new TCanvas("c1", "Test title", width, height);
  c1->SetBatch(kFALSE);
  c1->Divide(2,1);
  c1->cd(1);
  h1->Draw();
  c1->Update();

  TLine *vertline = new TLine(1.0,0,1.0,c1_1->GetUymax()); // xmin, ymin, xmax, ymax 
  vertline->SetLineColor(2);
  vertline->SetLineStyle(9);
  vertline->Draw();

  c1->cd(2);
  h2->Draw();
  c1->Update();

  TLine *vertline2 = new TLine(1.0,0,1.0,c1_2->GetUymax()); // xmin, ymin, xmax, ymax 
  vertline2->SetLineColor(2);
  vertline2->SetLineStyle(9);
  vertline2->Draw();

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
