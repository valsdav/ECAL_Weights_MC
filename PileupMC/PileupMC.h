#ifndef PileupMC_h
#define PileupMC_h

#include "Pulse.h"
#include <TMath.h>
#include <TFile.h>
#include <TTree.h>
#include <TGraph.h>
#include <TH1D.h>
#include <TString.h>

#include <iostream>


class PileupMC {

    // Number of BX to simulate
    int nBX;
    // BX0 for the signal pulse
    int BX0;
    // eta
    double eta;
    // Pileup energy pdf
    TH1D * PU_pdf;
    // Number of samples to be saved from BX0
    int NSamples;
    
public:
    PileupMC(int nBX, int BX0, int eta, char* puFile, int NSamples);
    ~PileupMC();

    TTree* simulatePileup(Pulse* pulse, double signalAmplitude, int nEvents, int nPU, bool debug);

};






#endif