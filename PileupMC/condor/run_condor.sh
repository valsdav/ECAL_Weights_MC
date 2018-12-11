#!/bin/sh

source /cvmfs/sft.cern.ch/lcg/views/LCG_94python3/x86_64-slc6-gcc7-opt/setup.sh

for PU in 0 10 20 30 40 50 60 70 80 90 100 150; do
    echo -e "$8/output_ID$1_PU$PU_A$5.root";
    pulsefile=pulses_ID$1_PU${PU}_A$5.root;
    
    ./generate.x $1 $2 $3 $4 $5 $6 $PU $7 $pulsefile $9;
    
done

echo -e "Hadding...";
hadd all_pulses_ID$1.root pulses_ID$1_*.root

echo -e "Calc weights...";
./calc_weightsDF.x all_pulses_ID$1.root  $8/weights/weights_ID$1.root 1
