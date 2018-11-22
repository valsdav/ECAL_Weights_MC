#!/bin/sh

g++ -o generate.x generate.cpp Pulse.cpp PileupMC.cpp `root-config --glibs --cflags` 


c++ -o calc_weights.x -g calc_weights.cpp ComputeWeights.cpp `root-config --glibs --cflags` `clhep-config --libs --include`


g++ -o plotSamples.x plotSamples.cpp `root-config --glibs --cflags`