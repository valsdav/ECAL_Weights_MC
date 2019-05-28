#!/bin/sh -x 

#source /cvmfs/sft.cern.ch/lcg/views/dev3python3/latest/x86_64-centos7-gcc7-opt/setup.sh
source /cvmfs/sft.cern.ch/lcg/views/LCG_95apython3/x86_64-centos7-gcc7-opt/setup.sh

g++ -o generate.x generate.cpp Pulse.cpp PileupMC.cpp  `root-config --libs --cflags`


g++ -o calc_weightsDF.x calc_weightsDF.cpp ComputeWeights.cpp \
             `root-config --libs --cflags` `clhep-config --include` `clhep-config --libs`

g++ -o weights_analysis_stripsDF.x weights_analysis_stripsDF.cpp `root-config --libs --cflags`

g++ -o extractBiasDF.x extractBiasDF.cpp  `root-config --libs --cflags`


