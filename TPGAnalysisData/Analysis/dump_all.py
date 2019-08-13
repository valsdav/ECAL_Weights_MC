#!/bin/python
import ROOT as R 
import sys

inputdir = sys.argv[1]
outputdir = sys.argv[2]


labels = ["current", "2017_PU50_S30", "2017_PU50_S2", "Oct2017_PU0_perstrip", "Oct2017_PU0_newavg"]

R.gInterpreter.ProcessLine(".L unfold_dump.C+")

for l in labels:
    R.unfold_dump(inputdir+"/TPGanalysis_"+l+".root",outputdir+"/TPG_dump_"+l+".root", )