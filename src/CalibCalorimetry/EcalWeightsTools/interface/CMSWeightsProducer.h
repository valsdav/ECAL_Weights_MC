#include <memory>
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDAnalyzer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"

#include "CalibCalorimetry/EcalWeightsTools/interface/ComputeWeights.h"
#include "CalibCalorimetry/EcalWeightsTools/interface/ComputeWeightsAfterGainSwitch.h"

#include "DataFormats/EcalDetId/interface/EBDetId.h"
#include "DataFormats/EcalDetId/interface/EEDetId.h"
#include "SimCalorimetry/EcalSimAlgos/interface/EcalSimParameterMap.h"
#include "SimCalorimetry/EcalSimAlgos/interface/EcalShapeBase.h"
#include "SimCalorimetry/EcalSimAlgos/interface/EBShape.h"
#include "SimCalorimetry/EcalSimAlgos/interface/EEShape.h"

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdio>

class CMSWeightsProducer : public edm::EDAnalyzer
{
    public:
        explicit CMSWeightsProducer(const edm::ParameterSet&);
        ~CMSWeightsProducer();
        void WriteXMLFile(const ComputeWeights& EB,const ComputeWeightsAfterGainSwitch&EBg,const ComputeWeights&EE,const ComputeWeightsAfterGainSwitch&EEg);
        void ValidateWeights(const ComputeWeights&, const std::vector<double>&);

    private:
        virtual void analyze(const edm::Event&, const edm::EventSetup&);

        int Verbosity_;        //< Messages verbosity
        bool DoFitBaseline_;   //< Fit baseline or not
        bool DoFitTime_;       //< Fit time jitter or not
        int nPulseSamples_;    //< Number of samples in the pulse
        int nPrePulseSamples_; //< Number of samples in the pre-pulse
	bool ProduceSameChi2MatrixBeforeAndAfterGainSwitch_; // produce the same chi2 matrix for all gains

        unsigned int  nSamples_;


        int EBGroupID_;
        int EEGroupID_;
        double TimePhase_;

        std::ofstream OutputFile_;
        std::string OutputFileName_;

};

