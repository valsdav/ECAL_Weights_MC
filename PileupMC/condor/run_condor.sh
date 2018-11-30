#!/bin/sh

source /afs/cern.ch/sw/lcg/external/gcc/4.9/x86_64-slc6-gcc49-opt/setup.sh 
source /afs/cern.ch/sw/lcg/app/releases/ROOT/6.06.06/x86_64-slc6-gcc49-opt/root/bin/thisroot.sh
export LD_LIBRARY_PATH=/afs/cern.ch/work/d/dvalsecc/private/Tools/clhep/install/lib/:$LD_LIBRARY_PATH


for PU in 0 10 20 30 40 50 60 70 80 90 100 150; do
    echo -e "$8/output_ID$1_PU$PU_A$5.root";
    ./generate.x $1 $2 $3 $4 $5 $6 $PU $7 $8/output_ID$1_PU${PU}_A$5.root $9;

done