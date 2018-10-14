# ECAL Weights

The purpose of this repository is to compute ECAL TPG weights, model ECAL electronics responses with analytic waveforms, and calculate reconstructed amplitude using any desired weights and waveform samples. A useful feature of this repository is the application of timeshifts on analytic waveforms, allowing one to calculate the bias introduced in energy reconstruction due to these timeshifts. Files are mainly written in C++ with some Python. 

## ComputeWeights

This folder contains a main function, main.cpp. To compile on Lxplus, you first need to [install CLHEP](https://gitlab.cern.ch/compass-tgeant/TGEANT/wikis/Installation-Guide-AGKetzer-Bonn,-lxplus-CERN). After installing CLHEP, you can check the necessary compilation flags with: clhep-config --include, clhep-config --libs.

On my lxplus, for example, main.cpp is compiled with the command ```g++ -std=c++11 -o run.x main.cpp -L"/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/Tools/clhep/install/lib" -lCLHEP-2.4.1.0 -I"/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/Tools/clhep/install/include" `root-config --ldflags --glibs --cflags` ```. This will produce an executable run.x. This takes command line arguments when run, of the form: ```executable.x verbosity tMax dofitbaseline dofittime npulsesamples npresamples pedestal ParameterYear Max_Rows note```. For example, I run this with: ```./run.x 0 3 1 0 5 0 0 2018 -1 Oct12```.

When run, this program reads two text files from the data folder: ECAL crystals degrees of freedom, and ECAL crystals parameters. These files should be of the following format:

**DOF.txt**

|  cmsswId  | ietaix | iphiiy | 0iz |     eta    |
| ----------|--------|--------|-----|------------|
| 838861313 |   -1   |   1    |  0  | -0.0124339 |
| 838861314 |   -1   |   2    |  0  | -0.0124228 |

.
.
.

**XTAL_Params_XXXX.txt**

|  cmsswId  |    A     |   t_0   |  alpha  |  beta   |
| ----------|----------|---------|---------|---------|
| 838861313 | 0.240791 | 121.44  | 1.18942 | 40.1906 |
| 838861314 | 0.241159 | 121.542 | 1.14772 | 40.8894 |

.
.
.

The main function, for each cmsswId which has a row in both of these data files, will produce an analytic waveform representing the detector response for this crystal, sample the waveform every 25ns (this can be configured), and input these samples into the ComputeWeights algorithm implemented in ComputeWeights.cpp and ComputeWeights.h. This will create a set of weights which will return a bias of zero when multiplied by these samples. This set of weights is the crystal's Ideal Weights. They are saved into an output file in ComputeWeights/bin which will have rows of the form:

cmsswid	ietaix	iphiiy	0iz	eta	A	t_0	alpha	beta	W

Where W represents 10 columns containing the 10 ideal weights for the waveform samples. 

## ParamReco

In this directory, the main function main.cpp is compiled in the same way as the ComputeWeights main function (see above). The executable inputs however, are different. For example, to create the root files required for the plotting of average bias vs. time shift with different pseudorapidity ranges, one would use the command: ``` ./run.x EC -3,3,0.1 online 2018 -1 note ```. EC means eta curve, -3,3,0.1 means the time shift range should be from -3ns to 3ns with 0.1ns steps, online means to use online weights defined in the preamble of the main function, 2018 means to use the 2018 parameters for producing detector responses, -1 means to read all lines, and note is a string that will be added to the end of the output files. The output of this will be root files placed in the bin, one for each eta range. These will contain 2D histograms of average bias vs. time shift for the given eta range. 

## Plot

In order to combine output root files from ParamReco, for example all eta ranges into a single plot, you can use plot.py. An example of how to run this is with the command ```python plot.py -p ../ParamReco/bin,-3_3,BR,-0.22,0.16```. This will search the directory bin for data files with the time shift range -3ns to 3ns, and plot them on the same axis with the legend in the bottom right with a y range of -0.22 to 0.16. 
