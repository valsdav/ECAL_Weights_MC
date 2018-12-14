import sys, os
import pandas as pd

if len(sys.argv)<4:
    print("Missing args: Weights file | inputtemplate | outputdir")
    exit(1)

weights_file = sys.argv[1]
inputtemplate = sys.argv[2]
outputdir = sys.argv[3]

# dataset of parameters
df = pd.read_csv(weights_file, sep=",")

arguments = []

for _, row in df.iterrows():
    #print("PU: {:.0f} | etaring: {:.0f}".format(row.PU, row.etaring))
    outputfile = outputdir+"/bias_ID{:.0f}_PU{:.0f}.root".format(row.etaring, row.PU)
    inputfile = inputtemplate + "{:.0f}.root".format(row.etaring)
    arguments.append("{} weights {} {} {} {} {} {}".format(
        inputfile, row.w1_mean, row.w2_mean, row.w3_mean, 
        row.w4_mean, row.w5_mean, outputfile
    ))


# Prepare condor jobs
condor = '''executable              = run_script.sh
output                  = output/bias.$(ClusterId).$(ProcId).out
error                   = error/bias.$(ClusterId).$(ProcId).err
log                     = log/bias.$(ClusterId).log
transfer_input_files    = extractBiasDF.x, run_script.sh

+JobFlavour             = "espresso"
queue arguments from arguments.txt
'''

script = '''#!/bin/sh

source /cvmfs/sft.cern.ch/lcg/views/LCG_94python3/x86_64-slc6-gcc7-opt/setup.sh

./extractBiasDF.x $1 $2 $3 $4 $5 $6 $7 $8
'''

with open("condor_job.txt", "w") as cnd_out:
    cnd_out.write(condor)

with open("arguments.txt", "w") as args:
    args.write("\n".join(arguments))

with open("run_script.sh", "w") as rs:
    rs.write(script)

os.system("condor_submit condor_job.txt")




