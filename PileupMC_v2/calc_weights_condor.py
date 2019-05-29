import sys, os
import pandas as pd
from multiprocessing import Pool
from math import ceil
import argparse

#save command line
with open("command", "w") as cmd:
    cmd.write("python " + " ".join(sys.argv))

# This script prepares arguments for condor jobs 
# to run the calculation of weights on input files with samples. 

parser = argparse.ArgumentParser()
parser.add_argument("-i", "--inputdir", type=str, help="output_dir", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="output_dir", required=True)
parser.add_argument("-nw", "--nweights", type=int, help="Number of weights",default=5, required=False)
parser.add_argument("-wfs", "--weights-first-sample", type=int, help="First sample for weights calculation (position from 1)", default=3, required=False)
parser.add_argument("-tw","--timing-weights", action="store_true", default=False, help="Calculate timing weights", required=False)
parser.add_argument("-e", "--eos", type=str, default="user", help="EOS instance user/cms", required=False)
args = parser.parse_args()


condor= '''executable              = run_condor.sh
output                  = output{N}/$(ClusterId).$(ProcId).out
error                   = error{N}/$(ClusterId).$(ProcId).err
log                     = log{N}/$(ClusterId).log

transfer_input_files = calc_weightsDF.x
transfer_output_files = ""

+JobFlavour = "microcentury"
requirements = (OpSysAndVer=?= "CentOS7")

queue arguments from args{N}.txt
'''


script='''#!/bin/sh -e

source /cvmfs/sft.cern.ch/lcg/views/LCG_95apython3/x86_64-centos7-gcc7-opt/setup.sh

echo -e "Calc weights...";
./calc_weightsDF.x ${1} final_output.root  1 {nweights} {weights_first_sample} ${3}

echo -e "Copying on EOS...";
xrdcp --nopbar final_output.root  root://eos{eosinstance}.cern.ch/${2}
'''

script = script.replace("{nweights}", str(args.nweights))
script = script.replace("{weights_first_sample}", str(args.weights_first_sample))
script = script.replace("{eosinstance}", args.eos)


inputfiles = [args.inputdir +"/" + f for f in os.listdir(args.inputdir)]
if not os.path.exists(args.outputdir):
    os.makedirs(args.outputdir)
existing_files = [args.outputdir +"/" + f for f in os.listdir(args.outputdir)]


params = []

for inputfile in inputfiles:
    
    outputfile = args.outputdir + "/" + inputfile.split("/")[-1]
    if outputfile in existing_files:
        continue
    
    params.append("{} {} {}".format( inputfile, outputfile, int(args.timing_weights)) )
        

print("{} generations".format(len(params)))

with open("run_condor.sh", "w") as oscr:
    oscr.write(script)

njobspercluster = 20000
n_cluster = ceil(len(params)/ njobspercluster)

for n in range(n_cluster):
    #writing down condor_job for this generation
    with open("condor_job{}.txt".format(n+1), "w") as condor_scr:
        condor_scr.write(condor.replace("{N}", str(n+1)))

    with open("args{}.txt".format(n+1), "w") as out:
        for i in range(njobspercluster):
            if (n*njobspercluster + i) < len(params):
                out.write(params[n*njobspercluster + i] +"\n")


    if not os.path.exists("log{}".format(n+1)):
        os.mkdir("log{}".format(n+1))
        os.mkdir("output{}".format(n+1))
        os.mkdir("error{}".format(n+1))