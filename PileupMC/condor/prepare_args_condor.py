import sys, os
import argparse 
import pandas as pd
from multiprocessing import Pool

# This script runs generate.x and calc_weights programs
# for different configurations in parallel. 
# DOF parameters of ECAL are read from the config file.
# A single root file is created at the end.

if len(sys.argv)<3:
    print("Missing args: DOF file | outputdir_for_rootfiles")
    exit(1)

signalAmplitudes = [1, 5, 10, 20, 30, 50, 100]
PUs = [0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 150 ]
nevents = 50000
debug = 0

outputdir = sys.argv[2]

# dataset of parameters
df = pd.read_csv(sys.argv[1], sep="\t")

def generate(row):
    index, row = row
    ID = int(row.ID)
    params = []
    for amp in signalAmplitudes:
        # Run the simulation
        params.append("{} {} {} {} {} {} {} {} {}".format(
            ID, row.alpha, row.beta, row.t0, amp, 
            row.eta_ring/10., nevents, outputdir, debug)
        )
    return params

params = []

for row in df.iterrows():
    params += generate(row)

print("{} generations".format(len(params)))

with open("arguments.txt", "w") as out:
    for p in params:
        out.write(p +"\n")



