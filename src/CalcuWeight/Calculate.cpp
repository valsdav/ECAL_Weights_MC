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

  int nSamples = pulseShape.size(); 

  double tMax = pulseShape.size();

  ComputeWeights A(1, false, false, nSamples,0);

  int nParams = 1 + int(A.GetDoFitBaseline()) + int(A.GetDoFitTime());

  cout << "verbosity_ = " << A.GetVerbosity() << endl;
  cout << "doFitBaseline_ = " << A.GetDoFitBaseline() << endl;
  cout << "doFitTime_ = " << A.GetDoFitTime() << endl;
  cout << "nPulseSamples_ = " << A.GetnPulseSamples() << endl;
  cout << "nPrePulseSamples_ = " << A.GetnPrePulseSamples() << endl;

  // Check if nSamples is large enough
  if (nSamples < A.GetnPulseSamples() || (A.GetDoFitBaseline() && 
    nSamples < (A.GetnPulseSamples() + A.GetnPrePulseSamples()))) {
    cout << "ComputeWeights::compute: Error: nSamples = "
    << nSamples << " is too small" << endl;
  return false;
    }//check samples
    
    // INITIALIZE WEIGHTS MATRICES
    if (A.GetWeights().num_row() != nSamples) {
      A.GetWeights() = CLHEP::HepMatrix(nSamples, nSamples, 0); // Fill matrices with zeros
      A.GetChi2() = CLHEP::HepSymMatrix(nSamples, 0);
    } else {
      for (int iColumn = 0; iColumn < nSamples; iColumn++) {
        for (int iRow = 0; iRow < nParams; iRow++)
          A.GetWeights()[iRow][iColumn] = 0.;
        for (int iRow = 0; iRow < nSamples; iRow++)
          A.GetChi2()[iRow][iColumn] = 0.;
      }

    }    


  A.compute(pulseShape,pulseShapeDerivative,tMax);


  
}
