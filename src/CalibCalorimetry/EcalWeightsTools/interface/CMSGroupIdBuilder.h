#ifndef CMSGROUPIDBUILDER_H
#define CMSGROUPIDBUILDER_H

//Author: Konstantinos Theofilatos
//$Date: 2009/10/02 11:55:01 $

// system include files
#include <memory>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDAnalyzer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"


#include "DataFormats/EcalDetId/interface/EBDetId.h"
#include "DataFormats/EcalDetId/interface/EEDetId.h"

#include <fstream>
#include <string>

class CMSGroupIdBuilder : public edm::EDAnalyzer {
 public:

  explicit CMSGroupIdBuilder(edm::ParameterSet const& pSet);
  ~CMSGroupIdBuilder();
  virtual void analyze(const edm::Event& evt, const edm::EventSetup& evtSetup);
  virtual void beginJob() ;
  virtual void endJob() ;


 private:

  int EBDefaultGroupID_;  // hardcoded value 1
  int EEDefaultGroupID_ ; // hardcoded value 2
  std::string  OutputFileName_;

};
#endif
