import sys 
import os
import pandas as pd 
import argparse

if len(sys.argv)< 4:
    print("Missing args: DOF file | inputtemplate | outputfile")
    exit(1)

parser = argparse.ArgumentParser()
parser.add_argument("-d", "--dof", type=str, help="DOF file", required=True)
parser.add_argument("-i", "--inputdir", type=str, help="Inputdir", required=True)
parser.add_argument("-o", "--outputfile", type=str, help="Output file", required=True)
parser.add_argument("-s", "--signal-amplitude", type=float, help="Signal amplitude", required=True)
args = parser.parse_args()


# dataset of parameters
df = pd.read_csv(args.dof, sep="\t")
df = df[df.stripid!= 0]

wdfs = []

for strip in df.stripid.unique():
    d = pd.read_csv(args.inputdir+"/weights_stripID{:.0f}_A{:.1f}.txt".format(strip, args.signal_amplitude),
            sep=",", index_col=False)
    d["stripid"] = strip
    wdfs.append(d)

totaldf = wdfs[0]

for i in range(1, len(wdfs)):
    totaldf = totaldf.append(wdfs[i])

totaldf.reindex(["stripid", "PU", "w1", "w2", "w3", "w4", "w5"], axis=1)
totaldf.to_csv(args.outputfile, sep="\t", index=False )
