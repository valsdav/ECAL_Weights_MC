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
        std::cout << "Missing args: inputfile | signalTruth | outputfile | NThread" << std::endl;
        return 1;
    }  

    // Path to the file, only the ID will be added at the end
    string inputfile = argv[1];
    char* signal = argv[2];
    string outputfile = argv[3];
    int nthread = atoi(argv[4]);

    ROOT::EnableImplicitMT(nthread);
    int poolsize = ROOT::GetImplicitMTPoolSize();
    std::cout << "Multi-threading pool: "<< poolsize << std::endl;

    vector<int> PUs = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 150};
    
    RDataFrame df ("weights", inputfile );

    // For each weight: map PU,  vector of weights
    map<int,vector<Rptr>> df_means ; 
     
    for (auto pu : PUs){
        cout << "PU: " << pu <<endl;
        //map over weights 1->5
        vector<Rptr> _means;

        auto pu_df = df.Filter("nPU=="+to_string(pu));
        for (int iw =1; iw<=5; iw++){
            _means.push_back(pu_df.Mean("w"+to_string(iw)));
        }
        df_means[pu] = _means;
    }
    

    cout << "Calculating..." <<endl; 

    //Save the file
    ofstream output;
    output.open (outputfile);
    output << "PU,w1,w2,w3,w4,w5"<<endl;
    
    for (int pu: PUs){
        output <<  pu << ",";
        for (int iw = 0; iw < 5; iw++){
            output<< df_means[pu][iw].GetValue() << ",";
        }
        output << endl;
    }

    output.close();



}