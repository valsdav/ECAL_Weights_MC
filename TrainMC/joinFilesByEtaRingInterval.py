import sys, os
import argparse 
import pandas as pd 
from itertools import product
from multiprocessing import Pool
import subprocess

'''
This script joins the bias files per eta-rings intervals.
'''

parser = argparse.ArgumentParser()
parser.add_argument("-d", "--dof", type=str, help="DOF file", required=True)
parser.add_argument("-i", "--inputdir", type=str, help="Input dir", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="Output dir", required=True)
parser.add_argument("-er","--eta-rings", type=str, nargs="+", help="Etarings intervals: 18-22 23-25", required=False)
parser.add_argument("-f", "--fixed", action="store_true", help="Fixed weights")
parser.add_argument("-ws", "--weights-signal", nargs='+', type=int, help="Select signal in weights set", required=False)
parser.add_argument("-wp", "--weights-pu", nargs='+', type=int, help="Select PU in weights set", required=False)
args = parser.parse_args()

if not os.path.exists(args.outputdir):
    os.makedirs(args.outputdir)

dof = pd.read_csv(args.dof , sep=",")

eta_ring_intervals = []
for er in args.eta_rings:
    e1, e2 = er.split("-")
    eta_ring_intervals.append((int(e1), int(e2)))

commands = []

for e1, e2 in eta_ring_intervals:
    if args.fixed:
        list_of_files = []
        for stripid in dof[( abs(dof.eta_ring) >= e1) & (abs(dof.eta_ring) <= e2)].stripid.unique():
            list_of_files.append("{}/bias_stripID{}.root".format(args.inputdir, stripid))

        command = "hadd -f {}/bias_rings_{}_{}.root ".format(args.outputdir, e1, e2)
        command += " ".join(list_of_files)
        commands.append(command)
    else:
        for s, p in product(args.weights_signal, args.weights_pu):
            list_of_files = []
            for stripid in dof[( abs(dof.eta_ring) >= e1) & (abs(dof.eta_ring) <= e2)].stripid.unique():
                list_of_files.append("{}/bias_stripID{}_PU{}_S{}.root".format(args.inputdir, stripid,p,s ))

            command = "hadd -f {}/bias_rings_{}_{}_PU{}_S{}.root ".format(args.outputdir, e1, e2, p, s)
            command += " ".join(list_of_files)
            commands.append(command)


def run(command):
    subprocess.call(command.split(" "))

p = Pool()
print("Executing hadd...")
p.map(run, commands)

print("DONE")
