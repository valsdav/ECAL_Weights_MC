#!/bin/sh

g++ -o calc_weights$1.x calc_weights$1.cpp ComputeWeights.cpp -L/cvmfs/sft-nightlies.cern.ch/lcg/nightlies/dev3python3/Thu/ROOT/HEAD/x86_64-centos7-gcc7-opt/lib -lCore -lImt -lRIO -lNet -lHist -lGraf -lGraf3d -lGpad -lROOTVecOps -lTree -lTreePlayer -lRint -lPostscript -lMatrix -lPhysics -lMathCore -lThread -lMultiProc -lROOTDataFrame -pthread -lm -ldl -rdynamic -pthread -std=c++17 -m64 -I/cvmfs/sft-nightlies.cern.ch/lcg/nightlies/dev3python3/Thu/ROOT/HEAD/x86_64-centos7-gcc7-opt/include -I/cvmfs/sft-nightlies.cern.ch/lcg/views/dev3python3/Thu/x86_64-centos7-gcc7-opt/include -L/cvmfs/sft-nightlies.cern.ch/lcg/views/dev3python3/Thu/x86_64-centos7-gcc7-opt/lib -lCLHEP-2.4.1.0
