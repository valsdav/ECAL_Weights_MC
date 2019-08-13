// Macro for producing plots for investigating the weights

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>
#include <map>
#include <algorithm>
//#include <boost/tokenizer.hpp>
#include <vector>
#include <TChain.h>
#include <TFile.h>
#include <TH1.h>
#include <TH2.h>
#include <TH3.h>
#include <TProfile2D.h>
#include <TProfile.h>


using  namespace std;

/*
* This macro does some cleaning on the output of the 
* TPGAnalyzer. It saves a TTree with 1 entry for each tower 
* with only useful variables.
* It cleans also the data:
* - remove towers with no crystals read
* - remove towers with eTrue == 0
* - saved only endcap towers
*/


struct EcalTPGVariables
{
   
  // event variables
  UInt_t runNb ;
  ULong64_t evtNb ;
  Int_t bxNb ;
  Int_t lumiBlock ;
  ULong64_t orbitNb ;
  double timeStamp ; 
  UInt_t nbOfActiveTriggers ;
  UInt_t nbOfActiveTriggersBX ;
   
  int activeTriggers[128] ;
  int activeTriggersBX[128] ;
   
  int activeTechTriggers[64] ;
  UInt_t nbOfActiveTechTriggers ;
   
  // tower variables
  Int_t nbOfTowers ; //max 4032 EB+EE
  int ieta[4032] ;
  int iphi[4032] ;
  int nbOfXtals[4032] ;
  int rawTPData[4032] ;
  int rawTPEmul1[4032] ;
  int rawTPEmul2[4032] ;
  int rawTPEmul3[4032] ;
  int rawTPEmul4[4032] ;
  int rawTPEmul5[4032] ;
  int rawTPEmulttFlag1[4032] ;
  int rawTPEmulttFlag2[4032] ;
  int rawTPEmulttFlag3[4032] ;
  int rawTPEmulttFlag4[4032] ;
  int rawTPEmulttFlag5[4032] ;
  int rawTPEmulsFGVB1[4032] ;
  int rawTPEmulsFGVB2[4032] ;
  int rawTPEmulsFGVB3[4032] ;
  int rawTPEmulsFGVB4[4032] ;
  int rawTPEmulsFGVB5[4032] ;
  
  float eRec[4032] ;
  int crystNb[4032] ;
  int spike[4032] ;
  int sevlv[4032];
  int ttFlag[4032];
  int trig_tower_adc[4032], trig_tower_sFGVB[4032]; 

} ;

struct TowerVariables
{
  // event variables
  Int_t runNb ;
  ULong64_t evtNb ;
  Int_t bxNb ;
  Int_t lumiBlock ;
     
  // tower variables
  int ieta;
  int iphi;
  float TPData;
  float emulTP [5];
  float maxEmulTP;
  int indexMaxEmulTP;
  int emulTP_TTFlag [5];  // low, med or high interest
  int emulTP_FGVB [5];    // online spike check
  
  float eRec;
  int crystNb; // number of crystal read in the tower

  // quantities related to TP in data, not with emulated weights
  int spike; 
  int sevlv;
  int ttFlag;
  int trig_tower_adc;  // erec in ADC
  int trig_tower_sFGVB; 
   
} ;



void setBranchAddresses (TTree * tree, EcalTPGVariables & treeVars)
{
  tree->SetBranchAddress ("runNb",&treeVars.runNb) ; 
  tree->SetBranchAddress ("evtNb",&treeVars.evtNb) ; 
  tree->SetBranchAddress ("bxNb",&treeVars.bxNb) ; 
  tree->SetBranchAddress ("lumiBlock",&treeVars.lumiBlock) ;
  tree->SetBranchAddress ("orbitNb",&treeVars.orbitNb) ; 
  tree->SetBranchAddress ("timeStamp",&treeVars.timeStamp) ; 
  tree->SetBranchAddress ("nbOfActiveTriggers",&treeVars.nbOfActiveTriggers) ; 
  tree->SetBranchAddress ("activeTriggers",treeVars.activeTriggers) ; 
  tree->SetBranchAddress ("activeTriggersBX",treeVars.activeTriggersBX) ;
  tree->SetBranchAddress ("nbOfActiveTechTriggers",&treeVars.nbOfActiveTechTriggers) ; 
  tree->SetBranchAddress ("activeTechTriggers",treeVars.activeTechTriggers) ; 
  tree->SetBranchAddress ("nbOfTowers",&treeVars.nbOfTowers) ; 
  tree->SetBranchAddress ("ieta",treeVars.ieta) ; 
  tree->SetBranchAddress ("iphi",treeVars.iphi) ; 
  tree->SetBranchAddress ("nbOfXtals",treeVars.nbOfXtals) ; 
  tree->SetBranchAddress ("rawTPData",treeVars.rawTPData) ; 
  tree->SetBranchAddress ("rawTPEmul1",treeVars.rawTPEmul1) ; 
  tree->SetBranchAddress ("rawTPEmul2",treeVars.rawTPEmul2) ; 
  tree->SetBranchAddress ("rawTPEmul3",treeVars.rawTPEmul3) ; 
  tree->SetBranchAddress ("rawTPEmul4",treeVars.rawTPEmul4) ; 
  tree->SetBranchAddress ("rawTPEmul5",treeVars.rawTPEmul5) ; 
  tree->SetBranchAddress ("eRec",treeVars.eRec) ; 
  tree->SetBranchAddress ("crystNb",treeVars.crystNb) ;
  tree->SetBranchAddress ("spike",treeVars.spike) ;
  tree->SetBranchAddress ("sevlv", treeVars.sevlv);
  tree->SetBranchAddress ("ttFlag", treeVars.ttFlag);
  tree->SetBranchAddress ("trig_tower_adc",treeVars.trig_tower_adc) ; 
  tree->SetBranchAddress ("trig_tower_sFGVB",treeVars.trig_tower_sFGVB) ; 
  tree->SetBranchAddress ("rawTPEmulsFGVB1",treeVars.rawTPEmulsFGVB1) ; 
  tree->SetBranchAddress ("rawTPEmulsFGVB2",treeVars.rawTPEmulsFGVB2) ; 
  tree->SetBranchAddress ("rawTPEmulsFGVB3",treeVars.rawTPEmulsFGVB3) ; 
  tree->SetBranchAddress ("rawTPEmulsFGVB4",treeVars.rawTPEmulsFGVB4) ; 
  tree->SetBranchAddress ("rawTPEmulsFGVB5",treeVars.rawTPEmulsFGVB5) ; 
  tree->SetBranchAddress ("rawTPEmulttFlag1",treeVars.rawTPEmulttFlag1) ; 
  tree->SetBranchAddress ("rawTPEmulttFlag2",treeVars.rawTPEmulttFlag2) ; 
  tree->SetBranchAddress ("rawTPEmulttFlag3",treeVars.rawTPEmulttFlag3) ; 
  tree->SetBranchAddress ("rawTPEmulttFlag4",treeVars.rawTPEmulttFlag4) ; 
  tree->SetBranchAddress ("rawTPEmulttFlag5",treeVars.rawTPEmulttFlag5) ;

}

void setOutputBranchAddress (TTree * tree, TowerVariables & treeVars)
{
  tree->Branch ("runNb",&treeVars.runNb, "runNb/I") ; 
  tree->Branch ("evtNb",&treeVars.evtNb, "evtNb/l") ; 
  tree->Branch ("bxNb",&treeVars.bxNb, "bxNb/I") ; 
  tree->Branch ("lumiBlock",&treeVars.lumiBlock, "lumiBlock/I") ;
  tree->Branch ("ieta",&treeVars.ieta, "ieta/I") ; 
  tree->Branch ("iphi",&treeVars.iphi, "iphi/I") ; 
  tree->Branch ("TPData",&treeVars.TPData, "TPData/F") ; 
  tree->Branch ("emulTP",treeVars.emulTP, "emulTP[5]/F") ; 
  tree->Branch ("emulTP_TTFlag",treeVars.emulTP_TTFlag,"emulTP_TTFlag[5]/I") ;
  tree->Branch ("emulTP_FGVB",treeVars.emulTP_FGVB,"emulTP_FGVB[5]/I") ;
  tree->Branch ("maxEmulTP",&treeVars.maxEmulTP, "MaxEmulTP/F") ; 
  tree->Branch ("indexMaxEmulTP",&treeVars.indexMaxEmulTP,"indexMaxEmulTP/I") ;
  tree->Branch ("eRec",&treeVars.eRec, "eRec/F") ; 
  tree->Branch ("crystNb",&treeVars.crystNb,"crystNb/I") ;
  tree->Branch ("spike",&treeVars.spike, "spike/I") ;
  tree->Branch ("sevlv", &treeVars.sevlv, "sevlv/I");
  tree->Branch ("ttFlag", &treeVars.ttFlag, "ttFlag/I");
  tree->Branch ("trig_tower_adc",&treeVars.trig_tower_adc, "trig_tower_adc/I") ; 
  tree->Branch ("trig_tower_sFGVB",&treeVars.trig_tower_sFGVB, "trig_tower_sFGVB/I") ; 
}

int getEt(UInt_t val) {return (val&0xff) ;}

UInt_t getFg(UInt_t val) {return ((val&0x100)!=0) ;}

UInt_t getTtf(UInt_t val) {return ((val>>9)&0x7) ;}


///////  --------------------------------- Main program --------------------------------------------/////////

void unfold_dump(char * inputfile, char * output)
{  

  // Name the chains
  TFile * inputFile = new TFile(inputfile) ;
  TTree * inputTree = (TTree*)inputFile->Get("EcalTPGAnalysis");
  

  // if set to true: print debug info on matched and unmatched towers
  bool debug=false;

  // set branch addresses to read trees
  EcalTPGVariables treeVars ;
  setBranchAddresses (inputTree, treeVars) ;

  TFile * outputFile = new TFile(output, "recreate");
  TTree * outTree = new TTree("EcalTPGAnalysis", "");

  TowerVariables towerVars ;
  setOutputBranchAddress(outTree, towerVars);
   
  // ----------TREE-1-----------------
  Int_t treeentries=inputTree->GetEntries();

  int count=0;

  for (int entry = 0 ; entry < treeentries ; ++entry) {

    if (entry%1000==0) cout << entry << " / " << treeentries
			     << " events processed" << endl;
    
    inputTree->GetEntry (entry) ;

    towerVars.runNb = treeVars.runNb;
    towerVars.evtNb = treeVars.evtNb;
    towerVars.bxNb = treeVars.bxNb;;
    towerVars.lumiBlock = treeVars.lumiBlock;

    //cout << "bx " << treeVars.bxNb << " n towers "  << treeVars.nbOfTowers <<endl; 

    for (UInt_t tower = 0 ; tower < treeVars.nbOfTowers ; tower++) {
      
      int ieta = treeVars.ieta[tower] ;
      int iphi = treeVars.iphi[tower] ;
      towerVars.ieta = ieta;
      towerVars.iphi = iphi;
     

      towerVars.ttFlag = treeVars.ttFlag[tower];// low, med or high interest
      towerVars.eRec  = treeVars.eRec[tower];//offline energy in the tower
      towerVars.sevlv     = treeVars.sevlv[tower];//spike rejection offline 3 or 4
      towerVars.crystNb   = treeVars.crystNb[tower];// number of xstals read out to daq for that tower

       // Keep only endcap
      if (abs(ieta) < 18) continue;
      // Keep only towers with at least 1 crystal read
      if (towerVars.crystNb == 0) continue;

      // Remove events with no energy, 
      // Don't save in the spectrum since they are not analyzed. 
      if (towerVars.eRec == 0) continue;
      
      towerVars.emulTP_FGVB[0] = treeVars.rawTPEmulsFGVB1[tower];  
      towerVars.emulTP_FGVB[1] = treeVars.rawTPEmulsFGVB2[tower];
      towerVars.emulTP_FGVB[2] = treeVars.rawTPEmulsFGVB3[tower];
      towerVars.emulTP_FGVB[3] = treeVars.rawTPEmulsFGVB4[tower];
      towerVars.emulTP_FGVB[4] = treeVars.rawTPEmulsFGVB5[tower];

      towerVars.emulTP_TTFlag[0] = treeVars.rawTPEmulttFlag1[tower];  
      towerVars.emulTP_TTFlag[1] = treeVars.rawTPEmulttFlag2[tower];
      towerVars.emulTP_TTFlag[2] = treeVars.rawTPEmulttFlag3[tower];
      towerVars.emulTP_TTFlag[3] = treeVars.rawTPEmulttFlag4[tower];
      towerVars.emulTP_TTFlag[4] = treeVars.rawTPEmulttFlag5[tower];

      float tp = (float)getEt(treeVars.rawTPData[tower]) ;
      float emul[5] = { (float) getEt(treeVars.rawTPEmul1[tower]),  
                    (float) getEt(treeVars.rawTPEmul2[tower]),
                    (float) getEt(treeVars.rawTPEmul3[tower]),//should match the trigger data if timing right
                    (float)getEt(treeVars.rawTPEmul4[tower]),
                    (float)getEt(treeVars.rawTPEmul5[tower])} ;   
            
      int maxOfTPEmul = 0 ;
      int indexOfTPEmulMax = -1 ;

      for (int i=0 ; i<5 ; i++) {
        if (emul[i]>maxOfTPEmul)
          {
            maxOfTPEmul = emul[i] ; 
            indexOfTPEmulMax = i ;
          }
      }

      // puts into GeV and sorts the ring 27 and ring 28 factor of 2 for TPs
      if (abs(ieta)<27) 
      { 
        towerVars.TPData = tp*0.5;
        towerVars.maxEmulTP = maxOfTPEmul*0.5;
      }
      else {
        towerVars.TPData = tp;
        towerVars.maxEmulTP = (float) maxOfTPEmul;
      }
      towerVars.indexMaxEmulTP = indexOfTPEmulMax;

      // puts into GeV and sorts the 27, 28 factor of 2 for emulTPs
      if (abs(ieta)<27) {
        for (int i=0; i<5; i++){
          towerVars.emulTP[i] = emul[i]*0.5;
        }
      }else {
        for (int i=0; i<5; i++){
          towerVars.emulTP[i] = emul[i];
        }
      }

      // Fill the tree for each tower
      outTree->Fill();


    } // end of tower loop
  } // end of events loop

  outputFile->Write();
  outputFile->Close();

}