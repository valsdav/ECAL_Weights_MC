#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

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
#include "ROOT/RDataFrame.hxx"


using namespace std; 
using namespace ROOT;
using namespace ROOT::RDF;

typedef ROOT::RDF::RResultPtr<double> Rptr;
typedef RInterface<ROOT::Detail::RDF::RJittedFilter, void> FilterObj;

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

    if (argc< 5) {
        std::cout << "Missing args: inputfile_template| signalTruth | outputdir | NThread" << std::endl;
        return 1;
    }  

    // Path to the file, only the ID will be added at the end
    string inputfile_template = argv[1];
    char* signal = argv[2];
    string outputdir = argv[3];
    int nthread = atoi(argv[4]);

    TFile * outputs = new TFile("outputs.root", "RECREATE");

    ROOT::EnableImplicitMT(nthread);
    int poolsize = ROOT::GetImplicitMTPoolSize();
    std::cout << "Multi-threading pool: "<< poolsize << std::endl;

   
    vector<int> etarings = get_etarings();
    //{0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 150};
    vector<int> PUs = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 150};
    map<int, RDataFrame*> dfs; 

    for (auto et: etarings){
        dfs[et] = new RDataFrame("weights", inputfile_template + to_string(et)+".root");
    }

    // For each weight: map PU, map eta ring (from -28 to +28), vector of weights
    map<int, map<int, vector<Rptr>>> df_means ; 
     
    for (auto pu : PUs){
        cout << "PU: " << pu <<endl;
        //map over weights 1->5
        map<int,vector<Rptr>> _means;
        
        for (int et : etarings){
            // Filter on PU for this df etaring
            cout << "eta ring: "<< et<<endl;
            auto pu_df = dfs[et]->Filter("nPU=="+to_string(pu));
            for (int iw =1; iw<=5; iw++){
                _means[et].push_back(pu_df.Mean("w"+to_string(iw)));
            }
        }
        df_means[pu] = _means;
    }
    

    //TApplication * app = new TApplication("weights", &argc, argv);
    gStyle->SetPalette(kBlueGreenYellow);
    double* etarings_x = get_etarings_graph();

    cout << "Calculating..." <<endl; 

    // Now graphs for each weights
    for (int iw = 0; iw < 5; iw++){
        // map PU, mean weights per eta ring
        map<int, double* > means;
        
        //construct arrays for the graphs
        for (int pu : PUs){
            double * _etmeans = new double[56];
            for (int et= 0; et<56; et++){
                cout << "PU: "<<pu <<" etaring: "<< etarings[et] << endl;
                _etmeans[et] = df_means[pu][etarings[et]][iw].GetValue();
            }
            means[pu] = _etmeans;
        }

        //Save the file
        ofstream output;
        output.open (outputdir + "/weights_"+ to_string(iw+1) + "_signal_" + signal+".txt");
        output << "PU,etaring,w" <<iw+1 << "_mean"<<endl;
        for (auto pu: PUs){
            for (int et=0; et< 56; et++){
                output << pu << ", " << etarings[et] << ", " << means[pu][et]  << endl;

            }
        }
        output.close();
            
        // Diff plots
        TCanvas * c = new TCanvas("c", "");
        auto leg = new TLegend(0.45, 0.15, 0.55, 0.30 );
        auto mg = new TMultiGraph(("diff_w"+to_string(iw)).c_str(),("#Delta Weight "+ to_string(iw)+" by PU").c_str());
        
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
        mg->SetTitle(("Weight "+ to_string(iw)).c_str());
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
        TLine * leta1 = new TLine(-18, c->GetUymin(), -18,c->GetUymax());
        leta1->SetLineColor(kBlue);
        leta1->SetLineStyle(2);
        leta1->Draw();
        TLine * leta2 = new TLine(18, c->GetUymin(), 18,c->GetUymax());
        leta2->SetLineColor(kBlue);
        leta2->SetLineStyle(2);
        leta2->Draw();
        c->Draw();
        c->SaveAs((outputdir +"/diff_plot_w"+to_string(iw)+ ".png").c_str());
        mg->Write();
        c->Write();

        // Absolute value plots
        TCanvas * c2 = new TCanvas("c2", "");
        auto leg2 = new TLegend(0.45, 0.15, 0.55, 0.30 );
        auto mg2 = new TMultiGraph(("abs_w"+to_string(iw)).c_str(),("Absoulte Weight "+to_string(iw)).c_str());
        
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
        c2->SaveAs((outputdir +"/abs_plot_w"+to_string(iw)+ ".png").c_str());
        mg2->Write();
        c2->Write();

    }

    outputs->Write();
    outputs->Close();
    

    //app->Run();



}
