import sys, os
import ROOT as r
import argparse

'''
This script prepare a TFile with an histogram containing the spectrum of energy
for the simulation. The probability is distributed evenly in each bin. 
'''

parser = argparse.ArgumentParser()
parser.add_argument("-o", "--outputfile", type=str, help="output_file", required=True)
parser.add_argument("-e","--et-bins", type=str, nargs="+", help="ET bins", required=False)
args = parser.parse_args()

f = r.TFile(args.outputfile, "recreate")
h = r.TH1D("signalA_T", "",258, 0, 129)


bins = [ list(map(float,b.split("-")))  for b in args.et_bins]
print(bins)

nbins = len(bins)-1
pbcont = 1/ nbins
density  = []
for i in range(nbins):
    l = pbcont / (bins[i][1]- bins[i][0])
    density.append(l)


print(density)

for i in range(258):
    j = i / 2
    for b in range(nbins):
        if j>= bins[b][0] and j< bins[b][1]:
            h.Fill(j, density[b])
    
h.Scale(1/h.Integral())

h.Write()
f.ls()
f.Close()

print("DONE")