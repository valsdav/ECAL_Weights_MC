import os 
import sys
from pprint import pprint
from collections import defaultdict
from array import array
import argparse
import ROOT as r


parser = argparse.ArgumentParser()
parser.add_argument("--mc",  type=str, help="MC spectrum", required=True)
parser.add_argument("--data",type=str, help="Data spectra by regions", required=True)
parser.add_argument("-o", "--outputfile", type=str, help="Output file", required=True)
args = parser.parse_args()


regions_names = {
    "1": "18_28",
    "2": "18_21",
    "3": "22_25",
    "4": "26_28"
}


mcfile = r.TFile(args.mc)
mcspectrum = mcfile.Get("signalA_T")
mcspectrum.Scale(1/mcspectrum.Integral())

datafile = r.TFile(args.data)
data_region1 = datafile.Get("eRec_Spectrum_Ring1")
data_region2 = datafile.Get("eRec_Spectrum_Ring2")
data_region3 = datafile.Get("eRec_Spectrum_Ring3")
data_region4 = datafile.Get("eRec_Spectrum_Ring4")
data_region1.Scale(1/data_region1.Integral())
data_region2.Scale(1/data_region2.Integral())
data_region3.Scale(1/data_region3.Integral())
data_region4.Scale(1/data_region4.Integral())



outputfile   = r.TFile(args.outputfile, "recreate")
sf_region1 = r.TH1D("trueA_SF_18_28","",256,0, 128)
sf_region2 = r.TH1D("trueA_SF_18_21","",256,0, 128)
sf_region3 = r.TH1D("trueA_SF_22_25","",256,0, 128)
sf_region4 = r.TH1D("trueA_SF_26_28","",256,0, 128)


# Working on bins of 0.5 GeV
for ibin in range(1,256):
    print(ibin, mcspectrum.FindBin(ibin*0.5))
    mcvalue = mcspectrum.GetBinContent( mcspectrum.FindBin(ibin*0.5))

    print(ibin, mcvalue)
    sf_region1.SetBinContent(ibin,  data_region1.GetBinContent(ibin)/ mcvalue )
    sf_region2.SetBinContent(ibin,  data_region2.GetBinContent(ibin)/ mcvalue )
    sf_region3.SetBinContent(ibin,  data_region3.GetBinContent(ibin)/ mcvalue )
    sf_region4.SetBinContent(ibin,  data_region4.GetBinContent(ibin)/ mcvalue )

outputfile.Write()
outputfile.Close()