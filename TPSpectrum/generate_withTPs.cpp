#include "PileupMC.h"
#include "Pulse.h"
#include <TH1F.h>
#include <TFile.h>
#include <TGraph.h>
#include <TObject.h>
#include <TCanvas.h>
#include <TTreeReader.h>
#include <cmath>
#include <iostream>

using namespace std;


/* The script generate a TTree with the simulated pulses. 
The parameters are: 
ID | alpha| beta| t0| signalAmpl | eta | nPU | number of events | output_file | complete_info
The ID is saved in the TTree to distinguish the generated events
*/
int main(int argc, char** argv){

    if (argc< 12) {
        std::cout << "Missing args: ID | alpha| beta| t0| TPspectrum | nxtals_in_strip| eta | nPU | number of events | output_file | complete_info" << std::endl;
        return 1;
    }

    int ID = atoi(argv[1]);
    double alpha = atof(argv[2]);
    double beta = atof(argv[3]);
    double t0 = atof(argv[4]);
    // in transverse energy
    TFile* TPspectrum_file = new TFile(argv[5], "READ");
    TH1F* TPspectrum = (TH1F*) TPspectrum_file->Get("TP Spectrum");     
    int nxtals_in_strip = atoi(argv[6]);
    float eta = atof(argv[7]);
    int PU = atoi(argv[8]);
    int nevents = atoi(argv[9]);
    char* outputFile = argv[10];
    bool debug = atoi(argv[11]);

    std::cout << "ID = "<< ID << std::endl 
     << "alpha = " << alpha << ", beta = " << beta << ", t0 = " << t0 <<std::endl 
     << "TP mean strip = " << TPspectrum->GetMean() << std::endl
     << "eta = "<< eta << ", PU = " << PU <<std::endl
     << ">>> Generating "<< nevents << " events" <<std::endl;

    Pulse * pulse = new Pulse(1., t0, alpha, beta);
    pulse->SetNoiseCorrelationZero();

    int nBX = 30;
    int BX0 = 20;
    std::string puFile = "PileupPDF.root";
    int NSamples = 10;

    PileupMC * mc = new PileupMC(nBX, BX0, puFile, NSamples);

    TFile* file_nopu = new TFile(outputFile, "RECREATE");
    TTree* tree_nopu = mc->simulatePileupSignalDistribution(ID, pulse,TPspectrum, nxtals_in_strip, nevents, eta, PU, debug);
    file_nopu->Write("", TObject::kOverwrite);
    file_nopu->Close();
}