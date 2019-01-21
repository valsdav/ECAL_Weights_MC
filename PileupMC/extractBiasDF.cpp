#include <iostream>
#include <fstream>
#include <vector>
#include <map>

#include "ROOT/RDataFrame.hxx"
#include "TFile.h"
#include "TTree.h"

using namespace std;
using namespace ROOT; 
using namespace ROOT::RDF;
using namespace ROOT::VecOps;

typedef ROOT::RDF::RResultPtr<double> Rptr;

// Class used to read the events for each xtal
class TreeReader{
    private:
    int entryN = -1;
    TFile *file;
    
    public:
    TTree *tree;
    int nPU;
    double E_pu;
    double signalTruth;
    double amplitudeTruth;
    vector<double> * digis = new vector<double>(); 
 
    TreeReader(const char* filename, const char* treename){
        file = new TFile(filename, "READ");
        tree = (TTree*) file->Get(treename);
        cout << "N.entries"<< tree->GetEntries() << endl;
        tree->SetBranchAddress("nPU", &nPU);
        tree->SetBranchAddress("E_pu", &E_pu);
        tree->SetBranchAddress("signalTruth", &signalTruth);
        tree->SetBranchAddress("amplitudeTruth", &amplitudeTruth);
        tree->SetBranchAddress("digis", &digis);
    }
    ~TreeReader(){
        file->Close();
    }

    int getEntry(int entry){
        tree->GetEntry(entry);
        entryN = entry;
        return entryN;
    }

    int getEntries(){
        return tree->GetEntries();
    }
};

// Class used to create a new TTree with events per strips
// summing all amplitudes and digis
class TreeWriter{

    public: 
    TFile * file;
    TTree * tree;
    int nPU;
    double E_pu;
    double signalTruth;
    double amplitudeTruth;
    vector<double> digis ;

    TreeWriter(const char* filename,const char* treename){
        file = new TFile(filename, "RECREATE");
        tree = new TTree(treename, treename);
        tree->Branch("nPU", &nPU, "nPU/I");
        tree->Branch("E_pu", &E_pu, "E_pu/D");
        tree->Branch("signalTruth", &signalTruth, "signalTruth/D");
        tree->Branch("amplitudeTruth", &amplitudeTruth,"amplitudeTruth/D");
        tree->Branch("digis", &digis);
    }
    ~TreeWriter(){
        file->Close();
    }

    void reset(){
        nPU = 0;
        E_pu = 0.0;
        signalTruth = 0.0;
        amplitudeTruth = 0.0;
        digis.clear();
        digis.insert(digis.begin(), 10, 0.0);
    }

    void saveEntry(){
        tree->Fill();
    }
    void saveTree(){
        file->Write();
    }
};

auto recoA(double* weights){
    return [=](RVec<double> digis){
        double  A_ = 0.;
        for(int j = 0; j< 5; j++){
            A_ += weights[j] * digis.at(2 + j);
        }
        return A_;
    };
}

int main(int argc, char** argv){

    if (argc < 11){
        std::cout << "Missing args: outpufile PUs_string Signals_string output_type nthreads w1 w2 w3 w4 w5 inputfiles" <<std::endl;
        exit(1);
    }

    // Output_type = 1 ---> Save Root file with all the events
    // Output_type = 2 ---> Save only statistical infos
    
    char* outputfile = argv[1];
    int output_type = atoi(argv[4]);
    int nthreads = atoi(argv[5]);
    double weights [5] = {atof(argv[6]),atof(argv[7]),
            atof(argv[8]), atof(argv[9]), atof(argv[10])};

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
    vector<TreeReader*> input_trees; 
    for (int i = 11; i< argc; i++){
        input_trees.push_back(new TreeReader(argv[i], "weights"));
    }
    // Tree that contains the events summed for the strip
    TreeWriter strip_tree {"strip_tmp_tree.root","strip_weights"};
    // Loop on all the events
    cout << "Loop on all the events..." << input_trees[0]->getEntries() <<endl;
    for (int j = 0; j < 600000; j++){
        if ((j % 1000) == 0){
            cout << ".";
        }
        // Clear the outputtree entry
        strip_tree.reset();
        // Check consistency
        int npu = -1;
        double signal = -1.;
        // Cycle on all the xtal trees
        for (auto xtaltree : input_trees){
            xtaltree->getEntry(j);
            cout << xtaltree->nPU << endl;
            // Check consistency of the event
            if (npu!=-1 && xtaltree->nPU != npu){
                cout << "ERROR! Inconsistent Npu between xtals in the event!" << endl;
                exit(1);
            }else if (npu==-1){
                npu = xtaltree->nPU;
            }
            if (signal >= 0 && xtaltree->signalTruth != signal ){
                cout << "ERROR! Inconsistent signalTruth between xtals in the event!" << endl;
                exit(1);
            }else if (signal < 0){
                signal = xtaltree->signalTruth;
            }

            strip_tree.E_pu += xtaltree->E_pu;
            strip_tree.signalTruth += xtaltree->signalTruth;
            strip_tree.amplitudeTruth += xtaltree->amplitudeTruth;
            
            for (int k = 0; k <10; k++){
                strip_tree.digis[k] += xtaltree->digis->at(k);
            }
        }
        strip_tree.nPU = input_trees.at(0)->nPU;
        // Save 
        strip_tree.saveEntry();
    }
    strip_tree.saveTree();
    // Close input trees
    input_trees.clear();
    
    cout << endl << "Strip events tree created!" <<endl;

    ROOT::EnableImplicitMT(nthreads);   

    // Function to reconstruct amplitude
    auto bias_calculator = recoA(weights);

    cout << "Dataframe processing starting..." <<endl;
    auto df = RDataFrame(*(strip_tree.tree));
    auto df_reco = df.Define("recoA", bias_calculator , {"digis"})
                     .Define("bias", "recoA / amplitudeTruth");
                    
    
    if (output_type == 1){
        df_reco.Snapshot("bias", outputfile, {"recoA", "bias", "amplitudeTruth", 
                        "signalTruth", "nPU", "E_pu"});
    }
    else if(output_type ==2 ){

        // Map of results over PU and signal
        map<int, map<float, Rptr>> recoA_mean;
        map<int, map<float, Rptr>> recoA_std;
        map<int, map<float, Rptr>> bias_mean;
        map<int, map<float, Rptr>> bias_std;
        map<int, map<float, Rptr>> intimeA_mean;
        map<int, map<float, Rptr>> intimeA_std;
        map<int, map<float, Rptr>> Epu_mean;
        map<int, map<float, Rptr>> Epu_std;

        for (auto pu: PUs){
            map<float, Rptr> recoA_mean_pu;
            map<float, Rptr> recoA_std_pu;
            map<float, Rptr> bias_mean_pu;
            map<float, Rptr> bias_std_pu;
            map<float, Rptr> intimeA_mean_pu;
            map<float, Rptr> intimeA_std_pu;
            map<float, Rptr> Epu_mean_pu;
            map<float, Rptr> Epu_std_pu;

            auto pu_df = df_reco.Filter("nPU=="+to_string(pu));

            for (auto S : Ss){
                auto s_df = pu_df.Filter("signalTruth=="+ to_string(S));
                recoA_mean_pu[S] = s_df.Mean("recoA");
                recoA_std_pu[S]  = s_df.StdDev("recoA");
                bias_mean_pu[S]  = s_df.Mean("bias");
                bias_std_pu[S]   = s_df.StdDev("bias");
                intimeA_mean_pu[S] = s_df.Mean("amplitudeTruth");
                intimeA_std_pu[S]  = s_df.StdDev("amplitudeTruth");
                Epu_mean_pu[S]     = s_df.Mean("E_pu");
                Epu_std_pu[S]      = s_df.StdDev("E_pu");
            }

            recoA_mean[pu] = recoA_mean_pu;
            recoA_std[pu]  = recoA_std_pu;
            bias_mean[pu] = bias_mean_pu;
            bias_std[pu]  = bias_std_pu;
            intimeA_mean[pu] = intimeA_mean_pu;
            intimeA_std[pu]  = intimeA_std_pu;
            Epu_mean[pu] = Epu_mean_pu;
            Epu_std[pu]  = Epu_std_pu;
        }

        cout << "Calculating..." << endl; 

        //Save the file
        ofstream output;
        output.open (outputfile);
        output << "PU,S,A,A_std,E_pu,E_pu_std,recoA,recoA_std,bias,bias_std"<< endl;
        
        for (int pu: PUs){
            for (float s: Ss){
                output <<  pu <<"," << s << "," 
                <<  intimeA_mean[pu][s].GetValue() << "," 
                <<  intimeA_std[pu][s].GetValue()  << "," 
                <<  Epu_mean[pu][s].GetValue()     << ","
                <<  Epu_std[pu][s].GetValue() << "," 
                <<  recoA_mean[pu][s].GetValue() << ","
                <<  recoA_std[pu][s].GetValue() << ","
                <<  bias_mean[pu][s].GetValue() << ","
                <<  bias_std[pu][s].GetValue() << endl;
            }
        }

        output.close();

    }

    std::cout << "Done" << std::endl;

}
