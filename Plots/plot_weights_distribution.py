import sys
sys.argv.append( '-b' ) # batch mode for root
import ROOT as R
R.gStyle.SetOptStat(0)

import tdrstyle
import CMS_lumi
# tdr style
tdrstyle.setTDRStyle()
#CMS_lumi.lumiText = "Train: {}, eta ring interval: {}".format(train, ring.replace("_","-"))
CMS_lumi.lumiText = "(13 TeV)"

parser = argparse.ArgumentParser()
parser.add_argument("-i", "--inputfile", type=str, help="Input file", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="Output file", required=True)
parser.add_argument('-b', '--batchroot', action="store_true" ) 
args = parser.parse_args()
#R.gStyle.SetPalette(R.kBird


f = R.TFile(args.inputfile)
t = f.Get("samples")


R.gStyle.SetPalette(R.kLightTemperature)
c = R.TCanvas("c", "", 800, 600)
leg = R.TLegend(0.62,0.5, 0.95, 0.90)
pus = [20, 40, 60, 80, 100]
hpu0 = R.TH1F("hpu0", "", 60, 0.1,0.6)
t.Draw("w2>>hpu0", "(nPU==0)&&(trueA_T>5)", "goff")
pu0x = hpu0.GetMean()

hs = []
for p in pus: 
    h = R.TH1F("h{}".format(p), "", 60, 0.1,0.6)
    t.Draw("w2>>h{}".format(p), "(nPU=={})&&(trueA_T>5)".format(p), "same PLC")
    hs.append(h)
    h.SetLineWidth(3)
    leg.AddEntry(h, "PU=={}, Et = 10GeV".format(p), "l")
line = R.TLine(pu0x,0,pu0x,1100); 
line.SetLineColor(R.kTeal-7)
line.SetLineStyle(2)
line.SetLineWidth(4)
leg.AddEntry(line, "PU=0 weight", "l")
line.Draw("same")
CMS_lumi.CMS_lumi(c, 0, 0)
hs[0].GetYaxis().SetTitle("events")
hs[0].GetXaxis().SetTitle("3rd weight")
hs[0].GetYaxis().SetRangeUser(0, 1100)
leg.Draw("same")
c.Draw()
c.SaveAs(args.outputdir+"/weight3_PUdependece.png")
c.SaveAs(args.outputdir +"/weight3_PUdependece.C")