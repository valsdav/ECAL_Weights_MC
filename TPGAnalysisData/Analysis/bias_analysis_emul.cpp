#include "ROOT/RDataFrame.hxx"
#include "ROOT/RDF/InterfaceUtils.hxx"
#include <TROOT.h>
#include <TGraph.h>
#include <TMultiGraph.h>
#include <TH1F.h>
#include <TH1.h>
#include <TCanvas.h>
#include <TProfile.h>
#include <TLegend.h>
#include <TTree.h>
#include <TFile.h>
#include <TObject.h>
#include <TText.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <utility>

using namespace std;
using namespace ROOT;
using namespace ROOT::RDF;
using namespace ROOT::VecOps;
 

map<string , vector<float>> ETbins {
    { "48b7e", {0.,1.,2.,3.,5.,8.,12.,25.,45.,128.}},
    { "8b4e",  {0.,1.,2.,3.,5.,8.,12.,128.}}
};

// map original BX: position in train
map<int,int> trainsBXs;


vector<pair<int, int>> parseIntervals(string arg, string delimiter=","){
    vector<pair<int,int>> result;
    vector<string> bins; 
    size_t pos = 0;
    string token;
    while ((pos = arg.find(delimiter)) != string::npos) {
        token = arg.substr(0, pos);
        bins.push_back( token);
        arg.erase(0, pos + delimiter.length());
    }
    // Last string
    bins.push_back(arg);

    // now split on "-"
    for (auto b: bins){
        size_t pos = b.find("-");
        int first = std::stoi(b.substr(0, pos));
        int second = std::stoi(b.substr(pos+1));
        result.push_back(std::make_pair(first, second));
    }
    return result;
}


auto getETbin(string train){
    vector<float> bins = ETbins[train];
    return [bins](float ET){
        int bin = 0;
        for (int i= 0; i< bins.size()-1; i++){
            if (ET> bins.at(i) && ET<=bins.at(i+1)){
                bin = i+1;
                break;
            }
        }
        // Check overflow
        if (ET > bins.at(bins.size()-1)){
            bin = bins.size();
        }
        return bin;
    };
}

int getTrainBX(int bx){
    if ( trainsBXs.find(bx) != trainsBXs.end() ){
        return trainsBXs.at(bx);
    }else{
        return -1;
    }
}


pair<TGraph*,TGraph*> produceGraphs(string id, RResultPtr<TProfile> prof, int nbins){
    float means [nbins];
    float stds [nbins];
    float xbins [nbins];

    for(int i =0; i<nbins;i++){
        xbins[i] = i+1;
        means[i] = prof->GetBinContent(i+1);
        // The spread is given as std / (E/Etrue)
        // since we have bias % as ((E/Etrue) -1) we have to invert the formula
        stds[i] = prof->GetBinError(i+1) / (means[i] +1) ;
        //cout << xbins[i] << " " << means[i] << " " << stds[i] << endl;
    }    

    TGraph* gmean = new TGraph(nbins, xbins, means);
    gmean->SetName((id + "_mean").c_str());
    TGraph* gstd = new TGraph(nbins, xbins, stds);
    gstd->SetName((id + "_std").c_str());
    return std::make_pair(gmean, gstd);
}



void analyseBias(RNode rdf, string name, string train, vector<pair<int,int>> eta_rings){
    auto et_bins = ETbins[train]; 
    
             // Filter out too small energy as in simulation
    auto df = rdf.Filter("eRec>0.05")
                // Get the BX in train (-1 if to be ignored)
                .Define("BX0", getTrainBX, {"bxNb"}) 
                .Filter("BX0 !=-1")
                // Define the ET bin on trueA_T, the e-rec
                .Define("ET_bin", getETbin(train), {"eRec"})
                .Define("TP", "emulTP[2]")
                // Calculate bias
                .Define("BIAS", "(TP/eRec) -1");
                
    // Filter events where the TP is not assigned to the center BX or TP==0 for fenix precision
    auto df_nonzero = df.Filter("TP > 0");
    // Get only events that doesn't pass the previous cut
    auto df_zero = df.Filter("TP == 0");

    map< string, RResultPtr<TH1D>> histos;
    // id: (profile: n bins)
    map< string, pair<RResultPtr<TProfile>,int>> profiles; 

    // Cycling on eta rings:
    for (auto const & [eta1,eta2]: eta_rings){
        string etainterval = to_string(eta1)+"_"+to_string(eta2);
        string id = name + "_" + train + "_" + etainterval;

        // Add a Filter for ieta
        auto df_nonzero_etar = df_nonzero.Filter([eta1,eta2](int ieta){return abs(ieta)>=eta1 && abs(ieta)<=eta2;}, {"ieta"});
        auto df_zero_etar    =    df_zero.Filter([eta1,eta2](int ieta){return abs(ieta)>=eta1 && abs(ieta)<=eta2;}, {"ieta"});
               
        auto pf_bias_nonzero = df_nonzero.Profile1D({ ("pf_bias_nonzero_"+id).c_str(), "", et_bins.size()-1, 1., et_bins.size(), "s"},
                        "ET_bin", "BIAS");
                        // Train profile
        auto pf_train = df_nonzero.Profile1D({ ("pf_train_"+id).c_str(), "", 8, 0, 8, "s"},  "BX0", "BIAS");
    
        // Check properties of TP removed by pick finder or zeroes by precision
        auto h_trueA_zero = df_zero.Histo1D({("h_" + id + "_trueA_zero").c_str(), "", 256, 0, 128}, "eRec");
        // ET and TP spectrum
        auto h_trueA_spectrum = df_nonzero.Histo1D({("h_" + id +"_trueA_spectrum").c_str(), "", 256,0,128}, "eRec");
        auto h_recoA_spectrum = df_nonzero.Histo1D({("h_" + id +"_recoA_spectrum").c_str(), "", 256,0,128}, "TP");

        
        
        histos["h_"+id+"_trueA_zero"] =  h_trueA_zero;
        histos["h_"+id+"_trueA_spectrum"] =  h_trueA_spectrum;
        histos["h_"+id+"_recoA_spectrum"] =  h_trueA_spectrum;
        profiles[id+"_bias"] = make_pair(pf_bias_nonzero, et_bins.size()-1) ;
        profiles[id+"_train"] = make_pair(pf_train, 8);      
    }

    // Now all the objects are defined we can calcolate
    vector<pair<TGraph*, TGraph*>> graphs; 
    for (auto const & [id, obj] : profiles){
        graphs.push_back(produceGraphs("gr_" + id, obj.first, obj.second));
    }
    

    for (auto const & grs : graphs ){
        grs.first->Write();
        grs.second->Write();
    }
    for (auto & [id, obj]: histos){
        obj->Write();
    }
    
}


int main(int argc, char** argv){

    if (argc <5){
        std::cout << "Please insert: basedir outputfile train eta_rings" <<std::endl;
        return 1;
    }
    
    string basedir {argv[1]};
    string outputfile {argv[2]};
    string train {argv[3]};
    vector<pair<int,int>> eta_intervals = parseIntervals(argv[4]);
    
    TH1::SetDefaultSumw2();
    
    ROOT::EnableImplicitMT();
    int poolsize = ROOT::GetImplicitMTPoolSize();
    std::cout << "Multi-threading pool: "<< poolsize << std::endl;
    
    RDataFrame df_curr      ("EcalTPGAnalysis", basedir+"/TPG_dump_current.root");
    RDataFrame df_pu0       ("EcalTPGAnalysis", basedir+"/TPG_dump_Oct2017_PU0_perstrip.root");
    RDataFrame df_pu0_newavg("EcalTPGAnalysis", basedir+"/TPG_dump_Oct2017_PU0_newavg.root");
    RDataFrame df_pu50_s2   ("EcalTPGAnalysis", basedir+"/TPG_dump_2017_PU50_S2.root");
    RDataFrame df_pu50_s30  ("EcalTPGAnalysis", basedir+"/TPG_dump_2017_PU50_S30.root");
    
    TFile output (outputfile.c_str(), "recreate");

    // Fill 6370, run 306425 , year 2017
    // Keeping only trains after two consecutive 8b4e trains as in the simulation
    vector<pair<int,int>> trainsBXs_groups { 
        {70,77},{82,89},{145,152},{157,164},
        {196,203},{208,215},{247,254},{259,266},{298,305},{310,317},
        {373,380},{385,392},{400,407},{412,419},{424,431},{436,443},
        {475,482},{487,494},{526,533},{538,545},{601,608},{613,620},{652,659},{664,671},
        {703,710},{715,722},{754,761},{766,773},
        {850,857},{862,869},{901,907},{913,920},{952,959},{964,971},
        {1027,1034},{1039,1046},{1078,1085},{1090,1097},{1129,1136},{1141,1148},
        {1180,1187},{1192,1199},{1255,1262},{1267,1274},{1306,1313},{1318,1325},
        {1357,1364},{1369,1376},{1408,1415},{1420,1427},{1483,1490},{1495,1502},
        {1534,1541},{1546,1553},{1585,1592},{1597,1604},{1636,1643},{1648,1655},
        {1744,1751},{1756,1763},{1795,1802},{1807,1814},{1846,1853},{1858,1865},
        {1921,1928},{1933,1940},{1972,1979},{1984,1991},{2023,2030},{2035,2042},
        {2074,2081},{2086,2093},{2149,2156},{2161,2168},{2200,2207},{2212,2219},
        {2251,2258},{2263,2270},{2302,2309},{2314,2321},{2377,2384},{2389,2396},
        {2428,2435},{2440,2447},{2479,2486},{2491,2498},
        {2507,2513},{2518,2525},{2530,2537},{2542,2549},{2638,2645},{2650,2657},
        {2689,2696},{2701,2708},{2740,2747},{2752,2759},{2815,2822},{2827,2834},
        {2866,2873},{2878,2885},{2917,2924},{2929,2936},{2968,2975},{2980,2987},
        {3043,3050},{3055,3062},{3094,3101},{3106,3113},{3145,3152},{3157,3164},
        {3196,3203},{3208,3215},{3271,3278},{3283,3290},{3322,3329},{3334,3341},
        {3373,3380},{3385,3392},{3424,3431},{3436,3443}
    };

    trainsBXs.clear();

    for (auto & p: trainsBXs_groups){
        int ibx = 0;
        for (int bx = p.first ; bx <= p.second; bx++){
            trainsBXs.emplace(bx,ibx);
            ibx++;
        }
    }
    
    analyseBias(df_curr,       "curr",       train, eta_intervals);
    analyseBias(df_pu0,        "pu0",        train, eta_intervals);
    analyseBias(df_pu0_newavg, "pu0_newavg", train, eta_intervals);
    analyseBias(df_pu50_s2,    "pu50_s2",    train, eta_intervals);
    analyseBias(df_pu50_s30,   "pu50_s30",   train, eta_intervals);
    
   
    output.Close();
    cout << "Done!" << endl;
   
}   