#include "ROOT/RDataFrame.hxx"
#include "ROOT/RDF/InterfaceUtils.hxx"
#include <TROOT.h>
#include <TGraph.h>
#include <TMultiGraph.h>
#include <TH1F.h>
#include <TH1.h>
#include <TCanvas.h>
#include <TProfile.h>
#include <TLegend.h>
#include <TTree.h>
#include <TFile.h>
#include <TObject.h>
#include <TText.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <utility>

using namespace std;
using namespace ROOT;
using namespace ROOT::RDF;
using namespace ROOT::VecOps;
 
TFile * BXSF_file;
TH1F * BXSF_histo;

map<string , vector<float>> ETbins {
    { "48b7e", {0.,1.,2.,3.,5.,8.,12.,25.,45.,1000.}},
    { "8b4e",  {0.,1.,2.,3.,5.,8.,12.,1000.}}
};

auto getETbin(string train){
    vector<float> bins = ETbins[train];
    return [bins](double ET){
        int bin = 0;
        for (int i= 0; i< bins.size()-1; i++){
            if (ET> bins.at(i) && ET<=bins.at(i+1)){
                bin = i+1;
                break;
            }
        }
        // Check overflow
        if (ET > bins.at(bins.size()-1)){
            bin = bins.size();
        }
        return bin;
    };
}

auto getBXSF(string train){
    return [train](int BX0, int ET_bin){
        if (train=="48b7e"){
            // The 54 is because in MC the BX0 starts from 55
            return BXSF_histo->GetBinContent(BX0-54, ET_bin);
        }
        else if (train == "8b4e"){
            return BXSF_histo->GetBinContent(BX0-11, ET_bin);
        }
    };
}

pair<TGraph*,TGraph*> produceGraphs(string id, RResultPtr<TProfile> prof, int nbins){
    float means [nbins];
    float stds [nbins];
    float xbins [nbins];

    for(int i =0; i<nbins;i++){
        xbins[i] = i+1;
        means[i] = prof->GetBinContent(i+1);
        stds[i] = prof->GetBinError(i+1);
        //cout << xbins[i] << " " << means[i] << " " << stds[i] << endl;
    }    

    TGraph* gmean = new TGraph(nbins, xbins, means);
    gmean->SetName((id + "_mean").c_str());
    TGraph* gstd = new TGraph(nbins, xbins, stds);
    gstd->SetName((id + "_std").c_str());

    return std::make_pair(gmean, gstd);
}

map<string, pair<TGraph*, TGraph*>> analyzeBias(RNode rdf, string name, string train){
    auto et_bins = ETbins[train]; 
    auto df = rdf.Define("Bias", [](double bias){return (bias-1)*100;}, {"bias"})
                // Define the ET bin on trueA_T, the e-rec
                .Define("ET_bin", getETbin(train), {"trueA_T"})
                // Get the BX scale factor from BX0 and ET_bin true
                .Define("BXsf", getBXSF(train), {"BX0", "ET_bin"})
                // rounding TP to nearest 0.5 GeV
                .Define("recoA_T_round", [](double rA){return round(rA*2)/2;},{"recoA_T"})
                // bias rounded
                .Define("Bias_round", [](double trueA_T, double recoA_T_round){
                        return ((recoA_T_round/trueA_T) -1)*100;}, {"trueA_T", "recoA_T_round"});

    //Bias profile using "s" option so that the error on the bin is the std of the distribution
    auto pf_bias = df.Profile1D({ ("pf_bias_"+name).c_str(), "", et_bins.size()-1, 1., et_bins.size(), "s"},
                    "ET_bin", "Bias");
    auto pf_bias_bxsf = df.Profile1D({ ("pf_bias_bxsf_"+name).c_str(), "", et_bins.size()-1, 1., et_bins.size(), "s"},
                    "ET_bin", "Bias", "BXsf");
    auto pf_bias_round = df.Profile1D({ ("pf_bias_round_"+name).c_str(), "", et_bins.size()-1, 1., et_bins.size(), "s"},
                    "ET_bin", "Bias_round");
    auto pf_bias_round_bxsf = df.Profile1D({ ("pf_bias_round_bxsf_"+name).c_str(), "", et_bins.size()-1, 1., et_bins.size(), "s"},
                    "ET_bin", "Bias_round", "BXsf");

    map<string, pair<TGraph*, TGraph*>> graphs; 
    graphs["gr_bias"]            =  produceGraphs(name + "_" + train + "_gr_bias", pf_bias, et_bins.size()-1);
    graphs["gr_bias_bxsf"]       =  produceGraphs(name + "_" + train + "_gr_bias_bxsf", pf_bias_bxsf, et_bins.size()-1);
    graphs["gr_bias_round"]      =  produceGraphs(name + "_" + train + "_gr_bias_round", pf_bias_round, et_bins.size()-1);
    graphs["gr_bias_round_bxsf"] =  produceGraphs(name + "_" + train + "_gr_bias_round_bxsf", pf_bias_round_bxsf, et_bins.size()-1);

    return graphs;    
}


int main(int argc, char** argv){

    if (argc <6){
        std::cout << "Please insert: BXSF_file basedir train ring outputfile" <<std::endl;
        return 1;
    }

    string basedir {argv[2]};
    string train {argv[3]};
    string ring {argv[4]};
    string outputfile {argv[5]};
    cout << "basedir: " << basedir
         << " |train: " << train 
         << " |ring: " << ring
         << " |outputfile: " << outputfile << endl;

    TH1::SetDefaultSumw2();

    //Load histo for scale factors
    BXSF_file = new TFile(argv[1], "read");
    BXSF_histo = (TH1F*) BXSF_file->Get(("bxsf_" + ring).c_str());
    
    ROOT::EnableImplicitMT();
    int poolsize = ROOT::GetImplicitMTPoolSize();
    std::cout << "Multi-threading pool: "<< poolsize << std::endl;
    
    RDataFrame df_curr ("bias", basedir +"/bias_current_rings/bias_rings_"+ ring + ".root");
    RDataFrame df_pu0 ("bias", basedir +"/bias_pu0_rings/bias_rings_"+ ring + ".root");
    RDataFrame df_pu50_s2 ("bias", basedir +"/bias_pu_opt_rings/bias_rings_"+ ring + "_PU50_S2.root");
    RDataFrame df_pu50_s30 ("bias", basedir +"/bias_pu_opt_rings/bias_rings_"+ ring + "_PU50_S30.root");

    map<string, pair<TGraph*, TGraph*>> curr    = analyzeBias(df_curr, "curr", train);
    map<string, pair<TGraph*, TGraph*>> pu0     = analyzeBias(df_pu0, "pu0", train);
    map<string, pair<TGraph*, TGraph*>> pu50s2  = analyzeBias(df_pu50_s2, "pu50s2", train);
    map<string, pair<TGraph*, TGraph*>> pu50s30 = analyzeBias(df_pu50_s30, "pu50s30", train);

    auto et_bins = ETbins[train];

    TFile output (outputfile.c_str(), "recreate");

    for (auto const& biaselem : curr){
        string bias_label = biaselem.first;
        cout << "Working on: " << bias_label << endl;

        curr[bias_label].first->Write();
        pu0[bias_label].first->Write();
        pu50s2[bias_label].first->Write();
        pu50s30[bias_label].first->Write();
        
        curr[bias_label].second->Write();
        pu0[bias_label].second->Write();
        pu50s2[bias_label].second->Write();
        pu50s30[bias_label].second->Write();
    }
    output.Close();
   
}   