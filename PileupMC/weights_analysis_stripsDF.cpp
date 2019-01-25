#include <iostream>
#include <fstream>
#include <string>
#include <vector>
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


int main(int argc, char** argv){

    if (argc< 6) {
        std::cout << "Missing args: outputfile | PU_string | Signal_string | NThread | stripid | inputfiles" << std::endl;
        return 1;
    }  

    // Path to the file, only the ID will be added at the end
    string outputfile = argv[1];
    int nthread = atoi(argv[4]);
    string stripid = argv[5];

    vector<string> inputfiles; 
    for (int i = 6; i < argc; i++){
        inputfiles.push_back(argv[i]);
        cout << argv[i] <<endl;
    }

    vector<int> PUs ;
    vector<float> Ss;
    string PU_string = argv[2];
    string S_string = argv[3];
    // Parse input strings
    size_t pos = 0;
    string delimiter =",";
    string token;
    while ((pos = PU_string.find(delimiter)) != string::npos) {
        token = PU_string.substr(0, pos);
        PUs.push_back(std::stoi(token));
        PU_string.erase(0, pos + delimiter.length());
    }
    // Last string
    PUs.push_back(std::stoi(PU_string));
    pos = 0;
    while ((pos = S_string.find(delimiter)) != string::npos) {
        token = S_string.substr(0, pos);
        Ss.push_back(std::stof(token));
        S_string.erase(0, pos + delimiter.length());
    }
    Ss.push_back(std::stof(S_string));

    ROOT::EnableImplicitMT(nthread);
    int poolsize = ROOT::GetImplicitMTPoolSize();
    std::cout << "Multi-threading pool: "<< poolsize << std::endl;

    RDataFrame df ("weights", inputfiles);

    // For each weight: map PU, map Signal  vector of weights
    map<int, map<float,vector<Rptr>>> w_means;
    map<int, map<float,vector<Rptr>>>  w_stds;
    map<int, map<float, Rptr>> intime_ampls_means; 
    map<int, map<float, Rptr>> intime_ampls_stds;
    map<int, map<float, Rptr>> Epu_means;
    map<int, map<float, Rptr>> Epu_stds;
     
    for (auto pu : PUs){
        //map over weights 1->5
        map<float,vector<Rptr>> _w_means;
        map<float,vector<Rptr>> _w_stds;
        map<float, Rptr> _intime_ampls_means;
        map<float, Rptr> _intime_ampls_stds;
        map<float, Rptr> _Epu_means;
        map<float, Rptr> _Epu_stds;

        auto pu_df = df.Filter("nPU=="+to_string(pu));

        for (auto S: Ss){
            auto s_df = pu_df.Filter("signalTruth=="+ to_string(S));

            _w_means[S] = vector<Rptr>{};
            _w_stds[S] = vector<Rptr>{};
            for (int iw =1; iw<=5; iw++){
                _w_means[S].push_back(s_df.Mean("w"+to_string(iw)));
                _w_stds[S].push_back(s_df.StdDev("w"+to_string(iw)));
            }
            // Intime amplitude: signal + PU BX0
            _intime_ampls_means[S] = s_df.Mean("amplitudeTruth");
            _intime_ampls_stds[S] = s_df.StdDev("amplitudeTruth");
            // Saving mean PU energy for this PU
            _Epu_means[S] = s_df.Mean("E_pu");
            _Epu_stds[S] = s_df.StdDev("E_pu");
        }

        w_means[pu] = _w_means;
        w_stds[pu] = _w_stds;
        intime_ampls_means[pu] = _intime_ampls_means;
        intime_ampls_stds[pu] = _intime_ampls_stds;
        Epu_means[pu] = _Epu_means;
        Epu_stds[pu] = _Epu_stds;        
    }
    
    cout << "Calculating..." << endl;
    
    //Save the file
    ofstream output;
    output.open (outputfile);
    output << "stripid,PU,S,A,A_std,E_pu,E_pu_std,w1,w2,w3,w4,w5,sw1,sw2,sw3,sw4,sw5"<<endl;
    
    for (int pu: PUs){  
        for(auto s: Ss){
            output << stripid << "\t"<< pu << "\t" << s << "\t" 
               <<  intime_ampls_means[pu][s].GetValue() << "\t" 
               <<  intime_ampls_stds[pu][s].GetValue()  << "\t" 
               <<  Epu_means[pu][s].GetValue() << "\t" 
               <<  Epu_stds[pu][s].GetValue() << "\t" ;

            for (int iw = 0; iw < 5; iw++){
                output << w_means[pu][s][iw].GetValue() << "\t";
            }
            for (int iw = 0; iw < 5; iw++){
                output << w_stds[pu][s][iw].GetValue() << "\t";
            }
            output << endl;
        }       
    }

    output.close();

    cout << "Done!" << endl;

}
