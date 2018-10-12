<script type="text/javascript" src="http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=default"></script>

# ECAL Weights

The purpose of this repository is to compute ECAL TPG weights, model ECAL electronics responses with analytic waveforms, and calculate reconstructed amplitude using any desired weights and waveform samples. A useful feature of this repository is the application of timeshifts on analytic waveforms, allowing one to calculate the bias introduced in energy reconstruction due to these timeshifts. Files are mainly written in C++ with some Python. 

## ComputeWeights

This folder contains a main function whose executable reads two text files: ECAL crystals degrees of freedom, ECAL crystals parameters. These files should be of the following format:

**DOF.txt**

|  cmsswId  | ietaix | iphiiy | 0iz |     eta    |
| ----------|--------|--------|-----|------------|
| 838861313 |   -1   |   1    |  0  | -0.0124339 |
| 838861314 |   -1   |   2    |  0  | -0.0124228 |

			.
			.
			.

**XTAL_Params_XXXX.txt**

|  cmsswId  |    A     |   \[t_{0}\]   | \[\alpha\]  |  \[\beta\]  |
| ----------|----------|---------|---------|---------|
| 838861313 | 0.240791 | 121.44  | 1.18942 | 40.1906 |
| 838861314 | 0.241159 | 121.542 | 1.14772 | 40.8894 |

			.
			.
			.


The main function, for each cmsswId which has a row in both of these data files, will produce an analytic waveform representing the detector response for this crystal, sample the waveform every 25ns (this can be configured), and input these samples into the ComputeWeights algorithm implemented in ComputeWeights.cpp and ComputeWeights.h. This will create a set of weights which will return a bias of zero when multiplied by these samples. This set of weights is the crystal's Ideal Weights. They are saved into an output file in ComputeWeights/bin which will have rows of the form:

cmsswid	ietaix	iphiiy	0iz	eta	A	t_0	alpha	beta	\[\vec{w}\]

Where \vec{w} is a set of 10 rows containing the 10 ideal weights for the sampled waveform.

## ParamReco

In this repository
