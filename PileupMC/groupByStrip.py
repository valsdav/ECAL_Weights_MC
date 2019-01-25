import sys, os
import argparse 
import pandas as pd
from multiprocessing import Pool

'''
This scripts runs hadd on single crystal files to 
group them in strips reading a DOF file
'''

if len(sys.argv)<3:
    print("Missing args: DOF file | inputdir | outputdir")
    exit(1)

inputdir = sys.argv[2]
outputdir = sys.argv[3]

# dataset of parameters
df = pd.read_csv(sys.argv[1], sep="\t")

def hadd_strips(group):
    stripID = round(group[0])
    df = group[1]
    if stripID==0:
        return None
    cmsswids = []
    for xid in df.CMSSWID:
        p = "{}/weights_ID{}.root".format(inputdir, xid)
        if os.path.exists(p):
            cmsswids.append(p)
    # join the files
    os.system("hadd {}/strip_ID{}.root ".format(outputdir, stripID) + " ".join(cmsswids))

params = []

grouped = df.groupby("stripid")

p = Pool()

p.map(hadd_strips, list(grouped))



