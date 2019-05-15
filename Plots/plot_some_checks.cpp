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

double emulateFIRprecision(double rA){
    // Frontend has 0.5 GeV precision and overflows at 128 GeV. 
    // The minimum value is 0. 
    // First of all round to 0.5 precision
    double rA_round = round(rA*2)/2;
    // Check overflow
    if (rA_round > 128.)  rA_round = 128.;
    if (rA_round < 0.5)  rA_round = 0.;
    return rA_round;   
}

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


int main(int argc, char** argv){

    if (argc <6){
        std::cout << "Please insert: inputfile BXSF_file trueA_SF train ring outputfile" <<std::endl;
        return 1;
    }

    string inputfile {argv[1]};
    string train {argv[4]};
    string ring {argv[5]};
    string outputfile {argv[6]};
    cout << "inputfile: " << inputfile
         << " |train: " << train 
         << " |ring: " << ring
         << " |outputfile: " << outputfile << endl;

    TH1::SetDefaultSumw2();

    //Load histo for scale factors
    BXSF_file = new TFile(argv[2], "read");
    BXSF_histo = (TH1F*) BXSF_file->Get(("bxsf_" + ring).c_str());
    trueA_SF_file = new TFile(argv[3], "read");
    trueA_SF_histo = (TH1F*) trueA_SF_file->Get(("trueA_SF_" + ring).c_str());

    ROOT::EnableImplicitMT();
    int poolsize = ROOT::GetImplicitMTPoolSize();
    std::cout << "Multi-threading pool: "<< poolsize << std::endl;
    
    RDataFrame rdf ("bias",inputfile);

    auto et_bins = ETbins[train]; 
    
                // Define the ET bin on trueA_T, the e-rec
    auto df = rdf.Define("ET_bin", getETbin(train), {"trueA_T"})
                // Get the BX scale factor from BX0 and ET_bin true
                .Define("BXsf", getBXSF(train), {"BX0", "ET_bin"})
                //Get trueA_T spectrum scale factors
                .Define("trueA_sf",[](double trueA_T)
                    {return trueA_SF_histo->GetBinContent(trueA_SF_histo->FindBin(trueA_T));}, {"trueA_T"})
                .Define("totalSF", "BXsf*trueA_sf")
                .Define("recoA_T_round", emulateFIRprecision ,{"recoA_T"});

    //Total scale factor
    auto sfhisto = df.Histo1D("totalSF");
    auto sfAhisto = df.Histo1D("trueA_sf");
    auto sfhisto2 = df.Histo2D({"totalSFbyA","", 100, 0, 7, 256, 0, 128}, "totalSF","trueA_T");
    auto sf_bx_trueA = df.Histo2D({"BXsfVsA", "", 100, 0, 7, 256, 0, 128}, "BXsf","trueA_T");
    auto trueA_sfzero = df.Filter("totalSF > 0.05").Histo1D({"trueA_T_withbigSF", "", 256, 0, 128 },"trueA_T", "totalSF");
    
    // Spectrum of lost TPS
    auto lostdf = df.Filter("recoA_T_round < 0.5");
    auto trueA_lost_tps = lostdf.Histo1D({"lost_tp_trueA", "", 256, 0, 128}, "trueA_T", "totalSF");
    auto trueA_lost_tps_nosf = lostdf.Histo1D({"lost_tp_trueA_nosf", "", 256, 0, 128}, "trueA_T");
    auto trueA_lost_vs_BX0 = lostdf.Histo2D({"lost_tp_trueA_vs_BX0", "", 256, 0, 128, 48, 56 , 104}, "trueA_T", "BX0");

    // Energy spectrum check
    auto trueA_spectrum = df.Histo1D({"trueA_spectrum", "", 256, 0, 128}, "trueA_T", "totalSF");


    TFile output (outputfile.c_str(), "recreate");
    sfhisto->Write();
    sfAhisto->Write();
    sfhisto2->Write();
    sf_bx_trueA->Write();
    trueA_sfzero->Write();
    trueA_lost_tps->Write();
    trueA_lost_tps_nosf->Write();
    trueA_lost_vs_BX0->Write();
    trueA_spectrum->Write();
    output.Close();
   
}   