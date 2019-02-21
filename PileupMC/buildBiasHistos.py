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
parser.add_argument("-i", "--inputfile", type=str, help="Input file", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="Output dir", required=True)
args = parser.parse_args()


bias_data = pd.read_csv(args.inputfile, sep=",")

def bias_histo(conf, df):
    wPU, wS = conf
    print(">>> Weights set: wPU {}, wS {}".format(wPU, wS))
    file = R.TFile(args.outputdir +"/bias_histo_wPU{:.0f}_wS{:.0f}.root".format(wPU, wS), "RECREATE")

    for strip, dfs in df.groupby("stripid"):
        print("< stripid: ", strip)
        h = R.TH2F("bias_{}".format(strip), "weights set (PU={}, S={})".format(wPU, wS*5),
                 15,0, 15, 12, 0, 12)

        PUs = [0, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60]
        Ss = [1.0, 2.0, 4.0, 6.0, 8., 10.,12.,16.,20.,40.,60.,100.,160.,200]
        As = [i*5 for i in Ss]

    
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
        contours = array("d", [ -40, -30,-20,-10,-5, -1,1, 5, 10, 20, 30, 40])
        h.SetContour(len(contours), contours )
        h.GetZaxis().SetRangeUser(-40, 40)
        h.GetZaxis().SetNdivisions(12)
        h.GetZaxis().SetTitle("bias%")

        h.Write()

    file.Close()


p = Pool()
p.starmap(bias_histo, bias_data.groupby(["wPU", "wS"]))

print("Done")