/*

November 18, 2017
Abe Tishelman-Charny

Test file for extracting weights from sample waveform.

*/

using namespace std; 

#include"CalibCalorimetry/EcalWeightsTools/interface/TestComputeWeights.h"

#include <iostream>
#include <iomanip>

int main() {

  cout << " Create weights from pulse shape " << endl;  

  std::vector <float> pulseShape;
  
  //---- dummy pulse shape
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

  int nSamples = pulseShape.size(); 

  ComputeWeights A(0, false, false, nSamples,0);

  //int nParams = 1 + int(A.doFitBaseline_) + int(A.doFitTime_);


  cout << "Successfully in SamplePulse.cc" << endl;

  // cout << "Verbosity = " << A.verbosity_ << endl;
/*
  // Check if nSamples is large enough
  if (nSamples < A.nPulseSamples_ || (A.doFitBaseline_ && 
    nSamples < (A.nPulseSamples_ + A.nPrePulseSamples_))) {
    cout << "ComputeWeights::compute: Error: nSamples = "
    << nSamples << " is too small" << endl;
  return false;
    }//check samples
    
    // INITIALIZE WEIGHTS MATRICES
    if (A.weights_.num_row() != nSamples) {
      A.weights_ = CLHEP::HepMatrix(nSamples, nSamples, 0); // Fill matrices with zeros
      A.chi2_ = CLHEP::HepSymMatrix(nSamples, 0);
    } else {
      for (int iColumn = 0; iColumn < nSamples; iColumn++) {
        for (int iRow = 0; iRow < nParams; iRow++)
          A.weights_[iRow][iColumn] = 0.;
        for (int iRow = 0; iRow < nSamples; iRow++)
          A.chi2_[iRow][iColumn] = 0.;
      }

    }    
 */ 
}


