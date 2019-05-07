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
        weights[iw] = amplitude * cws[slot]->getAmpWeight(iw + firstSample -1);
    }
    return weights;
}

int main(int argc, char** argv){

    if (argc <4){
        std::cout << "Please insert: inputfile | outputfile | complete_info" <<std::endl;
        return 1;
    }
    string inputfile {argv[1]};
    string outputfile {argv[2]};
    bool complete = atoi(argv[3]);
    
    std::cout << "Calculating weights for: "<< argv[1] << std::endl;

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
    auto _dfw = dfw.Define("w1", "weights[0]")
                   .Define("w2", "weights[1]")
                   .Define("w3", "weights[2]")
                   .Define("w4", "weights[3]")
                   .Define("w5", "weights[4]")
                   .Define("E_pu", "Mean(energyPU)");

    if (complete){
        // Save also digis for debug purposes
        _dfw.Snapshot("samples", outputfile, {"BX0", "nPU", "E_pu", "trueA", "trueA_T","signalA", "signalA_T",
                "digis", "w1","w2","w3","w4","w5"});
    }else{
        // Save only weights, not digis
        _dfw.Snapshot("weights", outputfile, {"nPU", "E_pu", "trueA", "trueA_T","signalA", "signalA_T",
                "w1","w2","w3","w4","w5"});
    }
          
    std::cout << "ok" << std::endl;
}
