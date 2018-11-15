#include "PileupMC.h"
#include "Pulse.h"
#include <TGraph.h>
#include <TCanvas.h>
#include <TTreeReader.h>

#include <iostream>

using namespace std;

int main(int argc, char** argv){

    Pulse * p = new Pulse(1., 125., 1.17, 40.);
    p->SetNoiseCorrelationZero();

    PileupMC * mc = new PileupMC(40, 30, 6, "Pileup.root", 10);

    TFile* file = new TFile("output.root", "RECREATE");
    TTree* tree = mc->simulatePileup(p, 1, 10000, 60, true);
    tree->Write();
    file->Write();
    file->Close();
}