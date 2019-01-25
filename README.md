# ECAL L1 Trigger Primitive Generation algorithm optimization

This repository contains the code to perform the ECAL L1 TPG algorithm optimization for Run 3:
-  new FIR weights optimized for the updated shape parameters of all the crystals of ECAL
-  toy MC to study the effect of the PU on the weights optimization, especially for the last rings of the endcaps


## Components

* PulseShapeWeights:

This code can be used to derived new weights optimized for the updated pulse shape parameters for all the crystals of ECAL. 


* PileupMC:

This directory contains the code to perform a toy MC to include the effect of the PU on the FIR weights optimization. 

