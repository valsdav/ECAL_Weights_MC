// 
// Abe Tishelman-Charny 
// 13 April 2018
//
// The purpose of this macro is to plot reconstructed amplitudes of 
// ECAL XTAL's using alpha beta function.
//

void testing(){

  double A = 1.0, t_0 = 124.188, alpha = 1.20811, beta = 40.172; // not working
  //double A = 1.0, t_0 = 121.44, alpha = 1.18942, beta = 40.1906;   

  TString *name = new TString("function_alphabeta");
  //TString *formula = new TString("[0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])");
  //TString *formula = new TString("((1 + (x-[1]) / ([2]*[3])) > 0)*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + (!((1 + (x-[1]) / ([2]*[3])) > 0))*(0)");
  //TString *formula = new TString("( (1 + (x-[1]) / ([2]*[3]) ) > (0))*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + (!(1 + (x-[1]) / ([2]*[3]) ))*(0)");
  //TString *formula = new TString("( x > ((-1.0)*[2]*[3] + [1]))*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + ( x < ((-1.0)*[2]*[3] + [1]))*(0)");

  //TString *formula = new TString("((1 + (x-[1]) / ([2]*[3]) ) > 0)*([0])*pow( 1 + (x-[1]) / ([2]*[3]) , [2] )*exp (- (x-[1]) / [3]) + ( (1 + (x-[1]) / ([2]*[3]) ) <= 0 )*(0)");

  //TString *formula = new TString("(x <= ((-1.0)*[2]*[3] + [1] ) )*(0) + (x > ((-1.0)*[2]*[3] + [1] ))*([0])*pow(( 1 + ((x-[1]) / ([2]*[3])) ) , [2] )*exp (-(x-[1]) / [3])");

  //TString *formula = new TString("(x>((-1.0)*alpha*beta + t_0))*([0])*pow( x , [2] )*exp (-x) + ( x <= 150 )*(5)");

  // This works
  //TString *formula = new TString("( x >= ((-1.0)*[2]*[3] + [1]))*([0])*pow( x , [2] )*exp(-(x-[1])/[3]) + ( ((-1.0)*[2]*[3] + [1]) > x )*(0)");

  // This doesn't work
  //TString *formula = new TString("( x > ((-1.0)*[2]*[3] + [1]))*([0])*(pow( 1 + ((x-[1])/([2]*[3])) , [2] ))*exp(-(x-[1])/[3]) + ( x <= ((-1.0)*[2]*[3] + [1]) )*(0)");

  // TString *formula = new TString("(x<10)*(1/7)*exp(-((x-2)/5)^2) + (x>10)*(1/5)*exp(-((x-4)/5)^2)");  

  //double dt = alpha*beta/2.0;
  //double xmin = (-1.0)*alpha*beta + t_0; // first non-imaginary value
  //double xmax = t_0 + 4*dt;
  double xmin = 0;
  double xmax = 200;

  //printf("isnan(5.0) = %d\n",isnan(5.0)); 

  TF1 *function_alphabeta = new TF1(*name,*formula,xmin,xmax);

  function_alphabeta->SetParameter (0, A);    
  function_alphabeta->SetParameter (1, t_0);   
  function_alphabeta->SetParameter (2, alpha);  
  function_alphabeta->SetParameter (3, beta);  

  double values[200];

  for (int i = 0; i < 200; i++){

    values[i] = function_alphabeta->Eval(i);
   
    cout << "values [" << i << "] = " << values[i] << "\n" << endl;

    }

  function_alphabeta->Draw();


  //TH1F *h1=new TH1F("h1","test",100,0,200);
  //h1->FillRandom("function_alphabeta",20000);
  //TF1 *f1 = (TF1 *)gROOT->GetFunction("myfunc");
  //f1->SetParameters(800,1);
  //h1->Fit("myfunc");

  //h1->Draw();


}
