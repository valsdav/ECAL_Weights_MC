#!/bin/sh

source /cvmfs/sft.cern.ch/lcg/views/LCG_95apython3/x86_64-centos7-gcc7-opt/setup.sh

g++ -o generate_nPU_trains.x generate_nPU_trains.cpp `root-config --libs --cflags`

g++ -o generate.x generate.cpp Pulse.cpp PileupMC.cpp  `root-config --libs --cflags`

g++ -o calc_weightsDF.x calc_weightsDF.cpp ComputeWeights.cpp \
             `root-config --libs --cflags` `clhep-config --include` `clhep-config --libs`

g++ -o weights_analysis_stripsDF.x weights_analysis_stripsDF.cpp `root-config --libs --cflags`

g++ -o extractBiasDF.x extractBiasDF.cpp  `root-config --libs --cflags`


