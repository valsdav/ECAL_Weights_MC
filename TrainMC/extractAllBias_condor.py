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
parser.add_argument("-s", "--signal-amplitudes", nargs='+', type=float, help="Signal amplitudes", required=True)
parser.add_argument("-p", "--pu", nargs='+', type=int, help="Pileups", required=True)
parser.add_argument("-ws", "--weights-signal", nargs='+', type=float, help="Select signal in weights set", required=False)
parser.add_argument("-wp", "--weights-pu", nargs='+', type=int, help="Select PU in weights set", required=False)
parser.add_argument("-st","--strips", type=int, nargs="+", help="Strips ID", required=False)
parser.add_argument("-er","--eta-rings", type=int, nargs="+", help="etarings", required=False)
parser.add_argument("-e", "--eos", type=str, default="user", help="EOS instance user/cms", required=False)
parser.add_argument("--fix", action="store_true", default=False, help="Check missing outputfiles", required=False)
parser.add_argument("--enc", action="store_true", default=False, help="Use encoded weights", required=False)
parser.add_argument("--fixedweights", action="store_true", default=False, help="Use fixed weights", required=False)
args = parser.parse_args()


# Prepare condor jobs
condor = '''executable              = run_script.sh
output                  = output{N}/bias.$(ClusterId).$(ProcId).out
error                   = error{N}/bias.$(ClusterId).$(ProcId).err
log                     = log{N}/bias.$(ClusterId).log
transfer_input_files    = extractBiasDF.x, run_script.sh

+JobFlavour             = "espresso"
requirements = (OpSysAndVer=?= "CentOS7")

queue arguments from args{N}.txt
'''

script = '''#!/bin/sh -e 

source /cvmfs/sft.cern.ch/lcg/views/dev3python3/latest/x86_64-centos7-gcc7-opt/setup.sh

OUTPUTFILE=$1; shift

./extractBiasDF.x output_temp $@

echo -e "Copying result to: $OUTPUTFILE";
xrdcp --nopbar output_temp root://eos{eosinstance}.cern.ch/${OUTPUTFILE};
'''
script = script.replace("{eosinstance}", args.eos)

if args.fix:
    outputfiles = [args.outputdir +"/" + s for s in os.listdir(args.outputdir)]

# dataset of parameters
dfw = pd.read_csv(args.weights_file, sep=",")
dof = pd.read_csv(args.dof, sep=",")

# filtering strips from weights file
if args.strips != None:
    print("Filtering on strips: ", args.strips)
    dfw = dfw[dfw.stripid.isin(args.strips)]

if not args.fixedweights:
    # filtering on wS and wPU
    if args.weights_signal != None:
        print("Filtering on wS: ", args.weights_signal)
        dfw = dfw[dfw.S.isin(args.weights_signal)]
    if args.weights_pu != None:
        print("Filtering on wPU: ", args.weights_pu)
        dfw = dfw[dfw.PU.isin(args.weights_pu)]


# PUs and signals
PU_string = ",".join(map(str, args.pu))
S_string = ",".join(map(str, args.signal_amplitudes))

arguments = []

for stripid, df in dfw.groupby("stripid"):
    eta_ring = dof[dof.stripid == stripid].eta_ring.unique()[0]
    # filter on eta_rings
    if args.eta_rings != None and (not eta_ring in args.eta_rings): continue

    inputfile = "root://eos{}.cern.ch/{}/samples_stripID{}.root".format(
                             args.eos, args.inputdir,stripid)
    for _, row in df.iterrows():
        if args.mode ==1:
            ext = "root"
        else:
            ext = "txt"
        
        if args.fixedweights:
            outputfile = "{}/bias_stripID{}.{}".format(
                    args.outputdir, stripid, ext)
        else:
            outputfile = "{}/bias_stripID{}_PU{:.0f}_S{:.0f}.{}".format(
                    args.outputdir, stripid, row.PU, row.S, ext)
                    
        if args.fix and outputfile in outputfiles:
            continue

        if args.enc :
            # Use encoding (1/64) fixed weights
            weights = [row.w1c, row.w2c, row.w3c, row.w4c, row.w5c]
        else:
            weights = [row.w1, row.w2, row.w3, row.w4, row.w5 ]
                
        arguments.append("{} {} {} {} {} {} {} {} {} {} {}".format(
                        outputfile, inputfile, PU_string,
                        S_string, args.mode, args.nthreads,
                        *weights)
        )


print("Njobs: ", len(arguments))

with open("run_script.sh", "w") as rs:
    rs.write(script)

njobspercluster = 20000
n_cluster = ceil(len(arguments)/ njobspercluster)

for n in range(n_cluster):
    #writing down condor_job for this generation
    with open("condor_job{}.txt".format(n+1), "w") as condor_scr:
        condor_scr.write(condor.replace("{N}", str(n+1)))

    with open("args{}.txt".format(n+1), "w") as out:
        for i in range(njobspercluster):
            if (n*njobspercluster + i) < len(arguments):
                out.write(arguments[n*njobspercluster + i] +"\n")



# os.system("condor_submit condor_job.txt")




