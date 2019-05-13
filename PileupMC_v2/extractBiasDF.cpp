#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
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

auto recoA(double* weights, int offset = 0){
    /*
    The offset parameters controls the BX windows 
    on which the amplitude is extracted
    */
    return [=](RVec<double> digis){
        double  A_ = 0.;
        for(int j = 0; j< 5; j++){
            A_ += weights[j] * digis.at(2 + j + offset);
        }
        return A_;
    };
}

double emulateFIRprecision(double rA){
    // Frontend has 0.5 GeV precision and overflows at 128 GeV. 
    // The minimum value is 0. 
    // First of all round to 0.5 precision
    double rA_round = round(rA*2)/2;
    // Check overflow
    if (rA_round > 128.)  rA_round = 128.;
    if (rA_round < 0.5)  rA_round = 0.;
    return rA_round;   
}

int main(int argc, char** argv){

    if (argc < 11){
        std::cout << "Missing args:  outpufile inputfile mode nthreads eta_strip w1 w2 w3 w4 w5 bxwindow" <<std::endl;
        exit(1);
    }

    // mode = 1 ---> Save Root file with all the events
    // mode = 2 ---> Save only statistical infos
    
    string outputfile = argv[1];
    string inputfile = argv[2];
    int mode = atoi(argv[3]);
    int nthreads = atoi(argv[4]);
    double eta_strip = atof(argv[5]);
    double weights [5] = {atof(argv[6]),atof(argv[7]),
            atof(argv[8]), atof(argv[9]), atof(argv[10])};

    // Get PUs and Signals from strings with comma delimiters
    //vector<int> PUs = parseArg<int>(argv[3]);
    //vector<float> Ss = parseArg<float>(argv[4]);
    
    // Control if the amplitude is reconstructed also in BX -1 and +1
    bool bxwindow = bool(argv[11]);

    //Enabling multithread
    ROOT::EnableImplicitMT(nthreads);
    int poolsize = ROOT::GetImplicitMTPoolSize();
    std::cout << "Multi-threading pool: "<< poolsize << std::endl;

    auto dftotal = RDataFrame("samples", inputfile);


    cout << "Dataframe processing starting..." <<endl;
    auto df_reco = 
            dftotal.Define("recoA", recoA(weights) , {"digis"})
                .Define("recoA_T",
                        [&eta_strip](double recoA){return recoA/cosh(eta_strip);},{"recoA"})    
                .Define("recoA_T_round", emulateFIRprecision ,{"recoA_T"})
                .Define("bias", [](double trueA_T, double recoA_T)
                        {return ((recoA_T / trueA_T) -1)*100;}, {"trueA_T", "recoA_T"})
                // bias rounded
                .Define("bias_round", [](double trueA_T, double recoA_T_round)
                        {return ((recoA_T_round/trueA_T) -1)*100;}, {"trueA_T", "recoA_T_round"});

    if (bxwindow){
        df_reco = df_reco.Define("recoA_m1", recoA(weights, -1), {"digis"})
                         .Define("recoA_p1", recoA(weights, +1), {"digis"});
    }
        
    
    if (mode == 1){
        if (bxwindow){
            df_reco.Snapshot("bias", outputfile, 
                        {"BX0", "nPU", "recoA", "recoA_T", "trueA", "trueA_T", 
                        "bias", "bias_round", "recoA_m1", "recoA_p1"});
        }else{
            df_reco.Snapshot("bias", outputfile, 
                        {"BX0", "nPU", "recoA", "recoA_T", "trueA", "trueA_T", 
                        "bias", "bias_round"});
        }
        
    }
    else if(mode ==2 ){

        // TO BE MODIFIED
        // Add binning on trueA


        // // Map of results over PU and signal
        // map<int, map<float, Rptr>> recoA_mean;
        // map<int, map<float, Rptr>> recoA_std;
        // map<int, map<float, Rptr>> bias_mean;
        // map<int, map<float, Rptr>> bias_std;
        // map<int, map<float, Rptr>> trueA_mean;
        // map<int, map<float, Rptr>> trueA_std;

        // for (auto pu: PUs){
        //     map<float, Rptr> recoA_mean_pu;
        //     map<float, Rptr> recoA_std_pu;
        //     map<float, Rptr> bias_mean_pu;
        //     map<float, Rptr> bias_std_pu;
        //     map<float, Rptr> trueA_mean_pu;
        //     map<float, Rptr> trueA_std_pu;

        //     auto pu_df = df_reco.Filter("nPU=="+to_string(pu));

        //     for (auto S : Ss){
        //         auto s_df = pu_df.Filter("signalTruth=="+ to_string(S));
        //         recoA_mean_pu[S] = s_df.Mean("recoA");
        //         recoA_std_pu[S]  = s_df.StdDev("recoA");
        //         bias_mean_pu[S]  = s_df.Mean("bias");
        //         bias_std_pu[S]   = s_df.StdDev("bias");
        //         trueA_mean_pu[S] = s_df.Mean("amplitudeTruth");
        //         trueA_std_pu[S]  = s_df.StdDev("amplitudeTruth");
        //     }

        //     recoA_mean[pu] = recoA_mean_pu;
        //     recoA_std[pu]  = recoA_std_pu;
        //     bias_mean[pu] = bias_mean_pu;
        //     bias_std[pu]  = bias_std_pu;
        //     trueA_mean[pu] = trueA_mean_pu;
        //     trueA_std[pu]  = trueA_std_pu;
        // }

        // cout << "Calculating..." << endl; 

        // //Save the file
        // ofstream output;
        // output.open (outputfile);
        // output << "PU,S,A,A_std,recoA,recoA_std,bias,bias_std"<< endl;
        
        // for (int pu: PUs){
        //     for (float s: Ss){
        //         output <<  pu <<"," << s << "," 
        //         <<  trueA_mean[pu][s].GetValue() << "," 
        //         <<  trueA_std[pu][s].GetValue()  << "," 
        //         <<  recoA_mean[pu][s].GetValue() << ","
        //         <<  recoA_std[pu][s].GetValue() << ","
        //         <<  bias_mean[pu][s].GetValue() << ","
        //         <<  bias_std[pu][s].GetValue() << endl;
        //     }
        // }

        // output.close();

    }

    std::cout << "Done" << std::endl;

}
