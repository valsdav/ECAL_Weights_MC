import sys, os
import argparse 
import pandas as pd
from multiprocessing import Pool

# This script runs generate.x and calc_weights programs
# for different configurations in parallel. 
# DOF parameters of ECAL are read from the config file.
# A single root file is created at the end.

if len(sys.argv)<2:
    print("Missing args: DOF file")
    exit(1)

signalAmplitudes = [1,10,100]
PUs = [0, 20, 40, 60]
nevents = 100000
debug = 0

# dataset of parameters
df = pd.read_csv(sys.argv[1], sep="\t")

def generate(row):
    index, row = row
    ID = int(row.ID)
    output_files = []
    for PU in PUs:
        for amp in signalAmplitudes:
            output_file = "outputs/output_ID{}_PU{}_A{:.0f}.root".format(ID, PU, amp)
            # Run the simulation
            os.system("./generate.x {} {} {} {} {} {} {} {} {} {}".format(
                ID, row.alpha, row.beta, row.t0, amp, 
                row.eta_ring/10., PU, nevents, output_file, debug)
                )
            # Calc weights
            os.system("./calc_weights.x {}".format(output_file))
            output_files.append(output_file)
    return output_files


# calculate the chunk size as an integer
worker = Pool()

outputs = worker.map(generate, df.iterrows())

print(outputs)

# Join all the files
outputs_files = [" ".join(l) for l in outputs]
os.system("hadd  -f outputs/total.root {}".format(" ".join(outputs_files)))

