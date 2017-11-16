// -*- C++ -*-
//
// Package:    CMSWeightsProducer
// Class:      CMSWeightsProducer
// 
/**\class CMSWeightsProducer CMSWeightsProducer.cc CalibCalorimetry/CMSWeightsProducer/src/CMSWeightsProducer.cc

 Description: <one line class summary>

 Implementation:
     <Notes on implementation>
*/
//
// Original Author:  Konstantinos Theofilatos
//         Created:  Wed Sep 30 16:05:22 CEST 2009
// $Id$
//
//


#include "CalibCalorimetry/EcalWeightsTools/interface/CMSWeightsProducer.h"

CMSWeightsProducer::CMSWeightsProducer(const edm::ParameterSet& ps):nSamples_(10)
{
    OutputFileName_ = ps.getUntrackedParameter<std::string>("OutputFileName");
    Verbosity_ = ps.getUntrackedParameter<int>("Verbosity",1);
    DoFitBaseline_ = ps.getUntrackedParameter<bool>("DoFitBaseline",true);
    DoFitTime_ = ps.getUntrackedParameter<bool>("DoFitTime",true);
    nPulseSamples_ = ps.getUntrackedParameter<int>("nPulseSamples",5);
    nPrePulseSamples_ = ps.getUntrackedParameter<int>("nPrePulseSamples",3);
    TimePhase_ = ps.getUntrackedParameter<double>("TimePhase");
    ProduceSameChi2MatrixBeforeAndAfterGainSwitch_ = ps.getUntrackedParameter<bool>("ProduceSameChi2MatrixBeforeAndAfterGainSwitch",true);
    EBGroupID_ = 1;
    EEGroupID_ = 2;
}

CMSWeightsProducer::~CMSWeightsProducer(){}



void CMSWeightsProducer::analyze(const edm::Event& iEvent, const edm::EventSetup& iSetup)
{
    ComputeWeights EBWeightsBeforeGainSwitch(Verbosity_, DoFitBaseline_, DoFitTime_, nPulseSamples_, nPrePulseSamples_);
    ComputeWeightsAfterGainSwitch EBWeightsAfterGainSwitch; // default null values (only 6th sample = 1)

    ComputeWeights EEWeightsBeforeGainSwitch(Verbosity_, DoFitBaseline_, DoFitTime_, nPulseSamples_, nPrePulseSamples_);
    ComputeWeightsAfterGainSwitch EEWeightsAfterGainSwitch; // default null values (only 6th sample = 1)

    std::vector<double> sample_checkEB;//for debugging purposes
    std::vector<double> sample_checkEE;//for debugging purposes

    double shiftTime = TimePhase_; // global Time Phase = 0, 6th is the max sample

    EBShape aEBShape;
    EEShape aEEShape;

    std::vector<double> pulseShapeEB(nSamples_);
    std::vector<double> pulseShapeEBDerivative(nSamples_);

    std::vector<double> pulseShapeEE(nSamples_);
    std::vector<double> pulseShapeEEDerivative(nSamples_);

    unsigned int ADC_clock              = 25;
    
    // compute EB shape parameters
    double risingTimeEB = aEBShape.timeToRise();
    double ToM_EB        = aEBShape.timeOfMax();
    double tzeroEB = risingTimeEB  - 5*ADC_clock;  // 5 samples before the peak
    double tMaxEB      = (ToM_EB)/25.0; // only int(tMaxEB) is actually used, we need to validate for real EE shape
    for (int unsigned iSample = 0; iSample < nSamples_; iSample++)
    {
      pulseShapeEB[iSample]           = (aEBShape)(tzeroEB + shiftTime + iSample*ADC_clock);
      pulseShapeEBDerivative[iSample] = aEBShape.derivative(tzeroEB + shiftTime + iSample*ADC_clock);
      sample_checkEB.push_back(pulseShapeEB[iSample]);
    }
    EBWeightsBeforeGainSwitch.compute(pulseShapeEB, pulseShapeEBDerivative, tMaxEB);
    ValidateWeights(EBWeightsBeforeGainSwitch,sample_checkEB);

    // compute EE shape parameters
    double risingTimeEE = aEEShape.timeToRise();
    double ToM_EE        = aEEShape.timeOfMax();
    double tzeroEE = risingTimeEE  - 5*ADC_clock;  // 5 samples before the peak
    double tMaxEE      = (ToM_EE)/25.0; // only int(tMaxEE) is actually used, we need to validate for real EE shape
    for (int unsigned iSample = 0; iSample < nSamples_; iSample++)
    {
      pulseShapeEE[iSample]           = (aEEShape)(tzeroEE + shiftTime + iSample*ADC_clock);
      pulseShapeEEDerivative[iSample] = aEEShape.derivative(tzeroEE + shiftTime + iSample*ADC_clock);
      sample_checkEE.push_back(pulseShapeEE[iSample]);
    }
    EEWeightsBeforeGainSwitch.compute(pulseShapeEE, pulseShapeEEDerivative, tMaxEE);
    ValidateWeights(EEWeightsBeforeGainSwitch,sample_checkEE);

    std::cout<<" ################################# "<<std::endl;
    std::cout<<" shiftTime = "<<shiftTime<<std::endl; 
    std::cout<<" risingTimeEB = "<<risingTimeEB<<" ToM_EB = "<<ToM_EB<<" tzeroEB = "<<tzeroEB<<" tMaxEB = "<<tMaxEB<<std::endl;
    for (int unsigned iSample = 0; iSample < nSamples_; iSample++)std::cout<< " pulseShapeEB["<<iSample<<"] = "<<pulseShapeEB[iSample]<<std::endl;
    std::cout<<"EBWeightsBeforeGainSwitch = ";
    for (int i =0 ;i<int(nSamples_);i++)std::cout<<std::setprecision(7)<<EBWeightsBeforeGainSwitch.getAmpWeight(i)<<"  ";
    std::cout<<std::endl;
    std::cout<<" -------------------------------- "<<std::endl;
    std::cout<<" risingTimeEE = "<<risingTimeEE<<" ToM_EE = "<<ToM_EE<<" tzeroEE = "<<tzeroEE<<" tMaxEE = "<<tMaxEE<<std::endl;
    for (int unsigned iSample = 0; iSample < nSamples_; iSample++)std::cout<< " pulseShapeEE["<<iSample<<"] = "<<pulseShapeEE[iSample]<<std::endl;
    std::cout<<"EEWeightsBeforeGainSwitch = ";
    for (int i =0 ;i<int(nSamples_);i++)std::cout<<std::setprecision(7)<<EEWeightsBeforeGainSwitch.getAmpWeight(i)<<"  ";
    std::cout<<std::endl;
    std::cout<<" ################################# "<<std::endl;


    WriteXMLFile(EBWeightsBeforeGainSwitch,EBWeightsAfterGainSwitch,EEWeightsBeforeGainSwitch,EEWeightsAfterGainSwitch);
}

void CMSWeightsProducer::WriteXMLFile(
const ComputeWeights & EBWeightsBeforeGainSwitch, const ComputeWeightsAfterGainSwitch& EBWeightsAfterGainSwitch,
const ComputeWeights & EEWeightsBeforeGainSwitch, const ComputeWeightsAfterGainSwitch& EEWeightsAfterGainSwitch
)
{
    std::cout<<"Producing "<<OutputFileName_<<std::endl;

    if ( OutputFileName_ != "" ) 
    {
	OutputFile_.open( OutputFileName_.c_str(), std::ios::out );
	if (!OutputFile_.is_open())
	edm::LogError("CMSWeightsProducer") << "CMSWeightsProducer cannot open " << OutputFileName_;
    }

  using namespace std;
  //write condition header
    OutputFile_<<"<EcalTBWeights>"<<endl;
    OutputFile_<<"<EcalWeightGroups>"<<std::endl;
    OutputFile_<<"  <EcalCondHeader>"<<std::endl;
    OutputFile_<<"    <method>method</method>"<<std::endl;
    OutputFile_<<"    <version>V0</version>"<<std::endl;
    OutputFile_<<"    <datasource>data</datasource>"<<std::endl;
    OutputFile_<<"    <since>341</since>"<<std::endl;
    OutputFile_<<"    <tag>cmsecaltag</tag>"<<std::endl;
    OutputFile_<<"    <date>Oct 09 2009</date>"<<std::endl;
    OutputFile_<<"  </EcalCondHeader>"<<std::endl;


    int precision = 7;
  // write EB weights
    OutputFile_<<"  <EcalTBWeight>"<<endl;
    OutputFile_<<"    <EcalXtalGroupId>"<<EBGroupID_<<"</EcalXtalGroupId>"<<endl;
    OutputFile_<<"    <EcalTDCId>1</EcalTDCId>"<<endl;
    OutputFile_<<"    <EcalWeightSet>"<<endl;
    OutputFile_<<"      <WeightBeforeSwitch>"<<endl;
    OutputFile_<<"        <row id=\"0\">"; 
    for(int i =0 ;i<int(nSamples_);i++)OutputFile_<<"  "<<std::setprecision(precision)<<EBWeightsBeforeGainSwitch.getAmpWeight(i);
    OutputFile_<<" </row>"<<endl;
    OutputFile_<<"        <row id=\"1\">"; 
    for(int i =0 ;i<int(nSamples_);i++)OutputFile_<<"  "<<std::setprecision(precision)<<EBWeightsBeforeGainSwitch.getPedWeight(i);
    OutputFile_<<" </row>"<<endl;
    OutputFile_<<"        <row id=\"2\">"; 
    for(int i =0 ;i<int(nSamples_);i++)OutputFile_<<"  "<<EBWeightsBeforeGainSwitch.getTimeWeight(i);
    OutputFile_<<" </row>"<<endl;
    OutputFile_<<"      </WeightBeforeSwitch>"<<endl;
    OutputFile_<<"      <WeightAfterSwitch>"<<endl;
    OutputFile_<<"        <row id=\"0\">"; 
    for(int i =0 ;i<int(nSamples_);i++)OutputFile_<<"  "<<EBWeightsAfterGainSwitch.getAmpWeight(i);
    OutputFile_<<" </row>"<<endl;
    OutputFile_<<"        <row id=\"1\">"; 
    for(int i =0 ;i<int(nSamples_);i++)OutputFile_<<"  "<<EBWeightsAfterGainSwitch.getPedWeight(i);
    OutputFile_<<" </row>"<<endl;
    OutputFile_<<"        <row id=\"2\">"; 
    for(int i =0 ;i<int(nSamples_);i++)OutputFile_<<"  "<<EBWeightsAfterGainSwitch.getTimeWeight(i);
    OutputFile_<<" </row>"<<endl;
    OutputFile_<<"      </WeightAfterSwitch>"<<endl;
    OutputFile_<<"      <Chi2WeightBeforeSwitch>"<<endl;
    for(int i=0;i<int(nSamples_);i++)
    {
      OutputFile_<<"        <row id=\""<<i<<"\">";
      for(int j=0;j<int(nSamples_);j++)
      {
	OutputFile_<<"  "<<EBWeightsBeforeGainSwitch.getChi2Matrix(i,j);
      }
      OutputFile_<<" </row>"<<endl;
    }
    OutputFile_<<"      </Chi2WeightBeforeSwitch>"<<endl;
    OutputFile_<<"      <Chi2WeightAfterSwitch>"<<endl;
    for(int i=0;i<int(nSamples_);i++)
    {
      OutputFile_<<"        <row id=\""<<i<<"\">";
      for(int j=0;j<int(nSamples_);j++)
      {
	if(ProduceSameChi2MatrixBeforeAndAfterGainSwitch_)
	{
	  OutputFile_<<"  "<<EBWeightsBeforeGainSwitch.getChi2Matrix(i,j);
	}else{OutputFile_<<"  "<<EBWeightsAfterGainSwitch.getChi2Matrix(i,j);}
      }
      OutputFile_<<" </row>"<<endl;
    }
    OutputFile_<<"      </Chi2WeightAfterSwitch>"<<endl;
    OutputFile_<<"    </EcalWeightSet>"<<endl;
    OutputFile_<<"  </EcalTBWeight>"<<endl;

    //write EE weights

    OutputFile_<<"  <EcalTBWeight>"<<endl;
    OutputFile_<<"    <EcalXtalGroupId>"<<EEGroupID_<<"</EcalXtalGroupId>"<<endl;
    OutputFile_<<"    <EcalTDCId>1</EcalTDCId>"<<endl;
    OutputFile_<<"    <EcalWeightSet>"<<endl;
    OutputFile_<<"      <WeightBeforeSwitch>"<<endl;
    OutputFile_<<"        <row id=\"0\">"; 
    for(int i =0 ;i<int(nSamples_);i++)OutputFile_<<"  "<<EEWeightsBeforeGainSwitch.getAmpWeight(i);
    OutputFile_<<" </row>"<<endl;
    OutputFile_<<"        <row id=\"1\">"; 
    for(int i =0 ;i<int(nSamples_);i++)OutputFile_<<"  "<<EEWeightsBeforeGainSwitch.getPedWeight(i);
    OutputFile_<<" </row>"<<endl;
    OutputFile_<<"        <row id=\"2\">"; 
    for(int i =0 ;i<int(nSamples_);i++)OutputFile_<<"  "<<EEWeightsBeforeGainSwitch.getTimeWeight(i);
    OutputFile_<<" </row>"<<endl;
    OutputFile_<<"      </WeightBeforeSwitch>"<<endl;
    OutputFile_<<"      <WeightAfterSwitch>"<<endl;
    OutputFile_<<"        <row id=\"0\">"; 
    for(int i =0 ;i<int(nSamples_);i++)OutputFile_<<"  "<<EEWeightsAfterGainSwitch.getAmpWeight(i);
    OutputFile_<<" </row>"<<endl;
    OutputFile_<<"        <row id=\"1\">"; 
    for(int i =0 ;i<int(nSamples_);i++)OutputFile_<<"  "<<EEWeightsAfterGainSwitch.getPedWeight(i);
    OutputFile_<<" </row>"<<endl;
    OutputFile_<<"        <row id=\"2\">"; 
    for(int i =0 ;i<int(nSamples_);i++)OutputFile_<<"  "<<EEWeightsAfterGainSwitch.getTimeWeight(i);
    OutputFile_<<" </row>"<<endl;
    OutputFile_<<"      </WeightAfterSwitch>"<<endl;
    OutputFile_<<"            <Chi2WeightBeforeSwitch>"<<endl;
    for(int i=0;i<int(nSamples_);i++)
    {
      OutputFile_<<"        <row id=\""<<i<<"\">";
      for(int j=0;j<int(nSamples_);j++)
      {
	OutputFile_<<"  "<<EEWeightsBeforeGainSwitch.getChi2Matrix(i,j);
      }
      OutputFile_<<" </row>"<<endl;
    }
    OutputFile_<<"      </Chi2WeightBeforeSwitch>"<<endl;
    OutputFile_<<"      <Chi2WeightAfterSwitch>"<<endl;
    for(int i=0;i<int(nSamples_);i++)
    {
      OutputFile_<<"        <row id=\""<<i<<"\">";
      for(int j=0;j<int(nSamples_);j++)
      {
	if(ProduceSameChi2MatrixBeforeAndAfterGainSwitch_)
	{
	  OutputFile_<<"  "<<EEWeightsBeforeGainSwitch.getChi2Matrix(i,j);
	}else{OutputFile_<<"  "<<EEWeightsAfterGainSwitch.getChi2Matrix(i,j);}
      }
      OutputFile_<<" </row>"<<endl;
    }
    OutputFile_<<"      </Chi2WeightAfterSwitch>"<<endl;
    OutputFile_<<"    </EcalWeightSet>"<<endl;
    OutputFile_<<"  </EcalTBWeight>"<<endl;

    OutputFile_<<"</EcalTBWeights>"<<endl;
  if(OutputFile_.is_open())OutputFile_.close();
}



void CMSWeightsProducer::ValidateWeights(const ComputeWeights & weights, const std::vector<double> & PulseShape)
{
    double sum_weights = 0.0;
    double sum_wf      = 0.0;
    for (int unsigned iSample = 0; iSample < nSamples_; iSample++)
    {
	    sum_weights += weights.getAmpWeight(iSample);
	    sum_wf      += weights.getAmpWeight(iSample) * PulseShape[iSample];
    }//loop sample
    std::cout<<" sum_weights = "<<sum_weights<<" sum_wf=1"<<std::endl;
}

