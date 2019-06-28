import pandas as pd
import sys
sys.argv.append( '-b' ) # batch mode for root
import ROOT as R
from array import array
from collections import defaultdict
import argparse
import tdrstyle
import CMS_lumi

parser = argparse.ArgumentParser()
parser.add_argument("-i", "--inputfile", type=str, help="Input file", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="Output file", required=True)
parser.add_argument('-b', '--batchroot', action="store_true" ) 
args = parser.parse_args()
#R.gStyle.SetPalette(R.kBird)

R.gStyle.SetOptStat(0)

weights = pd.read_csv(args.inputfile, sep=",")
eta_rings = {28: weights}

R.gStyle.SetPalette(R.kLightTemperature)

# tdr style
tdrstyle.setTDRStyle()
CMS_lumi.lumiText = "eta ring interval: {}".format(28)


eta_ring = 28
S = 8
label = 10

deltaw = 1/64
c = R.TCanvas("c")
mg = R.TMultiGraph()
gs = {}
l = R.TLegend(0.15,0.6, 0.4,0.9)
l.SetNColumns(1)

df = eta_rings[eta_ring]
pu0_w = {}

iS = 0
for pu, dfp in df.groupby("PU"):
    gs[pu] = R.TGraph()
    j = 0

    row = dfp[dfp.Smin == S]
    for w in range(1,6):
        wi = "w{}".format(w)
        if pu==0:
            pu0_w[wi] = row[wi].values[0]
        gs[pu].SetPoint(j, float(w) ,(row[wi].values[0]-pu0_w[wi]) / deltaw)
        j+=1


    mg.Add(gs[pu])
    gs[pu].SetLineWidth(2)
    gs[pu].SetMarkerStyle(6)
    gs[pu].SetMarkerSize(8)
    #gs[pu].SetLineColor(colors[iS])
    #gs[pu].SetMarkerColor(colors[iS])
    l.AddEntry(gs[pu], "PU={}".format(pu), "l")
    iS +=1 

for j in range(5):
    mg.GetXaxis().ChangeLabel(j+1,-1,-1,-1,-1,-1, "{}".format(j+1) )

mg.Draw("APL PLC PMC")


l.SetNColumns(2)
l.Draw("same")

t = R.TLatex(0.4,0.25, "#splitline{Signal Amplitude: " +str(label) + " GeV ET}{eta ring: "+ str(eta_ring)+ "}")
t.SetNDC()
t.Draw("SAME")
#t.SetTextFont(43)
#t.SetTextSize(40)
#mg.GetXaxis().SetTitleOffset(1.1)
mg.SetTitle("Weights variation for different PU;Weights; #DeltaW;")

c.Update()

c.SaveAs(args.outputdir +"/weight_changes.png")
c.SaveAs(args.outputdir +"/weight_changes.C")

