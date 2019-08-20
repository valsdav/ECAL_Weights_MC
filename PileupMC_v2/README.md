# PileupMC
This package contains all the scripts and parameters needed to perform a standalone simulation of the **Trigger Primitives Generation** (TPG) of ECAL including PU pulses simulation and LHC bunch crossings (BX) train schema. 

# Compile all scripts
Environment for lxplus7
```
source /cvmfs/sft.cern.ch/lcg/views/LCG_95apython3/x86_64-centos7-gcc7-opt/setup.sh
```

Just run the **build.sh** script on lxplus7. 

# Prepare simulation conditions
This package can simulate different BX schema and PU levels. To do so you have to prepare the input of the simulations: 

- Number of PU interactions along the train: 

The script **generate_nPU_train.x** prepare a root file containing the number of PU interactions for each BX for each event of the
specified train. They are samples using a Poissonian distribution with the given mean value.

```
./generate_nPU_trains.x  nPU-list| number of events | output_file | nBXs | train_mask 
```
For example:
```
./generate_nPU_trains.x  10,20,40  1000000  output_nPU.root 20  11111111000011111111
```
This will prepare a root file for 8b4e train simulation, including the gap, for nPU 10, 20, 40.  The *train mask* parameter can be used to prepare whatever LHC schema one wants to simulate. 

- Signal ET spectrum: 
The simulation uses a spectrum of energy given by the user as true in-time amplitude **by strip**. The spectrum must be given as an histogram in **ET (GeV)**. To prepare the spectrum with a uniform probability distribution for several specified bins of energies you can use the script **generate_ET_spectrum.py**

```
usage: generate_ET_spectrum.py [-h] -o OUTPUTFILE [-e ET_BINS [ET_BINS ...]]

optional arguments:
  -h, --help            show this help message and exit
  -o OUTPUTFILE, --outputfile OUTPUTFILE
                        output_file
  -e ET_BINS [ET_BINS ...], --et-bins ET_BINS [ET_BINS ...]
                        ET bins
```
Example:
```
python generate_ET_spectrum.py  -o spectrum.root --et-bins  1-2.5 4-10 12.5-13
```
This will generate a spectrum of energy with uniform probability between the requested bins. 



# Crystal data production
Now that the inputs of the simulation are ready you can start with the generation of the samples for each strip. 

## Generate pulses

The pulses are generated with the script **generate.cpp**: for each event the PU pulses and signal pulse are simulated along the train of BXs for all the crystals of a strip. A windows of 10 samples is saved around the signal pulse in the standard ECAL position (from BX0-3) and the samples are summed inside the strip. 

The **PileupMC** class is responsible for the pulses simulation and it uses the Pileup pdfs contained in the file *PileupPDF.root* for each eta interval and the provided signal spectrum and number of PU interactions for each event generated before.  

## Mass production on Condor
To generate pulses for each strip in ECAL you can use the script **preparare_samplesGen_condor.py**. This will prepare a Condor job for each strip generation. Each job generates samples for given PU level. 

```
python prepare_samplesGen_condor.py [-h] -d DOF -o OUTPUTDIR -s
                                    SIGNAL_AMPLITUDES_FILE -t TRAIN -nt
                                    NTRAINS -tf TRAIN_FILE [-bx FIXED_BX] -p
                                    PU [PU ...] [-n NEVENTS]
                                    [-st STRIPS [STRIPS ...]]
                                    [-er ETA_RINGS [ETA_RINGS ...]] [-e EOS]
                                    [-cw] [-nw NWEIGHTS]
                                    [-wfs WEIGHTS_FIRST_SAMPLE] [--debug]
                                    [--redo]

optional arguments:
  -h, --help            show this help message and exit
  -d DOF, --dof DOF     DOF file
  -o OUTPUTDIR, --outputdir OUTPUTDIR
                        output_dir
  -s SIGNAL_AMPLITUDES_FILE, --signal-amplitudes-file SIGNAL_AMPLITUDES_FILE
                        Signal amplitudes file
  -t TRAIN, --train TRAIN
                        Train structure (48-7)
  -nt NTRAINS, --ntrains NTRAINS
                        Number of train repetition
  -tf TRAIN_FILE, --train-file TRAIN_FILE
                        Train PU file
  -bx FIXED_BX, --fixed-bx FIXED_BX
                        Fixed BX for signal
  -p PU [PU ...], --pu PU [PU ...]
                        Pileup values
  -n NEVENTS, --nevents NEVENTS
                        Number of events for each signal position
  -st STRIPS [STRIPS ...], --strips STRIPS [STRIPS ...]
                        Strips ID
  -er ETA_RINGS [ETA_RINGS ...], --eta-rings ETA_RINGS [ETA_RINGS ...]
                        etarings
  -e EOS, --eos EOS     EOS instance user/cms
  -cw, --calculate-weights
                        Activate weights calculation
  -nw NWEIGHTS, --nweights NWEIGHTS
                        Number of weights
  -wfs WEIGHTS_FIRST_SAMPLE, --weights-first-sample WEIGHTS_FIRST_SAMPLE
                        First sample for weights calculation (position from 1)
  --debug               Activate debug output
  --redo                Redo all jobs
```

The program will generate pulses N events (given by parameter *--nevents*) for each active BX in the train file given with *--train* parameter. 
Whereas, to run the simulation at a fixed BX0 the parameter *--fixed-bx* must be provided.

A *DOF* (Degree Of Freedom) file is used to get the parameters for each crystal of ECAL and must be provided with *--dof* parameter.

The *--signal-amplitudes-file (-s)* option requires a root file with the requested ET spectrum **by strip**. It can be generated following the instructions above.

The *--pu* parameter sets the list of PU condition to be used for the simulation. N events will be generated in each BX for each PU.  The PU levels must match the ones provided in the train file. 

The optional options *--strips (-st)* or *--eta-rings (-er)*  can be used to filter the wanted strips ids or eta rings. 

The calculation of optimal weights for each event can be triggered with the flag *--calculate-weights*. The number of weights (*--nweights*) and the start sample (*--weights-first-sample*) counting from 1 in the 10 BX window can be provided. The standard correspond to the current configuration of 5 weights starting from the third sample. 


Several condor submission files are prepared since condor clusters can contain only 20k jobs each. 

To start the submission:
```
mkdir log1 log2 output1 output2 error1 error2 ...

condor_submit condor_job1.txt
condor_submit condor_job2.txt
...
```

If the output directory contains already files, the script automatically skips the jobs already completed previously. If you want to explicity redo those  simulations you should use *--redo* flag.


# Weights calculation
The ideal weights are calculated for each pulse using the algebrical procedure coded in **ComputerWeights.cpp**. 
The script used to calculate all the weights using as input the root files containing the pulses is: 

```
./calc_weightsDF.x      input_file | output_file | complete_info_flag | 
                          nweights | firstsample | timing-weights
```
The number of weights and the starting BX for their application are configurable as parameters of the program. 

If *complete_info_flag=1* more info are saved in the root file.
Timing weights can be extracted using the parameter *timing-weights=1*.

The input of the program is a root file containing several different pulses. The output is a root file containing a TTree with **weights calculated for each event**. Since each event has a different pulse shape, weights will be all different and a statistical analysis is needed.

The weights are calculated in the pulse generation step (see above)**only if the flag** *--calculate-weights* is activated. 

## Weight distribution analysis

The next step of the analysis is the extraction of mean weights for different PU values for **all the strips**. The MC samples of all the crystals that form a strip are merged before extracting the mean of the weights calculated for each event. 

The script **weights_analysis_strips_condor.py** prepares a condor job for each strip. The xtals of each strip are read from the DOF file and read by the job from the eos directory containing single xtal files (no need to join the root files before).
Each job outputs one text file for each strips containing the weights means for each PU and signal amplitude 

The macro used to calculate the mean weights for each pileup in the condor job is **weights_analysis_stripsDF.cpp**.

To prepare the condor jobs run the script:
```bash
python weights_analysis_strips_condor.py [-h] -d DOF -i INPUTDIR -o OUTPUTDIR
                                         -s SIGNAL_AMPLITUDES
                                         [SIGNAL_AMPLITUDES ...] -p PU
                                         [PU ...] [-nt NTHREADS]
                                         [-st STRIPS [STRIPS ...]]
                                         [-er ETA_RINGS [ETA_RINGS ...]]
                                         [-e EOS] [--fix]

arguments:
  -h, --help           
  -d DOF, --dof DOF     DOF file
  -i INPUTDIR, --inputdir INPUTDIR
                        Inputdir
  -o OUTPUTDIR, --outputdir OUTPUTDIR
                        Outputdir
  -s SIGNAL_AMPLITUDES [SIGNAL_AMPLITUDES ...], --signal-amplitudes SIGNAL_AMPLITUDES [SIGNAL_AMPLITUDES ...]
                        Signal amplitude
  -p PU [PU ...], --pu PU [PU ...]
                        Pileups
  -nt NTHREADS, --nthreads NTHREADS
                        Number of threads
  -st STRIPS [STRIPS ...], --strips STRIPS [STRIPS ...]
                        Strips ID
  -er ETA_RINGS [ETA_RINGS ...], --eta-rings ETA_RINGS [ETA_RINGS ...]
                        etarings
  -e EOS, --eos EOS     EOS instance user/cms
  --fix                 Check missing outputfiles
```
The *--fix* options checks the missing output file instead of recreating all the outputs.


Then submit the jobs to condor:
```
mkdir output log error
condor_submit condor_job.txt
```

When all the jobs will be completed, a single dataset with all the weights for all the strips (with all combinations of PU and signal) can be created with the script **joinStripWeights.py**

```
python joinStripWeights.py [-h] -d DOF -i INPUTDIR -o OUTPUTFILE
                           [-st STRIPS [STRIPS ...]]
                           [-er ETA_RINGS [ETA_RINGS ...]]

arguments:
  -h, --help            
  -d DOF, --dof DOF     DOF file
  -i INPUTDIR, --inputdir INPUTDIR
                        Inputdir
  -o OUTPUTFILE, --outputfile OUTPUTFILE
                        Output file
  -st STRIPS [STRIPS ...], --strips STRIPS [STRIPS ...]
                        Strips ID
  -er ETA_RINGS [ETA_RINGS ...], --eta-rings ETA_RINGS [ETA_RINGS ...]
                        etarings
```


## Encoding
Weights can be loaded in the hardware in the frontend of ECAL with a limited precision (1/64). To avoid differences with the final results the bias should be extracted using approximated weights and not with double precision ones. 
The weights approximation is carried out thanks to the script **weights_encoder.py** on top on the final aggregated weights file. 

```
python weights_encoder.py [-h] -i INPUT -o OUTPUT

arguments:
  -h, --help            show this help message and exit
  -i INPUT, --input INPUT
                        DOF file
  -o OUTPUT, --output OUTPUT
                        DOF file
```
The approximated weights and their encoded integer rappresentation (needed for TPG emulator) will be saved in the outputfile.

# Bias calculation and analysis

At this point we have a weights dataset with the optimized weights for each strip, each PU and each signal amplitude. 
For each different set of weights based on different strip, PU and signal amplitudes, the reconstructed amplitude can be simulated using the digis saved for each event. This calculation is done on strip base using the aggregated events. 

The script **extractBiasDF.cpp** is used to calculate the reconstructed amplitude and bias on each strip event file, for a specific set of weights.  The output of this script is a CSV file with the mean and std of the reconstructed ampitude and bias for each combination of PU and signal amplitude. 

All the set of weights for each strip are applied to each strip data using the script **extractAllBias_condor.py** that prepares several condor_jobs.


```
python usage: extractAllBias_condor.py [-h] -d DOF -w WEIGHTS_FILE -i INPUTDIR -o
                                OUTPUTDIR -m MODE [-nt NTHREADS]
                                [-ws WEIGHTS_SIGNAL [WEIGHTS_SIGNAL ...]]
                                [-wp WEIGHTS_PU [WEIGHTS_PU ...]] [-bxw]
                                [-st STRIPS [STRIPS ...]]
                                [-er ETA_RINGS [ETA_RINGS ...]] [-e EOS]
                                [--fix] [--enc] [--fixedweights]

optional arguments:
  -h, --help            show this help message and exit
  -d DOF, --dof DOF     DOF file
  -w WEIGHTS_FILE, --weights-file WEIGHTS_FILE
                        Weights file
  -i INPUTDIR, --inputdir INPUTDIR
                        Inputdir
  -o OUTPUTDIR, --outputdir OUTPUTDIR
                        Outputdir
  -m MODE, --mode MODE  1=rootfile, 2=stats
  -nt NTHREADS, --nthreads NTHREADS
                        Number of threads
  -ws WEIGHTS_SIGNAL [WEIGHTS_SIGNAL ...], --weights-signal WEIGHTS_SIGNAL [WEIGHTS_SIGNAL ...]
                        Select signal in weights set
  -wp WEIGHTS_PU [WEIGHTS_PU ...], --weights-pu WEIGHTS_PU [WEIGHTS_PU ...]
                        Select PU in weights set
  -bxw, --bx-window     Reconstruct also BX -1/+1 windows
  -st STRIPS [STRIPS ...], --strips STRIPS [STRIPS ...]
                        Strips ID
  -er ETA_RINGS [ETA_RINGS ...], --eta-rings ETA_RINGS [ETA_RINGS ...]
                        etarings
  -e EOS, --eos EOS     EOS instance user/cms
  --fix                 Check missing outputfiles
  --enc                 Use encoded weights
  --fixedweights        Use fixed weights

```
If *mode=1* a simple root tree with the reconstructed amplitude and bias for each event is created.
If *mode=2* a CSV file with statistical info about the bias for each combination of PU and signal.  At the moment only **mode=1 is implemented**.

The *--bx-window* flag enables the calculation of the extracted amplitude for the BXs before and after the BX0, in order to be able to emulate the behaviour of the pick finder afterwards.

The *-ws* and *-wp* options can be used to select the set of weights to be used for the bias estimation. If they are not specified all the possible combination of weights and PU present in the data are used. 

The *--fixedweights* flag specifies that the weights input file doens't contain weights by PU and signal, but a fixed set of weights. This must be used to extract the bias for not-PU-optimized weights. 

The *--fix* flags makes the script check the output directory and create only jobs for missing files.

Then all the condor jobs have to be submitted:
```
condor_submit condor_job1.txt (and others)
```

## Aggregate results by etaring
 
Finally the root files produced for each strip by the bias extraction step can be joint using the script **joinFilesByEtaRingInterval.py**.

```
python joinFilesByEtaRingInterval.py [-h] -d DOF -i INPUTDIR -o OUTPUTDIR
                                     [-er ETA_RINGS [ETA_RINGS ...]] [-fw]
                                     [-ws WEIGHTS_SIGNAL [WEIGHTS_SIGNAL ...]]
                                     [-wp WEIGHTS_PU [WEIGHTS_PU ...]]

optional arguments:
  -h, --help            show this help message and exit
  -d DOF, --dof DOF     DOF file
  -i INPUTDIR, --inputdir INPUTDIR
                        Input dir
  -o OUTPUTDIR, --outputdir OUTPUTDIR
                        Output dir
  -er ETA_RINGS [ETA_RINGS ...], --eta-rings ETA_RINGS [ETA_RINGS ...]
                        Etarings intervals: 18-22 23-25
  -fw, --fixed          Fixed weights
  -ws WEIGHTS_SIGNAL [WEIGHTS_SIGNAL ...], --weights-signal WEIGHTS_SIGNAL [WEIGHTS_SIGNAL ...]
                        Select signal in weights set
  -wp WEIGHTS_PU [WEIGHTS_PU ...], --weights-pu WEIGHTS_PU [WEIGHTS_PU ...]
                        Select PU in weights set

```

This script needs to know which weights set has been used for the bias extraction to be able to group the output files. 
Just use the same *-ws*,*-wp* or *--fixed* configuration as **extractAllBias_condor.py** script.

At this point one file containing all the events for each selected eta ring interval has been generated. 
The final analysis and plotting macros are described in the **../Plots** folder. 
