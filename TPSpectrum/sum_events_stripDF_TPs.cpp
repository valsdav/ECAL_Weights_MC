#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <memory>
#include <map>

#include "ROOT/RDataFrame.hxx"
#include "TFile.h"
#include "TTree.h"

using namespace std;
using namespace ROOT; 
using namespace ROOT::RDF;
using namespace ROOT::VecOps;


/*
* This script can be used to create a tree with the MC events for strip
* instead for xtals. The energies, amplitudes and digis are summed.
* The signalTruth remains per xtal as a reference.
* The weights are not saved: this files is useful only to calculate the bias
*/

typedef ROOT::RDF::RResultPtr<double> Rptr;

// Class used to read the events for each xtal
class Event{
    public: 
    int nPU;
    double ET;
    double signalTruth;
    double amplitudeTruth;
    RVec<double> digis;
    int nxtals;
 
    Event(int _nPU, double _ET, double _signalTruth, double _amplitudeTruth, RVec<double> _digis, int _nxtals):
         nPU{_nPU},  ET(_ET), signalTruth{_signalTruth}, amplitudeTruth{_amplitudeTruth}, nxtals{_nxtals}
    {
        for (auto d: _digis){
            digis.push_back(d);
        }
    }
    ~Event(){
        digis.clear();
    };
};
typedef shared_ptr<Event> EventPtr;

class TreeWriter{
    public: 
    TFile* file; 
    TTree* tree;
    int nPU;
    double ET;
    double signalTruth;
    double amplitudeTruth;
    vector<double> digis;
    int nxtals;
 
    TreeWriter(const char* filename, const char* treename){
        file = new TFile(filename, "RECREATE");
        tree = new TTree(treename, treename);
        tree->Branch("nPU", &nPU, "nPU/I");
        tree->Branch("ET", &ET, "ET/D");
        tree->Branch("signalTruth", &signalTruth, "signalTruth/D");
        tree->Branch("amplitudeTruth", &amplitudeTruth, "amplitudeTruth/D");
        tree->Branch("digis", &digis);
        tree->Branch("nxtals", &nxtals, "nxtals/I");
    }
    ~TreeWriter(){
        file->Close();
    }

    void fill(vector<EventPtr> events){
        for (EventPtr e : events){
            nxtals = e->nxtals;
            nPU = e->nPU;
            ET = e->ET;
            signalTruth = e->signalTruth;
            amplitudeTruth = e->amplitudeTruth;
            digis.clear();
            std::copy(e->digis.begin(), e->digis.end(), std::back_inserter(digis));
            tree->Fill();
        }
    }

    void close(){
        file->Write();
        file->Close();
    }
};

vector<EventPtr> events;
int _slot = -1;
int _entry = 0;


void sumEvents(int nPU,  double ET, double signalTruth,double amplitudeTruth, RVec<double>digis){
    if (_slot == 0){
        EventPtr e {new Event(nPU, ET, signalTruth, amplitudeTruth, digis, 1)};
        events.push_back(std::move(e));
        _entry += 1;
    }else{
        EventPtr e = events.at(_entry);
        e->nxtals += 1; 
        e->ET += ET;
        e->amplitudeTruth += amplitudeTruth;
        for (int di = 0; di <10 ; di++){
            e->digis[di] += digis[di];
        }
        _entry += 1;
    }
}   



int main(int argc, char** argv){

    if (argc < 4){
        std::cout << "Missing args: outpufile PUs_string inputfiles" <<std::endl;
        exit(1);
    }
    
    char* outputfile = argv[1];

    // Get PUs and Signals from strings with comma delimiters
    vector<int> PUs ;
    string PU_string = argv[2];
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

    cout << "Loading input trees..." << endl;
    // Load the input trees with the events of the xtals forming the strips
    vector<RDataFrame> input_dfs; 
    for (int i = 3; i< argc; i++){
        input_dfs.push_back(RDataFrame("samples", argv[i]));
    }
    
    // outputtree
    TreeWriter total_strip_events {outputfile, "samples"};
    
    for (int pu: PUs){
        cout << "PU:"<< pu  <<endl;

        for(int idf = 0; idf< input_dfs.size(); idf++){
            _slot = idf;
            // reset cycle on entries
            _entry  = 0;
            
            auto filt_df = input_dfs.at(idf);

            filt_df.Filter([pu](int nPU)
                            {return nPU == pu;}, {"nPU"})
                .Foreach(sumEvents, {"nPU", "ET", "signalTruth", "amplitudeTruth", "digis"});
        }

        // Append the result
        total_strip_events.fill(events);
        cout << "Tree filled" << endl;
        events.clear();
    }

    // Save the dataset
    total_strip_events.close();
    std::cout << "Done" << std::endl;

}
