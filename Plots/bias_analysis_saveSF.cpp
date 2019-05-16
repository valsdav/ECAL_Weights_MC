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
    {"8b4e", std::make_pair(13, 21)},
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


int main(int argc, char** argv){

    if (argc <6){
        std::cout << "Please insert: BXSF_file trueA_SF file train ring outputfile" <<std::endl;
        return 1;
    }
    
    string file {argv[3]};
    string train {argv[4]};
    string ring {argv[5]};
    string outputfile {argv[6]};
    cout << "inputfile: " << file
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
    
    RDataFrame rdf ("bias", file);

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
                .Define("totalSF", "BXsf*trueA_sf")
    
    // Filter events where the TP is not assigned to the center BX or TP==0 for fenix precision
                .Filter(emulatePickFinder, {"recoA_T", "recoA_T_m1", "recoA_T_p1"})
                .Filter("recoA_T_round > 0.")
    // Save events scale factors
                .Snapshot("bias", outputfile, {"BX0", "bias_round", "BXsf", 
                        "trueA_sf", "totalSF", "ET_bin", "trueA_T", "recoA_T_round" });

    cout << "Done!" << endl;
   
}   