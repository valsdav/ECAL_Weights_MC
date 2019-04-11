import sys, os
import pandas as pd
from math import ceil
import argparse

'''
This script prepares the condor job to join the MC events for each strip. 
The events from each xtals are overimposed in single strip events summing the energies 
and amplitudes. 

N.B.: this script has been adopted to join the trainMC results, summing all the 
digis for same BX signals, by PU and S.
'''

#save command line
with open("command", "w") as cmd:
    cmd.write(" ".join(sys.argv))

parser = argparse.ArgumentParser()
parser.add_argument("-d", "--dof", type=str, help="DOF file", required=True)
parser.add_argument("-i", "--inputdir", type=str, help="Inputdir", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="Outputdir", required=True)
parser.add_argument("-s", "--signal-amplitudes", nargs='+', type=float, help="Signal amplitudes", required=True)
parser.add_argument("-p", "--pu", nargs='+', type=int, help="Pileups", required=True)
parser.add_argument("-t", "--train", type=str, help="Train structure 01", required=True)
parser.add_argument("--ntrains", type=int, help="Number of train repetetions", required=True)
parser.add_argument("-st","--strips", type=int, nargs="+", help="Strips ID", required=False)
parser.add_argument("-e", "--eos", type=str, default="user", help="EOS instance user/cms", required=False)
parser.add_argument("--fix", action="store_true", default=False, help="Check missing outputfiles", required=False)
args = parser.parse_args()

# Prepare condor jobs
condor = '''executable              = run_script.sh
output                  = output{N}/bias.$(ClusterId).$(ProcId).out
error                   = error{N}/bias.$(ClusterId).$(ProcId).err
log                     = log{N}/bias.$(ClusterId).log
transfer_input_files    = sum_events_stripDF.x, run_script.sh

+JobFlavour             = "espresso"
requirements = (OpSysAndVer=?= "CentOS7")

queue arguments from args{N}.txt
'''

script = '''#!/bin/sh -e 

source /cvmfs/sft.cern.ch/lcg/views/dev3python3/latest/x86_64-centos7-gcc7-opt/setup.sh

OUTPUTFILE=$1; shift

./sum_events_stripDF.x output_temp $@

echo -e "Copying result to: $OUTPUTFILE";
xrdcp --nopbar output_temp root://eos{eosinstance}.cern.ch/${OUTPUTFILE};
'''

script = script.replace("{eosinstance}", args.eos)

# parse train #nbunches-#nempty
full = int(args.train.split("-")[0])
empty = int(args.train.split("-")[1])
train = ("1"*full + "0"*empty)*args.ntrains + "1"*full
print("train: ", train)
BX0s = []
for bx,i in enumerate(train[full+empty:]):
    if i=="1":
        BX0s.append(str(full+empty+bx))
BX0string = " ".join(BX0s)
print("BX0: ", BX0string)

# dataset of parameters
dof = pd.read_csv(args.dof, sep=",")

if args.fix:
    outputfiles = [args.outputdir +"/" + s for s in os.listdir(args.outputdir)]

# PUs and signals
PU_string = ",".join(map(str, args.pu))
S_string = ",".join(map(str, args.signal_amplitudes))
BX0_string = ",".join(BX0s)

arguments = []

for stripid, df in dof.groupby("stripid"):
    xtals = dof[dof.stripid == stripid]
    inputfiles = []
    for xtalID in xtals["CMSSWID"]:
        inputfiles.append("root://eos{}.cern.ch/{}/samples_ID{:.0f}.root".format(
            args.eos, args.inputdir, xtalID))
    outputfile = args.outputdir +"/samples_stripID{}.root".format(stripid)
    
    if args.fix and outputfile in outputfiles:
        continue

    arguments.append("{} {} {} {} {}".format(
            outputfile, PU_string, S_string, BX0_string, " ".join(inputfiles))
        )


print("Njobs: ", len(arguments))

with open("run_script.sh", "w") as rs:
    rs.write(script)

n_cluster = ceil(len(arguments)/ 10000)

for n in range(n_cluster):
    #writing down condor_job for this generation
    with open("condor_job{}.txt".format(n+1), "w") as condor_scr:
        condor_scr.write(condor.replace("{N}", str(n+1)))

    with open("args{}.txt".format(n+1), "w") as out:
        for i in range(10000):
            if (n*10000 + i) < len(arguments):
                out.write(arguments[n*10000 + i] +"\n")


# os.system("condor_submit condor_job.txt")




