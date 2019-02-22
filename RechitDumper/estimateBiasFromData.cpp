#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>

#include "TROOT.h"
#include "ROOT/RDataFrame.hxx"
#include "TFile.h"
#include "TTree.h"
#include "TCollection.h"
#include "TKey.h"

using namespace std;
using namespace ROOT; 
using namespace ROOT::RDF;
using namespace ROOT::VecOps;

typedef ROOT::RDF::RResultPtr<double> Rptr;

/*
*  This script is used to extract the reconstructed amplitude and bias
*  for a strip using a set of weights. 
*  The bias is extracted for each combination of signal and PU separately.
*  The output is a CSV file with all the data.

*  Compiles under ROOT >= 6.16
*/

// Map containing the bias histograms for all the strips
map<string, TH2F*> strips_map; 
// Vectors of coordinates for bias histo: x=signal, y=pu
vector<int> PUs;
vector<float> Ss;
RVec<int> etarings; 


float bias_calculator(int stripid, double pu, double s){
    auto bias_histo = strips_map["bias_" + to_string(stripid)];
    // Get bin
    int xbin = 1;
    int ybin = 1;

    for (int ix = 0; ix < Ss.size()-1; ix++){
        if (abs(s-Ss.at(ix)) < abs(s- Ss.at(ix+1)) ){
            xbin = ix+1;
            break;
        }else{
            xbin = ix+2;
        }
    }
    for (int iy = 0; iy < PUs.size()-1; iy++){
        if (abs( pu -PUs.at(iy)) < abs( pu - PUs.at(iy+1)) ){
            ybin = iy +1;
            break;
        } else{
            ybin = iy+2;
        }
    }

    //cout << "S:" << s << " xbin: "<< xbin << " Pu:" << pu << " ybin: " << ybin ;
    int bin = bias_histo->GetBin(xbin, ybin);
    //cout << "--> bin: " << bin;
    float bias = bias_histo->GetBinContent(bin);
    //cout << " bias: "<< bias <<endl;
    return bias;
}


int main(int argc, char** argv){

    if (argc < 8){
        std::cout << "Missing args:  outpufile rechits_file bias_file PU_string Signal_string eta_rings nthreads " <<std::endl;
        exit(1);
    }
    
    string outputfile = argv[1];
    string rechits_file = argv[2];
    char* biasfile = argv[3];
    int nthreads = atoi(argv[7]);

    // Get PUs and Signals from strings with comma delimiters
    string PU_string = argv[4];
    string S_string = argv[5];
    string rings_string = argv[6];
    // Parse input strings
    size_t pos = 0;
    string delimiter =",";
    string token;
    while ((pos = PU_string.find(delimiter)) != string::npos) {
        token = PU_string.substr(0, pos);
        PUs.push_back(std::stoi(token));
        PU_string.erase(0, pos + delimiter.length());
    }
    PUs.push_back(std::stoi(PU_string));
    // Signal string
    pos = 0;
    while ((pos = S_string.find(delimiter)) != string::npos) {
        token = S_string.substr(0, pos);
        Ss.push_back(std::stof(token));
        S_string.erase(0, pos + delimiter.length());
    }
    Ss.push_back(std::stof(S_string));
    // Eta rings
    pos = 0;
    while ((pos = rings_string.find(delimiter)) != string::npos) {
        token = rings_string.substr(0, pos);
        etarings.push_back(std::stoi(token));
        rings_string.erase(0, pos + delimiter.length());
    }
    etarings.push_back(std::stoi(rings_string));


    // Read all the histograms from the bias file, one for each strip
    TFile * bias_file = new TFile(biasfile, "READ");
    TIter next(bias_file->GetListOfKeys());
    TKey *key;
    while ((key=(TKey*)next())) {
        string keyname {key->GetName()};
        strips_map[keyname] = (TH2F*) bias_file->Get(keyname.c_str());
        cout << "Loaded histo bias: "<< keyname << endl;
    }

    //Enabling multithread
    ROOT::EnableImplicitMT(nthreads);
    int poolsize = ROOT::GetImplicitMTPoolSize();
    std::cout << "Multi-threading pool: "<< poolsize << std::endl;

    auto dfrechits = RDataFrame("rechits", rechits_file);

    cout << "Dataframe processing starting..." <<endl;
    auto h = dfrechits.Filter([&](int ring){ return Any(etarings == ring);}, {"eta_ring"})
            .Define("bias", bias_calculator , {"stripid", "pu", "energy"})
            .Snapshot("bias", outputfile, {"bias", "run", "ls", "pu", "energy", "stripid", "eta_ring"});
        
    std::cout << "Done" << std::endl;

}
