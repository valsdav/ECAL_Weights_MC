import sys
import os

'''
This scripts runs hadd on single crystal files to 
group them in strips reading a DOF file
'''

if len(sys.argv)< 4:
    print("Missing args: DOF file | inputdir | outputdir")
    exit(1)


inputdir = sys.argv[2]
outputdir = sys.argv[3]

# dataset of parameters
df = pd.read_csv(sys.argv[1], sep="\t")
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

./weights_analysis_stripsDF.x $1 $2 $3 $4
'''

arguments= []

for strip in df.stripid.unique():
    arguments.append("{0}/strip_ID{1:.0f}.root 10.0 {2}/weights_stripID{1:.0f}.txt 3".format(
        inputdir, round(strip), outputdir ))
    
with open("condor_job.txt", "w") as cnd_out:
    cnd_out.write(condor)

with open("arguments.txt", "w") as args:
    args.write("\n".join(arguments))

with open("run_script.sh", "w") as rs:
    rs.write(script)

os.system("condor_submit condor_job.txt")




