import sys, os
import argparse 
import pandas as pd
from multiprocessing import Pool
from math import ceil

# This script prepares argumnets for condor jobs 
# to run generate.x and calc_weightsDF.x
# DOF parameters of ECAL are read from the config file.

if len(sys.argv)<3:
    print("Missing args: DOF file | outputdir_for_rootfiles")
    exit(1)

signalAmplitudes = [10]
PUs = [0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 150]
nevents = 2000
debug = 0

outputdir = sys.argv[2]

# dataset of parameters
df = pd.read_csv(sys.argv[1], sep="\t")

def generate(row):
    index, row = row
    ID = int(row.CMSSWID)
    params = []
    for amp in signalAmplitudes:
        # Run the simulation
        params.append("{} {} {} {} {} {} {} {} {}".format(
            ID, row.alpha, row.beta, row.t0, amp, 
            row.eta, nevents, outputdir, debug)
        )
    return params

params = []

for row in df.iterrows():
    params += generate(row)

print("{} generations".format(len(params)))

n_cluster = ceil(len(params)/ 20000)

for n in range(n_cluster):
    with open("args{}.txt".format(n+1), "w") as out:
        for i in range(20000):
            if (n*20000 + i) < len(params):
                out.write(params[n*20000 + i] +"\n")



