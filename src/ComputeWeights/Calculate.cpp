/*

November 18, 2017
Abe Tishelman-Charny

Test file for extracting weights from sample waveform.

*/
using namespace std; 
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <cstdlib>

#include "ComputeWeights.h"

int main() {

  int verbosity = 0;

  cout << "Enter 1 or 0 for verbosity: ";
  cin >> verbosity;
  cout << "Verbosity = " << verbosity << endl;
  cout << "Create weights from pulse shape " << endl;   

  std::string file = "Data/test.txt" ;

  // comment this out for no file input  
/*
  cout << "Enter File Name: "; 

  std::string input;
  std::cin >> input;
  cin.ignore(100, '\n');
  getline(cin, input);
  if ( !input.empty() ) {
      std::istringstream istr( input );
      istr >> file;
  }  
*/
  // stop commentting out here


  cout << "parsing file: " << file;

  // input file stream class 
  ifstream inFile;
  
  // Input/output operations performed on file
  inFile.open(file.c_str());

  if (!inFile) {
        cout << "Unable to open file ";
        exit(1);  // terminate with error
  }

  //cin.getline(data, 100);

  // dummy pulse shape derivative

  vector <double> pulseShapeDerivative;
  pulseShapeDerivative.push_back(0.1);
  pulseShapeDerivative.push_back(0.1);
  pulseShapeDerivative.push_back(0.05);
  pulseShapeDerivative.push_back(0.1);
  pulseShapeDerivative.push_back(0.35);
  pulseShapeDerivative.push_back(0.25);
  pulseShapeDerivative.push_back(-0.25);
  pulseShapeDerivative.push_back(-0.25);
  pulseShapeDerivative.push_back(-0.25);
  pulseShapeDerivative.push_back(0.0);

  int nSamples = 10; 

  double tMax = 5;

  // Create vector to store all event weights 
  vector < vector < double > > all_weights;

  // Create instance of object ComputeWeights

  //ComputeWeights::ComputeWeights(int verbosity, bool doFitBaseline, bool doFitTime, int nPulseSamples, int nPrePulseSamples)

  ComputeWeights A(verbosity, false, false, nSamples, 3);

  cout << "Reading from the file" << endl; 

  std::vector<std::vector<double> > rows;
  std::string line;

  int iterations = 0;
  bool foo = false;

  while(std::getline(inFile, line)) {

    //if(iterations == 2){
	//foo = true;
	//}

    // cout << "line: " << line << endl;

    std::stringstream s(line);
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    // cout << s << endl;
    // parsing line 
    if(s >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14) {

      // Create pulseShape vector
      std::vector<double> row;

      // Hardcoding three pedestal values
      row.push_back(0);
      row.push_back(0);
      row.push_back(0);
      //row.push_back(d1);
      //row.push_back(d2);
      row.push_back(d3); // first post pedestal sample
      row.push_back(d4);
      row.push_back(d5); // peak
      row.push_back(d6);
      row.push_back(d7);
      row.push_back(d8);
      row.push_back(d9);
      //row.push_back(d10); // Extra samples, not including for now 
      //row.push_back(d11);
      //row.push_back(d12);
      //row.push_back(d13); 
      //row.push_back(d14); 

      // Should Calculate pulseShapeDerivative here

      A.compute(row,pulseShapeDerivative,tMax);

      vector <double> weights;
      cout << "row.size() = " << row.size() << endl;

      for (int i = 0; 9; i++){
	//cout << "i = " << i << endl;
        weights.push_back(A.getAmpWeight(i));
	cout << "weights[" << i << "] = " << weights[i] << endl;
	}

      if (verbosity > 0) {
        cout << "verbosity_ = " << A.GetVerbosity() << endl;
        cout << "doFitBaseline_ = " << A.GetDoFitBaseline() << endl;
        cout << "doFitTime_ = " << A.GetDoFitTime() << endl;
        cout << "nPulseSamples_ = " << A.GetnPulseSamples() << endl;
        cout << "nPrePulseSamples_ = " << A.GetnPrePulseSamples() << endl;

        cout << "A.getAmpWeight(5) returns: " << A.getAmpWeight(5) << endl;
        cout << "A.getChi2Matrix(5,5) returns: " << A.getChi2Matrix(5,5) << endl;
      }

      // add data to vector of vectors
      rows.push_back(row);

      all_weights.push_back(weights);

    }
 
  //iterations += 1;

  }
  
  inFile.close();



  // int R = 1;
  // int k = 0;
  // for(int i = 0; i < rows.size(); ++i)
    //std::cout << rows[i][0] << " " << rows[i][1] << " " << rows[i][2] <<  " " << rows[i][3] <<  " " << rows[i][4] <<  " " << rows[i][5] << '\n';


    
//     while(k < 10){
// //read the data from the file and display it.
//       num[k] = rows[R][k];
//       cout << num[k] << endl;

//       k = k + 1;
//    }
  

   // close the opened file.
  // write the data at the screen.

}
