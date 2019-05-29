#include "ComputeWeights.h"
#include "ROOT/RDataFrame.hxx"
#include <TGraph.h>
#include <TCanvas.h>
#include <TTree.h>
#include <TFile.h>
#include <TObject.h>
#include <iostream>
#include <string>

using namespace std;
using namespace ROOT;
using namespace ROOT::VecOps;

// Enable the multithreading
std::vector<double> pulse_deriv; // not used for amplitude weights

int verbosity = 0;
int firstSample = 3; // 3 for current weights configuration. 
bool dofitbaseline = 1; // 1 to use negative weights for baseline subtraction, 0 for positive weights. 
bool dofittime = 0; // 1 to create timing jitter weights. 0 to not.  
static int nPulseSamples = 5; // 0 to 10
int prepulsesamples = 0; // 0 to 10 (need to understand correlation to npulsesamples)
double P = 0; //Simulated pedestal value. Shouldn't affect bias with dofitbaseline on. 

// ComputerWeight instances, one for each thread!
std::vector<ComputeWeights*> cws;

// Function that calculates weights for each sample
std::vector<double> calculateWeights(unsigned int slot, std::vector<double> digis, double amplitude){
    std::vector<double> weights (nPulseSamples);
    cws[slot]->compute(digis, pulse_deriv, firstSample);
    for (int iw = 0; iw< nPulseSamples; iw++){
        // firstSample - 1 is used to get the first index
        weights[iw] = amplitude * cws[slot]->getAmpWeight(iw + firstSample -1);
    }
    return weights;
}

int main(int argc, char** argv){

    if (argc < 7){
        std::cout << "Please insert: inputfile | outputfile | complete_info | nweights | firstsample | timing-weights" <<std::endl;
        return 1;
    }
    string inputfile {argv[1]};
    string outputfile {argv[2]};
    bool complete = atoi(argv[3]);
    // Number of weights to calculate
    nPulseSamples = atoi(argv[4]);
    // First sample used to calculate weights, starting from 1
    firstSample = atoi(argv[5]);
    
    // Check if amplitude (0) of timing (1) weights to be calculated
    dofittime = atoi(argv[6]);
    
    std::cout << "Calculating weights for: "<< argv[1] << std::endl 
              << "Number of weights: " << nPulseSamples  <<std::endl
              << "Starting from " << firstSample << "th sample" <<std::endl;
    
    if (dofittime) std::cout << "Timing Weights" << std::endl;
    else std::cout << "Amplitude Weights" << std::endl;

    ROOT::EnableImplicitMT();
    int poolsize = ROOT::GetImplicitMTPoolSize();
    std::cout << "Multi-threading pool: "<< poolsize << std::endl;

    // We need one ComputeWeights object per thread
    for (int i = 0; i< poolsize; i++){
        cws.push_back(new ComputeWeights(verbosity, dofitbaseline, 
                                    dofittime, nPulseSamples, prepulsesamples));
    }

    auto df = RDataFrame("samples", inputfile);

    auto dfw = df.DefineSlot("weights", calculateWeights, {"digis", "trueA"});
    
    // Variable number of weights
    vector<std::string> columns_names = {"BX0", "nPU", "E_pu", "trueA", "trueA_T"};
    for (int nw =0; nw< nPulseSamples; nw++){
        dfw = dfw.Define("w"+to_string(nw), "weights["+to_string(nw)+ "]");
        columns_names.push_back("w"+to_string(nw));
    }
    

    if (complete){
        // Save also digis for debug purposes
        columns_names.push_back("digis");
        dfw.Snapshot("samples", outputfile, columns_names);
    }else{
        // Save only weights, not digis
        dfw.Snapshot("weights", outputfile, columns_names);
    }
          
    std::cout << "Done" << std::endl;
}
