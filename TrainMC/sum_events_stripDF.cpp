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
    double signalTruth;
    double amplitudeTruth;
    RVec<double> digis;
    RVec<double> samples;
    RVec<double> pileup_samples;
    RVec<double> energyPU;
    int nxtals;
 
    Event(int _nPU, double _signalTruth, double _amplitudeTruth, RVec<double> _digis,
            RVec<double> _samples, RVec<double> _pileup_samples,  RVec<double> _energyPU, int _nxtals):
         nPU{_nPU}, signalTruth{_signalTruth}, amplitudeTruth{_amplitudeTruth}, nxtals{_nxtals}
    {
        for (auto d: _digis){
            digis.push_back(d);
        }
        for (auto d: _samples){
            samples.push_back(d);
        }
        for (auto d: _pileup_samples){
            pileup_samples.push_back(d);
        }
        for (auto d: _energyPU){
            energyPU.push_back(d);
        }
    }
    ~Event(){
        digis.clear();
        samples.clear();
        pileup_samples.clear();
        energyPU.clear();
    };
};
typedef shared_ptr<Event> EventPtr;

class TreeWriter{
    public: 
    TFile* file; 
    TTree* tree;
    int nPU;
    double signalTruth;
    double amplitudeTruth;
    vector<double> digis;
    vector<double> samples;
    vector<double> pileup_samples;
    vector<double> energyPU;
    int nxtals;
 
    TreeWriter(const char* filename, const char* treename){
        file = new TFile(filename, "RECREATE");
        tree = new TTree(treename, treename);
        tree->Branch("nPU", &nPU, "nPU/I");
        tree->Branch("signalTruth", &signalTruth, "signalTruth/D");
        tree->Branch("amplitudeTruth", &amplitudeTruth, "amplitudeTruth/D");
        tree->Branch("digis", &digis);
        tree->Branch("samples", &samples);
        tree->Branch("pileup_samples", &pileup_samples);
        tree->Branch("energyPU", &energyPU);
        tree->Branch("nxtals", &nxtals, "nxtals/I");
    }
    ~TreeWriter(){
        file->Close();
    }

    void fill(vector<EventPtr> events){
        for (EventPtr e : events){
            nxtals = e->nxtals;
            nPU = e->nPU;
            signalTruth = e->signalTruth;
            amplitudeTruth = e->amplitudeTruth;
            digis.clear();
            samples.clear();
            pileup_samples.clear();
            energyPU.clear();
            std::copy(e->digis.begin(), e->digis.end(), std::back_inserter(digis));
            std::copy(e->samples.begin(), e->samples.end(), std::back_inserter(samples));
            std::copy(e->pileup_samples.begin(), e->pileup_samples.end(), std::back_inserter(pileup_samples));
            std::copy(e->energyPU.begin(), e->energyPU.end(), std::back_inserter(energyPU));
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


void sumEvents(int nPU, double signalTruth,double amplitudeTruth, RVec<double>digis,
                RVec<double>samples,  RVec<double>pileup_samples,  RVec<double>energyPU){
    if (_slot == 0){
        EventPtr e {new Event(nPU, signalTruth, amplitudeTruth, 
                            digis, samples, pileup_samples, energyPU, 1)};
        events.push_back(std::move(e));
        _entry += 1;
    }else{
        EventPtr e = events.at(_entry);
        e->nxtals += 1; 
        e->amplitudeTruth += amplitudeTruth;
        for (int di = 0; di <10 ; di++){
            e->digis[di] += digis[di];
        }
        for (int si =0; si < samples.size(); si++){
            e->samples[si] += samples[si];
            e->pileup_samples[si] += pileup_samples[si];
            e->energyPU[si] += energyPU[si];
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
        input_dfs.push_back(RDataFrame("samples", argv[i]));
    }
    
    // outputtree
    TreeWriter total_strip_events {outputfile, "samples"};
    
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
                    .Foreach(sumEvents, {"nPU", "signalTruth", "amplitudeTruth", 
                                    "digis", "samples", "pileup_samples", "energyPU"});
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
