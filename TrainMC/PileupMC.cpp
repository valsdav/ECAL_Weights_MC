#include "Pulse.h"
#include "PileupMC.h"
#include <TRandom3.h>
#include <TMath.h>
#include <time.h>
#include <string.h>
#include <iostream>

PileupMC::PileupMC(int nBX, int BX0, std::string puFile, int NSamples, std::vector<bool> trainMask):
                     nBX(nBX), BX0(BX0), NSamples(NSamples), trainMask(trainMask){
    PUfile = new TFile(puFile.c_str());
    // Check taht nBX is at least 8 more than BX0
    if (nBX < BX0 + 8) {
        std::cout << ">>> Error! number of bunches nBX is smaller than BX0+8 " 
             << "    The pulse would be cutted! Resetting it <<<<" << std::endl;
        nBX = BX0 + 8;
    }
}


PileupMC::~PileupMC(){
    PUfile->Close();
}

// This functions returns a tree containing the simulated samples
TTree* PileupMC::simulatePileup(int id, Pulse* pulse, double stripAmplitude, double signalAmplitudeT, 
                                int nEvents, float eta, int nPU, bool debug=false){

    TRandom3 * rnd = new TRandom3();
    rnd->SetSeed(0); //Random seed
    gRandom = rnd;

    // Get PDF for pileup
    int eta_ring =  floor(10* fabs(eta)) +1;
    if( eta_ring > 29 ) eta_ring = 29;
    std::string hname =  "h" + std::to_string(100+ eta_ring);
    TH1D* PU_pdf = (TH1D*) PUfile->Get(hname.c_str());
    PU_pdf->SetDirectory(0);

    // fixed value for noise
    float sigmaNoise =0.;
    // pedestal shift in GeV
    float pedestal = 0.0;

    // Standardize pulse shape for all calculation
    pulse->setAmplitude(1.);
    int pulseLength = pulse->GetNSamples();
    
    // Variables for filling the tree
    // Samples for all BXs
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
    // Transverse energy 
    double ET_strip = stripAmplitude;
    double ET = signalAmplitudeT;
    double signalTruth = ET * cosh(eta);
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
    treeOut->Branch("ID", &id, "ID/I");
    treeOut->Branch("BX0", &BX0, "BX0/I");
    treeOut->Branch("ET_strip",       &ET_strip,        "ET_strip/D");
    treeOut->Branch("ET",             &ET,              "ET/D");
    treeOut->Branch("nPU",            &nPU,         "nPU/I");
    treeOut->Branch("signalTruth",    &signalTruth,     "signalTruth/D");
    treeOut->Branch("amplitudeTruth", &amplitudeTruth,  "amplitudeTruth/D");
    treeOut->Branch("digis",        &digis);
    // If debug save the entire BX train
    if (debug){
        // treeOut->Branch("pedestal",     &pedestal, "pedestal/D");
        // treeOut->Branch("sigmaNoise",   &sigmaNoise,      "sigmaNoise/F");
        treeOut->Branch("eta_ring", &eta_ring, "eta_ring/I");
        treeOut->Branch("pulseAlpha",   &pulseAlpha, "pulseAlpha/D");
        treeOut->Branch("pulseBeta",   &pulseBeta, "pulseBeta/D");
        treeOut->Branch("pulseT0",   &pulseT0, "pulseT0/D");
        treeOut->Branch("nMinBias",       &nMinBias);
        treeOut->Branch("energyPU",       &energyPU);
        treeOut->Branch("samples",        &samples);
        treeOut->Branch("signal_samples", &signal_samples);
        treeOut->Branch("pileup_samples", &pileup_samples);
        treeOut->Branch("digis_noise",  &digis_noise);
        treeOut->Branch("signal_digis", &signal_digis);
        treeOut->Branch("pileup_digis", &pileup_digis);
    }
     
    for (int ievt = 0; ievt < nEvents; ievt ++ ){
        nMinBias.clear();
        energyPU.clear();

        // Get number of minBias interactions and their energy 
        // using a Poisson distribution and the energy pdf of pileup
        // for the requested eta interval.
        // The lenght of the trainMask is used as a reference.
        // N.B: using also the PU mask
        int nbx_pu = trainMask.size();
        for (int ibx = 0; ibx < nBX; ibx ++){
            if (ibx < nbx_pu && trainMask[ibx]){
                // number of min-bias interactions in each bunch crossing
                nMinBias.push_back(gRandom->Poisson(nPU));
                // total energy per BX
                energyPU.push_back(0.);
                for (int imb = 0; imb < nMinBias.at(ibx); imb++) {
                    energyPU.at(ibx) += pow(10., PU_pdf->GetRandom());
                }
            }else{
                // Adding 0 pu in the masked BXs
                nMinBias.push_back(0);
                energyPU.push_back(0.);
            }
        }

        // Initialize samples
        samples.clear();
        signal_samples.clear();
        pileup_samples.clear();
        // N.B.: nBX is already BX0 + 8 to save time
        // we are already able to save all the bx also if the BX0 is at the end of the
        // train.
        for (int ibx = 0; ibx < nBX ; ibx ++) {
            samples.push_back(0.);
            signal_samples.push_back(0.);
            pileup_samples.push_back(0.);
        }

        // Signal samples
        for (int ipul = 0; ipul < (pulseLength -2); ipul++){
            if ((BX0 + ipul) < nBX){
                // Align BX0 to the start of the pulse so at the second
                // BX in the pulse window
                signal_samples.at(BX0 + ipul) = signalTruth * pulse->sample(ipul+2);
            }
            
        }

        // Add PU pulse for each BX
        for (int ibx = 0; ibx < nBX; ibx ++){
            // Add the pulse amplitude on pulseLength following BXs
            for (int ipul = 0; ipul < (pulseLength - 2); ipul++){   
                if (energyPU.at(ibx) == 0.) continue;                
                if ((ibx + ipul) < nBX){
                    // Starting from BX2 when the pulse start
                    pileup_samples.at(ibx + ipul) += energyPU.at(ibx)*pulse->sample(ipul+2);
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
        // We have to check if the BX0 is in the first two BXs
        // In that case the first two (or one) samples in the window are put to 0
        int removeBXwindows = 0;
        if (BX0 < 2){
            // Add the first or the first two samples of the
            // window to 0.
            for(int bj = BX0; bj < 2; bj++){
                digis.push_back(0.0);
                signal_digis.push_back(0.0);
                pileup_digis.push_back(0.0);
            }
            removeBXwindows = 2 - BX0;
        }
        
        for (int j = 0; j< NSamples -removeBXwindows; j++){
            // Since we have starting from BX2 when the pulse start
            // in the window we have to go back of 2 BX from BX0
            digis.push_back(samples.at(BX0 + j - 2 + removeBXwindows));
            signal_digis.push_back(signal_samples.at(BX0 + j - 2 + removeBXwindows));
            pileup_digis.push_back(pileup_samples.at(BX0 + j - 2 + removeBXwindows));
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