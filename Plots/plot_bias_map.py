import sys 
sys.argv.append( '-b' ) # batch mode for root
import os
import ROOT as R
import argparse
from array import array
from itertools import product
'''

'''

parser = argparse.ArgumentParser()
parser.add_argument("-i", "--inputfile", type=str, help="Input file", required=True)
parser.add_argument("-o", "--outputfile", type=str, help="Output file", required=True)
parser.add_argument("-s", "--s-bins", nargs="+", type=float, help="ET bins", required=True)
parser.add_argument("-p", "--npu-bins", nargs="+", type=int, help="nPU bins", required=True)
parser.add_argument("-t", "--title", type=str, help="Title", required="True")
parser.add_argument('-b', '--batchroot', action="store_true" ) 
args = parser.parse_args()

sbins = args.s_bins
pubins = args.npu_bins

R.gStyle.SetPalette(R.kLightTemperature)
R.gStyle.SetOptStat(0)
c = R.TCanvas("c1", "c1", 1200, 1000)

h_mean = R.TH2F("bias_mean", args.title, len(sbins)-1, 0, len(sbins)-1, len(pubins), 0, len(pubins))
h_std = R.TH2F("bias_std", args.title, len(sbins)-1, 0, len(sbins)-1, len(pubins), 0, len(pubins))

ifile = R.TFile(args.inputfile, "read")

for pu, s in product(pubins, range(len(sbins)+1)):
    
    h = ifile.Get("h_{}_{}".format(pu, s))
    m = h.GetMean() / 100
    std = (h.GetRMS() /100 )/ (m+1)

    y = pubins.index(pu) +1
    x = s
    print(x,y,m,std)

    bin = h_mean.GetBin(x, y)
    h_mean.SetBinContent(bin, m)
    h_std.SetBinContent(bin, std)

# Graphical settings
for j  in range(len(sbins)-1):
    h_mean.GetXaxis().SetBinLabel(j+1, "{:.0f}<E<{:.0f}".format(sbins[j],sbins[j+1]))
for j, p in enumerate(pubins):
    h_mean.GetYaxis().SetBinLabel(j+1, "{:.0f}".format(p))
h_mean.GetYaxis().SetLabelSize(0.04)
h_mean.GetXaxis().SetLabelSize(0.04)
h_mean.GetXaxis().SetTitleOffset(1.5)
h_mean.GetXaxis().SetTitle("strip ET (GeV)")
h_mean.GetYaxis().SetTitleOffset(1.4)
h_mean.GetYaxis().SetTitle("PU")
contours = array("d", [-0.40, -0.3,-0.2,-0.1,-0.05, -0.01,0.01, 0.05, 0.1, 0.2, 0.3, 0.4])
h_mean.SetContour(len(contours), contours )
h_mean.GetZaxis().SetRangeUser(contours[0], contours[-1])
h_mean.GetZaxis().SetNdivisions(12)
h_mean.GetZaxis().SetTitle("bias %")

#h_mean.Draw("COLZ")
h_mean.Draw("AXIS")
h_mean.DrawCopy("SAME CONT4Z")
R.gPad.SetRightMargin(0.2)
c.Draw()
c.SaveAs(args.outputfile +"_mean.png")

##################################
#STD

# Graphical settings
for j  in range(len(sbins)-1):
    h_std.GetXaxis().SetBinLabel(j+1, "{:.0f}<E<{:.0f}".format(sbins[j],sbins[j+1]))
for j, p in enumerate(pubins):
    h_std.GetYaxis().SetBinLabel(j+1, "{:.0f}".format(p))
h_std.GetYaxis().SetLabelSize(0.04)
h_std.GetXaxis().SetLabelSize(0.04)
h_std.GetXaxis().SetTitleOffset(1.5)
h_std.GetXaxis().SetTitle("strip ET (GeV)")
h_std.GetYaxis().SetTitleOffset(1.4)
h_std.GetYaxis().SetTitle("PU")
contours = array("d", [0, 0.01, 0.05,0.1, 0.15, 0.20, 0.30,0.4,0.5])
h_std.SetContour(len(contours), contours )
h_std.GetZaxis().SetRangeUser(contours[0], contours[-1])
h_std.GetZaxis().SetNdivisions(12)
h_std.GetZaxis().SetTitle("spread")

#h_std.Draw("COLZ")
h_std.Draw("AXIS")
h_std.DrawCopy("SAME CONT4Z")
R.gPad.SetRightMargin(0.2)
c.Draw()
c.SaveAs(args.outputfile + "_std.png")