#!/bin/sh

if [[ $1 -eq 1 ]]; then
source /cvmfs/sft.cern.ch/lcg/views/LCG_94python3/x86_64-slc6-gcc7-opt/setup.sh
fi

if [[ $1 -eq 2 ]]; then
#source /cvmfs/sft-nightlies.cern.ch/lcg/views/dev3python3/latest/x86_64-slc6-gcc7-opt/setup.sh
source /cvmfs/sft.cern.ch/lcg/views/dev3python3/latest/x86_64-slc6-gcc7-opt/setup.sh
fi