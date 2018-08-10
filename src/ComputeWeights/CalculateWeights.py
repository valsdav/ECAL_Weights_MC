#!/usr/bin/env python2
# -*- coding: utf-8 -*-
"""
@author: meganstark
"""
import matplotlib.pyplot as plt
import sys 
import csv
import numpy as np

#File for extracting weights with time jitter for reconstruction of pulse from 10 data points .
#Reads text file wtih 14 tab delineated data points.
#Set jitter to True if you want the jitter corrected weights, otherwise jitter = False


#read in sample 
all_rows = [] # [samples]

#preallocation
S = np.zeros(shape=(len(all_rows),10))
dS = np.zeros(shape=(len(all_rows),10))
M = []
Tmax = []
nsamples = []
A = []



# Import data file
with open('/Users/meganstark/Computation*/PHYS7321_Project/template_histograms_ECAL_Run2017_runs_304209_304292.txt', 'r') as f: # Create file object f by opening file with given path in read mode.
    reader = csv.reader(f, delimiter = "\t") # Assuming tab delimited data
    for row in reader: # Loop over lines (pulses)
        all_rows.append(row) # add raw data list for every row (pulse)
    

# for the sake of running time, limit to the first 11 rows
all_rows = all_rows[0:11]

for row in range(len(all_rows)):
    limited_values = all_rows[row][2:9]
    for i in range(len(limited_values)):
        S[row][i+3] = limited_values[i]
    
    #computer derivative of sample, change in sample divided by 25 ns
    dS[row][0] = 0
    for i in range(1,10):
        dS[row][i] =  S[row][i-1] - S[row][i] 
 
    #fill coef matrix [samples, samplederivatives]
    #sample derivatives only added for time jitter weights     
    jitter = True

    coef = np.zeros(shape=(len(S[row]),2))

    #if timejitter = true: #changes the size of coef
    #jitter accounts for time jitter around Tmax and requires a more complex method of deriving the weights
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

    # variance matrix
    variance = np.matrix(np.matmul(tcoef, coef))

    # inverse of the variance matrix. Numpy is cool. 
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


