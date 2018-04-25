/*




  TString *name = new TString("function_alphabeta");
  TString *formula = new TString("[0] * pow(1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])");

  Double_t A = 0.240791, t_0 = 121.44, alpha = 1.18942, beta = 40.1906; // first crystal parameters
  //Double_t A = 1.0, t_0 = 500.0, alpha = 10, beta = 43.0; // Dummy parameters 

  // to shift x axis n units to right, x -> x - n

  // Need 

  Double_t xmin = 75;
  Double_t xmax = 1000;

  TF1 *function_alphabeta = new TF1(*name,*formula,xmin,xmax);

  function_alphabeta->SetParameter (0, A);    
  function_alphabeta->SetParameter (1, t_0);   
  function_alphabeta->SetParameter (2, alpha);  
  function_alphabeta->SetParameter (3, beta);   

  double amp = 0;
  double s[10];
  double w[10] = {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0}; // ECAL weights 
  int samp_number = 0;

  for(int i = int(xmin); i < int(xmax); i += xmax/10.){

    s[samp_number] = function_alphabeta->Eval(i);
    //cout << "function_alphabeta->Eval(" << i << ") = " << function_alphabeta->Eval(i) << "\n" << endl;

    samp_number++ ;    

    }

  for (int i = 0; i < 10; i++ ){

    //cout << "s[" << i << "] = " << s[i] << "\n" << endl;
    //cout << "w[" << i << "] = " << w[i] << "\n" << endl;

    //cout << s[i]*w[i] << "\n" << endl;

    amp += s[i]*w[i];  

  }

  cout << "amp = " << amp << "\n" << endl;
  function_alphabeta->Draw();



*/



