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
parser.add_argument("-t", "--train", type=str, help="Train structure 01", required=True)
parser.add_argument("-p", "--pu", nargs='+', type=int, help="Pileups", required=True)
parser.add_argument("-n", "--nevents", type=int, help="Number of events for each signal position", required=False, default=2000)
parser.add_argument("-st","--strip", type=int,  help="Strip ID", required=True)
parser.add_argument("-e", "--eos", type=str, default="user", help="EOS instance user/cms", required=False)
parser.add_argument("--debug", action="store_true", default=False, help="Activate debug output", required=False)
args = parser.parse_args()

signalAmpls = args.signal_amplitudes
PUs = args.pu
nevents = args.nevents
debug = args.debug
outputdir = args.outputdir

# parse train #nbunches-#nempty
full = int(args.train.split("-")[0])
empty = int(args.train.split("-")[1])
train = "1"*full + "0"*empty + "1"*full

condor= '''executable              = run_condor.sh
output                  = output{N}/$(ClusterId).$(ProcId).out
error                   = error{N}/$(ClusterId).$(ProcId).err
log                     = log{N}/$(ClusterId).log

transfer_input_files = generate.x, PileupPDF.root
transfer_output_files = ""

+JobFlavour = "espresso"
requirements = (OpSysAndVer=?= "CentOS7")

queue arguments from args{N}.txt
'''

script='''#!/bin/sh -e

#source /cvmfs/sft.cern.ch/lcg/views/LCG_94python3/x86_64-slc6-gcc7-opt/setup.sh
source /cvmfs/sft.cern.ch/lcg/views/dev3python3/latest/x86_64-centos7-gcc7-opt/setup.sh

outputdir=$1; shift; 

for Ampl in {Ampls}; do
for PU in {PUs}; do
    pulsefile=pulses_ID$1_PU${PU}_A${Ampl}_BX${10}.root;
    ./generate.x $1 $2 $3 $4 ${Ampl} $5 $PU $6 $pulsefile $7 $8 $9 ${10};

done
done

echo -e "Hadding...";
hadd all_pulses_ID$1.root pulses_ID$1_*.root

echo -e "Copying on EOS...";
xrdcp --nopbar all_pulses_ID$1.root  root://eos{eosinstance}.cern.ch/${outputdir}/samples_ID$1_BX${10}.root
'''

script = script.replace("{PUs}", " ".join(map(str, PUs))) 
script = script.replace("{Ampls}", " ".join(map(lambda a: "{:.1f}".format(a), signalAmpls)))
script = script.replace("{eosinstance}", args.eos)

# dataset of parameters
df = pd.read_csv(args.dof , sep=",")
existing_files = os.listdir(outputdir)
stripdata = df[df.stripid==args.strip]

params = []

for i, bx in enumerate(train):
    if bx == "1":
        # this is a collision BX
        for _, xtalrow in stripdata.iterrows():
            ID = xtalrow.CMSSWID
            if "samples_ID{}_BX{}.root".format(ID, i) in existing_files:
                continue
            params.append("{} {} {} {} {} {} {} {} {} {} {}".format(
                        outputdir, ID, xtalrow.alpha, xtalrow.beta, xtalrow.t0, 
                        xtalrow.eta, nevents, int(debug),
                        len(train), train, i )) 
   
print("{} generations".format(len(params)))

with open("run_condor.sh", "w") as oscr:
    oscr.write(script)

n_cluster = ceil(len(params)/ 10000)

for n in range(n_cluster):
    #writing down condor_job for this generation
    with open("condor_job{}.txt".format(n+1), "w") as condor_scr:
        condor_scr.write(condor.replace("{N}", str(n+1)))

    with open("args{}.txt".format(n+1), "w") as out:
        for i in range(10000):
            if (n*10000 + i) < len(params):
                out.write(params[n*10000 + i] +"\n")



