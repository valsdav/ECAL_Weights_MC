import sys 
import os
import numpy as np
import pandas as pd 
import argparse
from math import sqrt
from multiprocessing import Pool

parser = argparse.ArgumentParser()
parser.add_argument("-d", "--dof", type=str, help="DOF file", required=True)
parser.add_argument("-w", "--weights-file", type=str, help="Weights file", required=True)
parser.add_argument("-i", "--inputdir", type=str, help="Inputdir", required=True)
parser.add_argument("-o", "--outputfile", type=str, help="Output file", required=True)
parser.add_argument("--dry", action="store_true", help="Dry run", required=False, default=False)
parser.add_argument("-st","--strips", type=int, nargs="+", help="Strips ID", required=False)
args = parser.parse_args()

inputfiles = [args.inputdir +"/"+ f for f in os.listdir(args.inputdir)]
# dataset of parameters
dof = pd.read_csv(args.dof, sep="\t")
dfw = pd.read_csv(args.weights_file, sep="\t")

if args.strips != None:
    dfw = dfw[dfw.stripid.isin(args.strips)]

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

print("Loading xtals data...")
for stripid, df in dfw.groupby("stripid"):
    print(">>> Reading strip: ", stripid)
    # for all the xtals of this script we have to load the file
    # of the bias created with a certain pair of PU and S. 
    for _, row in df.iterrows():
        # all the pairs of PU and S are in the weights df
        file = args.inputdir+"/bias_stripID{}_PU{:.0f}_S{:.0f}.txt".format(
                    stripid, row.PU, row.S)
        # Added to the list of files
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
wdfs = p.starmap(load_file, tobeloaded_files)
print("Joining dataframes...")
totaldf = pd.concat(wdfs, sort=False)


totaldf.to_csv(args.outputfile, sep="\t", index=False, float_format='%.5f')
