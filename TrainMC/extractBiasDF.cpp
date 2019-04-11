#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>

#include "TROOT.h"
#include "ROOT/RDataFrame.hxx"
#include "TFile.h"
#include "TTree.h"

using namespace std;
using namespace ROOT; 
using namespace ROOT::RDF;
using namespace ROOT::VecOps;

typedef ROOT::RDF::RResultPtr<double> Rptr;

/*
*  This script is used to extract the reconstructed amplitude and bias
*  for a strip using a set of weights. 
*  The bias is extracted for each combination of signal and PU separately.
*  The output is a CSV file with all the data.
*/

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
        std::cout << "Missing args:  outpufile inputfile PUs_string Signals_string mode nthreads w1 w2 w3 w4 w5" <<std::endl;
        exit(1);
    }

    // mode = 1 ---> Save Root file with all the events
    // mode = 2 ---> Save only statistical infos
    
    string outputfile = argv[1];
    string inputfile = argv[2];
    int mode = atoi(argv[5]);
    int nthreads = atoi(argv[6]);
    double weights [5] = {atof(argv[7]),atof(argv[8]),
            atof(argv[9]), atof(argv[10]), atof(argv[11])};

    // Get PUs and Signals from strings with comma delimiters
    vector<int> PUs ;
    vector<float> Ss;
    string PU_string = argv[3];
    string S_string = argv[4];
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


    //Enabling multithread
    ROOT::EnableImplicitMT(nthreads);
    int poolsize = ROOT::GetImplicitMTPoolSize();
    std::cout << "Multi-threading pool: "<< poolsize << std::endl;

    auto dftotal = RDataFrame("samples", inputfile);

    // Function to reconstruct amplitude
    auto bias_calculator = recoA(weights);

    cout << "Dataframe processing starting..." <<endl;
    auto df_reco = dftotal.Define("recoA", bias_calculator , {"digis"})
                     .Define("bias", "recoA / amplitudeTruth");
        
    if (mode == 1){
        df_reco.Snapshot("bias", outputfile, 
                        {"BX0", "ET", "nPU", "recoA", "bias", "amplitudeTruth"});
    }
    else if(mode ==2 ){

        // Map of results over PU and signal
        map<int, map<float, Rptr>> recoA_mean;
        map<int, map<float, Rptr>> recoA_std;
        map<int, map<float, Rptr>> bias_mean;
        map<int, map<float, Rptr>> bias_std;
        map<int, map<float, Rptr>> intimeA_mean;
        map<int, map<float, Rptr>> intimeA_std;

        for (auto pu: PUs){
            map<float, Rptr> recoA_mean_pu;
            map<float, Rptr> recoA_std_pu;
            map<float, Rptr> bias_mean_pu;
            map<float, Rptr> bias_std_pu;
            map<float, Rptr> intimeA_mean_pu;
            map<float, Rptr> intimeA_std_pu;

            auto pu_df = df_reco.Filter("nPU=="+to_string(pu));

            for (auto S : Ss){
                auto s_df = pu_df.Filter("signalTruth=="+ to_string(S));
                recoA_mean_pu[S] = s_df.Mean("recoA");
                recoA_std_pu[S]  = s_df.StdDev("recoA");
                bias_mean_pu[S]  = s_df.Mean("bias");
                bias_std_pu[S]   = s_df.StdDev("bias");
                intimeA_mean_pu[S] = s_df.Mean("amplitudeTruth");
                intimeA_std_pu[S]  = s_df.StdDev("amplitudeTruth");
            }

            recoA_mean[pu] = recoA_mean_pu;
            recoA_std[pu]  = recoA_std_pu;
            bias_mean[pu] = bias_mean_pu;
            bias_std[pu]  = bias_std_pu;
            intimeA_mean[pu] = intimeA_mean_pu;
            intimeA_std[pu]  = intimeA_std_pu;
        }

        cout << "Calculating..." << endl; 

        //Save the file
        ofstream output;
        output.open (outputfile);
        output << "PU,S,A,A_std,recoA,recoA_std,bias,bias_std"<< endl;
        
        for (int pu: PUs){
            for (float s: Ss){
                output <<  pu <<"," << s << "," 
                <<  intimeA_mean[pu][s].GetValue() << "," 
                <<  intimeA_std[pu][s].GetValue()  << "," 
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
