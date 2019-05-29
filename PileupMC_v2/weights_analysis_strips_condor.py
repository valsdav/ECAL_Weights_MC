import sys
import os
import argparse
import pandas as pd
from math import ceil

#save command line
with open("command", "w") as cmd:
    cmd.write("python " + " ".join(sys.argv))


'''
This scripts runs hadd on single crystal files to 
group them in strips reading a DOF file
'''
parser = argparse.ArgumentParser()
parser.add_argument("-d", "--dof", type=str, help="DOF file", required=True)
parser.add_argument("-i", "--inputdir", type=str, help="Inputdir", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="Outputdir", required=True)
parser.add_argument("-s", "--signal-bins", nargs="+", type=str, help="Signal amplitude bins (ET per strip)", required=True)
parser.add_argument("-p", "--pu", nargs='+', type=int, help="Pileups", required=True)
parser.add_argument("-nw", "--nweights", type=int, help="Number of weights", required=True, default=5)
parser.add_argument("-nt", "--nthreads", type=int, help="Number of threads", required=False, default=3)
parser.add_argument("-st","--strips", type=int, nargs="+", help="Strips ID", required=False)
parser.add_argument("-er","--eta-rings", type=int, nargs="+", help="etarings", required=False)
parser.add_argument("-e", "--eos", type=str, default="user", help="EOS instance user/cms", required=False)
parser.add_argument("--fix", action="store_true", default=False, help="Check missing outputfiles", required=False)
args = parser.parse_args()



# dataset of parameters
dof = pd.read_csv(args.dof, sep=",")

# filtering strips and etarings
if args.strips != None:
    print("Filtering on strips: ", args.strips)
    dof = dof[dof.stripid.isin(args.strips)]
if args.eta_rings != None:
    print("Filtering on eta_rings: ", args.eta_rings)
    dof = dof[dof.eta_ring.isin(args.eta_rings)]

# PUs and signals
PU_string = ",".join(map(str, args.pu))
et_bins = ",".join(args.signal_bins)
print("Signal bins: ", et_bins)


# Prepare condor jobs
condor = '''executable              = run_script.sh
output                  = output{N}/strips.$(ClusterId).$(ProcId).out
error                   = error{N}/strips.$(ClusterId).$(ProcId).err
log                     = log{N}/strips.$(ClusterId).log
transfer_input_files    = weights_analysis_stripsDF.x, run_script.sh

+JobFlavour             = "espresso"
requirements = (OpSysAndVer=?= "CentOS7")

queue arguments from args{N}.txt
'''

script = '''#!/bin/sh -e

source /cvmfs/sft.cern.ch/lcg/views/LCG_95apython3/x86_64-centos7-gcc7-opt/setup.sh

OUTPUTFILE=$1;  shift

./weights_analysis_stripsDF.x temp_output $@;

echo -e "Copying result to: $OUTPUTFILE";
xrdcp --nopbar temp_output root://eos{eosinstance}.cern.ch/${OUTPUTFILE};

echo -e "done"

'''

script = script.replace("{eosinstance}", args.eos)

if args.fix:
    outputfiles = [args.outputdir +"/" + s for s in os.listdir(args.outputdir)]

inputfiles = [s for s in os.listdir(args.inputdir)]

arguments= []

for stripid, d in dof.groupby("stripid"):
    outputfile = "{}/weights_stripID{}.txt".format(args.outputdir, stripid)
    inputfilename = "samples_ID{}.root".format(stripid) 

    if inputfilename not in inputfiles:
        print("Missing input: ", inputfile)
        continue
    
    inputfile = "root://eos{0}.cern.ch/{1}/{2}".format(args.eos, args.inputdir, inputfilename)
   
    if args.fix and outputfile in outputfiles: 
        continue
                        
    arguments.append("{} {} {} {} {} {} {}".format(outputfile, PU_string, 
                et_bins, args.nweights, args.nthreads, stripid, inputfile))

print("Njobs: ", len(arguments))

njobspercluster = 20000
n_cluster = ceil(len(arguments)/ njobspercluster)

with open("run_script.sh", "w") as rs:
    rs.write(script)

for n in range(n_cluster):
    #writing down condor_job for this generation
    with open("condor_job{}.txt".format(n+1), "w") as condor_scr:
        condor_scr.write(condor.replace("{N}", str(n+1)))

    with open("args{}.txt".format(n+1), "w") as out:
        for i in range(njobspercluster):
            if (n*njobspercluster + i) < len(arguments):
                out.write(arguments[n*njobspercluster + i] +"\n")

    if not os.path.exists("log{}".format(n+1)):
        os.mkdir("log{}".format(n+1))
        os.mkdir("output{}".format(n+1))
        os.mkdir("error{}".format(n+1))




