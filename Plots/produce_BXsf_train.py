import os 
import sys
from pprint import pprint
from collections import defaultdict
from array import array
import argparse
import ROOT as r

'''
This script calculates the BX scale factors to be applied 
on train MC for data comparison. They are binned by BX and E-rec regions. 
There are different histograms for different eta regions:
1 = all endcap
2 = rings 18-21
3 = rings 22-25
4 = rings 26-28
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i", "--inputfile", type=str, help="Input file", required=True)
parser.add_argument("-o", "--outputfile", type=str, help="Outputfile", required=True)
parser.add_argument("-n", "--nbx", type=int, help="Number of BX", required=True)
args = parser.parse_args()


regions_names = {
    "1": "18_28",
    "2": "18_21",
    "3": "22_25",
    "4": "26_28"
}

with open(args.inputfile) as fi:
    lines = fi.readlines()


regions = defaultdict(dict)

for li in lines:
    region_et, nevents_bx = li.split(" ")
    nevents_bx = int(nevents_bx)
    region , et = region_et.split("_")
    et = int(et)

    if et not in regions[region]:
        regions[region][et] = []

    regions[region][et].append(nevents_bx)

# Calculate Scale factors
sf_regions = {}
for region, etregs in regions.items():
    new_etrs = {}
    for k, etr in etregs.items():
        s = sum(etr)
        bxsf = list(map(lambda k: k/s, etr))
        new_etrs[k] = bxsf
    sf_regions[region] = new_etrs
    

# Create one 2D histogram for each region
output = r.TFile(args.outputfile, "recreate")

for region, data in sf_regions.items():
    sfhisto = r.TH2F("bxsf_"+ regions_names[region], "", args.nbx, 0, args.nbx-1, len(data), 1, len(data))
    
    for et, sfs in data.items():
        for bx,sf in enumerate(sfs):
            bn = sfhisto.GetBin(bx+1, et)
            sfhisto.SetBinContent(bn, sf)
            print(et,bx ,sf)
    sfhisto.Write()
    
output.Close()





