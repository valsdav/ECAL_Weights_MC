#include <TGraph.h>
#include <TMultiGraph.h>
#include <TCanvas.h>
#include <TApplication.h>
#include <TTree.h>
#include <TFile.h>
#include <TAxis.h>
#include <TLegend.h>

#include <iostream>

using namespace std;

int main(int argc, char** argv){

    if (argc <3){
        std::cout << "Please insert file | event number" <<std::endl;
        return 1;
    }

    TFile* file = new TFile(argv[1], "READ");
    TTree* tree = (TTree*) file->Get("samples");
    int event = atoi(argv[2]);


    TApplication app("app", &argc, argv);
    
    std::vector<double> * samples = new std::vector<double>();
    std::vector<double> * signal_digis = new std::vector<double>();
    std::vector<double> * pileup_digis = new std::vector<double>();
    std::vector<double> * digis = new std::vector<double>();
    std::vector<double> * digis_noise = new std::vector<double>();
    tree->SetBranchAddress("samples", &samples);
    tree->SetBranchAddress("signal_digis", &signal_digis);
    tree->SetBranchAddress("pileup_digis", &pileup_digis);
    tree->SetBranchAddress("digis", &digis);
    tree->SetBranchAddress("noise_digis", &digis_noise);
    tree->GetEntry(event);
    
    TCanvas c;
    TGraph g; 
    for(int i = 0; i < samples->size(); i++){
        g.SetPoint(i, 25*i, samples->at(i));
    }
    g.Draw("A*");
    g.SetMarkerStyle(22);
    g.SetMarkerSize(2);
    g.SetMarkerColor(kRed);
    g.SetTitle("Digis; ns; GeV");
    //g.GetYaxis()->SetRangeUser(-1., .);
    c.Draw();

    TCanvas c2;
    TMultiGraph * mg = new TMultiGraph();
    TGraph * g_digi = new TGraph();
    TGraph * g_sig = new TGraph();
    TGraph * g_pu = new TGraph();
    TGraph * g_noise = new TGraph();
    TLegend * legend = new TLegend();
    
    for(int i = 0; i < digis->size(); i++){
        g_digi->SetPoint(i, 25*i, digis->at(i));
        g_sig->SetPoint(i, 25*i, signal_digis->at(i));
        g_pu->SetPoint(i, 25*i, pileup_digis->at(i));
        g_noise->SetPoint(i, 25*i, digis_noise->at(i));
    }
    legend->AddEntry(g_digi,"Digi total", "PL");
    legend->AddEntry(g_sig,"Signal", "PL");
    legend->AddEntry(g_pu ,"Pileup", "PL");
    legend->AddEntry(g_noise,"Noise", "PL");
    g_digi->SetMarkerStyle(22);
    g_sig->SetMarkerStyle(22);
    g_pu->SetMarkerStyle(22);
    g_noise->SetMarkerStyle(22);
    g_digi->SetMarkerSize(2);
    g_sig->SetMarkerSize(2);
    g_pu->SetMarkerSize(2);
    g_noise->SetMarkerSize(2);
    mg->Add(g_digi);
    mg->Add(g_sig);
    mg->Add(g_pu);
    mg->Add(g_noise);
    mg->Draw("ALP PMC");
    mg->SetTitle("10 samples window;ns;GeV");
    
    legend->Draw("same");
    c.Draw();

    app.Run();
}

   
    
