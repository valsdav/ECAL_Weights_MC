
  
  std::string file = "/Users/meganstark/Computation*/PHYS7321_Project/Data/CrystalParams.txt " ;

  cout << "parsing file: " << file;

  ifstream inFile;
  inFile.open(file);

  if (!inFile) {
        cout << "Unable to open file ";
        exit(1);  // terminate with error
  }


  cout << "Reading from the file" << endl; 

  std::vector<std::vector<double> > rows;
  std::string line;

  int count = 0;
  while(std::getline(inFile, line)) {
    count = count +1;
    cout << count << endl;
    if (count == -20) {
      // if want whole file checkvariable set to < 0 
      // i.e. if want 10 lines read set line 79 to "if(count == 10){"
      break;
    }

}
    //reading the 14 columns from the data files
    std::stringstream s(line);
    double num; // always 1
    double A; //pulse number 
    double t0; //start of pulse shape data points
    double alpha;
    double beta;

    // There are 14 numbers on each line
    if(s >> num >> A >> t0 >> alpha >> beta) {
      std::vector<double> pulseShape;
      // setting first three data points to zero since this is the pedastal counts 
      // want a total of 10 counts so taking next 7 counts 
      //pulseShape.push_back(0);
      //pulseShape.push_back(0);
      //pulseShape.push_back(0.0);
    Amps.push_back(A);
   T0s.push_back(t0);
   Alphas.push_back(alpha);
   Betas.push_back(beta);

    cout << Amps << endl;
    cout << T0s << endl;
    cout << Alphas << endl;
    cout << Betas << endl;


TF1 *function_alphabeta = new TF1("function_alphabeta","[0] * pow(1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])",0,25*10.5);
  
function_alphabeta->SetParameter (0, Amps[1]);    // A
function_alphabeta->SetParameter (1, T0s[1]);   // t_0    
function_alphabeta->SetParameter (2, Alphas[1]);   // alpha
function_alphabeta->SetParameter (3, Betas[1]);   // beta


  std::chrono::system_clock::time_point tp = std::chrono::system_clock::now();
  std::chrono::system_clock::duration dtn = tp.time_since_epoch();
  std::stringstream ss;
  ss << "output/" << "new17" << ".txt";
  std::ofstream output_file(ss.str());


std::vector<double> d;

for(int i = 1;i<20;i++){
    for(int j = 0;j<90*9+i;){
        double tmp = function_alphabeta->Eval(i + j);
        d.push_back(tmp);       
        j = j + 90;
    }
}

for(int k = 0; k<d.size(); k++){ 
    int lineLength = k % 10; 
    if(lineLength < 9){  
        output_file << d[k] << "\t";
    } else {
        output_file << d[k] << "\n";     
    }
}



