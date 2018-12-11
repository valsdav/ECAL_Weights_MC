#include "root/ROOT/RDataFrame.hxx"

using namespace ROOT; 
using namespace ROOT::VecOps;

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

    if (argc < 9){
        std::cout << "Missing args: inputfile tree| w1 w2 w3 w4 w5 | outpufile" <<std::endl;
        exit(1);
    }

    ROOT::EnableImplicitMT();     
    
    char* inputfile = argv[1];
    char* treename = argv[2];
    char* outputfile = argv[8];
    double weights [5] = {atof(argv[3]),atof(argv[4]),
            atof(argv[5]), atof(argv[6]), atof(argv[7])};

    auto bias_calculator = recoA(weights);

      
    auto df = RDataFrame(treename,inputfile);
    df.Define("recoA", bias_calculator , {"digis"})
      .Define("bias", "(recoA / amplitudeTruth) -1")
        
      .Snapshot("bias", outputfile, {"recoA", "bias", "amplitudeTruth", "signalTruth",
                        "nPU", "E_pu"});

    std::cout << "Done" << std::endl;

}
