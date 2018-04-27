using namespace std; 

#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iterator>
#include <string>
#include <chrono>
#include <stdlib.h> 
#include <cmath>  

#include "TF1.h" 
#include "RConfigure.h"

int main() {
  
  std::string file = "/Users/meganstark/Computation*/PHYS7321_Project/Data/CrystalParams.txt" ;
  //file format 
  //crystal#  Amp   t0   alpha   beta 

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
    //cout << count << endl;
    if (count == 1) {
      // if want whole file checkvariable set to < 0 
      // i.e. if want 10 lines read set line 79 to "if(count == 10){"
      break;
    }
}

    //reading the 4 columns from the data files
    std::stringstream s(line);
    double num; // pulse number
    double A; //always 1 
    double t0; 
    double alpha;
    double beta;

    // There are 14 numbers on each line
    if(s >> num >> A >> t0 >> alpha >> beta) {
      std::vector<double> Row;
      std::vector<double> Alphas;
      std::vector<double> T0s;
      std::vector<double> Amps;
      std::vector<double> Betas;
      // setting first three data points to zero since this is the pedastal counts 
      // want a total of 10 counts so taking next 7 counts 
      //pulseShape.push_back(0);
      //pulseShape.push_back(0);
      //pulseShape.push_back(0.0);
      Row.push_back(num);
      Row.push_back(A);
      Row.push_back(t0);
      Row.push_back(alpha);
      Row.push_back(beta);


  //    cout << Row << endl;
  //  cout << Alphas << endl;
  //  cout << Betas << endl;
    
    int min = 73; //must change min and max to fit the pulse parameters.
    int max = 420;

    TF1 *function_alphabeta = new TF1("function_alphabeta","[0] * pow(1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])",min,max);
  
    function_alphabeta->SetParameter (0, Row[1]);    // A
    function_alphabeta->SetParameter (1, Row[2]);    // t_0    
    function_alphabeta->SetParameter (2, Row[3]);// alpha
    function_alphabeta->SetParameter (3, Row[4]);// beta



  std::chrono::system_clock::time_point tp = std::chrono::system_clock::now();
  std::chrono::system_clock::duration dtn = tp.time_since_epoch();
  std::stringstream ss;
  ss << "output/" << "new18" << ".txt";
  std::ofstream output_file(ss.str());


int dx = int((max-min)/10);
cout << dx << endl;
std::vector<double> d;

for(int i = 1;i<20;i++){
    for(int j = min;j<dx*9+i;){
        double tmp = function_alphabeta->Eval(i + j);
        d.push_back(tmp);       
        j = j + dx;
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
}
    inFile.close();
  return 0;

}
