
/*




  // Calculate Amplitude 

  //Double_t A = 0.240791, t_0 = 121.44, alpha = 1.18942, beta = 40.1906; // first crystal parameters
  Double_t A = 1.0, t_0 = 121.44, alpha = 1.18942, beta = 40.1906; // first crystal parameters
  //Double_t A = 1.0, t_0 = 500.0, alpha = 10, beta = 43.0; // Dummy parameters 

  TString *name = new TString("function_alphabeta");
  //TString *formula = new TString("[0] * pow(1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])");
  TString *formula = new TString("[0] * pow(1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])");

  // sample 5 (0) or 6 (1) is at t_0

  Double_t dt = alpha*beta/2.0;
  Double_t xmin = -alpha*beta + t_0; // first non-imaginary value
  Double_t xmax = t_0 + 4*dt;

  TF1 *function_alphabeta = new TF1(*name,*formula,xmin,xmax);

  function_alphabeta->SetParameter (0, A);    
  function_alphabeta->SetParameter (1, t_0);   
  function_alphabeta->SetParameter (2, alpha);  
  function_alphabeta->SetParameter (3, beta);  
 
  cout << "function_alphabeta->Eval(-ab+t0) = " << function_alphabeta->Eval(-alpha*beta+t_0) << "\n" << endl;
  cout << "function_alphabeta->Eval(-ab+t0) = " << function_alphabeta->Eval(-alpha*beta+t_0+1) << "\n" << endl;

  double amp = 0.;
  double s[10] = 0.;
  double w[10] = {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0}; // ECAL weights 
  int samp_number = 3; // assuming first three samples are zero (pedestal)

  for(double i = xmin; i < xmax; i += dt){
    cout << "i = " << i << "\n" << endl;
    s[samp_number] = function_alphabeta->Eval(i);
    //cout << "function_alphabeta->Eval(" << i << ") = " << function_alphabeta->Eval(i) << "\n" << endl;

    samp_number++ ;    

    }

  for (int j = 3; j < 10; j++ ){

    cout << "s[" << j << "] = " << s[j] << "\n" << endl;
    cout << "w[" << j << "] = " << w[j] << "\n" << endl;

    cout << s[j]*w[j] << "\n" << endl;

    amp += s[j]*w[j];  

  }

  cout << "amp = " << amp << "\n" << endl;
  //function_alphabeta->Draw();





*/


