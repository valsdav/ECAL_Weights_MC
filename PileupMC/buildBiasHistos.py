import sys 
import os
import ROOT as R
import numpy as np
import pandas as pd 
import argparse
from math import sqrt
from multiprocessing import Pool
from array import array
from collections import defaultdict

'''
This script is used to create bias histograms for each weights set. 
One Root file is created for each set containing one histogram for each strip.
'''

parser = argparse.ArgumentParser()
parser.add_argument("-d", "--dof", type=str, help="DOF file", required=True)
parser.add_argument("-i", "--inputfile", type=str, help="Input file", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="Output dir", required=True)
parser.add_argument("-s", "--signal-amplitudes", nargs='+', type=float, help="Signal amplitudes", required=True)
parser.add_argument("-p", "--pu", nargs='+', type=int, help="Pileups", required=True)
args = parser.parse_args()

PUs = args.pu
Ss = args.signal_amplitudes

dof = pd.read_csv(args.dof, sep=",")
bias_data = pd.read_csv(args.inputfile, sep="\t")

def bias_histo(conf, df):
    wPU, wS = conf
    print(">>> Weights set: wPU {}, wS {}".format(wPU, wS))
    file = R.TFile(args.outputdir +"/bias_histo_wPU{:.0f}_wS{:.0f}.root".format(wPU, wS), "RECREATE")

    for strip, dfs in df.groupby("stripid"):
        # Check the number of xtals 
        nxtals = dof[dof.stripid == strip].shape[0]
        if nxtals < 5:
            print("Strip: {}, | Nxtals: {}".format(strip, nxtals))
        As = [i*nxtals for i in Ss]

        print("< stripid: ", strip)
        h = R.TH2F("bias_{}".format(strip), "weights set (PU={}, S={})".format(wPU, wS*nxtals),
                            len(Ss),0, len(Ss), len(PUs), 0, len(PUs))
    
        for _, row in dfs.iterrows():
            x = Ss.index(row.S)
            y = PUs.index(row.PU)
            h.Fill(x, y, (row.bias -1)*100 )

        # Graphical settings
        for j, s in enumerate(As):
            h.GetXaxis().SetBinLabel(j+1, "{:.0f}".format(s))
        for j, s in enumerate(PUs):
            h.GetYaxis().SetBinLabel(j+1, "{:.0f}".format(s))
        h.GetYaxis().SetLabelSize(0.04)
        h.GetXaxis().SetLabelSize(0.04)
        h.GetXaxis().SetTitleOffset(1.4)
        h.GetXaxis().SetTitle("Strip signal amplitude (GeV)")
        h.GetYaxis().SetTitleOffset(1.4)
        h.GetYaxis().SetTitle("PU")
        contours = array("d", [-60, -50, -40, -30,-20,-10,-5, -1,1, 5, 10, 20, 30, 40, 50, 60])
        h.SetContour(len(contours), contours )
        h.GetZaxis().SetRangeUser(contours[0], contours[-1])
        h.GetZaxis().SetNdivisions(12)
        h.GetZaxis().SetTitle("bias%")

        h.Write()

    file.Close()


p = Pool()
p.starmap(bias_histo, bias_data.groupby(["wPU", "wS"]))

print("Done")