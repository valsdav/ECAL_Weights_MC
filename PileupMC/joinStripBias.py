import sys 
import os
import numpy as np
import pandas as pd 
import argparse
from math import sqrt
from multiprocessing import Pool
from collections import defaultdict

'''
This script is used to join the result of the bias calculation for all the strips.

'''

parser = argparse.ArgumentParser()
parser.add_argument("-d", "--dof", type=str, help="DOF file", required=True)
parser.add_argument("-w", "--weights-file", type=str, help="Weights file", required=True)
parser.add_argument("-i", "--inputdir", type=str, help="Inputdir", required=True)
parser.add_argument("-o", "--outputfile", type=str, help="Output file", required=True)
parser.add_argument("--dry", action="store_true", help="Dry run", required=False, default=False)
parser.add_argument("-st","--strips", type=int, nargs="+", help="Strips ID", required=False)
parser.add_argument("-er","--eta-rings", type=int, nargs="+", help="etarings", required=False)
parser.add_argument("-ws", "--weights-signal", nargs='+', type=float, help="Select signal in weights set", required=False)
parser.add_argument("-wp", "--weights-pu", nargs='+', type=int, help="Select PU in weights set", required=False)
parser.add_argument("-gbs", "--groupbystrip", action="store_true", help="Save one file per strip") 
parser.add_argument("-gbr", "--groupbyring", action="store_true", help="Save one file per eta ring") 
args = parser.parse_args()

inputfiles = [args.inputdir +"/"+ f for f in os.listdir(args.inputdir)]
# dataset of parameters
dof = pd.read_csv(args.dof, sep=",")
dfw = pd.read_csv(args.weights_file, sep="\t")

# filtering strips from weights file
if args.strips != None:
    print("Filtering on strips: ", args.strips)
    dfw = dfw[dfw.stripid.isin(args.strips)]
# filtering on wS and wPU
if args.weights_signal != None:
    print("Filtering on wS: ", args.weights_signal)
    dfw = dfw[dfw.S.isin(args.weights_signal)]
if args.weights_pu != None:
    print("Filtering on wPU: ", args.weights_pu)
    dfw = dfw[dfw.PU.isin(args.weights_pu)]

def load_file(file, stripid, PU, S):
    print(">>> Loading strip: {} | wPU: {} | wS: {}".format(
            stripid, PU, S))
    d = pd.read_csv(file, sep=",", index_col = False)
    d["stripid"] = stripid 
    # Configuration of the weights used for the bias
    d["wPU"] = PU 
    d["wS"]  = S
    return d


tobeloaded_files = []
missing_files = []
if args.groupbystrip or args.groupbyring:
    tobeloaded_files = defaultdict(list)


print("Loading xtals data...")
for stripid, df in dfw.groupby("stripid"):
    eta_ring = dof[dof.stripid == stripid].eta_ring.unique()[0]
    # filter on eta_rings
    if args.eta_rings != None and (not eta_ring in args.eta_rings): continue

    print(">>> Reading strip: ", stripid)
    # we have to load the file with bias for the strip
    #  created with a certain pair of PU and S. 
    for _, row in df.iterrows():
        # all the pairs of PU and S are in the weights df
        file = args.inputdir+"/bias_stripID{}_PU{:.0f}_S{:.0f}.txt".format(
                    stripid, row.PU, row.S)
        # Added to the list of files
        if args.groupbystrip:
            tobeloaded_files[stripid].append((file,  stripid, row.PU, row.S))
        elif args.groupbyring:
            tobeloaded_files[eta_ring].append((file,  stripid, row.PU, row.S))
        else:
            tobeloaded_files.append((file,  stripid, row.PU, row.S))
        # Check if the file exists in case of dry run
        if args.dry and not file in inputfiles:
            missing_files.append(file)

if args.dry:
    print("Missing files...")
    for f in missing_files:
        print(f)
    exit(0)

# Load all the pandas df with multiprocessing
p = Pool()
if args.groupbystrip:
    for stripid, files in tobeloaded_files.items():
        eta_ring = dof[dof.stripid == stripid].eta_ring.unique()[0]
        outputdir = "{}/ring_{}".format(args.outputfile, eta_ring)
        if not os.path.exists(outputdir): os.makedirs(outputdir)

        wdfs = p.starmap(load_file, files)
        print("Joining dataframes:  strip {}".format(stripid))
        totaldf = pd.concat(wdfs, sort=False)
        totaldf.to_csv("{}/ring_{}/bias_stripID{}.txt".format(
                args.outputfile, eta_ring, stripid), sep="\t", 
                index=False, float_format='%.5f')
elif args.groupbyring:
    for eta_ring, files in tobeloaded_files.items():
        wdfs = p.starmap(load_file, files)
        print("Joining dataframes:  ring {}".format(eta_ring))
        totaldf = pd.concat(wdfs, sort=False)
        totaldf.to_csv("{}/bias_ring{}.txt".format(
                args.outputfile, eta_ring), sep="\t", 
                index=False, float_format='%.5f')
else:

    wdfs = p.starmap(load_file, tobeloaded_files)
    print("Joining dataframes...")
    totaldf = pd.concat(wdfs, sort=False)
    totaldf.to_csv(args.outputfile, sep=",", index=False, float_format='%.5f')
