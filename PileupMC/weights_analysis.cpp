#include <iostream>
#include <fstream>
#include "TTree.h"
#include "TGraph.h"
#include "TH1D.h"
#include "TLegend.h"
#include "TMultiGraph.h"
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
        std::cout << "Missing args: #weight | signalTruth | outputdir" << std::endl;
        return 1;
    }

    string iw = argv[1];
    char* signal = argv[2];
    string outputdir = argv[3];
   
    vector<int> etarings = get_etarings();
    //{0,10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 150};
    vector<int> PUs = {0, 20, 40, 60, 100};
    map<int, TFile*> files; 
    map<int, TTree*> trees;

    for (auto et: etarings){
        files[et] = new TFile(("outputs/weights/weights_ID"+ to_string(et)+".root").c_str(), "READ");
        trees[et] = (TTree*)files[et]->Get("weights");
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
            trees[etarings[et]]->Draw(("w"+iw +">>h").c_str(), ("(nPU=="+to_string(pu) +
                                    ")&&(signalTruth=="+ signal +")").c_str(), "goff");
            _means[et] = h->GetMean();
            _stds[et] = h->GetRMS();
        }
        means[pu] = _means;
        stds[pu] = _stds;
    }

    //Save the file
    ofstream output;
    output.open (outputdir + "/weights_"+ iw + "_signal_" + signal+".txt");
    output << "PU,etaring,w" <<iw << "_mean,w"<<iw<<"_std"<<endl;
    for (auto pu: PUs){
        for (int et = 0; et < 56; et++){
            output << pu << ", " << etarings[et] << ", " << means[pu][et] << ", " << stds[pu][et] << endl;

        }
    }
    output.close();
    

    TApplication * app = new TApplication("weights", &argc, argv);
    double* etarings_x = get_etarings_graph();

    gStyle->SetPalette(kBlueGreenYellow);
    // Diff plots
    TCanvas * c = new TCanvas("c", "");
    auto leg = new TLegend(0.45, 0.15, 0.55, 0.30 );
    auto mg = new TMultiGraph();
    
    for (auto pu : PUs){
        cout << "PU: " << pu<<endl;
        if (pu == 0) continue;
        double diff [56];
        for (int i = 0; i< 56; i++){
            diff[i] = means[pu][i] - means[0][i];
        }
        auto g = new TGraph(56, etarings_x, diff);
        mg->Add(g);
        leg->AddEntry(g, ("PU "+to_string(pu)).c_str(), "LP");
        g->SetMarkerStyle(22);
    }
   
    mg->Draw("APL PLC PMC");
    mg->GetXaxis()->SetTitle("eta ring");
    mg->GetYaxis()->SetTitle("weight variation");
    mg->SetTitle(("Weight "+ iw).c_str());
    leg->Draw("same");
    c->Update();

    // Draw lines
    double current_y = 0.;
    while(current_y > c->GetUymin()){
        TLine * l = new TLine(c->GetUxmin(), current_y, c->GetUxmax(), current_y);
        l->SetLineColor(kRed);
        l->SetLineStyle(6);
        l->Draw();
        current_y -= 1/ 64.;
    }
    current_y = 0.;
    while(current_y < c->GetUymax()){
        TLine * l = new TLine(c->GetUxmin(), current_y, c->GetUxmax(), current_y);
        l->SetLineColor(kRed);
        l->SetLineStyle(6);
        l->Draw();
        current_y += 1/ 64.;
    }
    TLine * leta1 = new TLine(-16, c->GetUymin(), -16,c->GetUymax());
    leta1->SetLineColor(kBlue);
    leta1->SetLineStyle(2);
    leta1->Draw();
    TLine * leta2 = new TLine(16, c->GetUymin(), 16,c->GetUymax());
    leta2->SetLineColor(kBlue);
    leta2->SetLineStyle(2);
    leta2->Draw();

    c->Draw();

    // Absolute value plots
    TCanvas * c2 = new TCanvas("c2", "");
    auto leg2 = new TLegend(0.45, 0.15, 0.55, 0.30 );
    auto mg2 = new TMultiGraph();
    
    for (auto pu : PUs){
        cout << "PU: " << pu<<endl;
        auto g2 = new TGraph(56, etarings_x, means[pu]);
        mg2->Add(g2);
        leg2->AddEntry(g2, ("PU "+to_string(pu)).c_str(), "LP");
        g2->SetMarkerStyle(22);
    }
   
    mg2->Draw("APL PLC PMC");
    leg2->Draw("same");
    c2->Draw();

    app->Run();



}