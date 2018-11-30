#include <TF1.h>
#include <TH1.h>
#include <TH2.h>
#include <TFile.h>
#include <TTree.h>
#include <TChain.h>
#include <TProfile.h>
#include <TCanvas.h>
#include <TGraphErrors.h>

#include <string>
#include <map>
#include <vector>
#include <iostream>

// This function calculate the bias from a tree with samples
// and a set of weights. It returns a new tree with the reco 
// amplitude and the bias
TTree* bias(const double *ws, TTree* input_tree){
    
    TTree* output_tree = new TTree("bias", "bias");
    double A_ = 0.;
    double bias_ = 0.;
    output_tree->Branch("recoA", &A_, "recoA/D");
    output_tree->Branch("bias", &bias_, "bias/D");
    
    std::vector<double> * digis = new std::vector<double>();
    double amplitudeTruth; 
    input_tree->SetBranchAddress("digis", &digis);
    input_tree->SetBranchAddress("amplitudeTruth", &amplitudeTruth);

    for (int i = 0; i< input_tree->GetEntries(); i++){
        input_tree->GetEntry(i);
        A_ = 0.;
        // Going from 3th to 5th weight since the
        // 6th weight is fixed because the sum of the weights is 0
        for(int j = 0; j< 5; j++){
            A_ += ws[j] * digis->at(2 + j);
        }
        bias_ = (A_ / amplitudeTruth) - 1.;
        output_tree->Fill();
    }
    
    return output_tree;
}


int main(int argc, char** argv) {

    if (argc < 8){
        std::cout << "Missing args:  input, output | w1 w2 w3 w4 w5 | " << std::endl;
        exit(1);
    }

    TFile* inputfile = new TFile(argv[1], "read");
    TTree* data_tree  = (TTree*) inputfile->Get("samples");
    
    double ws [5];
    for (int i = 0; i <5; i++){
        ws[i] = atof(argv[3+i]);
    }

    TFile* outputfile = new TFile(argv[2], "recreate");
    TTree* output_tree  = bias(ws, data_tree);
    output_tree->Write("", TObject::kOverwrite);
    outputfile->Close();
    inputfile->Close();

    return 0;
}