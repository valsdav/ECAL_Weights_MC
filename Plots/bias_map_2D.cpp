#include "ROOT/RDataFrame.hxx"
#include "ROOT/RDF/InterfaceUtils.hxx"
#include <TROOT.h>
#include <TGraph.h>
#include <TMultiGraph.h>
#include <TH1D.h>
#include <TH1F.h>
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

typedef ROOT::RDF::RResultPtr<TH1D> Hptr;

TFile * trueA_SF_file;
TH1F * trueA_SF_histo;

vector<float> ETbins;
vector<int> nPUs;

template<class T>
vector<T> parseArg(string arg, string delimiter=","){
    vector<T> result;
    size_t pos = 0;
    string token;
    while ((pos = arg.find(delimiter)) != string::npos) {
        token = arg.substr(0, pos);
        result.push_back((T) std::stof(token));
        arg.erase(0, pos + delimiter.length());
    }
    // Last string
    result.push_back((T) std::stof(arg));
    return result;
}

auto getETbin(double ET){
    int bin = 0;
    for (int i= 0; i< ETbins.size()-1; i++){
        if (ET> ETbins.at(i) && ET<=ETbins.at(i+1)){
            bin = i+1;
            break;
        }
    }
    // Check overflow
    if (ET > ETbins.at(ETbins.size()-1)){
        bin = ETbins.size();
    }
    return bin;
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

    if (argc < 7){
        std::cout << "Please insert: inputfile ETbins nPUs trueA_SF ring outputfile" <<std::endl;
        return 1;
    }
    
    string inputfile {argv[1]};
    ETbins = parseArg<float>(argv[2]);
    nPUs = parseArg<int>(argv[3]);
    string ring {argv[5]};
    string outputfile {argv[6]};
    cout << "inputfile: " << inputfile 
         << " |ring: " << ring
         << " |outputfile: " << outputfile << endl;

    TH1::SetDefaultSumw2();

    //Load histo for scale factors
    trueA_SF_file = new TFile(argv[4], "read");
    trueA_SF_histo = (TH1F*) trueA_SF_file->Get(("trueA_SF_" + ring).c_str());
    
    ROOT::EnableImplicitMT();
    int poolsize = ROOT::GetImplicitMTPoolSize();
    std::cout << "Multi-threading pool: "<< poolsize << std::endl;
    
    RDataFrame rdf ("bias", inputfile);

                // Filter out problematic events
    auto df = rdf.Filter("trueA_T>0.05")
                // Define the ET bin on trueA_T, the e-rec
                .Define("ET_bin", getETbin, {"trueA_T"})
                //Get trueA_T spectrum scale factors
                .Define("trueA_sf",getTrueASF, {"trueA_T"})
                .Define("BIAS", [](double recoA, double trueA){ return (recoA-trueA)/trueA;}, {"recoA_T_round", "trueA_T"});
    
            // Filter events where the TP is not assigned to the center BX or TP==0 for fenix precision
    auto df_nonzero  = df.Filter(emulatePickFinder, {"recoA_T", "recoA_T_m1", "recoA_T_p1"})
               //Filter events with zeroes TP
               .Filter("recoA_T_round > 0.");

    // Get only events that doesn't pass the previous cut
    auto df_zero = df.Filter([](double recoA_T, double recoA_T_m1, double recoA_T_p1, double recoA_T_round)
                        {return (!emulatePickFinder(recoA_T, recoA_T_m1, recoA_T_p1)) || (recoA_T_round == 0.) ; },
                        {"recoA_T", "recoA_T_m1", "recoA_T_p1", "recoA_T_round"});

    vector<Hptr> histos;

    for (auto & pu : nPUs){
        for (int iet = 0; iet<= ETbins.size(); iet++){
            auto h_bias = df_nonzero.Filter([pu](int nPU){return nPU == pu;}, {"nPU"})
                        .Filter([iet](int ETbin){return ETbin==iet;},{"ET_bin"})
                        .Histo1D( {("h_"+to_string(pu)+ "_"+to_string(iet)).c_str(), "", 800,-200,+200},
                                    "BIAS", "trueA_sf");

            histos.push_back(h_bias);
        }
        // extract distribution of zeroed TP for each PU
        auto h_zero = df_zero.Filter([pu](int nPU){return nPU == pu;}, {"nPU"})
                            .Histo1D({("h_zero_"+to_string(pu)).c_str(), "", 256,0,128},"trueA_T", "trueA_sf");
        histos.push_back(h_zero);
    }

    TFile output (outputfile.c_str(), "recreate");
    for (auto & h : histos){
        h->Write();
    }
    output.Close();

}