import sys, os
import pandas as pd
from multiprocessing import Pool
from math import ceil
import argparse


# This script prepares arguments for condor jobs 
# to run generate.x and calc_weightsDF.x for each crystal parameter
# DOF parameters of ECAL are read from the config file.

parser = argparse.ArgumentParser()
parser.add_argument("-d", "--dof", type=str, help="DOF file", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="output_dir", required=True)
parser.add_argument("-s", "--signal-amplitudes", nargs='+', type=float, help="Signal amplitudes", required=True)
parser.add_argument("-p", "--pu", nargs='+', type=int, help="Pileups", required=True)
parser.add_argument("-n", "--nevents", type=int, help="Number of events", required=False, default=2000)
parser.add_argument("-st","--strips", type=int, nargs="+", help="Strips ID", required=False)
parser.add_argument("-er","--eta-rings", type=int, nargs="+", help="etarings", required=False)
parser.add_argument("-e", "--eos", type=str, default="user", help="EOS instance user/cms", required=False)
parser.add_argument("--debug", action="store_true", default=False, help="Activate debug output", required=False)
args = parser.parse_args()

signalAmpls = args.signal_amplitudes
PUs = args.pu
nevents = args.nevents
debug = args.debug
outputdir = args.outputdir

condor= '''executable              = run_condor.sh
output                  = output{N}/$(ClusterId).$(ProcId).out
error                   = error{N}/$(ClusterId).$(ProcId).err
log                     = log{N}/$(ClusterId).log

transfer_input_files = generate.x, calc_weightsDF.x, PileupPDF.root
transfer_output_files = ""

+JobFlavour = "microcentury"

queue arguments from args{N}.txt
'''

script='''#!/bin/sh -e

#source /cvmfs/sft.cern.ch/lcg/views/LCG_94python3/x86_64-slc6-gcc7-opt/setup.sh
source /cvmfs/sft.cern.ch/lcg/views/dev3python3/latest/x86_64-slc6-gcc7-opt/setup.sh

for Ampl in {Ampls}; do
for PU in {PUs}; do
    pulsefile=pulses_ID$1_PU${PU}_A${Ampl}.root;
    ./generate.x $1 $2 $3 $4 ${Ampl} $5 $PU $6 $pulsefile $8;

done
done

echo -e "Hadding...";
hadd all_pulses_ID$1.root pulses_ID$1_*.root

echo -e "Calc weights...";
./calc_weightsDF.x all_pulses_ID$1.root final_output.root  1

echo -e "Copying on EOS...";
xrdcp --nopbar final_output.root  root://eos{eosinstance}.cern.ch/$7/weights_ID$1.root
'''

script = script.replace("{PUs}", " ".join(map(str, PUs))) 
script = script.replace("{Ampls}", " ".join(map(lambda a: "{:.1f}".format(a), signalAmpls)))
script = script.replace("{eosinstance}", args.eos)

# dataset of parameters
df = pd.read_csv(args.dof , sep=",")

existing_files = os.listdir(outputdir)

# Filtering strips and etarings
if args.strips != None:
    print("Filtering on strips: ", args.strips)
    df = df[df.stripid.isin(args.strips)]
if args.eta_rings != None:
    print("Filtering on eta_rings: ", args.eta_rings)
    df = df[df.eta_ring.isin(args.eta_rings)]

def generate(row):
    index, row = row
    ID = int(row.CMSSWID)
    params = []
    # Check if the file exists
    if not "weights_ID{}.root".format(ID) in existing_files:
        print("Adding ID: {}".format(ID))
        # add a line of parameters for this crystal
        params.append("{} {} {} {} {} {} {} {}".format(
            ID, row.alpha, row.beta, row.t0, 
            row.eta, nevents, outputdir, int(debug)))
    return params

params = []

for row in df.iterrows():
    params += generate(row)

print("{} generations".format(len(params)))

with open("run_condor.sh", "w") as oscr:
    oscr.write(script)

n_cluster = ceil(len(params)/ 20000)

for n in range(n_cluster):
    #writing down condor_job for this generation
    with open("condor_job{}.txt".format(n+1), "w") as condor_scr:
        condor_scr.write(condor.replace("{N}", str(n+1)))

    with open("args{}.txt".format(n+1), "w") as out:
        for i in range(20000):
            if (n*20000 + i) < len(params):
                out.write(params[n*20000 + i] +"\n")



