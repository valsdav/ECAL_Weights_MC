// -*- C++ -*-
//
// Package:    RechitDumper/RechitDumper
// Class:      RechitDumper
//
/**\class RechitDumper RechitDumper.cc RechitDumper/RechitDumper/plugins/RechitDumper.cc

 Description: [one line class summary]

 Implementation:
     [Notes on implementation]
*/
//
// Original Author:  Davide Valsecchi
//         Created:  Wed, 06 Feb 2019 10:33:44 GMT
//
//


// system include files
#include <memory>
#include <vector>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/one/EDAnalyzer.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Utilities/interface/InputTag.h"


#include "CommonTools/UtilAlgos/interface/TFileService.h"
#include "FWCore/ServiceRegistry/interface/Service.h"

// ECAL includes
#include "DataFormats/EcalRecHit/interface/EcalRecHitCollections.h"
#include "CalibCalorimetry/EcalLaserCorrection/interface/EcalLaserDbService.h"
#include "CalibCalorimetry/EcalLaserCorrection/interface/EcalLaserDbRecord.h"
#include "CondFormats/EcalObjects/interface/EcalADCToGeVConstant.h"
#include "CondFormats/DataRecord/interface/EcalADCToGeVConstantRcd.h"
#include "CondFormats/EcalObjects/interface/EcalIntercalibConstants.h"
#include "CondFormats/EcalObjects/interface/EcalIntercalibConstantsMC.h"
#include "CondFormats/DataRecord/interface/EcalIntercalibConstantsRcd.h"
#include "CondFormats/DataRecord/interface/EcalIntercalibConstantsMCRcd.h"
#include "DataFormats/EcalDigi/interface/EcalDigiCollections.h"
#include "DataFormats/EcalRecHit/interface/EcalUncalibratedRecHit.h"
#include "DataFormats/EcalRecHit/interface/EcalRecHit.h"


#include "TTree.h"

//
// class declaration
//

// If the analyzer does not use TFileService, please remove
// the template argument to the base class so the class inherits
// from  edm::one::EDAnalyzer<>
// This will improve performance in multithreaded jobs.


class RechitDumper : public edm::one::EDAnalyzer<edm::one::SharedResources>  {
   public:
      explicit RechitDumper(const edm::ParameterSet&);
      ~RechitDumper();

      static void fillDescriptions(edm::ConfigurationDescriptions& descriptions);


   private:
      virtual void beginJob() override;
      virtual void analyze(const edm::Event&, const edm::EventSetup&) override;
      virtual void endJob() override;

      // ----------member data ---------------------------
      edm::EDGetTokenT<EcalRecHitCollection> _token_ebrechits;
      edm::EDGetTokenT<EcalRecHitCollection> _token_eerechits;

      // output tree
      TTree *outTree;
      int _run;
      short int _lumi;
      short int _bx;
      short int _event;       
      std::vector<float> rechits;   
      std::vector<int> ixs;
      std::vector<int> iys;
      std::vector<int> izs;
  
};

//
// constants, enums and typedefs
//

//
// static data member definitions
//

//
// constructors and destructor
//
RechitDumper::RechitDumper(const edm::ParameterSet& iConfig)
 : _token_eerechits{consumes<EcalRecHitCollection>(iConfig.getParameter<edm::InputTag>("EcalRecHitsEECollection"))}
   
  

{
      usesResource("TFileService");
      edm::Service<TFileService> fs;
      //now do what ever initialization is needed
      
      outTree = fs->make<TTree>("tree","tree");
      outTree->Branch("run",               &_run,             "run/i");
      outTree->Branch("lumi",              &_lumi,            "lumi/s");
      outTree->Branch("bx",                &_bx,              "bx/s");
      outTree->Branch("event",             &_event,           "event/i");
      outTree->Branch("rechits",  &rechits);
      outTree->Branch("ixs",  &ixs);
      outTree->Branch("iys",  &iys);
      outTree->Branch("izs",  &izs);
}


RechitDumper::~RechitDumper()
{

   // do anything here that needs to be done at desctruction time
   // (e.g. close files, deallocate resources etc.)

}


//
// member functions
//

// ------------ method called for each event  ------------
void
RechitDumper::analyze(const edm::Event& iEvent, const edm::EventSetup& iSetup)
{
   using namespace edm;

   _run = iEvent.eventAuxiliary().run();
   _lumi = iEvent.eventAuxiliary().luminosityBlock();
   _bx = iEvent.eventAuxiliary().bunchCrossing();
   _event = iEvent.eventAuxiliary().event();

   rechits.clear();
   ixs.clear();
   iys.clear();

   // Get Endcap rechits
   edm::Handle<EcalRecHitCollection> eerechithandle;
   const EcalRecHitCollection *eerechits = NULL;
   iEvent.getByToken(_token_eerechits,eerechithandle);
   eerechits = eerechithandle.product();

   for (EcalRecHitCollection::const_iterator itrechit = eerechits->begin(); itrechit != eerechits->end(); itrechit++ ) {
      auto detid = EEDetId(itrechit->id());
      ixs.push_back(detid.ix());
      iys.push_back(detid.iy());
      izs.push_back(detid.zside());
      rechits.push_back(itrechit->energy());
   }
  
  outTree->Fill();
  
}


// ------------ method called once each job just before starting event loop  ------------
void
RechitDumper::beginJob()
{
}

// ------------ method called once each job just after ending the event loop  ------------
void
RechitDumper::endJob()
{
}

// ------------ method fills 'descriptions' with the allowed parameters for the module  ------------
void
RechitDumper::fillDescriptions(edm::ConfigurationDescriptions& descriptions) {
  //The following says we do not know what parameters are allowed so do no validation
  // Please change this to state exactly what you do use, even if it is no parameters
  edm::ParameterSetDescription desc;
  desc.setUnknown();
  descriptions.addDefault(desc);

  //Specify that only 'tracks' is allowed
  //To use, remove the default given above and uncomment below
//   ParameterSetDescription desc;
//   desc.addUntracked<edm::InputTag>("ecalMultiFitUncalibRecHit","EcalUncalibRecHitsEB");
//   descriptions.addDefault(desc);
}

//define this as a plug-in
DEFINE_FWK_MODULE(RechitDumper);
