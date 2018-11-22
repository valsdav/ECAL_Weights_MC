import sys, os
import argparse 
import pandas as pd
from multiprocessing import Pool

if len(sys.argv)<2:
    print("Missing args: DOF file")
    exit(1)

signalAmplitude = 10.
PU = 40 
nevents = 1000
debug = 1

# dataset of parameters
df = pd.read_csv(sys.argv[1], sep="\t")

def generate(row):
    index, row = row
    ID = int(row.ID)
    output_file = "outputs/output_ID{}_PU{}_A{:.0f}.root".format(ID, PU, signalAmplitude)
    # Run the simulation
    os.system("./generate.x {} {} {} {} {} {} {} {} {} {}".format(
        ID, row.alpha, row.beta, row.t0, signalAmplitude, 
        row.eta_ring/10., PU, nevents, output_file, debug)
        )
    # Calc weights
    os.system("./calc_weights.x {}".format(output_file))
    return output_file


# calculate the chunk size as an integer
worker = Pool()

outputs = worker.map(generate, df.iterrows())

print(outputs)

# Join all the files
os.system("hadd  -f outputs/total.root {}".format(" ".join(outputs)))

