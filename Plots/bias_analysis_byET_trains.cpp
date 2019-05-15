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
TFile * trueA_SF_file;
TH1F * trueA_SF_histo;

map<string , vector<float>> ETbins {
    { "48b7e", {0.,1.,2.,3.,5.,8.,12.,25.,45.,128.}},
    { "8b4e",  {0.,1.,2.,3.,5.,8.,12.,128.}}
};

map<string, pair<int,int>> trainsBXs {
    {"48b7e", std::make_pair(56, 104)},
    {"8b4e", std::make_pair(12, 20)},
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

double getTrueASF(double trueA_T){
    return trueA_SF_histo->GetBinContent(trueA_SF_histo->FindBin(trueA_T));
    }

bool emulatePickFinder(double recoA, double recoA_m1, double recoA_p1){
    // In the frontend there are not negative amplitudes
    if (recoA < 0) recoA = 0;
    if (recoA_m1 < 0 ) recoA_m1 = 0;
    if (recoA_p1 < 0 ) recoA_p1 = 0;

    if ((recoA > recoA_m1) && (recoA > recoA_p1)){
        return true;
    }else{
        return false;
    }
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

void analyseBias(RNode rdf, string name, string train){
    auto et_bins = ETbins[train]; 
    
             // Filter out problematic events
    auto df = rdf.Filter("trueA_T>0.05")
                // Define the ET bin on trueA_T, the e-rec
                .Define("ET_bin", getETbin(train), {"trueA_T"})
                // Temperary correction for shifted (wrong) BX0 position in simulation!
                .Define("correctBX0", "BX0+1")
                // Get the BX scale factor from BX0 and ET_bin true
                .Define("BXsf", getBXSF(train), {"correctBX0", "ET_bin"})
                //Get trueA_T spectrum scale factors
                .Define("trueA_sf",getTrueASF, {"trueA_T"})
                .Define("totalSF", "BXsf*trueA_sf");
    
    // Filter events where the TP is not assigned to the center BX or TP==0 for fenix precision
    auto df_nonzero = df.Filter(emulatePickFinder, {"recoA_T", "recoA_T_m1", "recoA_T_p1"})
                        .Filter("recoA_T_round > 0.");

    // Get only events that doesn't pass the previous cut
    auto df_zero = df.Filter([](double recoA_T, double recoA_T_m1, double recoA_T_p1, double recoA_T_round)
                        {return (!emulatePickFinder(recoA_T, recoA_T_m1, recoA_T_p1)) || (recoA_T_round == 0.) ; },
                        {"recoA_T", "recoA_T_m1", "recoA_T_p1", "recoA_T_round"});


    //Bias profile using "s" option so that the error on the bin is the std of the distribution
    auto pf_bias = df.Profile1D({ ("pf_bias_"+name).c_str(), "", et_bins.size()-1, 1., et_bins.size(), "s"},
                    "ET_bin", "bias_round");
    auto pf_bias_Asf = df.Profile1D({ ("pf_bias_Asf_"+name).c_str(), "", et_bins.size()-1, 1., et_bins.size(), "s"},
                    "ET_bin", "bias_round", "trueA_sf");
    auto pf_bias_BXsf = df.Profile1D({ ("pf_bias_BXsf_"+name).c_str(), "", et_bins.size()-1, 1., et_bins.size(), "s"},
                    "ET_bin", "bias_round", "BXsf");
    auto pf_bias_totsf = df.Profile1D({ ("pf_bias_totsf_"+name).c_str(), "", et_bins.size()-1, 1., et_bins.size(), "s"},
                    "ET_bin", "bias_round", "totalSF");

    
    // Now filtering out recoA_T == 0. entries and events removed by pick not in the center BX (pick finder simulation)
    auto pf_bias_nonzero = df_nonzero.Profile1D({ ("pf_bias_nonzero_"+name).c_str(), "", et_bins.size()-1, 1., et_bins.size(), "s"},
                    "ET_bin", "bias_round");
    auto pf_bias_nonzero_Asf = df_nonzero.Profile1D({ ("pf_bias_nonzero_Asf_"+name).c_str(), "", et_bins.size()-1, 1., et_bins.size(), "s"},
                    "ET_bin", "bias_round", "trueA_sf");
    auto pf_bias_nonzero_BXsf = df_nonzero.Profile1D({ ("pf_bias_nonzero_BXsf_"+name).c_str(), "", et_bins.size()-1, 1., et_bins.size(), "s"},
                    "ET_bin", "bias_round", "BXsf");
    auto pf_bias_nonzero_totsf = df_nonzero.Profile1D({ ("pf_bias_nonzero_totsf_"+name).c_str(), "", et_bins.size()-1, 1., et_bins.size(), "s"},
                    "ET_bin", "bias_round", "totalSF");

    // Check properties of TP removed by pick finder or zeroes by precision
    auto h_trueA_zero = df_zero.Histo1D({(name + "_" + train + + "_h_trueA_zero").c_str(), "", 256, 0, 128}, "trueA_T");
    auto h_trueA_zero_BXsf = df_zero.Histo1D({(name + "_" + train + + "_h_trueA_zero_BXsf").c_str(), "", 256, 0, 128}, "trueA_T", "BXsf");
    auto h_trueA_zero_Asf = df_zero.Histo1D({(name + "_" + train + + "_h_trueA_zero_Asf").c_str(), "", 256, 0, 128}, "trueA_T", "trueA_sf");
    auto h_trueA_zero_totsf = df_zero.Histo1D({(name + "_" + train + + "_h_trueA_zero_totsf").c_str(), "", 256, 0, 128}, "trueA_T", "totalSF");
    auto h_recoA_zero = df_zero.Histo1D({(name + "_" + train + + "_h_recoA_zero").c_str(), "", 256, 0, 128}, "recoA_T_round");
    auto h_recoA_zero_BXsf = df_zero.Histo1D({(name + "_" + train + + "_h_recoA_zero_BXsf").c_str(), "", 256, 0, 128}, "recoA_T_round", "BXsf");
    auto h_recoA_zero_Asf = df_zero.Histo1D({(name + "_" + train + + "_h_recoA_zero_Asf").c_str(), "", 256, 0, 128}, "recoA_T_round", "trueA_sf");
    auto h_recoA_zero_totsf = df_zero.Histo1D({(name + "_" + train + + "_h_recoA_zero_totsf").c_str(), "", 256, 0, 128}, "recoA_T_round", "totalSF");

    // Train profile
    int nbxtrain; 
    if (train == "48b7e"){
        nbxtrain = 48;
    }
    if (train == "8b4e"){
        nbxtrain = 8;
    }
    auto pf_train = df_nonzero.Profile1D({ ("pf_train_"+name).c_str(), "", nbxtrain, trainsBXs[train].first, 
                                                 trainsBXs[train].second, "s"},  "correctBX0", "bias_round");
    auto pf_train_Asf = df_nonzero.Profile1D({ ("pf_train_Asf_"+name).c_str(), "", nbxtrain, trainsBXs[train].first, 
                                                 trainsBXs[train].second, "s"},  "correctBX0", "bias_round", "trueA_sf");
    auto pf_train_BXsf = df_nonzero.Profile1D({ ("pf_train_BXsf_"+name).c_str(), "", nbxtrain, trainsBXs[train].first, 
                                                 trainsBXs[train].second, "s"},  "correctBX0", "bias_round", "BXsf");
    auto pf_train_totsf = df_nonzero.Profile1D({ ("pf_train_totsf_"+name).c_str(), "", nbxtrain, trainsBXs[train].first, 
                                                 trainsBXs["48b7e"].second, "s"},  "correctBX0", "bias_round", "totalSF");

    vector<pair<TGraph*, TGraph*>> graphs; 
    graphs.push_back(produceGraphs(name + "_" + train + "_gr_bias", pf_bias, et_bins.size()-1));
    graphs.push_back(produceGraphs(name + "_" + train + "_gr_bias_Asf", pf_bias_Asf, et_bins.size()-1));
    graphs.push_back(produceGraphs(name + "_" + train + "_gr_bias_BXsf", pf_bias_BXsf, et_bins.size()-1));
    graphs.push_back(produceGraphs(name + "_" + train + "_gr_bias_totsf", pf_bias_totsf, et_bins.size()-1));
    graphs.push_back(produceGraphs(name + "_" + train + "_gr_bias_nonzero", pf_bias_nonzero, et_bins.size()-1));
    graphs.push_back(produceGraphs(name + "_" + train + "_gr_bias_nonzero_Asf", pf_bias_nonzero_Asf, et_bins.size()-1));
    graphs.push_back(produceGraphs(name + "_" + train + "_gr_bias_nonzero_BXsf", pf_bias_nonzero_BXsf, et_bins.size()-1));
    graphs.push_back(produceGraphs(name + "_" + train + "_gr_bias_nonzero_totsf", pf_bias_nonzero_totsf, et_bins.size()-1));
    graphs.push_back(produceGraphs(name + "_" + train + "_gr_train", pf_train, nbxtrain));
    graphs.push_back(produceGraphs(name + "_" + train + "_gr_train_Asf", pf_train_Asf, nbxtrain));
    graphs.push_back(produceGraphs(name + "_" + train + "_gr_train_BXsf", pf_train_BXsf, nbxtrain));
    graphs.push_back(produceGraphs(name + "_" + train + "_gr_train_totsf", pf_train_totsf, nbxtrain));
    
    for (auto const & grs : graphs ){
        grs.first->Write();
        grs.second->Write();
    }

    h_trueA_zero->Write();
    h_trueA_zero_BXsf->Write();
    h_trueA_zero_Asf->Write();
    h_trueA_zero_totsf->Write();
    h_recoA_zero->Write();
    h_recoA_zero_BXsf->Write();
    h_recoA_zero_Asf->Write();
    h_recoA_zero_totsf->Write();
    

}


int main(int argc, char** argv){

    if (argc <6){
        std::cout << "Please insert: BXSF_file trueA_SF basedir train ring outputfile" <<std::endl;
        return 1;
    }
    
    string basedir {argv[3]};
    string train {argv[4]};
    string ring {argv[5]};
    string outputfile {argv[6]};
    cout << "basedir: " << basedir
         << " |train: " << train 
         << " |ring: " << ring
         << " |outputfile: " << outputfile << endl;

    TH1::SetDefaultSumw2();

    //Load histo for scale factors
    BXSF_file = new TFile(argv[1], "read");
    BXSF_histo = (TH1F*) BXSF_file->Get(("bxsf_" + ring).c_str());
    trueA_SF_file = new TFile(argv[2], "read");
    trueA_SF_histo = (TH1F*) trueA_SF_file->Get(("trueA_SF_" + ring).c_str());
    
    ROOT::EnableImplicitMT();
    int poolsize = ROOT::GetImplicitMTPoolSize();
    std::cout << "Multi-threading pool: "<< poolsize << std::endl;
    
    RDataFrame df_curr ("bias", basedir +"/bias_curr_rings/bias_rings_"+ ring + ".root");
    RDataFrame df_pu0 ("bias", basedir +"/bias_pu0_rings/bias_rings_"+ ring + ".root");
    RDataFrame df_pu0_newavg ("bias", basedir +"/bias_pu0_newavg_rings/bias_rings_"+ ring + ".root");
    RDataFrame df_pu50_s2 ("bias", basedir +"/bias_puopt_rings/bias_rings_"+ ring + "_PU50_S2.root");
    RDataFrame df_pu50_s30 ("bias", basedir +"/bias_puopt_rings/bias_rings_"+ ring + "_PU50_S30.root");

    TFile output (outputfile.c_str(), "recreate");
    
    analyseBias(df_curr, "curr", train);
    analyseBias(df_pu0, "pu0", train);
    analyseBias(df_pu0_newavg, "pu0_newavg", train);
    analyseBias(df_pu50_s2, "pu50s2", train);
    analyseBias(df_pu50_s30, "pu50s30", train);

    output.Close();
    cout << "Done!" << endl;
   
}   