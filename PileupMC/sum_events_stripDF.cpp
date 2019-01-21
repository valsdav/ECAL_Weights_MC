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
 
    Event(): nPU{0}, E_pu{0.}, signalTruth{0.}, amplitudeTruth{0.} {
        digis.resize(10, 0.0);
    }
    Event(int _nPU, double _E_pu, double _signalTruth, double _amplitudeTruth, RVec<double> _digis):
         nPU{_nPU}, E_pu{_E_pu}, signalTruth{_signalTruth}, amplitudeTruth{_amplitudeTruth} 
    {
        for (auto d: _digis){
            digis.push_back(d);
        }
    }
    ~Event(){
        //cout << "Destructor called!" <<endl;
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
 
    TreeWriter(const char* filename, const char* treename){
        file = new TFile(filename, "RECREATE");
        tree = new TTree(treename, treename);
        tree->Branch("nPU", &nPU, "nPU/I");
        tree->Branch("E_pu", &E_pu, "E_pu/D");
        tree->Branch("signalTruth", &signalTruth, "signalTruth/D");
        tree->Branch("amplitudeTruth", &amplitudeTruth, "amplitudeTruth/D");
        tree->Branch("digis", &digis);
    }
    ~TreeWriter(){
        file->Close();
    }

    void fill(vector<EventPtr> events){
        for (EventPtr e : events){
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
    vector<EventPtr> events;

    for (int pu: PUs){
        for (float s: Ss){
            cout << "PU:"<< pu << " | S:" << s <<endl;
            vector<RNode> filt_dfs; 
            for(auto df : input_dfs){
                filt_dfs.push_back(df.Filter("(nPU=="+ to_string(pu) +
                                    ")&&(signalTruth=="+to_string(s) +")"));                
            }
            // SINGLE THREAD OPERATIONS!
            auto df1 = filt_dfs.at(0);
            df1.Foreach([&](int nPU, double E_pu, double signalTruth, double amplitudeTruth, RVec<double> digis){
                EventPtr e {new Event(nPU, E_pu, signalTruth, amplitudeTruth, digis)};
                events.push_back(std::move(e));
                }, {"nPU", "E_pu", "signalTruth", "amplitudeTruth", "digis"}
            );

            for (int j = 1; j< filt_dfs.size(); j++){
                //cout << "Summing df: "<< j << endl;
                auto dff = filt_dfs.at(j);
                int _entry = 0;
                dff.Foreach([&](double E_pu, double amplitudeTruth, RVec<double> digis){
                        EventPtr e = events.at(_entry);
                        e->E_pu += E_pu;
                        e->amplitudeTruth += amplitudeTruth;
                        for (int di = 0; di <10 ; di++){
                            e->digis[di] += digis[di];
                        }
                        _entry += 1;
                        e.reset();
                        //cout << "nPU:" << nPU <<"  E_pu" << E_pu << " S: "<< signalTruth << endl;
                    }, {"E_pu", "amplitudeTruth", "digis"}   
                );
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
