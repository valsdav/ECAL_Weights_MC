#include <iostream>
#include <fstream>
#include "TTree.h"
#include "TGraph.h"
#include "TH1D.h"
#include "TLegend.h"
#include "TMultiGraph.h"
#include "TGraphErrors.h"
#include "TApplication.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TROOT.h"
#include "TStyle.h"
#include "TColor.h"
#include "TLine.h"
#include <string>
#include <vector>
#include <map>

using namespace std; 



vector<int> get_etarings(){
    vector<int> etarings; 
    for (int i = 0; i< 56; i++){
        if (i< 28){
            etarings.push_back(i-28);
        }else{
            etarings.push_back(i-27); 
        }
    }
    return etarings;
}

double* get_etarings_graph(){
    double *etarings = new double[56];
    for (int i = 0; i< 56; i++){
        if (i< 28){
            etarings[i] = i-28;
        }else{
            etarings[i] = i-27; 
        }
    }
    return etarings;
}


int main(int argc, char** argv){

    if (argc< 4) {
        std::cout << "Missing args: PU | signalTruth | inputdir" << std::endl;
        return 1;
    }

    string pu = argv[1];
    char* signal = argv[2];
    string inputdir = argv[3];
   
    vector<int> etarings = get_etarings();
    vector<int> PUs = {0, 20, 40,60};
    map<int, TFile*> files; 
    map<int, TTree*> trees;

    for (auto et: etarings){
        files[et] = new TFile((inputdir+"/bias_ID"+ to_string(et) +"_PU" + pu +".root").c_str(), "READ");
        trees[et] = (TTree*)files[et]->Get("bias");
    }

    // For each weight: map PU, vector of mean per eta ring (from -28 to +28)
    map<int, double*> means ; 
    map<int, double*> stds ; 

    TH1D * h = new TH1D("h", "", 4000, -3, 3);
    for (auto pu : PUs){
        double * _means = new double[56];
        double * _stds = new double[56];
        cout << "PU: " << pu <<endl;
        for (int et = 0; et< 56; et++){
            cout << "\tEta ring: "<< etarings[et] << endl;
            trees[etarings[et]]->Draw("bias>>h", ("(nPU=="+to_string(pu) +
                                    ")&&(signalTruth=="+ signal +")").c_str(), "goff");
            _means[et] = h->GetMean();
            _stds[et] = h->GetRMS();
        }
        means[pu] = _means;
        stds[pu] = _stds;
    }

    
    TApplication * app = new TApplication("weights", &argc, argv);
    double* etarings_x = get_etarings_graph();
    double xerrs [56];

    gStyle->SetPalette(kBlueGreenYellow);
    // Absolute value plots
    TCanvas * c = new TCanvas("c", "");
    auto leg = new TLegend(0.45, 0.15, 0.55, 0.30 );
    auto mg = new TMultiGraph();
    
    for (auto pu : PUs){
        cout << "PU: " << pu<<endl;
        auto g = new TGraph(56, etarings_x, means[pu]);
        mg->Add(g);
        leg->AddEntry(g, ("PU "+to_string(pu)).c_str(), "LP");
        g->SetMarkerStyle(22);
    }
   
    mg->Draw("APL PLC PMC");   
    mg->GetXaxis()->SetTitle("eta ring");
    mg->GetYaxis()->SetTitle("bias");
    c->SetTitle(("Amplitude bias | PU ="+pu).c_str());
    leg->Draw("same");
    c->Draw();

    c->SaveAs(("Plots/bias/bias_"+pu+".png").c_str());

    app->Run();



}