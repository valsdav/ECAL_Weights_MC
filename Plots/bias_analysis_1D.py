import argparse
import os 
import json
from pprint import pprint
from collections import defaultdict
import sys
sys.argv.append( '-b' ) # batch mode for root
import ROOT as r
r.ROOT.EnableImplicitMT()
RDF = r.ROOT.RDataFrame

'''
This script is used to creare 1D histograms of bias 
distribution for differen samples. The configuration
has to be provided in a file. See plot_config.json as a template. 

'''

parser = argparse.ArgumentParser()
parser.add_argument("--cfg", type=str, help="Config file", required=True)
parser.add_argument('-b', '--batchroot', action="store_true" )
args = parser.parse_args()

conf = json.load(open(args.cfg))
pprint(conf)


code = '''
bool emulatePickFinder(double recoA, double recoA_m1, double recoA_p1){
    // In the frontend there are not negative amplitudes
    if (recoA < 0) recoA = 0;
    if (recoA_m1 < 0 ) recoA_m1 = 0;
    if (recoA_p1 < 0 ) recoA_p1 = 0;

    if ((recoA > recoA_m1) && (recoA > recoA_p1)){
        return true;
    }else{
        return false;
    }
}
'''

r.gInterpreter.Declare(code)
r.gStyle.SetOptStat(0)

colors = {
    "curr": r.kOrange+1,
    "pu0": r.kRed+1,
    "pu0_newavg": r.kCyan +1,
    "pu50s2": r.kGreen+1,
    "pu50s30": r.kBlue +1,
    "pu50s2_notenc": r.kOrange+1,
}

def do_histos(args):
    if not os.path.exists(args["outputdir"]):
        os.makedirs(args["outputdir"] )
    
    rdfs = {}

    output_rootfile = r.TFile(args["output_rootfile"], "recreate")
  
    ets = []
    for e in args["ets"]:
        ets.append(list(map(float, e.split("-"))))
    print("ET true intervals: ", ets)


    for label, file in args["samples"].items():
        rdfs[label] = RDF("bias", file)  \
           

    labels = list(args["samples"].keys())
    histos_et = defaultdict(list)
    

    for label, df in rdfs.items():
        print("Working on sample: ", label)
        df2 = df.Filter("nPU == {}".format(args["PU"])).Filter("trueA_T>0.05")\
            .Filter("emulatePickFinder(recoA_T,recoA_T_m1,recoA_T_p1)") \
            .Filter("recoA_T_round > 0.")
        for (etmin, etmax), et in zip(ets, args["ets"]):
            h = df2.Filter("trueA_T>{:.1f} && trueA_T<={:.1f}".format(etmin, etmax))  \
                    .Histo1D(("{}_{:.1f}_{:.1f}".format(label, etmin, etmax), "", 600, -2, 2), "bias_round")
            histos_et[et].append(h)

    for hs in histos_et.values():
        for h in hs:
            h.Draw()
    
    for hs in histos_et.values():
        for h in hs:
            h.Write()
    
    output_rootfile.Close()


#### Call the function for different configurations
for plot_args in conf:
    do_histos(plot_args)
