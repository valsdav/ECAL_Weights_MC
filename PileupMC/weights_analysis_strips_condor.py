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
parser.add_argument("-s", "--signal-amplitude", type=float, help="Signal amplitude", required=True)
parser.add_argument("-nt", "--nthreads", type=int, help="Number of threads", required=False, default=3)
args = parser.parse_args()

inputdir = args.inputdir
outputdir = args.outputdir
signalAmpl = args.signal_amplitude
nthreads = args.nthreads

# dataset of parameters
df = pd.read_csv(args.dof, sep="\t")
df = df[df.stripid!= 0]

# Prepare condor jobs
condor = '''executable              = run_script.sh
output                  = output/strips.$(ClusterId).$(ProcId).out
error                   = error/strips.$(ClusterId).$(ProcId).err
log                     = log/strips.$(ClusterId).log
transfer_input_files    = weights_analysis_stripsDF.x, run_script.sh

+JobFlavour             = "espresso"
queue arguments from arguments.txt
'''

script = '''#!/bin/sh

source /cvmfs/sft.cern.ch/lcg/views/LCG_94python3/x86_64-slc6-gcc7-opt/setup.sh

./weights_analysis_stripsDF.x output.txt $2 $3 $4;

echo -e "Copying on EOS: $1";
xrdcp --nopbar output.txt root://eosuser.cern.ch/$1;
'''

arguments= []

for strip, d in df.groupby("stripid"):
    command = "{0}/weights_stripID{1:.0f}_A{2:.1f}.txt {3} ".format(
                    outputdir, strip, signalAmpl, nthreads)
    for xtal in d.CMSSWID:
        # xrootd protocol is used to read the data
        command += "root://eosuser.cern.ch/{0}/weights_ID{1}_A{2:.1f}.root ".format(inputdir, xtal, signalAmpl)
    arguments.append(command)
    
    
with open("condor_job.txt", "w") as cnd_out:
    cnd_out.write(condor)

with open("arguments.txt", "w") as args:
    args.write("\n".join(arguments))

with open("run_script.sh", "w") as rs:
    rs.write(script)

#os.system("condor_submit condor_job.txt")




