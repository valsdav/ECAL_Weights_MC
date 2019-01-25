#!/bin/bash

g++ -o run.x main.cpp  `clhep-config --libs` `clhep-config --include` `root-config --ldflags --glibs --cflags` -lstdc++fs
