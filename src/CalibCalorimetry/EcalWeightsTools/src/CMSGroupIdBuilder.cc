/**
 * \file CMSGroupIdBuilder.cc 
 * EB group id = 1
 * EE group id = 2 
 * Author: Konstantinos Theofilatos  (Oct 9th -  2009)
 *
*/


#include "CalibCalorimetry/EcalWeightsTools/interface/CMSGroupIdBuilder.h"

CMSGroupIdBuilder::CMSGroupIdBuilder(edm::ParameterSet const& pSet):EBDefaultGroupID_(1),EEDefaultGroupID_(2)
{
    OutputFileName_          = pSet.getUntrackedParameter<std::string>("OutputFileName", "xtalgroupid.xml");
}

CMSGroupIdBuilder::~CMSGroupIdBuilder(){}
void CMSGroupIdBuilder::beginJob(){}
void CMSGroupIdBuilder::endJob(){}

void CMSGroupIdBuilder::analyze(const edm::Event& evt, const edm::EventSetup& evtSetup) 
{
    std::ofstream groupid_out(OutputFileName_.c_str());

    if(!groupid_out.is_open())
    {
	edm::LogError("CMSGroupIdBuilder") << "ERROR: CMSGroupIdBuilder: could not create file: "<<OutputFileName_<<std::endl;
	abort();
    }

    // stream cond header
    groupid_out<<"<EcalWeightGroups>"<<std::endl;
    groupid_out<<"  <EcalCondHeader>"<<std::endl;
    groupid_out<<"    <method>method</method>"<<std::endl;
    groupid_out<<"    <version>V0</version>"<<std::endl;
    groupid_out<<"    <datasource>data</datasource>"<<std::endl;
    groupid_out<<"    <since>341</since>"<<std::endl;
    groupid_out<<"    <tag>cmsecaltag</tag>"<<std::endl;
    groupid_out<<"    <date>Oct 09 2009</date>"<<std::endl;
    groupid_out<<"  </EcalCondHeader>"<<std::endl;

    for ( int hi = EBDetId::MIN_HASH; hi < EBDetId::kSizeForDenseIndexing; ++hi ) 
    {
  	EBDetId ebId = EBDetId::unhashIndex( hi );
        int ieta = ebId.ieta();
        int iphi = ebId.iphi();
        int groupId = EBDefaultGroupID_;
        groupid_out<<"  <cell iEta=\""<<ieta<<"\" iPhi=\""<<iphi<<"\">  <EcalWeightGroup> "<<groupId<<" </EcalWeightGroup> </cell>"<<std::endl;
    }

    for ( int hi = 0; hi < EEDetId::kSizeForDenseIndexing; ++hi ) 
    {
	EEDetId eeId = EEDetId::unhashIndex( hi );
        int ix = eeId.ix();
        int iy = eeId.iy();
        int zside = eeId.zside();
        int groupId = EEDefaultGroupID_;
        groupid_out<<"  <cell ix=\""<<ix<<"\" iy=\""<<iy<<"\" zside=\""<<zside<<"\">  <EcalWeightGroup> "<<groupId<<" </EcalWeightGroup> </cell>"<<std::endl;
    }
    groupid_out<<"</EcalWeightGroups>"<<std::endl;
    groupid_out.close();

}



