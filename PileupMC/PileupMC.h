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
    
public:
    PileupMC(int nBX, int BX0, std::string puFile, int NSamples);
    ~PileupMC();

    TTree* simulatePileup(int id, Pulse* pulse, double signalAmplitude, int nEvents, 
            float eta, int nPU, bool debug);

};






#endif