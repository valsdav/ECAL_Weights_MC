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
parser.add_argument("-s", "--signal-amplitude", type=float, help="Signal amplitude", required=True)
parser.add_argument("-n", "--nevents", type=int, help="Number of events", required=False, default=2000)
args = parser.parse_args()

signalAmpl = args.signal_amplitude 
PUs = [0, 20, 30, 40, 50, 60, 80, 100, 150]
nevents = args.nevents
debug = 0
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

script='''#!/bin/sh

source /cvmfs/sft.cern.ch/lcg/views/LCG_94python3/x86_64-slc6-gcc7-opt/setup.sh

for PU in {PUs}; do
    pulsefile=pulses_ID$1_PU${PU}_A$5.root;
    ./generate.x $1 $2 $3 $4 $5 $6 $PU $7 $pulsefile $9;
    
done

echo -e "Hadding...";
hadd all_pulses_ID$1.root pulses_ID$1_*.root

echo -e "Calc weights...";
./calc_weightsDF.x all_pulses_ID$1.root final_output.root  1

echo -e "Copying on EOS...";
xrdcp --nopbar final_output.root  root://eosuser.cern.ch/$8/weights_ID$1_A$5.root
'''

existing_files = os.listdir(outputdir)

script = script.replace("{PUs}", " ".join(map(str, PUs))) 

# dataset of parameters
df = pd.read_csv(args.dof , sep="\t")

def generate(row):
    index, row = row
    ID = int(row.CMSSWID)
    params = []
    # Check if the file exists
    if not "weights_ID{}_A{:.1f}.root".format(ID,signalAmpl) in existing_files:
        print("Adding ID: {}".format(ID))
        # add a line of parameters for this crystal
        params.append("{} {} {} {} {:.1f} {} {} {} {}".format(
            ID, row.alpha, row.beta, row.t0, signalAmpl, 
            row.eta, nevents, outputdir, debug))
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



