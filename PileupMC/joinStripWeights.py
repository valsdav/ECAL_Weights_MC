import sys 
import os
import pandas as pd 

if len(sys.argv)< 4:
    print("Missing args: DOF file | inputtemplate | outputfile")
    exit(1)


inputtemplate = sys.argv[2]
outputfile = sys.argv[3]

# dataset of parameters
df = pd.read_csv(sys.argv[1], sep="\t")
df = df[df.stripid!= 0]

wdfs = []

for strip in df.stripid.unique():
    d = pd.read_csv(inputtemplate+"{:.0f}.txt".format(round(strip)),
            sep=",", index_col=False)
    d["stripid"] = round(strip)
    wdfs.append(d)

totaldf = wdfs[0]

for i in range(1, len(wdfs)):
    totaldf = totaldf.append(wdfs[i])

totaldf.reindex(["stripid", "PU", "w1", "w2", "w3", "w4", "w5"], axis=1)
totaldf.to_csv(outputfile, sep="\t", index=False )
