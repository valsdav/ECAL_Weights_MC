# TPG emulator analysis
The analysis of emulator data proceeds in several steps

1. Run the dumper on the selected run (Look at https://gitlab.cern.ch/wrsmith/tpg-weights)
2. Unfold the dumper output in a simpler tree structure  (unfold_dump.C)
3. Analyze the data  (bias_analysis_emul.cpp)
4. Produce plots

## Unfold the dumper output 

The *unfold_dump.C* macro does some cleaning on the output of the 
TPGAnalyzer. It saves a TTree with 1 entry for each tower 
with only useful variables.
It cleans also the data:
- remove towers with no crystals read
- remove towers with eTrue == 0
- saved only endcap towers

## Analyse the data

The *bias_analysis_emul.cpp* program is used to analyze the dumper output. The flattening of the tree of the previous step is needed to be able to use the RDataFrame tool. 

This program analyse the bias of the TP for different eta rings:
- Bias / ET distributions
- Bias / BX distributions
- True energy spectrum

Usage:
```
g++ -o bias_analysis_emul.x bias_analysis_emul.cpp `root-config --libs --cflags` -w
./bias_analysis_emul.x inputdir  outputfile train eta_intervals
```

Example:
```
./bias_analysis_emul.x  /eos/project/e/ecaltrg/.../2017_dump   output_tpganalysis.root 8b4e 18-21,22-25,26-28
```
