import sys 
import os
import pandas as pd 
import argparse

'''
This script joins all the weights files in one file
'''

parser = argparse.ArgumentParser()
parser.add_argument("-d", "--dof", type=str, help="DOF file", required=True)
parser.add_argument("-i", "--inputdir", type=str, help="Inputdir", required=True)
parser.add_argument("-o", "--outputfile", type=str, help="Output file", required=True)
parser.add_argument("-st","--strips", type=int, nargs="+", help="Strips ID", required=False)
parser.add_argument("-er","--eta-rings", type=int, nargs="+", help="etarings", required=False)
args = parser.parse_args()


# dataset of parameters
df = pd.read_csv(args.dof, sep=",")

# filter strips and etarings
if args.strips != None:
    print("Filtering on strips: ", args.strips)
    df = df[df.stripid.isin(args.strips)]
if args.eta_rings != None:
    print("Filtering on eta_rings: ", args.eta_rings)
    df = df[df.eta_ring.isin(args.eta_rings)]

wdfs = []

for strip in df.stripid.unique():
    print("Strip: ", strip)
    d = pd.read_csv(args.inputdir+"/weights_stripID{}.txt".format(strip),
            sep=",", index_col=False )
    wdfs.append(d)


totaldf = pd.concat(wdfs, sort=False)
totaldf.to_csv(args.outputfile, sep="\t", index=False )
