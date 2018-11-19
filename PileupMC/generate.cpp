#include "PileupMC.h"
#include "Pulse.h"
#include <TGraph.h>
#include <TCanvas.h>
#include <TTreeReader.h>

#include <iostream>

using namespace std;

int main(int argc, char** argv){

    if (argc< 2) {
        std::cout << "Missing number of events" << std::endl;
        return 1;
    }

    bool debug = true;
    int nevents = atoi(argv[1]);
    Pulse * p = new Pulse(1., 125., 1.17, 40.);
    p->SetNoiseCorrelationZero();

    double signalAmplitude = 5.;

    PileupMC * mc = new PileupMC(40, 30, 2.9, "PileupPDF.root", 10);

    TFile* file = new TFile("output_nopileup.root", "RECREATE");
    TTree* tree = mc->simulatePileup(p,signalAmplitude, nevents, 0, debug);
    file->Write();
    file->Close();

    TFile* file_nopu = new TFile("output_pileup.root", "RECREATE");
    TTree* tree_nopu = mc->simulatePileup(p, signalAmplitude, nevents, 35, debug);
    file_nopu->Write();
    file_nopu->Close();
}