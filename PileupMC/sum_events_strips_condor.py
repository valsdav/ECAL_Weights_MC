import sys, os
import pandas as pd
from math import ceil
import argparse

'''
This script prepares the condor job to join the MC events for each strip. 
The events from each xtals are overimposed in single strip events summing the energies 
and amplitudes. 
'''

parser = argparse.ArgumentParser()
parser.add_argument("-d", "--dof", type=str, help="DOF file", required=True)
parser.add_argument("-i", "--inputdir", type=str, help="Inputdir", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="Outputdir", required=True)
parser.add_argument("-s", "--signal-amplitudes", nargs='+', type=float, help="Signal amplitudes", required=True)
parser.add_argument("-p", "--pu", nargs='+', type=int, help="Pileups", required=True)
parser.add_argument("-st","--strips", type=int, nargs="+", help="Strips ID", required=False)
args = parser.parse_args()

# dataset of parameters
dof = pd.read_csv(args.dof, sep="\t")

# filtering strips
if args.strips != None:
    dof = dof[dof.stripid.isin(args.strips)]

# PUs and signals
PU_string = ",".join(map(str, args.pu))
S_string = ",".join(map(str, args.signal_amplitudes))

arguments = []

for stripid, df in dof.groupby("stripid"):
    xtals = dof[dof.stripid == stripid]
    inputfiles = []
    for xtalID in xtals["CMSSWID"]:
        inputfiles.append("root://eosuser.cern.ch/" + args.inputdir + "/weights_ID{:.0f}.root".format(xtalID))
    outputfile = args.outputdir +"/weights_stripID{}.root".format(stripid)
    arguments.append("{} {} {} {}".format(
        outputfile, PU_string, S_string, " ".join(inputfiles)))

print("Njobs: ", len(arguments))

# Prepare condor jobs
condor = '''executable              = run_script.sh
output                  = output{N}/bias.$(ClusterId).$(ProcId).out
error                   = error{N}/bias.$(ClusterId).$(ProcId).err
log                     = log{N}/bias.$(ClusterId).log
transfer_input_files    = sum_events_stripDF.x, run_script.sh

+JobFlavour             = "longlunch"
queue arguments from args{N}.txt
'''

script = '''#!/bin/sh -e 

#source /cvmfs/sft.cern.ch/lcg/views/LCG_94python3/x86_64-slc6-gcc7-opt/setup.sh
source /cvmfs/sft-nightlies.cern.ch/lcg/views/dev3python3/latest/x86_64-slc6-gcc7-opt/setup.sh

OUTPUTFILE=$1; shift

./sum_events_stripDF.x output_temp $@

echo -e "Copying result to: $OUTPUTFILE";
xrdcp --nopbar output_temp root://eosuser.cern.ch/${OUTPUTFILE};
'''

with open("run_script.sh", "w") as rs:
    rs.write(script)

n_cluster = ceil(len(arguments)/ 20000)

for n in range(n_cluster):
    #writing down condor_job for this generation
    with open("condor_job{}.txt".format(n+1), "w") as condor_scr:
        condor_scr.write(condor.replace("{N}", str(n+1)))

    with open("args{}.txt".format(n+1), "w") as out:
        for i in range(20000):
            if (n*20000 + i) < len(arguments):
                out.write(arguments[n*20000 + i] +"\n")


# os.system("condor_submit condor_job.txt")




