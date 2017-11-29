/* 
November 18, 2017
Abe Tishelman-Charny
Test file for extracting weights from sample waveform.
*/

using namespace std; 

#include "ComputeWeights.h"

#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>

int main() {

// Create matrix

//CLHEP::HepMatrix A(5, 5, 0);

  //cout << "Created a Matrix." << endl;
  int N = 10;
  //vector <double> num;
  double num[10]= { 0,0,0,0,0,0,0,0,0,0};
  char data[N];
  //cout << "A[0][0] = " << A[0][0] << endl;

  ifstream inFile;
  //ofstream outfile;
  //outfile.open("/Users/meganstark/Computation/practice.txt");
  inFile.open("text.txt");
  if (!inFile) {
        cout << "Unable to open file ";
        exit(1);  // terminate with error
  }

  //cin.getline(data, 100);

  cout << "Reading from the file" << endl; 

  // write the data at the screen.
  

  vector <double> pulseShape;
  vector <double> pulseShapeDerivative;
  
  int i = 0;
  while(i < N){

   //read the data from the file and display it.
    inFile >> data;  
    num[i] = atof(data);
    cout << data << endl;
    //cout << num[i] << endl; 
    i = i + 1;
  }
   // close the opened file.
  inFile.close();

  //return 0; 


  // Extra print messages: Set verbosity = 1
  int verbosity = 0;

  cout << "Enter 1 or 0 for verbosity: ";
  cin >> verbosity;
  cout << "Verbosity = " << verbosity << endl;

  
  cout << "Create weights from pulse shape " << endl;  


  
  // dummy pulse shape
  int j = 0;
  while(j < N){
      pulseShape.push_back(num[j]);
      cout << pulseShape[j] << endl;
      j = j + 1;

  }

  cout << pulseShape.size() << endl;


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

  // dummy pulse shape derivative
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

  int nSamples = pulseShape.size(); 

  double tMax = pulseShape.size();

  // Create instance of object ComputeWeights
  ComputeWeights A(1, false, false, nSamples,0);

  cout << "verbosity_ = " << A.GetVerbosity() << endl;
  cout << "doFitBaseline_ = " << A.GetDoFitBaseline() << endl;
  cout << "doFitTime_ = " << A.GetDoFitTime() << endl;
  cout << "nPulseSamples_ = " << A.GetnPulseSamples() << endl;
  cout << "nPrePulseSamples_ = " << A.GetnPrePulseSamples() << endl;

  // Compute weights
  A.compute(pulseShape,pulseShapeDerivative,tMax);
  

  cout << "A.getAmpWeight(5) returns: " << A.getAmpWeight(5) << endl;
  cout << "A.getChi2Matrix(5,5) returns: " << A.getChi2Matrix(5,5) << endl;
}