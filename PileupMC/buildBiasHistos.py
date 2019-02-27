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
parser.add_argument("-t", "--type", type=str, help="Bias map type (wPU_wS or PU_wPU)R", required=True)
args = parser.parse_args()


dof = pd.read_csv(args.dof, sep=",")
bias_data = pd.read_csv(args.inputfile, sep=",")

def bias_histo_wPU_wS(conf, df):
    wPU, wS = conf
    print(">>> Weights set: wPU {}, wS {}".format(wPU, wS))
    file = R.TFile(args.outputdir +"/bias_histo_wPU{:.0f}_wS{:.0f}.root".format(wPU, wS), "RECREATE")

    for strip, dfs in df.groupby("stripid"):
        # Check the number of xtals 
        nxtals = dof[dof.stripid == strip].shape[0]
        if nxtals < 5:
            print("Strip: {}, | Nxtals: {}".format(strip, nxtals))
        PUs = list(dfs.PU.unique())
        Ss = list(dfs.S.unique())
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

def bias_histo_PU_wPU(conf, df):
    PU, wPU = conf
    print(">>> Weights set: PU {}, wPU {:.0f}".format(PU, wPU))
    file = R.TFile(args.outputdir +"/bias_histo_PU{:.0f}_wPU{:.0f}.root".format(PU, wPU), "RECREATE")

    for strip, dfs in df.groupby("stripid"):
        # Check the number of xtals 
        nxtals = dof[dof.stripid == strip].shape[0]
        if nxtals < 5:
            print("Strip: {}, | Nxtals: {}".format(strip, nxtals))
        Ss = list(dfs.S.unique())
        wS = list(dfs.wS.unique())
        As = [i*nxtals for i in Ss]
        AwS = [i*nxtals for i in wS]

        print("< stripid: ", strip)
        h = R.TH2F("bias_{}".format(strip), "bias % - PU={}, wPU={:.0f}".format(PU, wPU),
                            len(wS),0, len(wS), len(As), 0, len(As))
    
        for _, row in dfs.iterrows():
            x = wS.index(row.wS)
            y = Ss.index(row.S)
            h.Fill(x, y, (row.bias -1)*100 )

        # Graphical settings
        for j, s in enumerate(AwS):
            h.GetXaxis().SetBinLabel(j+1, str(s))
        for j, s in enumerate(As):
            h.GetYaxis().SetBinLabel(j+1, str(s))

        h.GetYaxis().SetLabelSize(0.04)
        h.GetXaxis().SetLabelSize(0.04)

        h.GetXaxis().SetTitleOffset(1.4)
        h.GetYaxis().SetTitle("Strip signal amplitude (GeV)")
        h.GetYaxis().SetTitleOffset(1.4)
        h.GetXaxis().SetTitle("Weight set signal (GeV)")

        contours = array("d", [-60, -50, -40, -30,-20,-10,-5, -1,1, 5, 10, 20, 30, 40, 50, 60])
        h.SetContour(len(contours), contours )
        h.GetZaxis().SetRangeUser(contours[0], contours[-1])
        h.GetZaxis().SetNdivisions(12)
        h.GetZaxis().SetTitle("bias%")

        h.Write()
    file.Close()




p = Pool()
if args.type == "wPU_wS":   
    p.starmap(bias_histo_wPU_wS, bias_data.groupby(["wPU", "wS"]))
elif args.type == "PU_wPU":
    p.starmap(bias_histo_PU_wPU, bias_data.groupby(["PU", "wPU"]))

print("Done")