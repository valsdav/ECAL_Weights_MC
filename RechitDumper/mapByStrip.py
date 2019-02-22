import ROOT as R 
import os
import pandas as pd 
import argparse 
from collections import defaultdict
from multiprocessing import Pool
from TreeWriter import TreeWriter

'''
This script reads the rechit root file and sum the energy by strip. 
It reads also the lumi information from a csv file and outputs a root file
with lumisection:pu:strip:energy data. 
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i", "--inputdir", type=str, help="input dir", required=True)
parser.add_argument("-o", "--output", type=str, help="outputfile file", required=True)
parser.add_argument("-l", "--lumi", type=str, help="pu-lumi file", required=True)
parser.add_argument("-n", "--nevents", type=int, help="N events", required=False)
parser.add_argument("-r", "--rings", type=int, nargs="+", help="Eta rings", required=False)
args = parser.parse_args()

dof = pd.read_csv("/eos/user/d/dvalsecc/ECAL/ECAL_Weights/PileupMC/parameters/ChannelNumberingEE.csv", sep=",")
strips_map = {}
strips_rings = {}

tree = TreeWriter(args.output, "rechits")
tree.define_branches({
    1: {
        int: ["run", "ls", "stripid", "eta_ring"],
        float: ["pu", "energy"]
    }
})

print("rings", args.rings)

for stripid, df in dof.groupby("stripid"):
    strips_rings[stripid] = df.eta_ring.values[0]
    for _, row in df.iterrows():
        strips_map[(row["ix"], row.iy, row.side)] = (stripid, row.eta_ring)

pu_lumi = pd.read_csv(args.lumi, sep=",")

def read_file(f):
    print(">>> ", f)
    ifile = R.TFile(args.inputdir + "/" + f, "READ")
    tree = ifile.Get("rechitDumper/tree")

    output = []

    for iev, event in enumerate(tree):
        if args.nevents != None and iev == args.nevents:  break
        if iev % 100 == 0:  print(">>> event: ", iev)
        
        pulevel = pu_lumi[pu_lumi.ls == "{0}:{0}".format(event.lumi)].avgpu
        if pulevel.size == 0:
            return []
        pulevel = pulevel.values[0] 

        #print(len(event.rechits))

        strips_energy = defaultdict(int)
        for rechit, ix, iy,iz in zip(event.rechits, event.ixs, event.iys, event.izs):
            stripid, eta_ring = strips_map[(ix, iy, iz)]
            strips_energy[stripid] += rechit 
        
        for sid, energy in strips_energy.items():
            ring = strips_rings[sid]
            if args.rings != None:
                if ring not in args.rings:
                    continue
            output.append( (event.run, event.lumi, pulevel, sid, ring, energy))

    return output
    
p = Pool()
outputs = []
for o in p.map(read_file, os.listdir(args.inputdir)): 
    outputs+=o


print("Creating output root file...")
for run, ls, pu, stripid, eta_ring, energy in outputs:
    tree.run = run
    tree.ls = ls
    tree.pu = pu
    tree.stripid = stripid
    tree.eta_ring = eta_ring
    tree.energy = energy
    tree.fill()

tree.write()

# print("Joining dataframes...")
# totaldf = pd.concat(dfs, sort=False)

# totaldf.to_csv(args.output, sep="\t", index=False)

# Now for each strip we



