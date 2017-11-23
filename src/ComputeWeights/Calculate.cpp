/*

November 18, 2017
Abe Tishelman-Charny

Test file for extracting weights from sample waveform.

*/

using namespace std; 

#include "ComputeWeights.h"

#include <iostream>
#include <iomanip>

int main() {

// Create matrix

//CLHEP::HepMatrix A(5, 5, 0);

//cout << "Created a Matrix." << endl;

//cout << "A[0][0] = " << A[0][0] << endl;


  cout << "Create weights from pulse shape " << endl;  

  vector <double> pulseShape;
  vector <double> pulseShapeDerivative;
  
  // dummy pulse shape
  pulseShape.push_back(0.0);
  pulseShape.push_back(0.0);
  pulseShape.push_back(0.0);
  pulseShape.push_back(0.1);
  pulseShape.push_back(0.3);
  pulseShape.push_back(1.0);
  pulseShape.push_back(0.8);
  pulseShape.push_back(0.7);
  pulseShape.push_back(0.3);
  pulseShape.push_back(0.2); 

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

  //int nSamples = pulseShape.size(); 

  //double tMax = pulseShape.size();

  // Create instance of object ComputeWeights
  ComputeWeights A(1, false, false, nSamples,0);

  cout << "verbosity_ = " << A.GetVerbosity() << endl;
  cout << "doFitBaseline_ = " << A.GetDoFitBaseline() << endl;
  cout << "doFitTime_ = " << A.GetDoFitTime() << endl;
  cout << "nPulseSamples_ = " << A.GetnPulseSamples() << endl;
  cout << "nPrePulseSamples_ = " << A.GetnPrePulseSamples() << endl;

  // Compute weights
  A.compute(pulseShape,pulseShapeDerivative,tMax);
  
}
