#include "Pulse.h"
#include "PileupMC.h"
#include <TRandom3.h>
#include <TMath.h>
#include <time.h>
#include <cmath>
#include <string>
#include <numeric>
#include <iostream>

PileupMC::PileupMC(int NSamples, std::string puEFile, std::string puBXFile ):
                    NSamples(NSamples){
    // PDF minbias energy file
    PUfile = new TFile(puEFile.c_str());
    PU_BX_file = new TFile(puBXFile.c_str());
    nPU_tree = (TTree*) PU_BX_file->Get("nPU");
    ntrains = nPU_tree->GetEntries();
    //nPU_tree->SetDirectory(0);

    //Initialize gRandom
    TRandom3 * rnd = new TRandom3();
    rnd->SetSeed(0); //Random seed
    gRandom = rnd;
}

   

PileupMC::~PileupMC(){
    PUfile->Close();
}

TTree* PileupMC::simulateStrip(int stripID, std::vector<Pulse*> xtals_pulses, std::vector<float> etas,
                    TH1D * signalA_T_distr, std::vector<int> BX0s , int nPU, int nevents, bool debug=false){


    std::vector<int>* nPU_bx = new std::vector<int>();
    // Load the specific nPU branch
    nPU_tree->SetBranchAddress(("nPU_"+std::to_string(nPU)).c_str(), &nPU_bx);
    int ipuevent = 0;

    // Load the PUpdfs
    std::vector<TH1D*> PUpdfs;
    for (int jp = 0; jp < etas.size(); jp++){
        float eta = etas.at(jp);
        // Get PDF for pileup
        int eta_ring =  floor(10* fabs(eta)) +1;
        if( eta_ring > 29 ) eta_ring = 29;
        std::string hname =  "h" + std::to_string(100+ eta_ring);
        TH1D* PU_pdf = (TH1D*) PUfile->Get(hname.c_str());
        PU_pdf->SetDirectory(0);
        PUpdfs.push_back(PU_pdf);
    }

    // Branches to be saved for the strip
    // Saved samples (window of NSamples after BX0) called digis
    std::vector<double> digis;
    std::vector<double> noise_digis;
    std::vector<double> signal_digis;
    std::vector<double> pileup_digis;
    std::vector<double> samples;
    std::vector<double> signal_samples;
    std::vector<double> pileup_samples;
    std::vector<double> energyPU;
    double E_pu;  // Mean PU energy in each event
    // Transverse energy 
    double signalA_strip;
    double signalA_T_strip;
    double trueA_T_strip;
    double trueA_strip;
    int BX0;
    
    // Making the tree
    TTree * treeOut = new TTree("samples", "");
    treeOut->Branch("BX0",          &BX0, "BX0/I");
    treeOut->Branch("nPU",          &nPU,         "nPU/I");
    treeOut->Branch("trueA",        &trueA_strip,       "trueA/D");
    treeOut->Branch("trueA_T",      &trueA_T_strip,     "trueA_T/D");
    //treeOut->Branch("signalA",      &signalA_strip,     "signalA/D");
    //treeOut->Branch("signalA_T",    &signalA_T_strip,   "signalA_T/D");
    treeOut->Branch("digis",        &digis);
    treeOut->Branch("E_pu",     &E_pu);  // Save the mean of energyPU per event per strip
    // If debug save the entire BX train
    if (debug){
        // treeOut->Branch("pedestal",     &pedestal, "pedestal/D");
        // treeOut->Branch("sigmaNoise",   &sigmaNoise,      "sigmaNoise/F");
        // treeOut->Branch("eta_ring", &eta_ring, "eta_ring/I");
        treeOut->Branch("ID",           &stripID, "ID/I");
        treeOut->Branch("nMinBias",       nPU_bx);
        treeOut->Branch("energyPU",       &energyPU);
        treeOut->Branch("samples",        &samples);
        treeOut->Branch("signal_samples", &signal_samples);
        treeOut->Branch("pileup_samples", &pileup_samples);
        treeOut->Branch("noise_digis",  &noise_digis);
        treeOut->Branch("signal_digis", &signal_digis);
        treeOut->Branch("pileup_digis", &pileup_digis);
    }
    
    for(int ibx0=0; ibx0 < BX0s.size(); ibx0++){
        BX0 = BX0s.at(ibx0);
        std::cout << "Simulate BX0: " << BX0 << std::endl; 

        for (int iev=0; iev < nevents ; iev ++){

            if (iev % 1000 == 0){
                std::cout << ".";
            }
            // Load the number of PU events for the strip in this event
            if (ipuevent >= ntrains){
                std::cout << "Critical Error! More events than pu trains!" << std::endl;
                exit(1);
            }
            nPU_tree->GetEntry(ipuevent++);

            // Sample the signalT distribution
            signalA_T_strip = signalA_T_distr->GetRandom();
            double signalA_T_xtal = signalA_T_strip / xtals_pulses.size();

            // Simulate each xtal 
            std::vector<EventMC> events_xtals; 
            for (int jp = 0; jp < xtals_pulses.size(); jp++){
                events_xtals.push_back(simulateEvent(xtals_pulses.at(jp), PUpdfs.at(jp), 
                                *nPU_bx, BX0, signalA_T_xtal, etas.at(jp)));
            }

            digis.clear();
            noise_digis.clear();
            signal_digis.clear();
            pileup_digis.clear();
            samples.clear();
            signal_samples.clear();
            pileup_samples.clear();
            energyPU.clear();
            E_pu = 0.;
            trueA_strip  = 0.;
            trueA_T_strip = 0.;
            
            // Now we can sum the quantities
            for (int ixtal=0; ixtal<events_xtals.size(); ixtal++){
                auto event = events_xtals.at(ixtal);
                if (ixtal == 0){
                    std::copy(event.digis.begin(), event.digis.end(), std::back_inserter(digis));
                    std::copy(event.energyPU.begin(), event.energyPU.end(), std::back_inserter(energyPU));
                    if (debug){
                        std::copy(event.samples.begin(), event.samples.end(), std::back_inserter(samples));
                        std::copy(event.noise_digis.begin(), event.noise_digis.end(), std::back_inserter(noise_digis));
                        std::copy(event.signal_digis.begin(), event.signal_digis.end(), std::back_inserter(signal_digis));
                        std::copy(event.pileup_digis.begin(), event.pileup_digis.end(), std::back_inserter(pileup_digis));
                        std::copy(event.signal_samples.begin(), event.signal_samples.end(), std::back_inserter(signal_samples));
                        std::copy(event.pileup_samples.begin(), event.pileup_samples.end(), std::back_inserter(pileup_samples));
                    }
                    
                }else{
                    for (int j=0; j<event.digis.size(); j++){
                        digis[j] += event.digis[j];
                    }
                    for (int j=0; j<event.energyPU.size(); j++){
                            energyPU[j] += event.energyPU[j];
                    }
                    if (debug){
                        for (int j=0; j<event.digis.size(); j++){
                            noise_digis[j] += event.noise_digis[j];
                            signal_digis[j] += event.signal_digis[j];
                            pileup_digis[j] += event.pileup_digis[j];
                        }
                        for (int j=0; j<event.samples.size(); j++){
                            samples[j] += event.samples[j];
                            signal_samples[j] += event.signal_samples[j];
                            pileup_samples[j] += event.pileup_samples[j];
                        }
                    }
                }
                E_pu = std::accumulate(energyPU.begin(), energyPU.end(), 0.0)/energyPU.size();
                // Accumulate true Amplitude 
                trueA_strip += event.trueA;
                trueA_T_strip += event.trueA_T;
            } // End of loop on events per xtal
            
            treeOut->Fill();
        }  // end of loop on events
        std::cout << std::endl;
    } // end of loop on BX0s

    return treeOut;  

}

/*
*
*   The BX0 is the 4th sample (index 3) in the 10 samples windows.
*   The 5 weights are applied starting from 3rd samples (index 2).
*
*/


// This functions returns a tree containing the simulated samples
EventMC PileupMC::simulateEvent(Pulse* pulse, TH1D* PU_pdf, std::vector<int> nPU_bx, int BX0,
                                double signalA_T, float eta){
    // Set the nBX to BX0+7 to avoid the simulation of useless BXs.
    int nBX = BX0 + 7;

    // fixed value for noise
    float sigmaNoise = 0.044;
    // pedestal shift in GeV
    float pedestal = 0.0;

    // Standardize pulse shape for all calculation
    pulse->setAmplitude(1.);
    int pulseLength = pulse->GetNSamples();
    
    EventMC event;
    event.BX0 = BX0;
    event.signalA_T = signalA_T;
    event.signalA = signalA_T * cosh(eta);
    
    // pulse parameters
    double pulseAlpha = pulse->GetAlpha();
    double pulseBeta = pulse->GetBeta();
    double pulseT0 = pulse->GetT0();

    event.nPU_bx = nPU_bx;
    event.energyPU.clear();

    // Get number of minBias interactions from the given train
    // and their energy is sampled from thepdf of pileup
    // for the requested eta interval.
    // nBX can be bigger that train size, but the PU energy is 0. 
    int nbx_pu = nPU_bx.size();
    for (int ibx = 0; ibx < nBX; ibx ++){
        // Check that we are inside the PU train
        if (ibx < nbx_pu){
             // total energy per BX
            event.energyPU.push_back(0.);
            for (int imb = 0; imb < nPU_bx.at(ibx); imb++) {
                event.energyPU.at(ibx) += pow(10., PU_pdf->GetRandom());
            }
        }else{
            // If the PU train is finished we had 0. PU energy
            event.energyPU.push_back(0.);
        }
    }
    // Switch off in-time PU
    event.energyPU.at(BX0) = 0.; 

    // Initialize samples
    event.samples.clear();
    event.signal_samples.clear();
    event.pileup_samples.clear();
    // N.B.: nBX is already BX0 + 7 to save time
    // we are already able to save all the bx also if the BX0 is at the end of the
    // train.
    for (int ibx = 0; ibx < nBX ; ibx ++) {
        event.samples.push_back(0.);
        event.signal_samples.push_back(0.);
        event.pileup_samples.push_back(0.);
    }

    // Signal samples. 
    // 
    for (int ipul = 0; ipul < (pulseLength -3); ipul++){
        if ((BX0 + ipul) < nBX){
            // Align BX0 to the start of the pulse so at the 4th BX (index 3)
            // in the pulse window
            event.signal_samples.at(BX0 + ipul) = event.signalA * pulse->sample(ipul+3);
        }
    }

    // Add PU pulse for each BX
    for (int ibx = 0; ibx < nBX; ibx ++){
        // If no PU event skim bx
        if (event.energyPU.at(ibx) == 0.) continue;    
        // Propagate the pulse amplitude on pulseLength following BXs
        for (int ipul = 0; ipul < (pulseLength - 3); ipul++){   
            if ((ibx + ipul) < nBX){
                // Starting from 4th BX (index 3) when the pulse start
                event.pileup_samples.at(ibx + ipul) += event.energyPU.at(ibx)*pulse->sample(ipul+3);
            }
        }
    }

    // Sum signal and pileup samples
    for (int ibx = 0; ibx < nBX; ibx ++){
        // Save total amplitude signal + pu in all samples
        event.samples.at(ibx) = event.pileup_samples.at(ibx) + event.signal_samples.at(ibx);
    }

    // Extract digis
    event.digis.clear();
    event.signal_digis.clear();
    event.pileup_digis.clear();
    // We have to check if the BX0 is in the first three BXs
    // In that case the first two (or one) samples in the window are put to 0
    int removeBXwindows = 0;
    if (BX0 < 3){
        // Add the first or the first three samples of the
        // window to 0.
        for(int bj = BX0; bj < 3; bj++){
            event.digis.push_back(0.0);
            event.signal_digis.push_back(0.0);
            event.pileup_digis.push_back(0.0);
        }
        removeBXwindows = 3 - BX0;
    }
    
    for (int j = 0; j< NSamples - removeBXwindows; j++){
        // Since we have starting from BX3 (4th X) when the pulse start
        // in the window we have to go back of 3 BX from BX0
        event.digis.push_back(event.samples.at(BX0 + j - 3 + removeBXwindows));
        event.signal_digis.push_back(event.signal_samples.at(BX0 + j - 3 + removeBXwindows));
        event.pileup_digis.push_back(event.pileup_samples.at(BX0 + j - 3 + removeBXwindows));
    }   

    // Random gaussian noise in each sample
    std::vector<double> noise;
    for (int i=0; i < NSamples; ++i) {
        noise.push_back(sigmaNoise * gRandom->Gaus(0,1));
    }

    // Calculate digis noise using correlation matrix
    event.noise_digis.clear();
    for (int i=0; i < NSamples; ++i) {
        event.noise_digis.push_back(0.);
        for(int j=0; j < NSamples; ++j){
            event.noise_digis.at(i) += pulse->noise_corr_matrix(i,j) * noise.at(j);
        }
    }   

    // Adding noise and pedestal to digis
    for (int i=0; i < NSamples; ++i) {
        event.digis.at(i) +=  event.noise_digis.at(i) + pedestal;
    }
    
    // Adding energyPU to the true amplitude
    event.trueA = event.signalA +  event.energyPU.at(BX0); //BX0 PU energy should be zero
    event.trueA_T = event.trueA / cosh(eta);

    return event;
}
