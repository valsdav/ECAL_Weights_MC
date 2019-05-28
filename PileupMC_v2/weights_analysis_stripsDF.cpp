#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <map>

#include "TFile.h"
#include "TROOT.h"
#include "ROOT/RDataFrame.hxx"

/*
* This script extract the mean weights for each combination of S and PU 
* for a given set of input files. Usually the xtal files part of a single  
* strip are passed in.
*/

using namespace std; 
using namespace ROOT;
using namespace ROOT::RDF;

typedef ROOT::RDF::RResultPtr<double> Rptr;
typedef RInterface<ROOT::Detail::RDF::RJittedFilter, void> FilterObj;

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

int main(int argc, char** argv){

    if (argc< 8) {
        std::cout << "Missing args: outputfile | PU_string | Signal_bins | Nweights | NThread | stripid | inputfile" << std::endl;
        return 1;
    }  

    // Path to the file, only the ID will be added at the end
    string outputfile = argv[1];
    vector<int> PUs = parseArg<int>(argv[2]);
    vector<pair<float,float>> etbins = parseBins(argv[3]);
    int nweights = atoi(argv[4]);
    int nthread = atoi(argv[5]);
    string stripid = argv[6];
    string inputfile = argv[7]; 
    
    ROOT::EnableImplicitMT(nthread);
    int poolsize = ROOT::GetImplicitMTPoolSize();
    std::cout << "Multi-threading pool: "<< poolsize << std::endl;

    RDataFrame df ("samples", inputfile);

    // For each weight: map PU, map Signal  vector of weights
    map<int, map<pair<float,float>,vector<Rptr>>> w_means;
    map<int, map<pair<float,float>,vector<Rptr>>>  w_stds;
    map<int, map<pair<float,float>, Rptr>> Epu_means;
    map<int, map<pair<float,float>, Rptr>> Epu_stds;
     
    for (auto pu : PUs){
        //map over weights 
        map<pair<float,float>,vector<Rptr>> _w_means;
        map<pair<float,float>,vector<Rptr>> _w_stds;
        map<pair<float,float>, Rptr> _Epu_means;
        map<pair<float,float>, Rptr> _Epu_stds;

        auto pu_df = df.Filter("nPU=="+to_string(pu));

        for (auto & etbin: etbins){
            auto s_df = pu_df.Filter("trueA_T >="+ to_string(etbin.first) + 
                                    " && trueA_T <"+to_string(etbin.second));

            _w_means[etbin] = vector<Rptr>{};
            _w_stds[etbin] = vector<Rptr>{};
            for (int iw = 0; iw < nweights; iw++){
                _w_means[etbin].push_back(s_df.Mean("w"+to_string(iw)));
                _w_stds[etbin].push_back(s_df.StdDev("w"+to_string(iw)));
            }
            // Saving mean PU energy for this PU
            _Epu_means[etbin] = s_df.Mean("E_pu");
            _Epu_stds[etbin] = s_df.StdDev("E_pu");
        }

        w_means[pu] = _w_means;
        w_stds[pu] = _w_stds;
        Epu_means[pu] = _Epu_means;
        Epu_stds[pu] = _Epu_stds;        
    }
    
    cout << "Calculating..." << endl;
    
    //Save the file
    ofstream output;
    output.open (outputfile);
    // S is now in ET
    output << "stripid,PU,Smin,Smax,E_pu,E_pu_std";
    for (int iw = 0; iw < nweights; iw++){
        output << ",w" << iw+1;
    }
    for (int iw = 0; iw < nweights; iw++){
        output << ",sw" << iw+1;
    }
    output << endl;
    
    for (int pu: PUs){  
        for(auto & etbin: etbins){
            output << stripid << ","<< pu << "," 
                   << etbin.first << "," << etbin.second << ","
                   <<  Epu_means[pu][etbin].GetValue() << "," 
                   <<  Epu_stds[pu][etbin].GetValue();

            for (int iw = 0; iw < nweights; iw++){
                output << "," << w_means[pu][etbin][iw].GetValue();
            }
            for (int iw = 0; iw < nweights; iw++){
                output << "," << w_stds[pu][etbin][iw].GetValue();
            }
            output << endl;
        }       
    }

    output.close();

    cout << "Done!" << endl;

}
