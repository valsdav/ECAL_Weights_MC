#include "Pulse.h"
#include "PileupMC.h"
#include <TRandom3.h>
#include <TMath.h>
#include <time.h>
#include <string.h>

#include <iostream>

PileupMC::PileupMC(int nBX, int BX0, std::string puFile, int NSamples):
                     nBX(nBX), BX0(BX0), NSamples(NSamples){
    // Check if BX0 is in a position when we can save
    // at least NSamples from the pulse 
    if ((BX0 + NSamples) > nBX ){
        std::cout << "Wrong BX0 position";
        BX0 = (nBX - NSamples);
        std::cout << "BX0 placed at BX:"<<BX0;
    }       
    
    PUfile = new TFile(puFile.c_str());
}

PileupMC::~PileupMC(){
    PUfile->Close();
}

// This functions returns a tree containing the simulated samples
TTree* PileupMC::simulatePileup(int id, Pulse* pulse, double signalAmplitude, int nEvents, 
                                float eta, int nPU, bool debug=false){

    gRandom->SetSeed(0);

    // Get PDF for pileup
    int eta_ring =  floor(10* fabs(eta)) +1;
    if( eta_ring > 29 ) eta_ring = 29;
    std::string hname =  "h" + std::to_string(100+ eta_ring);
    TH1D* PU_pdf = (TH1D*) PUfile->Get(hname.c_str());
    PU_pdf->SetDirectory(0);

    // fixed value for noise
    float sigmaNoise = 0.044;
    // pedestal shift in GeV
    float pedestal = 0.0;

    // Standardize pulse shape for all calculation
    pulse->setAmplitude(1.);
    int pulseLength = pulse->GetNSamples();
    
    // Variables for filling the tree
    // Samples for all BXs
    int ID = id;
    std::vector<double> samples;
    std::vector<double> signal_samples;
    std::vector<double> pileup_samples;
    // Saved samples (window of NSamples after BX0) called digis
    std::vector<double> digis;
    std::vector<double> digis_noise;
    std::vector<double> signal_digis;
    std::vector<double> pileup_digis;
    std::vector<int> nMinBias;
    std::vector<double> energyPU; 
    double signalTruth = signalAmplitude;
    // given by signal + in-time pileup
    double amplitudeTruth;
    // pulse parameters
    double pulseAlpha = pulse->GetAlpha();
    double pulseBeta = pulse->GetBeta();
    double pulseT0 = pulse->GetT0();
    
    // Making the tree
    TTree * treeOut = new TTree("samples", "");
    // treeOut->Branch("pulse_shift",    &real_pulse_shift,"pulse_shift/F");
    // treeOut->Branch("pileup_shift",   &pileup_shift,    "pileup_shift/F");
    treeOut->Branch("ID", &ID);
    treeOut->Branch("signalTruth",    &signalTruth,     "signalTruth/D");
    treeOut->Branch("amplitudeTruth", &amplitudeTruth,  "amplitudeTruth/D");
    treeOut->Branch("nPU",            &nPU,         "nPU/F");
    treeOut->Branch("pulseLength",    &pulseLength, "pulseLength/I");
    treeOut->Branch("nMinBias",       &nMinBias);
    treeOut->Branch("energyPU",       &energyPU);
    treeOut->Branch("digis",        &digis);
    treeOut->Branch("digis_noise",  &digis_noise);
    treeOut->Branch("signal_digis", &signal_digis);
    treeOut->Branch("pileup_digis", &pileup_digis);
    treeOut->Branch("pedestal",     &pedestal, "pedestal/D");
    treeOut->Branch("sigmaNoise",   &sigmaNoise,      "sigmaNoise/F");
    // Pulse parameters
    treeOut->Branch("pulseAlpha",   &pulseAlpha, "pulseAlpha/D");
    treeOut->Branch("pulseBeta",   &pulseBeta, "pulseBeta/D");
    treeOut->Branch("pulseT0",   &pulseT0, "pulseT0/D");
    treeOut->Branch("eta_ring", &eta_ring, "eta_ring/I");
    // If debug save the entire BX train
    if (debug){
        treeOut->Branch("samples",        &samples);
        treeOut->Branch("signal_samples", &signal_samples);
        treeOut->Branch("pileup_samples", &pileup_samples);
    }
     
    for (int ievt = 0; ievt < nEvents; ievt ++ ){
        nMinBias.clear();
        energyPU.clear();

        // Get number of minBias interactions and their energy 
        // using a Poisson distribution and the energy pdf of pileup
        // for the requested eta interval.
        for (int ibx = 0; ibx < nBX; ibx ++){
            // number of min-bias interactions in each bunch crossing
            nMinBias.push_back(gRandom->Poisson(nPU));
            // total energy per BX
            energyPU.push_back(0.);
            for (int imb = 0; imb < nMinBias.at(ibx); imb++) {
                energyPU.at(ibx) += pow(10., PU_pdf->GetRandom());
            }
        }
        
        // Initialize samples
        samples.clear();
        signal_samples.clear();
        pileup_samples.clear();
        for (int ibx = 0; ibx < nBX; ibx ++) {
            samples.push_back(0.);
            signal_samples.push_back(0.);
            pileup_samples.push_back(0.);
        }

        // Signal samples
        for (int ipul = 0; ipul < pulseLength; ipul++){
            if ((BX0 + ipul) < nBX){
                signal_samples.at(BX0 + ipul) = signalAmplitude * pulse->sample(ipul);
            }
            
        }

        // Add PU pulse for each BX
        for (int ibx = 0; ibx < nBX; ibx ++){
            // Add the pulse amplitude on pulseLength following BXs
            for (int ipul = 0; ipul < pulseLength; ipul++){
                if ((ibx + ipul) < nBX){
                    pileup_samples.at(ibx + ipul) += energyPU.at(ibx)*pulse->sample(ipul);
                }
            }
        }
         
        // Sum signal and pileup samples
        for (int ibx = 0; ibx < nBX; ibx ++){
            // Save total amplitude signal + pu in all samples
            samples.at(ibx) = pileup_samples.at(ibx) + signal_samples.at(ibx);
        }
    
        // Extract digis
        digis.clear();
        signal_digis.clear();
        pileup_digis.clear();
        for (int j = 0; j< NSamples; j++){
            digis.push_back(samples.at(BX0 + j));
            signal_digis.push_back(signal_samples.at(BX0 + j));
            pileup_digis.push_back(pileup_samples.at(BX0 + j));
        }   

        // Random gaussian noise in each sample
        std::vector<double> noise;
        for (int i=0; i < NSamples; ++i) {
            noise.push_back(sigmaNoise * gRandom->Gaus(0,1));
        }

        // Calculate digis noise using correlation matrix
        digis_noise.clear();
        for (int i=0; i < NSamples; ++i) {
            digis_noise.push_back(0.);
            for(int j=0; j < NSamples; ++j){
                digis_noise.at(i) += pulse->noise_corr_matrix(i,j) * noise.at(j);
            }
        }   

        // Adding noise and pedestal to digis
        for (int i=0; i < NSamples; ++i) {
            digis.at(i) += digis_noise.at(i) + pedestal;
        }
        
        // Adding energyPU to the true amplitude
        amplitudeTruth = signalTruth + energyPU.at(BX0);
    
        treeOut->Fill();   
    }

    return treeOut;
}