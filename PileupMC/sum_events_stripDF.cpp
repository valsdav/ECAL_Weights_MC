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
    double E_pu;
    double signalTruth;
    double amplitudeTruth;
    RVec<double> digis;
    int nxtals;
 
    Event(): nPU{0}, E_pu{0.}, signalTruth{0.}, amplitudeTruth{0.} {
        digis.resize(10, 0.0);
    }
    Event(int _nPU, double _E_pu, double _signalTruth, double _amplitudeTruth, RVec<double> _digis, int _nxtals):
         nPU{_nPU}, E_pu{_E_pu}, signalTruth{_signalTruth}, amplitudeTruth{_amplitudeTruth}, nxtals{_nxtals}
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
    double E_pu;
    double signalTruth;
    double amplitudeTruth;
    vector<double> digis;
    int nxtals;
 
    TreeWriter(const char* filename, const char* treename){
        file = new TFile(filename, "RECREATE");
        tree = new TTree(treename, treename);
        tree->Branch("nPU", &nPU, "nPU/I");
        tree->Branch("E_pu", &E_pu, "E_pu/D");
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
            E_pu = e->E_pu;
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


void sumEvents(int nPU, double E_pu, double signalTruth,double amplitudeTruth, RVec<double>digis){
    if (_slot == 0){
        EventPtr e {new Event(nPU, E_pu, signalTruth, amplitudeTruth, digis, 1)};
        events.push_back(std::move(e));
        _entry += 1;
    }else{
        EventPtr e = events.at(_entry);
        e->nxtals += 1; 
        e->E_pu += E_pu;
        e->amplitudeTruth += amplitudeTruth;
        for (int di = 0; di <10 ; di++){
            e->digis[di] += digis[di];
        }
        _entry += 1;
    }
}   



int main(int argc, char** argv){

    if (argc < 4){
        std::cout << "Missing args: outpufile PUs_string Signals_string inputfiles" <<std::endl;
        exit(1);
    }
    
    char* outputfile = argv[1];

    // Get PUs and Signals from strings with comma delimiters
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

    cout << "Loading input trees..." << endl;
    // Load the input trees with the events of the xtals forming the strips
    vector<RDataFrame> input_dfs; 
    for (int i = 4; i< argc; i++){
        input_dfs.push_back(RDataFrame("weights", argv[i]));
    }
    
    // outputtree
    TreeWriter total_strip_events {outputfile, "weights"};
    
    for (int pu: PUs){
        for (float s: Ss){
            cout << "PU:"<< pu << " | S:" << s <<endl;

            for(int idf = 0; idf< input_dfs.size(); idf++){
                _slot = idf;
                // reset cycle on entries
                _entry  = 0;
                
                auto filt_df = input_dfs.at(idf);

                filt_df.Filter([pu,s](int nPU, double signalTruth)
                                {return nPU == pu && signalTruth == s;}, {"nPU", "signalTruth"})
                    .Foreach(sumEvents, {"nPU", "E_pu", "signalTruth", "amplitudeTruth", "digis"});
            }

            // Append the result
            total_strip_events.fill(events);
            cout << "Tree filled" << endl;
            events.clear();
            
        }
    }

    // Save the dataset
    total_strip_events.close();
    std::cout << "Done" << std::endl;

}
