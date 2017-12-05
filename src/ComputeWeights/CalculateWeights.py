#!/usr/bin/env python2
# -*- coding: utf-8 -*-
"""

@author: meganstark
"""
import matplotlib.pyplot as plt
import sys 
import csv
import numpy as np

# Import multiple data files, each corresponding to different correlation matrix
# Calculate average amplitude for each, plot average ampltiude vs. noise 
# Want to plot weight distributions
# Can do things like calculate average ampltiude, plot samples & weights.
# import search path 

#preallocation
S = np.zeros(shape=(len(all_rows),10))
dS = np.zeros(shape=(len(all_rows),10))
M = []
Tmax = []
nsamples = []
A = []

#read in sample 
all_rows = [] # [samples]

# Import data file
with open('/Users/meganstark/Computation*/PHYS7321_Project/template_histograms_ECAL_Run2017_runs_304209_304292.txt', 'r') as f: # Create file object f by opening file with given path in read mode.
#with open('/Users/meganstark/Computation*/PHYS7321_Project/template_histograms_ECAL_Run2017_runs_304209_304292.txt', 'r') as f: # Create file object f by opening file with given path in read mode.
    reader = csv.reader(f, delimiter = "\t") # Assuming tab delimited data
    for row in reader: # Loop over lines (pulses)
        all_rows.append(row) # add raw data list for every row (pulse)
    

# for the sake of running time, limit to the first 11 rows
all_rows = all_rows[0:11]

for row in range(len(all_rows)):
    #S.append(np.zeros(10))
    limited_values = all_rows[row][2:9]
    for i in range(len(limited_values)):
        #print("limited_values", limited_values)
        S[row][i+3] = limited_values[i]
        #print(S[row])
    
    #calculate number of pulses len(sample)
    nsamples.append(0)
    nsamples[row] = 10 #would like to use len(S[row])
    #print(nsamples[row]) #output all as 15...perfect 
    
    #computer derivative of sample , change in sample divided by 25 ns
    dS[row][0] = 0
    for i in range(1,nsamples[row]):
        #print( S[row][i-1] ,S[row][i]  )
        dS[row][i] =  S[row][i-1] - S[row][i] 
        #print(dS[row])
     
    # calculate Tmax = x(max(sample))
    Tmax = 5 
 
    #fill coef matrix [samples, samplederivatives]
    #sample derivatives only added for time jitter weights     
    jitter = True

    coef = np.zeros(shape=(len(S[row]),2))

    #if timejitter = true: #changes the size of coef
    if jitter:
        for j in range(len(S[row])):
            coef[j][0] = S[row][j]
            coef[j][1] = dS[row][j]
    else: 
        coef.append([])
        for j in range(len(S[row])):
            coef[row].append([])
            coef[row][j].append(0)
            coef[row][j][0] = S[i][j]

        
    #take transpose of coef matrix 
    tcoef = coef.transpose()
    
    # covarience matrix
    covar = np.identity(10)

    #incovariance matrix 
    invcovar = np.identity(10)

    variance = np.matrix(np.matmul(tcoef, coef))

    inv_variance = variance.I
    
    #calculate weights 
    #Weights matrix = variance * tCoef * invCov
    weights = np.matmul(inv_variance, tcoef)


#Plotting data
xdata = ([0, 1,2,3,4,5,6,7,8,9]) #data points
x = np.linspace(0, 250, 1000) #nanoseconds


weights = plt.scatter(xdata,weights[0], color = 'b')
#plt.plot(xdata,weights[0])
#pulse = plt.scatter(xdata,weights[1], color = 'r') 
#plt.plot(xdata,weights[1])
plt.xlabel('Sample Number')
plt.legend((pulse, weights), ('pulse', 'weights'))
plt.ylabel('Normalized Pulse')

plt.show()

f.close() # close file 


