# Abe Tishelman-Charny
# 20 July 2018
# The purpose of this program is to plot average bias vs. time shift for multiple 

# https://www-zeuthen.desy.de/~middell/public/pyroot/pyroot.html

from ROOT import *
from array import array
import argparse

parser = argparse.ArgumentParser(description='Process some files')
parser.add_argument('-f', '--files', type = str, nargs='+' , help='files to plot from')

args = parser.parse_args()

gStyle.SetOptStat(0); # no stats box 
f1 = TFile.Open(args.files[0])
f2 = TFile.Open(args.files[1])
f3 = TFile.Open(args.files[2])

h1 = f1.Get("tsr") 
h2 = f2.Get("tsr")
h3 = f3.Get("tsr")

#g1 = TGraph(h1)
#g2 = TGraph(h2)
#g3 = TGraph(h3)

# Doing the following because g = TGraph(h) seems to incorrectly translate values. 

g1 = TGraph()
g2 = TGraph()
g3 = TGraph()

histos = [h1, h2, h3]
graphs = [g1, g2, g3]

for hist in histos:

	abs_val = false
	counter = 1
	value = 0
	ts = 0
	dt = hist.GetXaxis().GetBinLowEdge(3) - hist.GetXaxis().GetBinLowEdge(2)

	x = array('d')
	y = array('d')

	while(hist.GetBinContent(counter) != 0):
		#print ("hist.GetXaxis().GetBinContent(" + str(counter) + ") = " + str(hist.GetXaxis().GetBinLowEdge(counter)))
		ts = hist.GetXaxis().GetBinLowEdge(counter)
		#print ("hist.GetBinContent(" + str(counter) + ") = " + str(hist.GetBinContent(counter)))
		value = hist.GetBinContent(counter)

		#cout << "abs(" << value << ") = " << abs(value) << endl;
		#h2->Fill(ts,fabs(value));
		x.append(ts)
		if (abs_val): y.append(fabs(value))
		else: y.append(value)
		#print("ts = " + str(ts) )
		#print("value = " + str(value) )
		#print("counter = " + str(counter) )
		ts += dt
		counter += 1

	if (hist == h1): g1 = TGraph(counter - 1, x, y)
	if (hist == h2): g2 = TGraph(counter - 1, x, y)
	if (hist == h3): g3 = TGraph(counter - 1, x, y)

#for x in g1.Eval(x):
#print (g1.Eval(-30))
#print (g1.Eval(-27.5))
#print (g1.Eval(-25))

g1.SetMarkerStyle(3)
g2.SetMarkerStyle(3)
g3.SetMarkerStyle(3)

g1.SetMarkerColor(2)
g2.SetMarkerColor(3)
g3.SetMarkerColor(4)

g1.SetLineColor(2)
g2.SetLineColor(3)
g3.SetLineColor(4)

#if(abs_val) g1->SetTitle("EB abs(Average Bias) vs. Time Shift")
#else g1->SetTitle("EB Average Bias vs. Time Shift");
#g1->GetXaxis()->SetTitle("Time Shift (ns)");
#g1->GetXaxis()->SetTitleOffset(1.3);
#if(abs_val) g1->GetYaxis()->SetTitle("abs(Average Bias)");
#else g1->GetYaxis()->SetTitle("Average Bias");
#g1->GetYaxis()->SetTitleOffset(1.5);

#g1->Draw();

g1.SetName("g1")
g2.SetName("g2")
g3.SetName("g3")

print (g1.Eval(0))
print (g2.Eval(0))
print (g3.Eval(0))

l1 = TLegend(0.5, 0.1, 0.8, 0.4)
l1.SetHeader("Legend")
l1.AddEntry(g1, h1.GetTitle() , "lp")
l1.AddEntry(g2, h2.GetTitle(), "lp")
l1.AddEntry(g3, h3.GetTitle(), "lp")

mg = TMultiGraph()

mg.Add(g1, "LP")
mg.Add(g2, "LP")
mg.Add(g3, "LP")

mg.SetTitle("MG Title")

c0 = TCanvas('c0', 'c0', 800, 600)

mg.Draw("A")
l1.Draw("SAME")

#c0.BuildLegend(0.5,0.1,0.8,0.4)

c0.SaveAs("pic.pdf")

