#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

#include "TFile.h"
#include "TROOT.h"
#include "ROOT/RDataFrame.hxx"


using namespace std; 
using namespace ROOT;
using namespace ROOT::RDF;

typedef ROOT::RDF::RResultPtr<double> Rptr;
typedef RInterface<ROOT::Detail::RDF::RJittedFilter, void> FilterObj;


int main(int argc, char** argv){

    if (argc< 5) {
        std::cout << "Missing args: signalAmpl | outputfile | NThread | inputfiles" << std::endl;
        return 1;
    }  

    // Path to the file, only the ID will be added at the end
    string signalAmpl = argv[1];
    string outputfile = argv[2];
    int nthread = atoi(argv[3]);

    vector<string> inputfiles; 
    for (int i = 4; i < argc; i++){
        inputfiles.push_back(argv[i]);
        cout << argv[i] <<endl;
    }

    ROOT::EnableImplicitMT(nthread);
    int poolsize = ROOT::GetImplicitMTPoolSize();
    std::cout << "Multi-threading pool: "<< poolsize << std::endl;

    vector<int> PUs = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 150};
    
    RDataFrame df ("weights", inputfiles);
    auto df_ampl = df.Filter("signalTruth=="+signalAmpl);

    // For each weight: map PU,  vector of weights
    map<int,vector<Rptr>> df_means; 
    map<int,vector<Rptr>> df_stds;
    map<int, Rptr> intime_ampls_means; 
    map<int, Rptr> intime_ampls_stds;
    map<int, Rptr> Epu_means;
    map<int, Rptr> Epu_stds;
     
    for (auto pu : PUs){
        cout << "PU: " << pu <<endl;
        //map over weights 1->5
        vector<Rptr> _means;
        vector<Rptr> _stds;

        auto pu_df = df_ampl.Filter("nPU=="+to_string(pu));
        for (int iw =1; iw<=5; iw++){
            _means.push_back(pu_df.Mean("w"+to_string(iw)));
            _stds.push_back(pu_df.StdDev("w"+to_string(iw)));
        }
        df_means[pu] = _means;
        df_stds[pu] = _stds;
        // Saving mean PU energy for this PU
        Epu_means[pu] = pu_df.Mean("E_pu");
        Epu_stds[pu] = pu_df.StdDev("E_pu");
        // Intime amplitude: signal + PU BX0
        intime_ampls_means[pu] = pu_df.Mean("amplitudeTruth");
        intime_ampls_stds[pu] = pu_df.StdDev("amplitudeTruth");
    }
  
    
    
    //Save the file
    ofstream output;
    output.open (outputfile);
    output << "PU,S,A,A_std,E_pu,E_pu_std,w1,w2,w3,w4,w5,sw1,sw2,sw3,sw4,sw5"<<endl;
    
    for (int pu: PUs){
        output <<  pu <<"," << signalAmpl << "," 
               <<  intime_ampls_means[pu].GetValue() <<"," << intime_ampls_stds[pu].GetValue() <<"," 
               <<  Epu_means[pu].GetValue() << "," << Epu_stds[pu].GetValue() << "," ;
        for (int iw = 0; iw < 5; iw++){
            output<< df_means[pu][iw].GetValue() << ",";
        }
        for (int iw = 0; iw < 5; iw++){
            output<< df_stds[pu][iw].GetValue() << ",";
        }
        output << endl;
    }

    output.close();

    cout << "Done!" << endl;

}
