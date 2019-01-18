import sys, os
import pandas as pd
from math import ceil
import argparse


parser = argparse.ArgumentParser()
parser.add_argument("-d", "--dof", type=str, help="DOF file", required=True)
parser.add_argument("-w", "--weights-file", type=str, help="Weights file", required=True)
parser.add_argument("-i", "--inputdir", type=str, help="Inputdir", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="Outputdir", required=True)
parser.add_argument("-m", "--mode", type=int, help="1=rootfile, 2=stats", required=True)
parser.add_argument("-nt", "--nthreads", type=int, help="Number of threads", required=False, default=4)
parser.add_argument("-s", "--signal-amplitudes", type=float, nargs="+", help="Signal amplitudes", required=True)
args = parser.parse_args()

# dataset of parameters
dfw = pd.read_csv(args.weights_file, sep="\t")
dof = pd.read_csv(args.dof, sep="\t")

if args.signal_amplitudes != None:
    dfw = dfw[dfw.S.isin(args.signal_amplitudes)]

arguments = []

for stripid, df in dfw.groupby("stripid"):
    xtals = dof[dof.stripid == stripid]
    
    for xtalID in xtals["CMSSWID"]:
        for _, row in df.iterrows():
            if args.mode ==1:
                outputfile = args.outputdir+"/bias_ID{:.0f}_PU{:.0f}_S{:.0f}.root".format(
                    xtalID, row.PU, row.S)
            elif args.mode ==2:
                outputfile = args.outputdir+"/bias_ID{:.0f}_PU{:.0f}_S{:.0f}.txt".format(
                    xtalID, row.PU, row.S)
            inputfile = "root://eosuser.cern.ch/" + args.inputdir + "/weights_ID{:.0f}.root".format(xtalID)
            arguments.append("{} {} weights {} {} {} {} {} {} {}".format(
                outputfile, inputfile, row.w1, row.w2, row.w3, 
                row.w4, row.w5, args.mode, args.nthreads )
                )

print("Njobs: ", len(arguments))

# Prepare condor jobs
condor = '''executable              = run_script.sh
output                  = output{N}/bias.$(ClusterId).$(ProcId).out
error                   = error{N}/bias.$(ClusterId).$(ProcId).err
log                     = log{N}/bias.$(ClusterId).log
transfer_input_files    = extractBiasDF.x, run_script.sh

+JobFlavour             = "espresso"
queue arguments from args{N}.txt
'''

script = '''#!/bin/sh -e 

#source /cvmfs/sft.cern.ch/lcg/views/LCG_94python3/x86_64-slc6-gcc7-opt/setup.sh
source /cvmfs/sft-nightlies.cern.ch/lcg/views/dev3python3/latest/x86_64-slc6-gcc7-opt/setup.sh

OUTPUTFILE=$1; shift

./extractBiasDF.x output_temp $@

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




