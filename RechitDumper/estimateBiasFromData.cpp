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
#include "THashList.h"
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
// maps of coordinates for bias histo for each strip: x=signal, y=pu
map<string, vector<int>> PUs;
map<string, vector<float>> Ss;
RVec<int> etarings; 


float bias_calculator(int stripid, double pu, double s){
    auto bias_histo = strips_map["bias_" + to_string(stripid)];
    vector<int> _PUs = PUs["bias_"+to_string(stripid)];
    vector<float> _Ss = Ss["bias_"+to_string(stripid)];
    //cout << "Strip: " << stripid << endl;
    // Get bin
    int xbin = 1;
    int ybin = 1;

    for (int ix = 0; ix < _Ss.size()-1; ix++){
        if (abs(s-_Ss.at(ix)) < abs(s- _Ss.at(ix+1)) ){
            xbin = ix+1;
            break;
        }else{
            xbin = ix+2;
        }
    }
    for (int iy = 0; iy < _PUs.size()-1; iy++){
        if (abs( pu -_PUs.at(iy)) < abs( pu - _PUs.at(iy+1)) ){
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

    if (argc < 6){
        std::cout << "Missing args:  outpufile rechits_file bias_file eta_rings nthreads " <<std::endl;
        exit(1);
    }
    
    string outputfile = argv[1];
    string rechits_file = argv[2];
    char* biasfile = argv[3];
    int nthreads = atoi(argv[5]);

    string rings_string = argv[4];
    // Parse input strings
    size_t pos = 0;
    string delimiter =",";
    string token;
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
        auto h =  (TH2F*) bias_file->Get(keyname.c_str());
        strips_map[keyname] = h;
        cout << "Loaded histo bias: "<< keyname << endl;

        // now reading the axis labels
        vector<float> signals;
        vector<int> pus;
        
        THashList* xlabels = h->GetXaxis()->GetLabels();
        TIter next_xlabel(xlabels);
        while (auto lx=next_xlabel()){
            signals.push_back(atof(lx->GetName()));
        }
        THashList* ylabels = h->GetYaxis()->GetLabels();
        TIter next_ylabel(ylabels);
        while (auto ly=next_ylabel()){
            pus.push_back(atoi(ly->GetName()));
        }
        // Save the labels for the strip
        Ss[keyname] = signals;
        PUs[keyname] = pus;
    }
    
    cout << "Now running.." << endl;
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
