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
parser.add_argument("-er","--eta-rings", type=int, nargs="+", help="Etarings: 18 19 20 ", required=False)
parser.add_argument("-fw", "--fixed", action="store_true", help="Fixed weights")
parser.add_argument("-ws", "--weights-signal", nargs='+', type=int, help="Select signal in weights set", required=False)
parser.add_argument("-wp", "--weights-pu", nargs='+', type=int, help="Select PU in weights set", required=False)
args = parser.parse_args()

if not os.path.exists(args.outputdir):
    os.makedirs(args.outputdir)

dof = pd.read_csv(args.dof , sep=",")

commands = []

for etaring in args.eta_rings:
    if args.fixed:
        list_of_files = []
        for stripid in dof[abs(dof.eta_ring) == etaring].stripid.unique():
            list_of_files.append("{}/bias_stripID{}.root".format(args.inputdir, stripid))

        command = "hadd -f {}/bias_rings_etr{}.root ".format(args.outputdir, etaring)
        command += " ".join(list_of_files)
        commands.append(command)
    else:
        for s, p in product(args.weights_signal, args.weights_pu):
            list_of_files = []
            for stripid in dof[abs(dof.eta_ring) == etaring].stripid.unique():
                list_of_files.append("{}/bias_stripID{}_PU{}_S{}.root".format(args.inputdir, stripid,p,s ))

            command = "hadd -f {}/bias_rings_etr{}_PU{}_S{}.root ".format(args.outputdir, etaring, p, s)
            command += " ".join(list_of_files)
            commands.append(command)


def run(command):
    subprocess.call(command.split(" "))

p = Pool()
print("Executing hadd...")
p.map(run, commands)

print("DONE")
