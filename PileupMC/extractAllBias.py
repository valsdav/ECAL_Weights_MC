import sys, os
import argparse 
import pandas as pd
from multiprocessing import Pool

if len(sys.argv)<2:
    print("Missing args: Weight file")
    exit(1)

output_dir = "/eos/cms/store/user/dvalsecc/etaring_bias/"
input_files = "/eos/cms/store/user/dvalsecc/etaring_production/etaring_ID{:.0f}.root"

# dataset of parameters
df = pd.read_csv(sys.argv[1], sep=",")

def generate(row):
    index, row = row
    print("PU: {:.0f} | etaring: {:.0f}".format(row.PU, row.etaring))
    outputfile = output_dir+"bias_ID{:.0f}_PU{:.0f}.root".format(row.etaring, row.PU)
    inputfile = input_files.format(row.etaring)
    os.system("./extractBiasDF.x {} weights {} {} {} {} {} {}".format(
        inputfile, row.w1_mean, row.w2_mean, row.w3_mean, 
        row.w4_mean, row.w5_mean, outputfile
    ))

# Pool of workers based automatically on the cpu number
worker = Pool()
# map the generate function on every row of the DOF file
outputs = worker.map(generate, df.iterrows())
