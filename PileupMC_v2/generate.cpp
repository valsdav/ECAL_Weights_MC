#include "PileupMC.h"
#include "Pulse.h"
#include <TGraph.h>
#include <TObject.h>
#include <TCanvas.h>
#include <TTreeReader.h>
#include <cmath>
#include <iostream>

using namespace std;

template<class T>
vector<T> parseArg(string arg, string delimiter=","){
    vector<T> result;
    size_t pos = 0;
    string token;
    while ((pos = arg.find(delimiter)) != string::npos) {
        token = arg.substr(0, pos);
        result.push_back((T) std::stof(token));
        arg.erase(0, pos + delimiter.length());
    }
    // Last string
    result.push_back((T) std::stof(arg));
    return result;
}

/* The script generate a TTree with the simulated pulses coherently in a strip.
*/
int main(int argc, char** argv){

    if (argc< 13) {
        std::cout << "Missing args:  stripID | alphas | betas | t0s | etas | amplitudeFile | nPU | PUtrainfile | BX0s | "
                  << "number of events | outputfile | complete_info" << std::endl;
        
        return 1;
    }

    int stripID = atoi(argv[1]);
    vector<float> alphas = parseArg<float>(argv[2]);
    vector<float> betas = parseArg<float>(argv[3]);
    vector<float> t0s = parseArg<float>(argv[4]);
    vector<float> etas = parseArg<float>(argv[5]);
    string amplitudeFile = argv[6];
    int nPU = atoi(argv[7]);
    string PUtrainFile = argv[8];
    vector<int> BX0s = parseArg<int>(argv[9]);
    int nevents = atoi(argv[10]);
    string outputFile = argv[11];
    bool debug = atoi(argv[12]);

    cout << "stripID: " << stripID << " | amplitudeFile: " << amplitudeFile <<endl
         << "nPU: " << nPU << " | PU train file: " << PUtrainFile  << endl
         << "nevents: "<<nevents <<  " | outputfile: "<<outputFile << endl;

    // Build pulses
    vector< Pulse*> xtals_pulses;
    for(int ix = 0; ix<alphas.size(); ix++){
        Pulse * pulse = new Pulse(1., t0s.at(ix), alphas.at(ix), betas.at(ix));
        pulse->SetNoiseCorrelationZero();
        xtals_pulses.push_back(pulse);
    }
    
    std::string puFile = "PileupPDF.root";
    int NSamples = 10;

    TFile * signalDistribFile = new TFile(amplitudeFile.c_str(), "READ");
    TH1D * signalA_T_distrib = (TH1D*) signalDistribFile->Get("signalA_T");
    signalA_T_distrib->SetDirectory(0);
    signalDistribFile->Close();

    PileupMC * mc = new PileupMC( NSamples, puFile, PUtrainFile);

    TFile* file_output = new TFile(outputFile.c_str(), "RECREATE");

    TTree* tree_output = mc->simulateStrip(stripID, xtals_pulses, etas, signalA_T_distrib, 
                                            BX0s, nPU, nevents, debug);

    file_output->Write("", TObject::kOverwrite);
    file_output->Close();

    std::cout << "DONE!" << std::endl;
}