import sys 
import os
import pandas as pd 
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-d", "--dof", type=str, help="DOF file", required=True)
parser.add_argument("-i", "--inputdir", type=str, help="Inputdir", required=True)
parser.add_argument("-o", "--outputfile", type=str, help="Output file", required=True)
parser.add_argument("-st","--strips", type=int, nargs="+", help="Strips ID", required=False)
args = parser.parse_args()


# dataset of parameters
df = pd.read_csv(args.dof, sep="\t")

# filter strips
if args.strips != None:
    df = df[df.stripid.isin(args.strips)]

wdfs = []

for strip in df.stripid.unique():
    print("Strip: ", strip)
    d = pd.read_csv(args.inputdir+"/weights_stripID{}.txt".format(strip),
            sep=",", index_col=False )
    wdfs.append(d)


totaldf = pd.concat(wdfs, sort=False)
totaldf.to_csv(args.outputfile, sep="\t", index=False )
