#include <iostream>
#include <fstream>
#include <vector>
#include <map>

#include "ROOT/RDataFrame.hxx"

using namespace std;
using namespace ROOT; 
using namespace ROOT::RDF;
using namespace ROOT::VecOps;

typedef ROOT::RDF::RResultPtr<double> Rptr;

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
        std::cout << "Missing args: outpufile inputfile treename w1 w2 w3 w4 w5 output_type nthreads" <<std::endl;
        exit(1);
    }

    // Output_type = 1 ---> Save Root file with all the events
    // Output_type = 2 ---> Save only statistical infos

    ROOT::EnableImplicitMT(atoi(argv[10]));   
    
    char* outputfile = argv[1];
    char* inputfile = argv[2];
    char* treename = argv[3];
    int output_type = atoi(argv[9]);
    double weights [5] = {atof(argv[4]),atof(argv[5]),
            atof(argv[6]), atof(argv[7]), atof(argv[8])};

    auto bias_calculator = recoA(weights);

      
    auto df = RDataFrame(treename,inputfile);
    auto df_reco = df.Define("recoA", bias_calculator , {"digis"})
                     .Define("bias", "recoA / amplitudeTruth");
                    
    
    if (output_type == 1){
        df_reco.Snapshot("bias", outputfile, {"recoA", "bias", "amplitudeTruth", 
                        "signalTruth", "nPU", "E_pu"});
    }
    else if(output_type ==2 ){

        vector<int> PUs = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 150};
        vector<float> Ss = {2.0, 3.0, 5.0, 7.0, 10.0, 12.0, 14.0, 16.0, 18.0, 20.0};

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
