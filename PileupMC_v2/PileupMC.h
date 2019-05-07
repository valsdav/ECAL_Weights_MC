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


struct EventMC {
    // Amplitude variables
    double signalA;
    double signalA_T;
    // given by signal + in-time pileup
    double trueA;
    double trueA_T;
    // Digis variables
    std::vector<double> digis;
    std::vector<double> noise_digis;
    std::vector<double> signal_digis;
    std::vector<double> pileup_digis;
    // Samples (only for debug)
    std::vector<double> samples;
    std::vector<double> signal_samples;
    std::vector<double> pileup_samples;
    // PU variables
    std::vector<double> energyPU; 
    std::vector<int> nPU_bx; 
    // Position in the train (for train simulation)
    int BX0;
};

class PileupMC {

    // Pileup energy pdf 
    TFile * PUfile;
    // Pileup N. interactions per BX
    TFile * PU_BX_file;
    TTree * nPU_tree;
    int ntrains;
    // Number of samples to be saved from BX0
    int NSamples;
    
public:
    PileupMC(int NSamples, std::string pu_EFile, std::string pu_BXFile);
    ~PileupMC();

    EventMC simulateEvent(Pulse* pulse, TH1D* PU_pdf, std::vector<int> nPU_bx,  int BX0,
                                double signalA_T, float eta);

    TTree* simulateStrip(int stripID, std::vector<Pulse*> xtals_pulses, std::vector<float> etas,
                    TH1D * signalA_T_distr, std::vector<int> BX0s , int nPU, int nevents, bool debug);

};




#endif