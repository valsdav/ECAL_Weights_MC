# Crystal data production

## Generate pulses

The pulses are generated with the script **generate.cpp** with the single crystal parameters read from a DOF file. 
The required arguments are:
```
./generate.x ID alpha beta t0  signalAmplitude  eta nPU nevents  output_file complete_info_flag
```

The **PileupMC** class is responsible for the pulses simulation and it uses the Pileup pdfs contained in the file *PileupPDF.root* for each eta interval. 

To compile the code for lxplus6:
```bash
source /cvmfs/sft.cern.ch/lcg/views/LCG_94python3/x86_64-slc6-gcc7-opt/setup.sh

g++ -o generate.x generate.cpp Pulse.cpp PileupMC.cpp  `root-config --libs --cflags`
```

## Calculate weights
The ideal weights are then calculated for each pulse using the algebrical procedure coded in **ComputerWeights.cpp**. 
The script used to calculate all the weights using as input the root files containing the pulses is: 

```
./calc_weightsDF.x input_file output_file complete_info_flag
```
The ouput_file contains only some information for each event and the 5 extracted weights. 
If *complete_info_flag==1* more info are saved in the root file.

To compile the code for lxplus6:
```bash
source /cvmfs/sft.cern.ch/lcg/views/LCG_94python3/x86_64-slc6-gcc7-opt/setup.sh

g++ -o calc_weightsDF.x calc_weightsDF.cpp ComputeWeights.cpp  `root-config --libs --cflags` `clhep-config --include` `clhep-config --libs` 
```

## Mass production on Condor
To production weights data for each crystal HTCondor jobs can be used. The script **preparare_wegithsGen_condor.py** 
prepares a single condor job for each crystal. Each job generates data for different pileups, calculates weights and produced a single final file.  A *DOF* (Degree Of Freedom) file is used to get the parameters for each crystal of ECAL. 

```
python preparare_wegithsGen_condor.py --dof filename --outpudir dirname --signal-amplitude 10.0 --nevents 2000
```
Several files are prepared since condor clusters can contain only 20k jobs each. 

To start the submission:
```
condor_submit condor_job*.txt
```

# Plot pulse shape

plotSamples

# Extract bias 

extractBias.cpp or extractBiasDF.C


