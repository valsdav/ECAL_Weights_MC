#! /bin/sh
# Generated by cmake


./testMatrix  \
  | diff -q -b - "/Users/meganstark/Computation*/opensource/CLHEP/Matrix/test/testMatrix.output" > /dev/null
