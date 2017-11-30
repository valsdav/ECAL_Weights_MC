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

#include "ComputeWeights.h"

int main() {

  // Create matrix

  //CLHEP::HepMatrix A(5, 5, 0);

  //cout << "Created a Matrix." << endl;
  int N = 10;

  double num[10]= { 0,0,0,0,0,0,0,0,0,0};
  char data[N];

  int verbosity = 0;

  cout << "Enter 1 or 0 for verbosity: ";
  cin >> verbosity;
  cout << "Verbosity = " << verbosity << endl;

  cout << "Create weights from pulse shape " << endl;  


  //cout << "A[0][0] = " << A[0][0] << endl;

  ifstream inFile;
  //ofstream outfile;
  //outfile.open("/Users/meganstark/Computation/practice.txt");
  // inFile.open("sample.txt");
  inFile.open("text.txt");
  if (!inFile) {
        cout << "Unable to open file ";
        exit(1);  // terminate with error
  }

  //cin.getline(data, 100);

    // dummy pulse shape derivative

  vector <double> pulseShapeDerivative;
  pulseShapeDerivative.push_back(0.0);
  pulseShapeDerivative.push_back(0.0);
  pulseShapeDerivative.push_back(0.05);
  pulseShapeDerivative.push_back(0.1);
  pulseShapeDerivative.push_back(0.35);
  pulseShapeDerivative.push_back(0.25);
  pulseShapeDerivative.push_back(-0.25);
  pulseShapeDerivative.push_back(-0.25);
  pulseShapeDerivative.push_back(-0.25);
  pulseShapeDerivative.push_back(0.0);

  int nSamples = 10; 

  double tMax = 10;

  // Create instance of object ComputeWeights
  ComputeWeights A(verbosity, false, false, nSamples,0);

  cout << "Reading from the file" << endl; 

  std::vector<std::vector<double> > rows;
  std::string line;

  while(std::getline(inFile, line)) {
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
    if(s >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14) {
      // cout << "adding to rows" << endl;
      std::vector<double> row;
      row.push_back(d1);
      row.push_back(d2);
      row.push_back(d3);
      row.push_back(d4);
      row.push_back(d5);
      row.push_back(d6);
      row.push_back(d7);
      row.push_back(d8);
      row.push_back(d9);
      row.push_back(d10);
      // row.push_back(d11);
      // row.push_back(d12);
      // row.push_back(d13);
      // row.push_back(d14);

      A.compute(row,pulseShapeDerivative,tMax);
      if (verbosity > 0) {
        cout << "verbosity_ = " << A.GetVerbosity() << endl;
        cout << "doFitBaseline_ = " << A.GetDoFitBaseline() << endl;
        cout << "doFitTime_ = " << A.GetDoFitTime() << endl;
        cout << "nPulseSamples_ = " << A.GetnPulseSamples() << endl;
        cout << "nPrePulseSamples_ = " << A.GetnPrePulseSamples() << endl;

        cout << "A.getAmpWeight(5) returns: " << A.getAmpWeight(5) << endl;
        cout << "A.getChi2Matrix(5,5) returns: " << A.getChi2Matrix(5,5) << endl;
      }

      // someFunction(row)
      rows.push_back(row);


    }
  }


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

  inFile.close();


  // Extra print messages: Set verbosity = 1

  
  // // dummy pulse shape
  // int j = 0;
  // while(j < 10){
  //     pulseShape.push_back(num[j]);
  //     cout << pulseShape[j][] << endl;
  //     j = j + 1;

  // }

  // cout << pulseShape.size() << endl;


  /*pulseShape.push_back(0.0);
  pulseShape.push_back(0.0);
  pulseShape.push_back(0.1);
  pulseShape.push_back(0.3);
  pulseShape.push_back(1.0);
  pulseShape.push_back(0.8);
  pulseShape.push_back(0.7);
  pulseShape.push_back(0.3);
  pulseShape.push_back(0.2); 
  */
  
}
