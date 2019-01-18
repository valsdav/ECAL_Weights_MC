import sys 
import os
import pandas as pd 
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-d", "--dof", type=str, help="DOF file", required=True)
parser.add_argument("-i", "--inputdir", type=str, help="Inputdir", required=True)
parser.add_argument("-o", "--outputfile", type=str, help="Output file", required=True)
parser.add_argument("-s", "--signal-amplitudes", type=float, nargs="+", help="Signal amplitudes", required=True)
parser.add_argument("-st","--strips", type=int, nargs="+", help="Strips ID", required=False)
args = parser.parse_args()


# dataset of parameters
df = pd.read_csv(args.dof, sep="\t")

if args.strips != None:
    df = df[df.stripid.isin(args.strips)]

wdfs = []

for strip in df.stripid.unique():
    for a in args.signal_amplitudes:
        d = pd.read_csv(args.inputdir+"/weights_stripID{:.0f}_A{:.1f}.txt".format(strip, a),
                sep=",", index_col=False )
        d["stripid"] = strip
        wdfs.append(d)
        print(d)


totaldf = pd.concat(wdfs, sort=False)
totaldf.to_csv(args.outputfile, sep="\t", index=False )
