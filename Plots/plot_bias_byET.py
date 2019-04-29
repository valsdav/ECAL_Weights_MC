import argparse
import sys
sys.argv.append( '-b' ) # batch mode for root
import ROOT as r 
import os

parser = argparse.ArgumentParser()
parser.add_argument("-i", "--inputfile", type=str, help="Input file", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="Output dir", required=True)
parser.add_argument("-t", "--train", type=str, help="Output dir", required=True)
parser.add_argument("-r", "--rings", type=str, help="Etarings region", required=True)
parser.add_argument('-b', '--batch', action="store_true" ) 
args = parser.parse_args()

train = args.train
ring = args.rings

if not os.path.exists(args.outputdir):
    os.makedirs(args.outputdir)

ETbins = {
     "48b7e": [0.,1.,2.,3.,5.,8.,12.,25.,45.,1000.],
     "8b4e": [0.,1.,2.,3.,5.,8.,12.,1000.]
}
et_bins = ETbins[train]

bias_label= ["gr_bias", "gr_bias_bxsf", "gr_bias_round", "gr_bias_round_bxsf"]


file = r.TFile(args.inputfile)

for b in bias_label:

    c1 = r.TCanvas("c1", "c1", 1200, 700)
    mg = r.TMultiGraph()

    gr1 = file.Get("curr_" + train+"_" + b+"_mean")
    gr2 = file.Get("pu0_" + train+"_" + b+"_mean")
    gr3 = file.Get("pu50s2_" + train+"_" + b+"_mean")
    gr4 = file.Get("pu50s30_" + train+"_" + b+"_mean")

    gr1.SetMarkerStyle(20)
    gr1.SetMarkerSize(0.6)
    gr1.SetMarkerColor(r.kOrange+1)
    gr1.SetLineColor(r.kOrange+1)
    gr2.SetMarkerStyle(20)
    gr2.SetMarkerSize(0.6)
    gr2.SetMarkerColor(r.kRed+1)
    gr2.SetLineColor(r.kRed+1)
    gr3.SetMarkerStyle(20)
    gr3.SetMarkerSize(0.6)
    gr3.SetMarkerColor(r.kGreen+1)
    gr3.SetLineColor(r.kGreen+1)
    gr4.SetMarkerStyle(20)
    gr4.SetMarkerSize(0.6)
    gr4.SetMarkerColor(r.kBlue+1)
    gr4.SetLineColor(r.kBlue+1)

    mg.Add(gr1)
    mg.Add(gr2)
    mg.Add(gr3)
    mg.Add(gr4)

    mg.Draw("APL")

    mg.SetTitle("Bias by ET, eta rings {}, {} train, PU=50;ET true (GeV);Bias %".format(ring, train))


    leg = r.TLegend(0.75, 0.65, 0.87, 0.85)
    leg.AddEntry(gr1, "Current", "lp")
    leg.AddEntry(gr2, "PU=0", "lp")
    leg.AddEntry(gr3, "PU50 S2", "lp")
    leg.AddEntry(gr4, "PU50 S30", "lp")
    leg.Draw("same")
    

    for j in range(len(et_bins)-2):
        mg.GetXaxis().ChangeLabel(j+1,-1,-1,-1,-1,-1, "{:.0f}<E<={:.0f}".format(et_bins[j],et_bins[j+1]))
    
    mg.GetXaxis().ChangeLabel(len(et_bins)-1,-1,-1,-1,-1,-1, "E>{:.0f}".format(et_bins[-2]))
    mg.GetXaxis().SetTitleOffset(1.3)

    label = r.TText()
    label.SetNDC()
    label.SetTextFont(42)
    label.SetTextColor(13)
    label.SetTextSize(0.04)
    label.SetTextAlign(22)
    label.DrawText(0.49, 0.83, "PU 50")

    c1.SetGridy()
    c1.Update()

    c1.SetTicks()
    #c1.Draw()
    c1.SaveAs(args.outputdir +"/" + b + "_"+ train +"_"+ring+ ".png")