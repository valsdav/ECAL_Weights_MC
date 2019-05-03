#!/bin/sh -x 

source /cvmfs/sft.cern.ch/lcg/views/dev3python3/latest/x86_64-slc6-gcc7-opt/setup.sh

g++ -o generate.x generate.cpp Pulse.cpp PileupMC.cpp  `root-config --libs --cflags`


g++ -o sum_events_stripDF.x sum_events_stripDF.cpp  `root-config --libs --cflags`

g++ -o extractBiasDF.x extractBiasDF.cpp  `root-config --libs --cflags`


