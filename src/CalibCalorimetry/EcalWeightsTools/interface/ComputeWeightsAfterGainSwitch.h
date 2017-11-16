#ifndef CalibCalorimetry_EcalWeightsTools_ComputeWeightsAfterGainSwitch_h
#define CalibCalorimetry_EcalWeightsTools_ComputeWeightsAfterGainSwitch_h

/** \class ComputeWeightsAfterGainSwitch
  *  Class used to compute weights after gain switch. Currently 
  *  only 6th sample is used for amplitude reconstruction and 0 
  *  for rest of the samples. To be improoved in the future
  *  $Date: 2009/10/01 22:58:42 $
  * 
  *  \author K. Theofilatos 
  */


class ComputeWeightsAfterGainSwitch
{
 public:
  /// Constructor
  ComputeWeightsAfterGainSwitch(){;}

  /// Destructor
  ~ComputeWeightsAfterGainSwitch(){;}


  /// Get weight used to compute amplitude
  double getAmpWeight(int iSample) const{return iSample == 5 ? 1.0:0.0;}

  /// Get weight used to compute dynamic pedestal
  double getPedWeight(int iSample) const{return 0;}

  /// Get weight used to compute time jitter
  double getTimeWeight(int iSample) const{return 0;}

  /// Get chi2 matrix
  double getChi2Matrix(int iSample1, int iSample2) const{return 0;}

 private:
};
#endif // CalibCalorimetry_EcalWeightsTools_ComputeWeightsAfterGainSwitch_h
