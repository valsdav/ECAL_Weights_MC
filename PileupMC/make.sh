#!/bin/sh

g++ -o generate.x generate.cpp Pulse.cpp PileupMC.cpp `root-config --glibs --cflags` 


g++ -o calc_weights.x  calc_weights.cpp ComputeWeights.cpp `root-config --glibs --cflags` `clhep-config --libs --include`


g++ -o plotSamples.x plotSamples.cpp `root-config --glibs --cflags`