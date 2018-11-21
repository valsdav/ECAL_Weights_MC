#include "PileupMC.h"
#include "Pulse.h"
#include <TGraph.h>
#include <TCanvas.h>
#include <TTreeReader.h>

#include <iostream>

using namespace std;

int main(int argc, char** argv){

    if (argc< 4) {
        std::cout << "Missing number of events | output_file | nPU" << std::endl;
        return 1;
    }

    bool debug = true;
    int nevents = atoi(argv[1]);

    // Mean parameters for eta ring 28
    Pulse * p = new Pulse(1., 124.087766, 1.4236491, 37.7066702);
    p->SetNoiseCorrelationZero();

    double signalAmplitude = 5.;
    int PU = atoi(argv[3]);
    int nBX = 30;
    int BX0 = 20;
    float eta = 2.8;
    std::string puFile = "PileupPDF.root";
    int NSamples = 10;

    PileupMC * mc = new PileupMC(nBX, BX0, eta, puFile, NSamples);

    TFile* file_nopu = new TFile(argv[2], "RECREATE");
    TTree* tree_nopu = mc->simulatePileup(p, signalAmplitude, nevents, PU, debug);
    file_nopu->Write();
    file_nopu->Close();
}