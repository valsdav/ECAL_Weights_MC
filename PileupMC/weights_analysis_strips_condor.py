import sys
import os
import argparse
import pandas as pd

'''
This scripts runs hadd on single crystal files to 
group them in strips reading a DOF file
'''
parser = argparse.ArgumentParser()
parser.add_argument("-d", "--dof", type=str, help="DOF file", required=True)
parser.add_argument("-i", "--inputdir", type=str, help="Inputdir", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="Outputdir", required=True)
parser.add_argument("-s", "--signal-amplitudes", nargs="+", type=float, help="Signal amplitude", required=True)
parser.add_argument("-p", "--pu", nargs='+', type=int, help="Pileups", required=True)
parser.add_argument("-nt", "--nthreads", type=int, help="Number of threads", required=False, default=3)
parser.add_argument("-st","--strips", type=int, nargs="+", help="Strips ID", required=False)
parser.add_argument("-er","--eta-rings", type=int, nargs="+", help="etarings", required=False)
parser.add_argument("-e", "--eos", type=str, default="user", help="EOS instance user/cms", required=False)
parser.add_argument("--fix", action="store_true", default=False, help="Check missing outputfiles", required=False)
args = parser.parse_args()


# dataset of parameters
dof = pd.read_csv(args.dof, sep="\t")

# filtering strips and etarings
if args.strips != None:
    print("Filtering on strips: ", args.strips)
    dof = dof[dof.stripid.isin(args.strips)]
if args.eta_rings != None:
    print("Filtering on eta_rings: ", args.eta_rings)
    dof = dof[dof.eta_ring.isin(args.eta_rings)]

# PUs and signals
PU_string = ",".join(map(str, args.pu))
S_string = ",".join(map(str, args.signal_amplitudes))

# Prepare condor jobs
condor = '''executable              = run_script.sh
output                  = output/strips.$(ClusterId).$(ProcId).out
error                   = error/strips.$(ClusterId).$(ProcId).err
log                     = log/strips.$(ClusterId).log
transfer_input_files    = weights_analysis_stripsDF.x, run_script.sh

+JobFlavour             = "espresso"
queue arguments from arguments.txt
'''

script = '''#!/bin/sh -e

#source /cvmfs/sft.cern.ch/lcg/views/LCG_94python3/x86_64-slc6-gcc7-opt/setup.sh
#source /cvmfs/sft-nightlies.cern.ch/lcg/views/dev3python3/latest/x86_64-slc6-gcc7-opt/setup.sh
source /cvmfs/sft.cern.ch/lcg/views/dev3python3/latest/x86_64-slc6-gcc7-opt/setup.sh

OUTPUTFILE=$1;  shift

./weights_analysis_stripsDF.x temp_output $@;

echo -e "Copying result to: $OUTPUTFILE";
xrdcp --nopbar temp_output root://eos{eosinstance}.cern.ch/${OUTPUTFILE};

echo -e "done"

'''

script = script.replace("{eosinstance}", args.eos)

if args.fix:
    outputfiles = [args.outputdir +"/" + s for s in os.listdir(args.outputdir)]

arguments= []

for stripid, d in dof.groupby("stripid"):
    outputfile = "{}/weights_stripID{}.txt".format(args.outputdir, stripid)
   
    if args.fix and outputfile in outputfiles: 
        continue
   
    inputfiles = []
    for xtal in d.CMSSWID:
        # xrootd protocol is used to read the data
        inputfiles.append("root://eos{0}.cern.ch/{1}/weights_ID{2}.root ".format(
                     args.eos, args.inputdir, xtal))
    
    arguments.append("{} {} {} {} {} {}".format(outputfile, PU_string, S_string, 
                args.nthreads, stripid, " ".join(inputfiles)))

print("Njobs: ", len(arguments))
    
with open("condor_job.txt", "w") as cnd_out:
    cnd_out.write(condor)

with open("arguments.txt", "w") as args:
    args.write("\n".join(arguments))

with open("run_script.sh", "w") as rs:
    rs.write(script)

#os.system("condor_submit condor_job.txt")




