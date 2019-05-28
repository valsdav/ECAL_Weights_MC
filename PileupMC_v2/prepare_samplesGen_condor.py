import sys, os
import pandas as pd
from multiprocessing import Pool
from math import ceil
import argparse

#save command line
with open("command", "w") as cmd:
    cmd.write("python " + " ".join(sys.argv))

# This script prepares arguments for condor jobs 
# to run generate.x and calc_weightsDF.x for each crystal parameter
# DOF parameters of ECAL are read from the config file.

parser = argparse.ArgumentParser()
parser.add_argument("-d", "--dof", type=str, help="DOF file", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="output_dir", required=True)
parser.add_argument("-s", "--signal-amplitudes-file", type=str, help="Signal amplitudes file", required=True)
parser.add_argument("-t", "--train", type=str, help="Train structure (48-7)", required=True)
parser.add_argument("-tf", "--train-file", type=str, help="Train PU file", required=True)
parser.add_argument("-bx", "--fixed-bx", type=int, help="Optinal fixed BX for signal", required=False)
parser.add_argument("-p", "--pu", nargs='+', type=int, help="Pileup values", required=True)
parser.add_argument("-n", "--nevents", type=int, help="Number of events for each signal position", required=False, default=2000)
parser.add_argument("-st","--strips", type=int, nargs="+", help="Strips ID", required=False)
parser.add_argument("-er","--eta-rings", type=int, nargs="+", help="etarings", required=False)
parser.add_argument("-e", "--eos", type=str, default="user", help="EOS instance user/cms", required=False)
parser.add_argument("-cw","--calculate-weights", action="store_true", default=False, help="Activate debug output", required=False)
parser.add_argument("-nw", "--nweights", type=int, help="Number of weights",default=5, required=False)
parser.add_argument("-wfs", "--weights-first-sample", type=int, help="First sample for weights calculation (position from 1)", default=3, required=False)
parser.add_argument("--debug", action="store_true", default=False, help="Activate debug output", required=False)
args = parser.parse_args()


# parse train #nbunches-#nempty
full = int(args.train.split("-")[0])
empty = int(args.train.split("-")[1])
train = "1"*full + "0"*empty + "1"*full
print("train: ", train)

if args.fixed_bx == None:
    BX0s = []
    for bx,i in enumerate(train[full+empty:]):
        if i=="1":
            BX0s.append(str(full+empty+bx))
    BX0string = ",".join(BX0s)
    print("BX0: ", BX0string)
else:
    BX0string = str(args.fixed_bx)
    print("BX0: ", BX0string)

condor= '''executable              = run_condor.sh
output                  = output{N}/$(ClusterId).$(ProcId).out
error                   = error{N}/$(ClusterId).$(ProcId).err
log                     = log{N}/$(ClusterId).log

transfer_input_files = generate.x, calc_weightsDF.x, PileupPDF.root, {PU_train_BX_file}, {signalA_file} 
transfer_output_files = ""

+JobFlavour = "microcentury"
requirements = (OpSysAndVer=?= "CentOS7")

queue arguments from args{N}.txt
'''
condor = condor.replace("{signalA_file}", args.signal_amplitudes_file)
condor = condor.replace("{PU_train_BX_file}", args.train_file)

script='''#!/bin/sh -e

source /cvmfs/sft.cern.ch/lcg/views/LCG_95apython3/x86_64-centos7-gcc7-opt/setup.sh

outputdir=$1; shift; 

for PU in {PUs}; do
    pulsefile=pulses_ID$1_PU${PU}.root;
    #  stripID | alphas | betas | t0s | etas | amplitudeFile | nPU | PUtrainfile | BX0s | 
    #  number of events | outputfile | complete_info     
    ./generate.x $1 $2 $3 $4 $5 {signalA_file} ${PU} {PU_train_BX_file} $6 $7 ${pulsefile} $8;

done

echo -e "Hadding...";
hadd all_pulses_ID$1.root pulses_ID$1_*.root

{calc_weights_code}

echo -e "DONE!";
'''

calc_weights_code = '''
echo -e "Calc weights...";
./calc_weightsDF.x all_pulses_ID$1.root final_output.root  1  {nweights} {weights_first_sample}

echo -e "Copying on EOS...";
xrdcp --nopbar final_output.root  root://eos{eosinstance}.cern.ch/${outputdir}/samples_ID$1.root
'''

no_calc_weights_code = '''
echo -e "Copying on EOS...";
xrdcp --nopbar all_pulses_ID$1.root  root://eos{eosinstance}.cern.ch/${outputdir}/samples_ID$1.root
'''

if args.calculate_weights:
    calc_weights_code = calc_weights_code.replace("{nweights}", str(args.nweights))
    calc_weights_code = calc_weights_code.replace("{weights_first_sample}", str(args.weights_first_sample))
    script = script.replace("{calc_weights_code}", calc_weights_code)
else:
    script = script.replace("{calc_weights_code}", no_calc_weights_code)

script = script.replace("{PUs}", " ".join(map(str, args.pu))) 
script = script.replace("{signalA_file}", args.signal_amplitudes_file)
script = script.replace("{PU_train_BX_file}", args.train_file)
script = script.replace("{eosinstance}", args.eos)



# dataset of parameters
df = pd.read_csv(args.dof , sep=",")

if not os.path.exists(args.outputdir):
    os.makedirs(args.outputdir)

existing_files = os.listdir(args.outputdir)

# Filtering strips and etarings
if args.strips != None:
    print("Filtering on strips: ", args.strips)
    df = df[df.stripid.isin(args.strips)]
if args.eta_rings != None:
    print("Filtering on eta_rings: ", args.eta_rings)
    df = df[df.eta_ring.isin(args.eta_rings)]

    
params = []

for strip, dfs in df.groupby("stripid"):
    
    outputfile = "samples_ID{}.root".format(strip) 
    if outputfile in existing_files:
        continue
    
    alphas = []
    betas = []
    t0s = []
    etas = []

    for _, row in dfs.iterrows():
        alphas.append(str(row.alpha))
        betas.append(str(row.beta))
        t0s.append(str(row.t0))
        etas.append(str(row.eta))
    
    params.append("{} {} {} {} {} {} {} {} {}".format(
            args.outputdir, strip, ",".join(alphas), ",".join(betas), ",".join(t0s),
            ",".join(etas), BX0string, args.nevents, int(args.debug) 
         ))
        

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