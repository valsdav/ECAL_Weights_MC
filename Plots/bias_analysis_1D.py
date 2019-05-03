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
#include <cmath>
double roundET(const double rA){
    return round(rA*2)/2. ;
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
            .Define("Bias", "(bias-1)*100") \
            .Define("recoA_T_round", "roundET(recoA_T)") \
            .Define("Bias_round", "((recoA_T_round/trueA_T) -1)*100")

    labels = list(args["samples"].keys())
    histos_et = defaultdict(list)
        
    for label, df in rdfs.items():
        for (etmin, etmax), et in zip(ets, args["ets"]):
            h = df.Filter("nPU== {} && trueA_T>{:.1f} && trueA_T<={:.1f}".format(args["PU"], etmin, etmax)) \
                .Histo1D(("{}_{:.1f}_{:.1f}".format(label, etmin, etmax), "", 500, -200, 200), "Bias")
            histos_et[et].append(h)

    print(histos_et)

    for et, histos in histos_et.items():

        c = r.TCanvas("c_{}".format(et), "", 800, 600)
        leg = r.TLegend(0.75, 0.65, 0.87, 0.85)
        leg.AddEntry(histos[0].GetValue(), labels[0], "l")

        histos[0].Write()
        histos[0].SetLineWidth(2)
        histos[0].SetLineColor(colors[labels[0]])
        histos[0].SetTitle("Bias % for ET={} {};Bias %".format(et, args["title"]))
        histos[0].Scale(1/histos[0].Integral())
        histos[0].Draw("hist")

        xrange = [ histos[0].GetMean()- histos[0].GetRMS()*3,
                histos[0].GetMean()+ histos[0].GetRMS()*3]

        maxh = histos[0].GetMaximum()
        for i in range(1, len(histos)):
            histos[i].Write()
            histos[i].Draw("hist same")
            histos[i].SetLineWidth(2)
            histos[i].SetLineColor(colors[labels[i]])
            histos[i].Scale(1/histos[i].Integral())
            m = histos[i].GetMaximum()
            if m> maxh: maxh = m
            leg.AddEntry(histos[i].GetValue(), labels[i], "l")

            xrangei = [ histos[i].GetMean()- histos[i].GetRMS()*3,
                histos[i].GetMean()+ histos[i].GetRMS()*3]
            xrange[0] = min(xrange[0], xrangei[0])
            xrange[1] = max(xrange[1], xrangei[1])

        
        leg.Draw("same")

        histos[0].GetYaxis().SetRangeUser(0., 1.3*maxh)    
        histos[0].GetXaxis().SetRangeUser(xrange[0]*1.2, xrange[1]*1.2)

        c.SaveAs("{}/bias_ET{}.png".format(args["outputdir"], et))
        c.Write()
    
    output_rootfile.Close()


#### Call the function for different configurations
for plot_args in conf:
    do_histos(plot_args)
