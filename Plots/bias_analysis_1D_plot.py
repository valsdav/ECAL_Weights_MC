import argparse
import os 
import json
from pprint import pprint
from collections import defaultdict
import sys
sys.argv.append( '-b' ) # batch mode for root
import ROOT as r

'''
This script is used to creare 1D histograms of bias 
distribution for differen samples. The configuration
has to be provided in a file. See plot_config.json as a template. 

'''

parser = argparse.ArgumentParser()
parser.add_argument("--inputdir", type=str, help="Inputdir", required=True)
parser.add_argument("--outputdir", type=str, help="outputdir", required=True)
parser.add_argument("--samples", type=str, nargs="+", help="samples", required=True)
parser.add_argument("--ets", type=str, nargs="+", help="ets", required=True)
parser.add_argument('-b', '--batchroot', action="store_true" )
args = parser.parse_args()



import tdrstyle
import CMS_lumi
# tdr style
tdrstyle.setTDRStyle()
#CMS_lumi.lumiText = "Train: {}, eta ring interval: {}".format(train, ring.replace("_","-"))
CMS_lumi.lumiText = "(13 TeV)"
CMS_lumi.extraText = "Simulation Supplementary"


colors = {
    "curr": r.kOrange+1,
    "pu0": r.kRed+1,
    "pu0_newavg": r.kCyan +1,
    "pu50s2": r.kGreen+1,
    "pu50s30": r.kBlue +1,
    "pu50s2_notenc": r.kOrange+1,
}



#inputfile = r.TFile(args["output_rootfile"], "read")

ets = []
for e in args.ets:
    ets.append(list(map(float, e.split("-"))))
print("ET true intervals: ", ets)

files = []
trees = defaultdict(dict)


for s in args.samples:
    for e in ets:
        es = "-".join(map(str,e))
        f = r.TFile(args.inputdir+"/output_{}_{:.6f}_{:.6f}.root".format(s, *e))
        files.append(f)
        trees[s][es] = f.Get("bias")

bins = {
    "0.0-2.0": [200, -1, 4],
    "2.5-3.5": [200, -0.7, 0.7],
    "25.0-35.0": [200, -0.2, 0.4]
}

def fixlastbin(h):
    nbin = h.GetNbinsX()
    over = h.GetBinContent(nbin+1)
    h.SetBinContent(nbin, h.GetBinContent(nbin) + over)

for etmin, etmax in ets:
    et = "{}-{}".format(etmin, etmax)
    histos = []
    c = r.TCanvas("c_{}_{}".format(etmin, etmax), "", 800, 600)
    leg = r.TLegend(0.67, 0.54, 0.95, 0.92)

    for label in args.samples:
        
        h = r.TH1F("h_"+label+"_"+et, "",*bins[et])
        trees[label][et].Draw("BIAS>>"+"h_"+label+"_"+et,
                     "trueA_sf")
        fixlastbin(h)
        print(label, et, h.GetMean(), h.GetRMS())
        histos.append(h)
        h.SetLineWidth(2)
        h.SetLineColor(colors[label])
        h.GetXaxis().SetTitle("Fractional bias")
        h.GetYaxis().SetTitle("shape")
        h.Scale(1/h.Integral())

        if label == "curr":
            leg.AddEntry(h, "Current", "lp")
        elif label== "pu0":
            leg.AddEntry(h, "Per strip (PU=0)", "lp")
        elif label=="pu0_newavg":
            leg.AddEntry(h, "New (avg)", "lp")
        elif label=="pu50s2":
            leg.AddEntry(h, "PU optimized", "lp")
            t1 = leg.AddEntry(None, "PU=50, ET=2GeV","")
            t1.SetTextSize(0.026)
        elif label=="pu50s30":
            leg.AddEntry(h, "PU optimized", "lp")
            t2 = leg.AddEntry(None, "PU=50, ET=30GeV","")
            t2.SetTextSize(0.026)    
    
    histos[0].Draw("hist")

    xrange = [ histos[0].GetMean()- histos[0].GetRMS()*4,
            histos[0].GetMean()+ histos[0].GetRMS()*4]

    maxh = histos[0].GetMaximum()
    for i in range(1, len(histos)):
        histos[i].Draw("hist same")
        histos[i].Scale(1/histos[i].Integral())
        m = histos[i].GetMaximum()
        if m> maxh: maxh = m
    
        xrangei = [ histos[i].GetMean()- histos[i].GetRMS()*3,
            histos[i].GetMean()+ histos[i].GetRMS()*3]
        xrange[0] = min(xrange[0], xrangei[0])
        xrange[1] = max(xrange[1], xrangei[1])

    
    leg.Draw("same")

    if xrange[0] > -0.3 : xrange[0] = -0.3
    if xrange[1] < 0.3 : xrange[1] = 0.3
    #xrange =  [-0.2, 0.3]
    histos[0].GetYaxis().SetRangeUser(0., 1.5*maxh)    
    histos[0].GetXaxis().SetRangeUser(xrange[0]*1.2, xrange[1]*1.2)
    label = r.TPaveText(0.17, 0.7, 0.47, 0.90, "NB NDC" )
    ll = []
    ll.append(label.AddText("PU=50"))
    ll.append(label.AddText("{:.1f}<|#eta|<{:.1f}".format(etmin, etmax))) 
    ll.append(label.AddText("LHC filling "))
    ll.append(label.AddText("schema: 48b7e"))
    ll.append(label.AddText("{:.1f} < Et < {:.1f} GeV".format(etmin, etmax)))
    for l in ll:
        l.SetLineColor(r.kBlack)
    label.SetFillColor(r.kWhite)
    label.Draw("same")

    c.Update()
    ##c.SetLogy()
    CMS_lumi.CMS_lumi(c, 0,0)
    c.Draw()
    c.SaveAs("{}/bias_ET{}.png".format(args.outputdir, et))
    c.SaveAs("{}/bias_ET{}.C".format(args.outputdir, et))

