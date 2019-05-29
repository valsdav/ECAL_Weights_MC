#include <iostream>
#include <cmath>
#include "TFile.h"
#include "TTree.h"
#include "TH1F.h"
#include "TCanvas.h"
#include "TApplication.h"
#include "TRatioPlot.h"
#include <TRandom3.h>
#include <algorithm>

using namespace std;

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

/*
This scrpt is used to produce the number of PU interaction for each BX 
in different train configurations. 
*/

int main(int argc, char** argv){

    if (argc< 6) {
        
        cout << "nPUs | number of events | output_file | nBX | train " << 
        endl;
        return 1;
    }

    TRandom3 * rnd = new TRandom3();
    gRandom = rnd;

    vector<int> nPUs = parseArg<int>(argv[1]);

    int nevents = atoi(argv[2]);
    vector<bool> trainMask ;
    int nBX = atoi(argv[4]);
    char * mask = argv[5];
    // Parse input strings
    for (int i = 0; i< nBX; i++){
        trainMask.push_back(mask[i] == '1');
    }
   
    TFile * outfile = new TFile(argv[3], "recreate");
    TTree * tree = new TTree("nPU", "nPU");
        
    map<int, vector<int>*> nPUints;
    for (int nPU : nPUs){
        nPUints[nPU] = new vector<int>();
        tree->Branch(("nPU_"+ to_string(nPU)).c_str(), nPUints[nPU]);
    }
    

    for (int iev = 0; iev< nevents; iev++){

        if (iev % 1000 == 0){
            cout <<".";
        }

        for_each(nPUints.begin(), nPUints.end(), [](std::pair<int, vector<int>*> item){item.second->clear();});
    
        for (int ibx = 0; ibx < nBX; ibx ++){
            if (trainMask[ibx]){
                // number of min-bias interactions in this BX
                for (auto it = nPUints.begin(); it != nPUints.end(); it++){
                    it->second->push_back(gRandom->Poisson(it->first));
                }
            }else{
                for (auto it = nPUints.begin(); it != nPUints.end(); it++){
                    it->second->push_back(0);
                }
            }
        }

        tree->Fill();
    }
    
    tree->Write();
    outfile->Close();
    cout << endl<< "DONE"<<endl;
}