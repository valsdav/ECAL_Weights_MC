import sys, os
import pandas as pd
from math import ceil
import argparse


parser = argparse.ArgumentParser()
parser.add_argument("-r", "--rechits", type=str, help="Rechits tree", required=True)
parser.add_argument("-i", "--inputdir", type=str, help="Directory with bias histograms", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="Outputdir", required=True)
parser.add_argument("-nt", "--nthreads", type=int, help="Number of threads", required=False, default=4)
parser.add_argument("-er","--eta-rings", type=int, nargs="+", help="etarings", required=False)
parser.add_argument("-e", "--eos", type=str, default="user", help="EOS instance user/cms", required=False)
parser.add_argument("--fix", action="store_true", default=False, help="Check missing outputfiles", required=False)
args = parser.parse_args()


# Prepare condor jobs
condor = '''executable              = run_script.sh
output                  = output{N}/bias.$(ClusterId).$(ProcId).out
error                   = error{N}/bias.$(ClusterId).$(ProcId).err
log                     = log{N}/bias.$(ClusterId).log
transfer_input_files    = estimateBiasFromData.x, run_script.sh

+JobFlavour             = "espresso"
queue arguments from args{N}.txt
'''

script = '''#!/bin/sh -e 

source /cvmfs/sft.cern.ch/lcg/views/dev3python3/latest/x86_64-slc6-gcc7-opt/setup.sh

OUTPUTFILE=$1; shift

./estimateBiasFromData.x output_temp $@

echo -e "Copying result to: $OUTPUTFILE";
xrdcp --nopbar output_temp root://eos{eosinstance}.cern.ch/${OUTPUTFILE};
'''
script = script.replace("{eosinstance}", args.eos)

if args.fix:
    outputfiles = [args.outputdir +"/" + s for s in os.listdir(args.outputdir)]

# Get bias sets
bias_sets = os.listdir(args.inputdir)

etarings = ",".join(map(str, args.eta_rings))

arguments = []

for  bset in bias_sets:
    arguments.append("{} {} {} {} {}".format(
        args.outputdir + "/" +bset, args.rechits, args.inputdir+"/"+bset,
        etarings, args.nthreads
    ))

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




