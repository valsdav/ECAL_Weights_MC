#ifndef TestCode_h
#define TestCode_h

/** \class ComputeWeights
  *  Class used to compute weights from a pulse shape profile.
  *
  *  $Date: 2009/10/12 13:04:29 $
  *  $Revision: 1.3 $
  *  \author R. Bruneliere - CERN
  */

// Revised by Abe Tishelman-Charny
// November 8, 2017

#include <vector>

// Include Class Libraries for High Energy Physics
//#include "CLHEP/Matrix/Matrix.h"
//#include "CLHEP/Matrix/SymMatrix.h"

#include "/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/src/Build_CLHEP/install_directory/include/CLHEP/Matrix/Matrix.h"
#include "/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/src/Build_CLHEP/install_directory/include/CLHEP/Matrix/SymMatrix.h"
#include "/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/src/Build_CLHEP/install_directory/include/CLHEP/Matrix/defs.h"

class ComputeWeights
{
 
 // Can access outside of class
 public:

  // Constructor
  ComputeWeights(int verbosity, bool doFitBaseline, bool doFitTime, 
		 int nPulseSamples, int nPrePulseSamples);

  // Destructor
  ~ComputeWeights(); 

  // Member functions to obtain variable values

  // I don't know if this is inefficent, but instance.variable didn't seem to be working, saying variables were private. There may be a much better way to do this.

  int GetVerbosity()
  	{
	return verbosity_;
	}

  bool GetDoFitBaseline()
	{
	return doFitBaseline_;
	}
  
  bool GetDoFitTime()
	{
	return doFitTime_;
	}

  int GetnPulseSamples()
  	{
	return nPulseSamples_;
	}

  int GetnPrePulseSamples()
  	{
	return nPrePulseSamples_;
	}

  CLHEP::HepMatrix GetWeights()
  	{
	return weights_;
	}

  CLHEP::HepSymMatrix GetChi2()
  	{
	return chi2_;
	}

  // Compute weights from an input pulse shape
  bool compute(const std::vector<double>& pulseShape,
	       const std::vector<double>& pulseShapeDerivative,
	       const double tMax); //modif 

  // Get weight used to compute amplitude
  double getAmpWeight(int iSample) const;

  // Get weight used to compute dynamic pedestal
  double getPedWeight(int iSample) const;

  // Get weight used to compute time jitter
  double getTimeWeight(int iSample) const;

  // Get chi2 matrix
  double getChi2Matrix(int iSample1, int iSample2) const;

 // Only accessible through class methods 
 private:

  int verbosity_;        //< Messages verbosity
  bool doFitBaseline_;   //< Fit baseline or not
  bool doFitTime_;       //< Fit time jitter or not
  int nPulseSamples_;    //< Number of samples in the pulse
  int nPrePulseSamples_; //< Number of samples in the pre-pulse
  CLHEP::HepMatrix weights_; // Type CLHEP, class HepMatrix, instance weights
  CLHEP::HepSymMatrix chi2_;

};

#endif // TestCode_h
