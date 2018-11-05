from ROOT import *
import csv
import os 
from array import array

gROOT.SetBatch(True)

path = '/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/src/ECAL_Weights/ParamReco/data/XTAL_Info_Full_Jun18_PedSub0+5.txt'

params = []

ts = 10

i = 0

with open(path,'r') as f:
	next(f) # skip headings
	reader=csv.reader(f,delimiter='\t')
	for row in reader:
#		print row
		
		A = row[5]
		t0 = float(row[6]) + ts
		alpha = row[7]
		beta = row[8]
		params.append(float(A))
		params.append(float(t0))
		params.append(float(alpha))
		params.append(float(beta))
		print A
		print t0
		print alpha
		print beta

		i+=1
		if(i>0): break

name = 'function_alphabeta'
#TString *name = new TString("function_alphabeta");
formula = "( (1 + (x-[1]) / ([2]*[3]) ) > 0.0)*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + ((1 + (x-[1]) / ([2]*[3]) <= 0.0 ))*(0)"

xmin = -1*params[2]*params[3] + params[1]
xmax = 250
dt = 25

#print 'xmin = ',xmin

function_alphabeta = TF1(name,formula,xmin,xmax)

for j in range(4):
	print j
	function_alphabeta.SetParameter(j,params[j])
	print params[j]

# Use derivative feature of TF1 for weights? 
k = 0
for j in range(250):
	if (j%25 == 0): print function_alphabeta.Eval(j)
	k += 1


c1 = TCanvas()


n = 7

x, y = array( 'd' ), array( 'd' )

for i in range(n):
	x.append(i*dt + 75)
	y.append(function_alphabeta.Eval(i*dt + 75))

graph = TGraph(n,x,y)
graph.SetMarkerStyle(kFullDotLarge)
graph.SetMarkerColor(kRed)

function_alphabeta.SetLineColor(kBlack)
#function_alphabeta.SetTitle('Sampled, Time Shifted Alpha Beta Function')
function_alphabeta.SetTitle('Sampled, Time Shifted Alpha Beta Function')
function_alphabeta.GetXaxis().SetTitle('time (ns)')
function_alphabeta.GetYaxis().SetTitle('Detector Response (ADC Counts)')
function_alphabeta.GetYaxis().SetTitleOffset(1.2)


# t_{0} line and label
line = TLine(params[1],0,params[1],params[0])
line.SetLineStyle(3)
line.SetLineColor(kRed)

# 'A' line and label

Aline = TLine(xmin,params[0],params[1],params[0])
Aline.SetLineStyle(3)
Aline.SetLineColor(kBlack)

# params[1] - ts = t0

constline = TLine(params[1] - ts,0,params[1] - ts,function_alphabeta.Eval(params[1] - ts))
constline.SetLineStyle(3)
constline.SetLineColor(kBlack)

#tlatex.Draw("SAME")

function_alphabeta.Draw()
line.Draw("SAME")
Aline.Draw("SAME")
constline.Draw("SAME")
graph.Draw("SAMEP")
#graph.Draw("SAMEP")

# Drawlatex needs to come after I think 
Atlatex = TLatex()
Atlatex.SetNDC()
Atlatex.SetTextAngle(0)
Atlatex.SetTextColor(kBlack)
Atlatex.SetTextFont(63)
Atlatex.SetTextAlign(11)
Atlatex.SetTextSize(22)
Atlatex.DrawLatex(0.14,0.8625,"A")
Atlatex.SetTextFont(53)

alatex = TLatex()
alatex.SetNDC()
alatex.SetTextAngle(0)
alatex.SetTextColor(kBlack)
alatex.SetTextFont(63)
alatex.SetTextAlign(11)
alatex.SetTextSize(25)
alatex.DrawLatex(0.29,0.3,"t_{0}")
alatex.SetTextFont(53)

tlatex = TLatex()
tlatex.SetNDC()
tlatex.SetTextAngle(0)
tlatex.SetTextColor(kRed)
tlatex.SetTextFont(63)
tlatex.SetTextAlign(11)
tlatex.SetTextSize(25)
#tlatex.DrawLatex(0.32,0.3,"t_{0}")
#tlatex.DrawLatex(0.32 + (0.9 - 0.1)*(ts / (250 - (xmin) ) ),0.3,"t_{0} + ts")
tlatex.DrawLatex(0.34,0.3,"t_{0} + ts")
tlatex.SetTextFont(53)

c1.Update()
c1.SaveAs("plot.pdf")

os.system("evince plot.pdf")
#os.system("evince pwd")
