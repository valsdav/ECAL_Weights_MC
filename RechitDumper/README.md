# Bias estimation using CMS data

This folder contains the code used to estimate the TPG bias using ECAL strip rechits and the simulated bias for different sets of weights. 

## RechitDumper
The *RechitDumper* is a CMSSW EDAnalyzer that saves calibrated ECAL rechits for the endcaps. 
It saves the rechits for each xtal saving also the lumisection information that can be used to get the instantaneous PU. 

Install the plugin:
```
cmsrel CMSSW_10_1_7
cd CMSSW_10_1_7/src
cmsenv

git clone ssh://git@gitlab.cern.ch:7999/cms-ecal-dpg/ecall1algooptimization.git
cd RechitDumper/RechiDumper

scramv1 b -j 4
```

## Prepare a list of samples
The *ZeroBias* dataset is ideal for this type of study on signal amplitude reconstruction. 

First of all get a list of samples from where extract the rechits. 
```
dasgoclient -query "file dataset=/ZeroBias/Run2018C-v1/RAW run=320065" > configs/files_run320065.txt
```

## Run the dumper on condor

The script **rechit_condor.py** is then useful to create one job for each CMS data file on condor:

```
python rechit_condor.py [-h] -f FILES -n NEVENTS -o OUTPUTDIR

arguments:
  -h, --help           
  -f file with list of samples , --files FILES
                        input file
  -n NEVENTS, --nevents NEVENTS
                        n events
  -o OUTPUTDIR, --outputdir OUTPUTDIR
                        Outputdir
```

Some set of files can be found in the folder **configs/**: in particular the run=324725 was a special one done with full ECAL in *FullReadout*- 

## Get PU estimate
*brilcal* can be used to get the instantaneous PU for each lumisection in the run:

```
brilcalc lumi --byls -o OUTPUT_FILE.csv -r RUN_NUMBER
```

## Join rechits by strip
The script *mapByStrip.py* sums the rechits in each bx by strip and creates a Root Tree with all the necessary information, getting the PU for each event from the lumisection information.


# Bias estimation
