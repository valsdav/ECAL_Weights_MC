# Plotting code

## Bias analysis by ET bins
The script **bias_analysis_byET_train.cpp** analyse the bias over the spectrum of true energy of the signals. 

Differenct factors are applied to MC events for the data comparison. 
- The BX0 distribution along the train is fixed with a scale factor. 
- The true energy spectrum is fixed with another scale factor
- The finite precision of TP generation is simulated
- The pick finder algorithm is applied

Different graphs are created for different samples, with all scale factors. 

The result is saved in a root file that is plotted thanks to **plot_bias_byET.py** script. 


### Scale factor producers

The script **produceBXsf_train.py** is used to calculate the scale factor to correct for
the distribution of events along the train observed in data. 

```
python produce_BXsf_train.py [-h] -i INPUTFILE -o OUTPUTFILE -n NBX

optional arguments:
  -h, --help            show this help message and exit
  -i INPUTFILE, --inputfile INPUTFILE
                        Input file
  -o OUTPUTFILE, --outputfile OUTPUTFILE
                        Outputfile
  -n NBX, --nbx NBX     Number of BX
```

The script **produce_trueA_scalefactor.py** compares the trueA distribution in data with the one used for MC simulation (given by the user to cover the interesting energy regions) and generates a scale factor. 

```
python produce_trueA_scalefactor.py [-h] --mc MC --data DATA -o OUTPUTFILE

optional arguments:
  -h, --help            show this help message and exit
  --mc MC               MC spectrum
  --data DATA           Data spectra by regions
  -o OUTPUTFILE, --outputfile OUTPUTFILE
                        Output file
```


## Bias 1D distributions

