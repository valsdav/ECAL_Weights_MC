#ifndef PileupMC_h
#define PileupMC_h

#include "Pulse.h"
#include <TMath.h>
#include <TFile.h>
#include <TTree.h>
#include <TGraph.h>
#include <TH1D.h>
#include <TString.h>
#include <string>
#include <vector>
#include <iostream>


class PileupMC {

    // Number of BX to simulate
    int nBX;
    // BX0 for the signal pulse
    int BX0;
    // Pileup energy pdf
    TFile * PUfile;
    // Number of samples to be saved from BX0
    int NSamples;
    // PU mask:  0 = no PU, 1 = insert PU at this BX
    std::vector<bool> trainMask;
    
public:
    PileupMC(int nBX, int BX0, std::string puFile, int NSamples, std::vector<bool> trainMask);
    ~PileupMC();

    TTree* simulatePileup(int id, Pulse* pulse, double stripAmplitude, double signalAmplitudeT, 
                        int nEvents, float eta, int nPU, bool debug);

};






#endif