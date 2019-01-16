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

To compile the code for lxplus6 (more machines on condor):
```bash
source /cvmfs/sft.cern.ch/lcg/views/LCG_94python3/x86_64-slc6-gcc7-opt/setup.sh

g++ -o calc_weightsDF.x calc_weightsDF.cpp ComputeWeights.cpp  `root-config --libs --cflags` `clhep-config --include` `clhep-config --libs` 
```

## Mass production on Condor
To production weights data for each crystal we can use HTCondor jobs. The script **preparare_wegithsGen_condor.py** 
prepares a single condor job for each crystal. Each job generates data for different pileups and different amplitudes,  calculates weights and produced a single final file.  A *DOF* (Degree Of Freedom) file is used to get the parameters for each crystal of ECAL. 

```
python preparare_wegithsGen_condor.py --dof filename --outpudir dirname --signal-amplitudes (list) --pu (list) --nevents 2000 [-st strip list]
```
The *--signal-amplitudes (-s)* option accepts a list of amplitudes, whereas the *--pu (-p)* option a list of PU values. The optional option *--strips (-st)* can be used to filter the wanted strips ids. 

Several files are prepared since condor clusters can contain only 20k jobs each. 

To start the submission:
```
mkdir log1 log2 log3 log4 output1 output2 output3 output4 error1 error2 error3 error4

condor_submit condor_job1.txt
condor_submit condor_job2.txt
condor_submit condor_job3.txt
condor_submit condor_job4.txt
```

If the output directory contains already data, the script skips the jobs already completed previously. 

# Analyse weights distribution: by strip

## Plot weights mean and pileup effect

The next step of the analysis is the extraction of mean weights for different PU values for all the strip. The MC samples of all the crystals that form a strip are merged before extracting the mean of the weights calculated for each event. 

The script **weights_analysis_strips_condor.py** prepares a condor job for each strip. The xtals of each strip are read from the DOF file and read by the job from the eos directory containing single xtal files (no need to join the root files before).
Each job outputs a text file containing the weights means for each PU. 

The macro used to calculate the mean weights for each pileup in the condor job is **weights_analysis_stripsDF.cpp**. To compile it for lxplus6 (with updated Root 6.17 Dataframe):

```bash
source /cvmfs/sft-nightlies.cern.ch/lcg/views/dev3python3/latest/x86_64-slc6-gcc7-opt/setup.sh
g++ -o weights_analysis_stripsDF.x weights_analysis_stripsDF.cpp  `root-config --libs --cflags` -I"/cvmfs/sft-nightlies.cern.ch/lcg/views/dev3python3/latest/x86_64-slc6-gcc7-opt/include"
```

To prepare the condor jobs run the script:
```bash
python weights_analysis_strips_condor.py --dof DOF_file --inputdir  directory_xtal_data --outputdir eos_dir -s signalAmplitudes [-st strips list]
```
Then submit the jobs to condor
```
mkdir output log error
condor_submit condor_job.txt
```

When all the jobs will be completed, a single dataset with all the weights for all the strips can be created with the script **joinStripWeights.py**

```
python joinStripWeights.py --dof DOF_file -i inputdir -o outputfile -s signalAmplitude
```


# Extract bias 

extractBias.cpp or extractBiasDF.C



