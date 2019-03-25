#include "PileupMC.h"
#include "Pulse.h"
#include <TGraph.h>
#include <TObject.h>
#include <TCanvas.h>
#include <TTreeReader.h>

#include <iostream>
#include <vector>

using namespace std;


/* The script generate a TTree with the simulated pulses. 
The parameters are: 
ID | alpha| beta| t0| signalAmpl | eta | nPU | number of events | output_file | complete_info
The ID is saved in the TTree to distinguish the generated events
*/
int main(int argc, char** argv){

    if (argc< 14) {
        std::cout << "Missing args: ID | alpha| beta| t0| stripAmplitude_ET | nxtals_in_strip | eta | nPU |" <<
                    " number of events | output_file | complete_info | nBX | train | BX0" << std::endl;
        return 1;
    }

    int ID = atoi(argv[1]);
    double alpha = atof(argv[2]);
    double beta = atof(argv[3]);
    double t0 = atof(argv[4]);

    // in transverse energy
    double stripAmplitude = atof(argv[5]);
    int nxtals_in_strip = atoi(argv[6]);
    //divide the energy by the number of xtals in the strip
    double ET = stripAmplitude / nxtals_in_strip;

    float eta = atof(argv[7]);
    int PU = atoi(argv[8]);
    int nevents = atoi(argv[9]);
    char* outputFile = argv[10];
    bool debug = atoi(argv[11]);

    vector<bool> trainMask ;
    int nBX = atoi(argv[12]);
    char * mask = argv[13];
    // Parse input strings
    for (int i = 0; i< nBX; i++){
        trainMask.push_back(mask[i] == '1');
    }
    int BX0 = atoi(argv[14]);
    

    std::cout << "ID = "<< ID << std::endl 
     << "alpha = " << alpha << ", beta = " << beta << ", t0 = " << t0 <<std::endl 
     << "BX0 = " << BX0 << ", nBX = " << nBX  <<std::endl
     << "ET = " << ET << ", signal Amplitude = " << ET * cosh(eta) << std::endl
     << "eta = "<< eta << ", PU = " << PU << std::endl
     << "Generating "<< nevents << " events" <<std::endl;

    
    Pulse * pulse = new Pulse(1., t0, alpha, beta);
    pulse->SetNoiseCorrelationZero();
    
    std::string puFile = "PileupPDF.root";
    int NSamples = 10;

    PileupMC * mc = new PileupMC(nBX, BX0, puFile, NSamples, trainMask);

    TFile* file_nopu = new TFile(outputFile, "RECREATE");
    TTree* tree_nopu = mc->simulatePileup(ID, pulse, stripAmplitude, ET, nevents, eta, PU, debug);
    file_nopu->Write("", TObject::kOverwrite);
    file_nopu->Close();
}