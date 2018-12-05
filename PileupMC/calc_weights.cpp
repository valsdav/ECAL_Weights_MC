#include "ComputeWeights.h"
#include <TGraph.h>
#include <TCanvas.h>
#include <TTree.h>
#include <TFile.h>
#include <TObject.h>
#include <iostream>
#include <string>

using namespace std;

void calculateWeights(TTree* tree){
    int verbosity = 0;
    int firstSample = 3; // 3 for current weights configuration. 
  	bool dofitbaseline = 1; // 1 to use negative weights for baseline subtraction, 0 for positive weights. 
	bool dofittime = 0; // 1 to create timing jitter weights. 0 to not.  
  	static int nPulseSamples = 5; // 0 to 10
  	int prepulsesamples = 0; // 0 to 10 (need to understand correlation to npulsesamples)
  	double P = 0; //Simulated pedestal value. Shouldn't affect bias with dofitbaseline on. 
    
    // ComputerWeight instance
    ComputeWeights cw (verbosity, dofitbaseline, dofittime, nPulseSamples, prepulsesamples);

    // Digis from tree
    std::vector<double> * digis = new std::vector<double>();
    double amplitudeTruth;
    tree->SetBranchAddress("digis", &digis);
    tree->SetBranchAddress("amplitudeTruth", &amplitudeTruth);

    // vector for weights to be added to the tree
    double weights [nPulseSamples];
    TBranch* wbranch = tree->Branch("weights", &weights,
            ("weights["+ std::to_string(nPulseSamples)+"]/D").c_str());

    std::vector<double> pulse_deriv; // not used for amplitude weights

    for (int i = 0; i< tree->GetEntries(); i++){
        tree->GetEntry(i);

        cw.compute(*digis, pulse_deriv, firstSample); 
        for (int iw = 0; iw< nPulseSamples; iw++){
            weights[iw] = amplitudeTruth * cw.getAmpWeight(iw + firstSample -1);
        }

        wbranch->Fill();
    }

}

int main(int argc, char** argv){

    if (argc <2){
        std::cout << "Please insert file..." <<std::endl;
        return 1;
    }
    
    std::cout << "Calculating weights for: "<< argv[1] << std::endl;

    TFile* file = new TFile(argv[1], "update");
    TTree* tree = (TTree*) file->Get("samples");
    //TTree* tree = (TTree*) file->Get("weights");

    calculateWeights(tree);

    std::cout << "ok" << std::endl;
    tree->Write("", TObject::kOverwrite);
    file->Close();
}