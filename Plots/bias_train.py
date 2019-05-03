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


code = '''
#include <cmath>
double roundET(const double rA){
    return round(rA*2)/2. ;
}
'''

r.gInterpreter.Declare(code)
r.gStyle.SetOptStat(0)

#train = "8-4"
#train_name = "8b4e"
train = "48-7"
train_name = "48b7e"
ntrains = 1

full = int(train.split("-")[0])
empty = int(train.split("-")[1])
train = ("1"*full + "0"*empty)*ntrains + "1"*full 

bxs = []
for bx,i in enumerate(train):
    if i=="1" and bx > 55:
        bxs.append(bx)


df = RDF("bias",  "/eos/project/e/ecaltrg/Valsecchi/generation7_48b7e/bias_pu_opt_rings/bias_rings_26_28_PU50_S2.root") \
    .Define("Bias", "(bias-1)*100") \
    .Define("recoA_T_round", "roundET(recoA_T)") \
    .Define("Bias_round", "((recoA_T_round/trueA_T) -1)*100")

from math import erf
def getIntervals(h):
    bins = 4
    intervals = array("d",[0.025, 1-erf(1), erf(1), 0.975])
    qq = array("d", [0.]*4)
    h.GetQuantiles(bins, qq, intervals)
    return (h.GetMean(), qq[0], qq[-1], qq[1], qq[2])

qqs = {}
for ibx in bxs:
    qq = getIntervals(hs[ibx])
    qqs[ibx] = qq

c = R.TCanvas("c2", "c", 800, 600)
mg = R.TMultiGraph()

g0 = R.TGraph()
g1 = R.TGraphAsymmErrors()
g2 = R.TGraphAsymmErrors()

for i, (ibx, qs) in enumerate(qqs.items()):
    #print(qs)
    g0.SetPoint(i, ibx, qs[0])
    g1.SetPoint(i, ibx, qs[0])
    g2.SetPoint(i, ibx, qs[0])
    g1.SetPointError(i, 0., 0., qs[0]-qs[3], qs[4]-qs[0])
    g2.SetPointError(i, 0., 0., qs[0]-qs[1], qs[2]-qs[0])

    
g1.SetFillColor(R.kGreen)
#g1.SetFillStyle(3005)
g2.SetFillColor(R.kYellow)
#g2.SetFillStyle(3004)


leg = R.TLegend(0.7, 0.7, 0.88,0.86)
leg.AddEntry(g1, "68% interval")
leg.AddEntry(g2, "95% interval")

mg.Add(g2)
mg.Add(g1)
mg.Add(g0, "AL*")

wS = 2
wPU = 50
S = 2
PU = 50

mg.SetTitle("48b7e schema bias - rings 26-28  - ET = {} GeV, PU {} - PU opt weights;BX of the signal in train;bias %".format(wS, PU, wS, wPU))
mg.GetXaxis().SetTitleOffset(1.3)
mg.GetYaxis().SetRangeUser(-80., +80.)
mg.GetXaxis().SetRangeUser(-1, len(train))

mg.Draw("A3")

R.gPad.Update()

lines = []
if train_name == "8b4e":
    bxsla = [0,7, 12, 19, 24, 31, 36, 43]
elif train_name == "48b7e":
    bxsla = [47, 55]
for bxl in bxsla:
    l1 = R.TLine(bxl, c.GetUymin(), bxl, c.GetUymax())
    l1.SetLineColor(R.kRed)
    l1.SetLineStyle(9)
    l1.Draw("same")
    lines.append(l1)

l3 = R.TLine( c.GetUxmin(), 0, c.GetUxmax(), 0)
l3.SetLineStyle(9)
l3.Draw("same")

leg.Draw("same")

c.Draw()
