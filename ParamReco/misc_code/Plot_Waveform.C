// 
// Abe Tishelman-Charny 
// 24 April 2018
//
// The purpose of this macro is to plot the average reconstructed amplitude 

void Plot_Waveform(){

  // Choose normalization conditions 
  bool normalized_A = true;
  bool normalized_t0 = true;

  // Open File
  TString File("crystal_parameters.txt");

  ifstream inFile; // Input File stream class object  
  inFile.open(File);

  if (!inFile) {
    cout << "Unable to open file ";
    exit(1); // terminate with error
  }

  double samples[10] = 0.;
  string line; 

  int count = 0;
  int max_rows = 2; // Starts at 1	

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
 
    cout << "In Recon Loop\n" << endl;
    
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
  TString *formula = new TString("( (1 + (x-[1]) / ([2]*[3]) ) > 0.0)*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + ((1 + (x-[1]) / ([2]*[3]) <= 0.0 ))*(0.0)");

  //double dt = alpha*beta/2.0;
  //double xmin = (-1.0)*alpha*beta + t_0 + dt; // time of first non-imaginary value + dt
  double xmin = t_0 - 25;
  //double xmin = 0.0;
  double xmax = t_0 + 4*25;

  TF1 *function_alphabeta = new TF1(*name,*formula,xmin,xmax);

  function_alphabeta->SetParameter (0, A);    
  function_alphabeta->SetParameter (1, t_0);   
  function_alphabeta->SetParameter (2, alpha);  
  function_alphabeta->SetParameter (3, beta);  

  int samp_number = 4; // choose first non-zero sample to be 4 (100ns)

  for(double j = xmin; j < xmax + 25; j += 25){ // Might be a mistake in previous macros. should increment by 25ns, not dt. 

    samples[samp_number] = function_alphabeta->Eval(j);
    cout << "function_alphabeta(" << j << ") = " << function_alphabeta(j) << "\n" << endl;

    samp_number++ ;    
    }


  // weights 
  double w[10] = {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0}; // ECAL weights 
  //int samp_number = 4; // assuming first four samples are zero (pedestal) and problem with -nan fourth sample. Also, fourth weight is zero so this sample isn't considered anyway.

////////////////////////////////////////////////////////////////////////////////////////////

    } // Do if on line with desired 's' stream extraction parameters
     
  count = count +1; 

  } // Loop while still lines left and desired maximum hasn't been reached

  inFile.close();

//auto plain  = new TStyle("Plain","Plain Style (no colors/fill areas)");
   //plain->SetCanvasBorderMode(0);
   //plain->SetPadBorderMode(0);
   //plain->SetPadColor(0);
   //plain->SetCanvasColor(0);
   //plain->SetTitleColor(0);
   //plain->SetStatColor(0);

//gROOT->SetStyle("Plain");

  for (int i = 0; i < 10; i++){

    cout << "samples[" << i << "] = " << samples[i] << "\n" << endl;

  }

  int numvals = 6;
  double xvals[6] = 0.0, yvals[6] = 0.0;
  double value = 100;

  for (int i = 0; i < 6; i++){

    //cout << "In Loop\n" << endl;
    xvals[i] = value;
    yvals[i] = samples[i+4];
    //cout << "xvals = " << xvals[i] << "\n" << endl;
    cout << "sample[" << i << "] = " << yvals[i] << "\n" << endl;
    value += 25;

  }

  // Want waveform with red dots at samples.

  TGraph *gr = new TGraph(numvals,xvals,yvals);
  gr->GetXaxis()->SetTitle("Time (ns)");
  gr->GetYaxis()->SetTitle("Normalized ADC");
  gr->SetTitle("Alpha Beta Waveform and Samples, A = 1, P = 0");
  gr->SetMarkerColor(2);
  gr->SetMarkerStyle(8);
  gr->SetMarkerSize(1);
  gr->Draw("ap"); // a to plot axis, p to plot as points 

  //TString title = TString("G(t; A, P)");

  //function_alphabeta->SetTitle(title);
  //function_alphabeta->GetXaxis()->SetTitle("Time (ns)");
  //function_alphabeta->GetYaxis()->SetTitle("Normalized ADC");
  function_alphabeta->Draw("SAME");

  c1->SaveAs("plot.png");

}
