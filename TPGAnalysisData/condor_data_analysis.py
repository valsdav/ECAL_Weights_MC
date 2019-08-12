import sys
import os
import argparse
import random
from math import *

with open("command.txt", "w") as of:
    of.write(" ".join(["python"]+sys.argv))

parser = argparse.ArgumentParser()

#parser.add_argument("-f", "--files", type=str, help="input file", required=True)
parser.add_argument("-i", "--inputfile", type=str, help="inputfile", required=True)
parser.add_argument("-o", "--outputdir", type=str, help="outputdir", required=True)
parser.add_argument("--year", type=str, help="year", required=True)
parser.add_argument("-c", "--cmssw", type=str, help="CMSSW directory", required=True)
parser.add_argument("-q", "--queue", type=str, help="Condor queue", default="longlunch", required=True)
parser.add_argument("-e", "--eos", type=str, default="user", help="EOS instance user/cms", required=False)
parser.add_argument("--redo", action="store_true", default=False, help="Redo all files")
parser.add_argument("-wd", "--weights-dir", type=str, help="Weights dir", required=True)
parser.add_argument("-ws", "--weights-sets", type=str, nargs="+", help="Weights set list", required=True)
args = parser.parse_args()


# Prepare condor jobs
condor = '''executable              = run_script.sh
output                  = output/strips.$(ClusterId).$(ProcId).out
error                   = error/strips.$(ClusterId).$(ProcId).err
log                     = log/strips.$(ClusterId).log
transfer_input_files    = run_script.sh

+JobFlavour             = "{queue}"
queue arguments from arguments.txt
'''

condor = condor.replace("{queue}", args.queue)
user = os.environ["USER"]

script = '''#!/bin/sh -e

export X509_USER_PROXY=/afs/cern.ch/user/{user1}/{user}/.proxy
voms-proxy-info

cp -r {cmssw_loc} .
cd {cmssw_file}/src

echo -e "evaluate"
eval `scramv1 ru -sh`
export HOME='/afs/cern.ch/user/{user1}/{user}'

OUTPUTFILE=$1; shift; 
INPUTFILE=$1;
WEIGHTID=$2;
WEIGHTGROUP=$3;

cp $WEIGHTID weightidmap.db
cp $WEIGHTGROUP weightgroup.db

cd EcalTPGAnalysis/Scripts/TriggerAnalysis

echo -e "cmsRun..";

cmsRun runTPG_cfg_{year}.py inputfile=$INPUTFILE weightIdMap=`pwd`/weightidmap.db weightGroup=`pwd`/weightgroup.db

echo -e "Trasfer output...";
xrdcp --nopbar ECALTPGtree.root root://eos{eosinstance}.cern.ch/${OUTPUTFILE}

echo -e "DONE";
'''

script = script.replace("{eosinstance}", args.eos)
script = script.replace("{user1}", user[:1])
script = script.replace("{user}", user)
cmssw_file = args.cmssw.split("/")[-1]
script = script.replace("{cmssw_loc}", args.cmssw)
script = script.replace("{cmssw_file}", cmssw_file)
script = script.replace("{year}", args.year)

arguments= []
if not os.path.exists(args.outputdir):
    os.makedirs(args.outputdir)

outputfiles = [args.outputdir +"/"+f for f in os.listdir(args.outputdir)]

for ws in args.weights_sets:
 
        outputfile = args.outputdir + "/TPGanalysis_{}.root".format(ws)
        weights_idmap = args.weights_dir +"/EcalTPGWeightIdMap_{}.db".format(ws)
        weights_group = args.weights_dir +"/EcalTPGWeightGroup_{}.db".format(ws)

        if not args.redo and outputfile in outputfiles:
            continue
        arguments.append("{} {} {} {}".format(
            outputfile,args.inputfile, weights_idmap, weights_group))

print("Njobs: ", len(arguments))
    
with open("condor_job.txt", "w") as cnd_out:
    cnd_out.write(condor)

with open("arguments.txt", "w") as args:
    args.write("\n".join(arguments))

with open("run_script.sh", "w") as rs:
    rs.write(script)

#os.system("condor_submit condor_job.txt")




