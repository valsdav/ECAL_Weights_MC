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
source /cvmfs/sft.cern.ch/lcg/views/dev3python3/latest/x86_64-slc6-gcc7-opt/setup.sh

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
source /cvmfs/sft.cern.ch/lcg/views/dev3python3/latest/x86_64-slc6-gcc7-opt/setup.sh

g++ -o calc_weightsDF.x calc_weightsDF.cpp ComputeWeights.cpp  `root-config --libs --cflags` `clhep-config --include` `clhep-config --libs` 
```

## Mass production on Condor
To production weights data for each crystal we can use HTCondor jobs. The script **preparare_wegithsGen_condor.py** 
prepares a single condor job for each crystal. Each job generates data for different pileups and different amplitudes,  calculates weights and produced a single final file.  A *DOF* (Degree Of Freedom) file is used to get the parameters for each crystal of ECAL. 

```
python prepare_weightsGen_condor.py [-h] -d DOF -o OUTPUTDIR -s
                                    SIGNAL_AMPLITUDES [SIGNAL_AMPLITUDES ...]
                                    -p PU [PU ...] [-n NEVENTS]
                                    [-st STRIPS [STRIPS ...]]
                                    [-er ETA_RINGS [ETA_RINGS ...]] [-e EOS]
                                    [--debug]

arguments:
  -h, --help            show this help message and exit
  -d DOF, --dof DOF     DOF file
  -o OUTPUTDIR, --outputdir OUTPUTDIR
                        output_dir
  -s SIGNAL_AMPLITUDES [SIGNAL_AMPLITUDES ...], --signal-amplitudes SIGNAL_AMPLITUDES [SIGNAL_AMPLITUDES ...]
                        Signal amplitudes
  -p PU [PU ...], --pu PU [PU ...]
                        Pileups
  -n NEVENTS, --nevents NEVENTS
                        Number of events
  -st STRIPS [STRIPS ...], --strips STRIPS [STRIPS ...]
                        Strips ID
  -er ETA_RINGS [ETA_RINGS ...], --eta-rings ETA_RINGS [ETA_RINGS ...]
                        etarings
  -e EOS, --eos EOS     EOS instance user/cms
  --debug               Activate debug output

```

The *--signal-amplitudes (-s)* option accepts a list of amplitudes, whereas the *--pu (-p)* option a list of PU values. The optional options *--strips (-st)* or *--eta-rings (-er)*  can be used to filter the wanted strips ids or eta rings. 

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

The next step of the analysis is the extraction of mean weights for different PU values for all the strips. The MC samples of all the crystals that form a strip are merged before extracting the mean of the weights calculated for each event. 

The script **weights_analysis_strips_condor.py** prepares a condor job for each strip. The xtals of each strip are read from the DOF file and read by the job from the eos directory containing single xtal files (no need to join the root files before).
Each job outputs one text file for each strips containing the weights means for each PU and signal amplitude 

The macro used to calculate the mean weights for each pileup in the condor job is **weights_analysis_stripsDF.cpp**. To compile it for lxplus6 (with updated Root 6.17 Dataframe):

```bash
source /cvmfs/sft.cern.ch/lcg/views/dev3python3/latest/x86_64-centos7-gcc7-opt/setup.sh
g++ -o weights_analysis_stripsDF.x weights_analysis_stripsDF.cpp  `root-config --libs --cflags` `clhep-config --include` `clhep-config --libs` 
```

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


Then submit the jobs to condor
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

# Join digis by strip
Until now events are calculated and stored by xtal. The events must be merged before calculating the bias on a strip basis. 

The scrpt **sum_events_stripDF.cpp** aggregates the digis of each xtal in a strip and sum their amplitudes to construct the strip event. The event is then saved in a new file. The PU contribution for each xtal are considered completely uncorrelated. 

A python script is used to prepare condor jobs to work on each strip: 
```
source /cvmfs/sft.cern.ch/lcg/views/dev3python3/latest/x86_64-centos7-gcc7-opt/setup.sh
g++ -o sum_events_stripDF.x sum_events_stripDF.cpp  `root-config --libs --cflags`

python  sum_events_strips_condor.py [-h] -d DOF -i INPUTDIR -o OUTPUTDIR -s
                                   SIGNAL_AMPLITUDES [SIGNAL_AMPLITUDES ...]
                                   -p PU [PU ...] [-st STRIPS [STRIPS ...]]
                                   [-er ETA_RINGS [ETA_RINGS ...]] [-e EOS]
                                   [--fix]
arguments:
  -h, --help           
  -d DOF, --dof DOF     DOF file
  -i INPUTDIR, --inputdir INPUTDIR
                        Inputdir
  -o OUTPUTDIR, --outputdir OUTPUTDIR
                        Outputdir
  -s SIGNAL_AMPLITUDES [SIGNAL_AMPLITUDES ...], --signal-amplitudes SIGNAL_AMPLITUDES [SIGNAL_AMPLITUDES ...]
                        Signal amplitudes
  -p PU [PU ...], --pu PU [PU ...]
                        Pileups
  -st STRIPS [STRIPS ...], --strips STRIPS [STRIPS ...]
                        Strips ID
  -er ETA_RINGS [ETA_RINGS ...], --eta-rings ETA_RINGS [ETA_RINGS ...]
                        etarings
  -e EOS, --eos EOS     EOS instance user/cms
  --fix                 Check missing outputfiles
```


# Extract bias 
At this point we have a weights dataset with the optimized weights for each strip, each PU and each signal amplitude. 
For each different set of weights based on different strip, PU and signal amplitudes, the reconstructed amplitude can be simulated using the digis saved for each event. This calculation is done on strip base using the aggregated events. 

The script **extractBiasDF.cpp** is used to calculate the reconstructed amplitude and bias on each strip event file, for a specific set of weights.  The output of this script is a CSV file with the mean and std of the reconstructed ampitude and bias for each combination of PU and signal amplitude. 

All the set of weights for each strip are applied to each strip data using the script **extractAllBias_condor.py** that prepares several condor_jobs.

```
source /cvmfs/sft.cern.ch/lcg/views/dev3python3/latest/x86_64-centos6-gcc7-opt/setup.sh
g++ -o extractBiasDF.x extractBiasDF.cpp  `root-config --libs --cflags`
```

```
python extractAllBias_condor.py [-h] -d DOF -w WEIGHTS_FILE -i INPUTDIR -o
                                OUTPUTDIR -m MODE [-nt NTHREADS] -s
                                SIGNAL_AMPLITUDES [SIGNAL_AMPLITUDES ...] -p
                                PU [PU ...]
                                [-ws WEIGHTS_SIGNAL [WEIGHTS_SIGNAL ...]]
                                [-wp WEIGHTS_PU [WEIGHTS_PU ...]]
                                [-st STRIPS [STRIPS ...]]
                                [-er ETA_RINGS [ETA_RINGS ...]] [-e EOS]
                                [--fix]
arguments:
  -h, --help            
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
  -s SIGNAL_AMPLITUDES [SIGNAL_AMPLITUDES ...], --signal-amplitudes SIGNAL_AMPLITUDES [SIGNAL_AMPLITUDES ...]
                        Signal amplitudes
  -p PU [PU ...], --pu PU [PU ...]
                        Pileups
  -ws WEIGHTS_SIGNAL [WEIGHTS_SIGNAL ...], --weights-signal WEIGHTS_SIGNAL [WEIGHTS_SIGNAL ...]
                        Select signal in weights set
  -wp WEIGHTS_PU [WEIGHTS_PU ...], --weights-pu WEIGHTS_PU [WEIGHTS_PU ...]
                        Select PU in weights set
  -st STRIPS [STRIPS ...], --strips STRIPS [STRIPS ...]
                        Strips ID
  -er ETA_RINGS [ETA_RINGS ...], --eta-rings ETA_RINGS [ETA_RINGS ...]
                        etarings
  -e EOS, --eos EOS     EOS instance user/cms
  --fix                 Check missing outputfiles

```
If *mode=2* a CSV file with statistical info about the bias for each combination of PU and signal. If *mode=1* a simple root tree with the reconstructed amplitude and bias for each event is created. 

The *--fix* flags makes the script check the output directory and create only jobs for missing files.

The **-ws** and **-wp** options can be used to select the set of weights to be used for the bias estimation. If they are not specified all the possible combination of weights and PU present in the data are used. 

Then all the condor jobs have to be submitted:
```
condor_submit condor_job1.txt (and others)
```


## Join the bias dataset
At this step the bias is calculated for strip for each set of weights optimized for all the combinations of PU and signal. We have to merge all the datasets with the sript  **joinStripBias.py**. 

The script **joinStripBias.py**  produces a final datasets with all the bias for each strip, for each PU and signal amplitude, calculated with each set of weights (identified by the *wPU* and *wS* labels).

By default all the biases are saved in one file, you can choose to group them by strip or ring using the following options. 

```
python joinStripBias.py [-h] -d DOF -w WEIGHTS_FILE -i INPUTDIR -o OUTPUTFILE
                        [--dry] [-st STRIPS [STRIPS ...]]
                        [-er ETA_RINGS [ETA_RINGS ...]]
                        [-ws WEIGHTS_SIGNAL [WEIGHTS_SIGNAL ...]]
                        [-wp WEIGHTS_PU [WEIGHTS_PU ...]] [-gbs] [-gbr]

arguments:
  -h, --help            
  -d DOF, --dof DOF     DOF file
  -w WEIGHTS_FILE, --weights-file WEIGHTS_FILE
                        Weights file
  -i INPUTDIR, --inputdir INPUTDIR
                        Inputdir
  -o OUTPUTFILE, --outputfile OUTPUTFILE
                        Output file
  --dry                 Dry run
  -st STRIPS [STRIPS ...], --strips STRIPS [STRIPS ...]
                        Strips ID
  -er ETA_RINGS [ETA_RINGS ...], --eta-rings ETA_RINGS [ETA_RINGS ...]
                        etarings
  -ws WEIGHTS_SIGNAL [WEIGHTS_SIGNAL ...], --weights-signal WEIGHTS_SIGNAL [WEIGHTS_SIGNAL ...]
                        Select signal in weights set
  -wp WEIGHTS_PU [WEIGHTS_PU ...], --weights-pu WEIGHTS_PU [WEIGHTS_PU ...]
                        Select PU in weights set
  -gbs, --groupbystrip  Save one file per strip
  -gbr, --groupbyring   Save one file per eta ring
```
if *--dry* option is used the script checks only the presence of all the necessary files.


# Plotting
# Bias histograms
For each set of weights and for each strip a 2D histogram can show the bias over PU and signal amplitude. 

The script **buildBiasHistos.py** creates one Root file for each set of weights, containing one histogram for each strip.

```
python buildBiasHistos.py [-h] -d DOF -i INPUTFILE -o OUTPUTDIR -t TYPE

arguments:
  -h, --help            show this help message and exit
  -d DOF, --dof DOF     DOF file
  -i INPUTFILE, --inputfile INPUTFILE
                        Input file
  -o OUTPUTDIR, --outputdir OUTPUTDIR
                        Output dir
  -t TYPE, --type TYPE  Bias map type (wPU_wS or PU_wPU)
```

