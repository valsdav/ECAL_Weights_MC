''' 
This script saves the digis and the 
'''
import ROOT as r
import numpy as np
import argparse
import pandas as pd

parser = argparse.ArgumentParser()
parser.add_argument('-i', '--input', type=str, required=True)
parser.add_argument('-o', '--output', type=str, required=True)
args = parser.parse_args()

f = r.TFile(args.input, "READ")
tree = f.Get("samples")

dataset = []

for event in tree:
    data = []
    for d in event.digis:
        data.append(d)
    data.append(event.amplitudeTruth)
    dataset.append(data)


np.save(args.output, dataset)

f.Close()