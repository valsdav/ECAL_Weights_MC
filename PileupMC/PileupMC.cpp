#include "Pulse.h"
#include "PileupMC.h"
#include <TRandom3.h>
#include <TMath.h>

#include <iostream>

PileupMC::PileupMC(int nBX, int BX0, int eta, char* puFile, int NSamples):
    nBX(nBX), BX0(BX0), eta(eta), NSamples(NSamples){
        // Get PUpdf from file
        TFile* file = new TFile(puFile);
        int indx = 10 * fabs(eta) / 0.1;
        if( indx < 0 )  indx = 0;
        if( indx > 13 ) indx = 13;
        char hname[120];
        sprintf(hname,"PileupPDFs/pupdf_%d",indx);
        PU_pdf = (TH1D*)file->Get(hname);
        PU_pdf->SetDirectory(0);
        file->Close();
        delete file;
}

// This functions returns a tree containing the simulated samples
TTree* PileupMC::simulatePileup(Pulse* pulse, double signalAmplitude, int nevents, int nPU){

    TRandom3 rnd;

    // Get standard pulse of amplitude 1
    pulse->setAmplitude(1);

    // Variables for filling the tree
    double amplitudeTruth;
    std::vector<double> samples;
    std::vector<double> samples_noise;
    std::vector<int> nMinBias;
    std::vector<double> energyPU; 
    std::vector<double> pulse_signal;
    std::vector<double> pileup_signal;
    double signalTruth = signalAmplitude;
    
    // Making the tree
    TTree *treeOut = new TTree("Samples", "");
    // treeOut->Branch("pulse_shift",    &real_pulse_shift,"pulse_shift/F");
    // treeOut->Branch("pileup_shift",   &pileup_shift,    "pileup_shift/F");
    // treeOut->Branch("nSmpl",          &nSmpl,           "nSmpl/I");
    // treeOut->Branch("nFreq",          &nFreq,           "nFreq/F");
    treeOut->Branch("amplitudeTruth", &amplitudeTruth,  "amplitudeTruth/D");
    treeOut->Branch("samples",        &samples);
    treeOut->Branch("samples_noise",        &samples_noise);
    treeOut->Branch("nPU",            &nPU,             "nPU/F");
    treeOut->Branch("BX0",            &BX0,             "BX0/I");
    treeOut->Branch("nBX",            &nBX,             "nBX/I");
    // treeOut->Branch("nWF",            &nWF,             "nWF/I");
    treeOut->Branch("nMinBias",       &nMinBias);
    treeOut->Branch("energyPU",       &energyPU);
    treeOut->Branch("pulse_signal",   &pulse_signal);
    treeOut->Branch("pileup_signal",  &pileup_signal);
    treeOut->Branch("signalTruth",    &signalTruth,     "signalTruth/D");
    // treeOut->Branch("sigmaNoise",     &sigmaNoise,      "sigmaNoise/F");
    // treeOut->Branch("puFactor",       &puFactor,        "puFactor/F");
    // treeOut->Branch("pulse_tau",      &pulse_tau,       "pulse_tau/F");
    // treeOut->Branch("wf_name",        wf_name,         "wf_name/C");
    // treeOut->Branch("input_pedestal",            &pedestal,             "input_pedestal/F");
    // treeOut->Branch("distortion_sample_4",            &distortion_sample_4,             "distortion_sample_4/F");
    
    
}