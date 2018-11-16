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

    int nevents = atoi(argv[1]);
    Pulse * p = new Pulse(1., 125., 1.17, 40.);
    p->SetNoiseCorrelationZero();

    PileupMC * mc = new PileupMC(40, 30, 6, "Pileup.root", 10);

    TFile* file = new TFile("output.root", "RECREATE");
    bool debug = true;
    TTree* tree = mc->simulatePileup(p, 1, nevents, 60, debug);
    file->Write();
    file->Close();
}