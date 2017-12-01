/* \file ComputeWeights.cc
 *
 *  $Date: 2006/07/19 22:04:42 $
 *  $Revision: 1.2 $
 *  \author R. Bruneliere - CERN
 *
 * $Date: 2006/07/19 22:04:42 $
 * $Revision: 1.2 $
 * Updated by Alex Zabi.

  Modified by Abe Tishelman-Charny
  November 1, 2017

 */


bool Correlation_Sim = true; // Set to false if don't want to simulate Correlation matrix

#include "ComputeWeights.h" 

#include <iostream>
#include <iomanip>

// Constructor
// Creates instance of class

ComputeWeights::ComputeWeights(int verbosity, 
			       bool doFitBaseline, bool doFitTime, 
			       int nPulseSamples, int nPrePulseSamples) :
  verbosity_(verbosity), doFitBaseline_(doFitBaseline),
  doFitTime_(doFitTime), nPulseSamples_(nPulseSamples),
  nPrePulseSamples_(nPrePulseSamples) // Set private member variables equal to arguments

{ 
  // if (c != 0)
  if (verbosity_) 
  	{ 
    	
  	std::cout << "ComputeWeights::ComputeWeights: Constructing with setup:"
	          << std::endl;
    if (doFitBaseline_)

      	std::cout << "  - baseline weights are computed" << std::endl;

    if (doFitTime_)

        std::cout << "  - time jitter weights are computed" << std::endl;
        std::cout << "  - the number of samples used to extract amplitude in the"
	          << " pulse is " << nPulseSamples_ << std::endl; 
	
	// nPulseSamples_: # Samples to used to extract amplitude 
	// nPrePulseSamples_: # Samples used to extract baseline (pedestal?)

    if (doFitBaseline_)
        std::cout << "  - the number of samples used to extract baseline in the"
  	<< " pre-pulse is " << nPrePulseSamples_ << std::endl; 
        std::cout << "___________________________________" << std::endl;

  	} // verbosity

}// Constructor

// Destructor
// Destructs instance of a class from memory

ComputeWeights::~ComputeWeights()
{
  if (verbosity_)
    std::cout << "ComputeWeights::~ComputeWeights: Destructing ComputeWeights" << std::endl;
}

// Compute weights from an input pulse shape

bool ComputeWeights::compute(const std::vector<double>& pulseShape,
			     const std::vector<double>& pulseShapeDerivative,
			     const double tMax)
{

  int nSamples = pulseShape.size(); // Number of samples (size of pulseShape vector)
  int nParams = 1 + int(doFitBaseline_) + int(doFitTime_); // number of parameters. Add one if doing fitbaseline or fitting time.

  // Check if nSamples is large enough
  // '||' = 'or'
  if (nSamples < nPulseSamples_ || (doFitBaseline_ && 
      nSamples < (nPulseSamples_ + nPrePulseSamples_) ) ) 
  	{
    	std::cout << "ComputeWeights::compute: Error: nSamples = "
	          << nSamples << " is too small" << std::endl;
    	return false;
  	} // check samples

  // INITIALIZE WEIGHTS MATRICES
  if (weights_.num_row() != nSamples) 
  	{ 

    	weights_ = CLHEP::HepMatrix(nSamples, nSamples, 0); // Fill matrices with zeros. Set size to nSamples x nSamples, if isn't already true.
    	chi2_ = CLHEP::HepSymMatrix(nSamples, 0); // Initialize with zeros 

  	} 
  else 
	{

    	for (int iColumn = 0; iColumn < nSamples; iColumn++) 
		{
     		for (int iRow = 0; iRow < nParams; iRow++)
			weights_[iRow][iColumn] = 0.;

      		for (int iRow = 0; iRow < nSamples; iRow++)
			chi2_[iRow][iColumn] = 0.; // Fill with zeros if matrix already exists
    		}
  	}


  // DETERMINATION OF THE FIRST SAMPLE
  
  int firstSample = int(tMax) - 1;
  if(nPulseSamples_ == 1) firstSample = int(tMax); // if only 1 sample -> the max sample is chosen
  std::cout << "FIRST SAMPLE = " << firstSample << std::endl;
  std::cout << "nParameters = " << nParams << std::endl;

  if (firstSample + nPulseSamples_ > nSamples) {
    if (verbosity_)
      std::cout << "ComputeWeights::compute: Warning: firstSample cannot be "
		<< firstSample << " because there are too few samples beyond." 
		<< std::endl << "firstSample is set to "
		<< nSamples - nPulseSamples_ << std::endl;
    firstSample = nSamples - nPulseSamples_;
  }//check max samples considered

  // pulseshape[] -> coef

  // Fill coef matrix

  int size = nPulseSamples_;
  if (doFitBaseline_) size += nPrePulseSamples_;
  CLHEP::HepMatrix coef(size, nParams);
  for (int iRow = 0; iRow < nPulseSamples_; iRow++)
    for (int iColumn = 0; iColumn < nParams; iColumn++) {
      if (iColumn == 0)
	coef[iRow][iColumn] = pulseShape[firstSample + iRow];
      else if (iColumn == 1 && doFitBaseline_)
	coef[iRow][iColumn] = 1.;
      else // doFitTime_ || nParams == 3
	coef[iRow][iColumn] = pulseShapeDerivative[firstSample + iRow];
    }

  for (int iRow = nPulseSamples_; iRow < size; iRow++)
    for (int iColumn = 0; iColumn < nParams; iColumn++) {
      if (iColumn == 1)
	coef[iRow][iColumn] = 1.;
      else
	coef[iRow][iColumn] = 0.;

    }

  // Fill coef matrix

/*
  int size = 10;
  CLHEP::HepMatrix coef(size, nParams); // (size x nParams) matrix
  for (int iRow = 0; iRow < size; iRow++)
    for (int iColumn = 0; iColumn < nParams; iColumn++) {
      if (iRow==3 || iRow==9)continue; // Skip filling 3rd and 9th row
      if (iColumn == 0) // Fill zeroth column with pulseShape
	coef[iRow][iColumn] = pulseShape[iRow];
      else if (iColumn == 1 && doFitBaseline_)
	coef[iRow][iColumn] = 1.;
      else // doFitTime_ || nParams == 3
	coef[iRow][iColumn] = pulseShapeDerivative[iRow];
    }
*/

  CLHEP::HepMatrix tCoef = coef.T(); // transpose coef

  if (verbosity_)
  	std::cout<<" coef ="<< coef << std::endl;

  if (verbosity_)
  	std::cout<<" tcoef ="<< tCoef << std::endl;

  // Covariance matrix
  CLHEP::HepSymMatrix  invCov(size, 1); // If no noise correlation, set it to identity (1)
  invCov = 1.0*invCov; 


  if (Correlation_Sim)
  	{

	std::cout << "ComputeWeights::compute: Simulating Correlation Matrix. " << std::endl;
	
	for (int iColumn = 0; iColumn < size; iColumn++) {
          for (int iRow = 0; iRow < size; iRow++) {
	    //if((iRow == iColumn + 1) || ( iRow == iColumn - 1)) {
	    if(iRow == (iColumn + 1 )) {
		for ( int j = 0; j < (size - iColumn - 1); j++){ // extra -1 because iColumn starts at 0
        	invCov[iRow + j][iColumn] = ((invCov[iColumn + j][iColumn]) / 2.0 );

		}
			
	      }
	    }
 	  }

	}


  if (verbosity_)
  	std::cout<<" invCov = "<< invCov <<std::endl;
  // Variance matrix = [tCoef * invCov * coef]^-1
  CLHEP::HepMatrix tCoeffInvCov = tCoef*invCov;
  //std::cout << "about to invert variance" << std::endl;
  CLHEP::HepMatrix variance = tCoeffInvCov*coef;
  int ierr;

  variance.invert(ierr);

  if (ierr) {
    std::cout << "ComputeWeights::compute: Error: impossible to invert "
	      << "variance matrix." << std::endl;
    std::cout << variance;
    return false;
  }//check inversion

  //if (verbosity_)
  // 	std::cout<<" tCoeffInvCov ="<< tCoeffInvCov << std::endl;

  if (verbosity_)
  	std::cout<<" variance ="<< variance << std::endl;

  // Weights matrix = variance * tCoef * invCov
  CLHEP::HepMatrix variancetCoef = variance*tCoef;
  CLHEP::HepMatrix weights = variancetCoef*invCov;

  // Chi2 matrix = (1 - coef * weights)^T * invCov * (1 - coef * weights)
  CLHEP::HepMatrix delta = coef*weights;
  delta *= -1.;
  CLHEP::HepMatrix unit(size, size, 1);
  delta += unit;
  CLHEP::HepMatrix tDelta = delta.T();
  CLHEP::HepMatrix tDeltaInvCov = tDelta*invCov;
  CLHEP::HepMatrix chi2 = tDeltaInvCov*delta;

  //if (verbosity_)
  //	std::cout<<" variancetCoef ="<< variancetCoef << std::endl;

  //if (verbosity_)
  // 	std::cout<<" coef ="<< coef << std::endl;

  // Copy matrices into class members
  for (int iColumn = 0; iColumn < nPulseSamples_; iColumn++) {
    for (int iRow = 0; iRow < nParams; iRow++)
      weights_[iRow][firstSample + iColumn] = weights[iRow][iColumn];
    for (int iRow = 0; iRow < nPulseSamples_; iRow++)
      chi2_[firstSample + iRow][firstSample + iColumn] = chi2[iRow][iColumn];
  }
  if (doFitBaseline_) {
    for (int iColumn = 0; iColumn < nPrePulseSamples_; iColumn++) {
      for (int iRow = 0; iRow < nParams; iRow++)
	weights_[iRow][iColumn] = weights[iRow][iColumn + nPulseSamples_];
      for (int iRow = 0; iRow < nPrePulseSamples_; iRow++)
	chi2_[iRow][iColumn] = chi2[iRow + nPulseSamples_] 
				   [iColumn + nPulseSamples_];
    }
  }

  // Copy matrices into class members
  chi2[3][3]=0.;
  chi2[9][9]=0.;

  int iColumn = 0;
  int iRow = 0;

  for (iColumn = 0; iColumn < size; iColumn++) {
    for (iRow = 0; iRow < nParams; iRow++)
      weights_[iRow][iColumn] = weights[iRow][iColumn];
      //std::cout<<"weights_["<<iRow<<"]["<<iColumn<<"]="<<weights_[iRow][iColumn]<<";"<<std::endl;
    for (int iRow = 0; iRow < size; iRow++)
      chi2_[iRow][iColumn] = chi2[iRow][iColumn]; 
  }


/*
  for(int i=0;i<10;i++)
  {
    for(int j =0 ; j<10; j++)
    {
      std::cout<<"b["<<i<<"]["<<j<<"]="<< chi2_[i][j]<<";"<<std::endl;
    }
  }
*/

  if(verbosity_)
  	{
  	std::cout<<" chi2_=" << chi2_ << std::endl;
  	std::cout<<" weights_ "<< weights_ << std::endl;
	}

  std::cout<<" chi2=" << chi2 << std::endl;
  std::cout << " weights "<< weights << std::endl;

  return true;
} // ComputeWeights::compute

// Get weight used to compute amplitude
double ComputeWeights::getAmpWeight(int iSample) const
{
  if (!weights_.num_row()) { // if weights matrix has zero rows
    if (verbosity_)
      std::cout << "ComputeWeights::getAmpWeight: Warning: you should call"
		<< " the method ComputeWeights::compute() before asking a" 
		<< " weight." << std::endl;
    return 0.;
  }
  if (iSample < 0 || iSample >= weights_.num_col()) {
    if (verbosity_)
      std::cout << "ComputeWeights::getAmpWeight: Warning: iSample = "
		<< iSample << " should be inside the range [0, " 
		<< weights_.num_col() - 1 << "]" << std::endl;
    return 0.;
  }
  return weights_[0][iSample];
} // Get Amplitude Weights

// Get weight used to compute dynamic pedestal
double ComputeWeights::getPedWeight(int iSample) const
{
  if (weights_.num_row() < 2 || !doFitBaseline_) {
    if (verbosity_)
      std::cout << "ComputeWeights::getPedWeight: Warning: pedestal weights"
		<< " are computed only if doFitBaseline = true" << std::endl;
    return 0.;
  }
  if (iSample < 0 || iSample >= weights_.num_col()) {
    if (verbosity_)
      std::cout << "ComputeWeights::getPedWeight: Warning: iSample = "
		<< iSample << " should inside the range [0, " 
		<< weights_.num_col() - 1 << "]" << std::endl;
    return 0.;
  }
  return weights_[1][iSample]; // pedestal weight
} // Get Pedestal Weights

// Get weight used to compute time jitter
double ComputeWeights::getTimeWeight(int iSample) const
{
  if ((weights_.num_row() < 3 && doFitBaseline_ ) || !doFitTime_) {
    if (verbosity_)
      std::cout << "ComputeWeights::getTimeWeight: Warning: time weights"
		<< " are computed only if doFitTime = true" << std::endl;
    return 0.;
  }
  if (iSample < 0 || iSample >= weights_.num_col()) {
    if (verbosity_)
      std::cout << "ComputeWeights::getTimeWeight: Warning: iSample = "
		<< iSample << " should inside the range [0, " 
		<< weights_.num_col() - 1 << "]" << std::endl;
    return 0.;
  }
  if (doFitBaseline_)
    return weights_[2][iSample];
  return weights_[1][iSample];
} //Get Time Weights

// Get chi2 matrix
double ComputeWeights::getChi2Matrix(int iSample1, int iSample2) const
{
  if (iSample1 < 0 || iSample1 >= chi2_.num_row() || 
      iSample2 < 0 || iSample2 >= chi2_.num_col()) {
    if (verbosity_)
      std::cout << "ComputeWeights::getChi2Matrix: Warning: iSample1 and "
		<< "iSample2 should inside the range [0, " 
		<< weights_.num_col() - 1 << "]" << std::endl;
    return 0.;
  }
  return chi2_[iSample1][iSample2];
} // Get chi2

