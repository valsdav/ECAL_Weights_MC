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

vector<pair<float, float>> parseBins(string arg, string delimiter=","){
    vector<pair<float,float>> result;
    vector<string> bins; 
    size_t pos = 0;
    string token;
    while ((pos = arg.find(delimiter)) != string::npos) {
        token = arg.substr(0, pos);
        bins.push_back( token);
        arg.erase(0, pos + delimiter.length());
    }
    // Last string
    bins.push_back(arg);

    // now split on "-"
    for (auto b: bins){
        size_t pos = b.find("-");
        float first = std::stof(b.substr(0, pos));
        float second = std::stof(b.substr(pos+1));
        result.push_back(std::make_pair(first, second));
    }
    return result;
}


map<string , vector<float>> ETbins {
    { "48b7e", {0.,1.,2.,3.,5.,8.,12.,25.,45.,128.}},
    { "8b4e",  {0.,1.,2.,3.,5.,8.,12.,128.}}
};

map<string, pair<int,int>> trainsBXs {
    {"48b7e", std::make_pair(55, 103)},
    {"8b4e", std::make_pair(24, 32)}, // double train before BX0
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
            // Removing 54  because in MC the BX0 starts from 55
            // And the first bin of the histo is 1
            return BXSF_histo->GetBinContent(BX0-54, ET_bin);
        }
        else if (train == "8b4e"){
            // -23 because two train 8-4-8-4 have been used before signal
            return BXSF_histo->GetBinContent(BX0-23, ET_bin);
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


void analyseBias(RNode rdf, string name, string train, vector<pair<float,float>> bins, string outputdir){
    auto et_bins = ETbins[train]; 
    
             // Filter out problematic events
    auto df = rdf.Filter("trueA_T>0.05")
                // Define the ET bin on trueA_T, the e-rec
                .Define("ET_bin", getETbin(train), {"trueA_T"})
                // Get the BX scale factor from BX0 and ET_bin true
                .Define("BXsf", getBXSF(train), {"BX0", "ET_bin"})
                //Get trueA_T spectrum scale factors
                .Define("trueA_sf", getTrueASF, {"trueA_T"})
                .Define("totalSF", "BXsf*trueA_sf");

    // Filter events where the TP is not assigned to the center BX or TP==0 for fenix precision
    auto df_nonzero = df.Filter(emulatePickFinder, {"recoA_T", "recoA_T_m1", "recoA_T_p1"});

    // Get only events that doesn't pass the previous cut
    // auto df_zero = df.Filter([](double recoA_T, double recoA_T_m1, double recoA_T_p1, double recoA_T_round)
    //                     {return (!emulatePickFinder(recoA_T, recoA_T_m1, recoA_T_p1)) || (recoA_T_round == 0.) ; },
    //                     {"recoA_T", "recoA_T_m1", "recoA_T_p1", "recoA_T_round"});


    for (auto const & bin : bins){
        // df_nonzero.Filter("recoA_T_round>0")
        //           .Filter("trueA_T>" +to_string(bin.first) + "&& trueA_T<=" + to_string(bin.second))
        //           .Snapshot("bias", outputdir + "/output_"+name+"_"+to_string(bin.first) +"_"+to_string(bin.second)+".root",
        //                {"bias_round","bias", "trueA_sf", "BXsf", "totalSF"});
	    df_nonzero.Filter("recoA_T>0")
                  .Filter("trueA_T>" +to_string(bin.first) + "&& trueA_T<=" + to_string(bin.second))
                  .Snapshot("bias", outputdir + "/output_noround_"+name+"_"+to_string(bin.first) +"_"+to_string(bin.second)+".root",
                {"bias_round","bias", "trueA_sf", "BXsf", "totalSF"});
    }
    
}


int main(int argc, char** argv){

    if (argc <7){
        std::cout << "Please insert: BXSF_file trueA_SF basedir train ring bins outputdir" <<std::endl;
        return 1;
    }
    
    string basedir {argv[3]};
    string train {argv[4]};
    string ring {argv[5]};
    vector<pair<float,float>> etbins = parseBins(argv[6]);  
    string outputdir {argv[7]};
    cout << "basedir: " << basedir
         << " |train: " << train 
         << " |ring: " << ring
         << " |outputdir: " << outputdir << endl;

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

    
    analyseBias(df_curr, "curr", train, etbins, outputdir);
    analyseBias(df_pu0, "pu0", train, etbins, outputdir);
    analyseBias(df_pu0_newavg, "pu0_newavg", train, etbins, outputdir);
    analyseBias(df_pu50_s2, "pu50s2", train, etbins, outputdir);
    analyseBias(df_pu50_s30, "pu50s30", train, etbins, outputdir);

    cout << "Done!" << endl;
   
}   
