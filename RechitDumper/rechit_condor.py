import sys
import os
import argparse

'''
This scripts runs hadd on single crystal files to 
group them in strips reading a DOF file
'''
parser = argparse.ArgumentParser()

parser.add_argument("-f", "--files", type=str, help="input file", required=True)
parser.add_argument("-n", "--nevents", type=int, help="n events", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="Outputdir", required=True)
parser.add_argument("-e", "--eos", type=str, default="user", help="EOS instance user/cms", required=False)
parser.add_argument("--fix", action="store_true", default=False, help="Check missing outputfiles", required=False)
args = parser.parse_args()


# Prepare condor jobs
condor = '''executable              = run_script.sh
output                  = output/strips.$(ClusterId).$(ProcId).out
error                   = error/strips.$(ClusterId).$(ProcId).err
log                     = log/strips.$(ClusterId).log
transfer_input_files    = run_script.sh

+JobFlavour             = "espresso"
queue arguments from arguments.txt
'''

user = os.environ["USER"]

script = '''#!/bin/sh -e

export X509_USER_PROXY=/afs/cern.ch/user/{user1}/{user}/.proxy
voms-proxy-info

cp -r  /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_1_7 .
cd CMSSW_10_1_7/src

echo -e "evaluate"
eval `scramv1 ru -sh`

OUTPUTFILE=$1;
INPUTFILE="$2";
NEVENTS=$3;

echo -e "cmsRun.."
cmsRun RechitDumper/RechitDumper/test/runRechitDumper.py inputFiles="${INPUTFILE}" outputFile=temp.root maxEvents=$NEVENTS

echo -e "Copying result to: $OUTPUTFILE";
xrdcp --nopbar temp_numEvent${NEVENTS}.root root://eos{eosinstance}.cern.ch/${OUTPUTFILE};

echo -e "DONE";
'''

script = script.replace("{eosinstance}", args.eos)
script = script.replace("{user1}", user[:1])
script = script.replace("{user}", user)

if args.fix:
    outputfiles = [args.outputdir +"/" + s for s in os.listdir(args.outputdir)]

arguments= []

with open(args.files) as inputfiles:
    files = [s[:-1] for s in inputfiles.readlines()]

    for i, file in enumerate(files):
        outfile = "{}/output_{}.root".format(args.outputdir, i)
        if args.fix and outfile in outputfiles:
            continue

        arguments.append("{} {} {}".format(outfile, file, args.nevents))


print("Njobs: ", len(arguments))
    
with open("condor_job.txt", "w") as cnd_out:
    cnd_out.write(condor)

with open("arguments.txt", "w") as args:
    args.write("\n".join(arguments))

with open("run_script.sh", "w") as rs:
    rs.write(script)

#os.system("condor_submit condor_job.txt")




