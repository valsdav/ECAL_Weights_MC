#!/usr/bin/env python2
# -*- coding: utf-8 -*-
"""
Created on Mon Dec  4 15:04:44 2017

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

#read in sample 
all_rows = [] # [samples]

# Import data file
with open('/Users/meganstark/Computation*/PHYS7321_Project/template_histograms_ECAL_Run2017_runs_304209_304292.txt', 'r') as f: # Create file object f by opening file with given path in read mode.
#with open('/Users/meganstark/Computation*/PHYS7321_Project/template_histograms_ECAL_Run2017_runs_304209_304292.txt', 'r') as f: # Create file object f by opening file with given path in read mode.
    reader = csv.reader(f, delimiter = "\t") # Assuming tab delimited data
    for row in reader: # Loop over lines (pulses)
	all_rows.append(row) # add raw data list for every row (pulse)

    print(len(all_rows))
    
    
all_rows = all_rows[0:11]
#preallocation
S = np.zeros(shape=(len(all_rows),10))
dS = np.zeros(shape=(len(all_rows),10))
M = []
Tmax = []
nsamples = []
A = []
#coef = np.zeros(shape=(len(all_rows),2))
tcoef = []
covar = []
invcovar = []
#var same as coef
#weights all_rows by 10
#Chi2 no idea? need to think about


#define sample from all_rows[row]
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
for row in range(len(all_rows)):
    #dS.append(np.zeros(10))
    dS[row][0] = 0 #if i do this how do i call an element?
    for i in range(1,nsamples[row]):
        #print( S[row][i-1] ,S[row][i]  )
        dS[row][i] =  S[row][i-1] - S[row][i] 
        #print(dS[row])
     
#print("derivative", dS)


#calculate Tmax = x(max(sample))
#for row in range(2): #len(all_rows)):
 #   M.append(0)
    #print(S[row])
    #doesnt like my structure
    #max_in_row = max(S[row])
    #M[row] = max_in_row
    #print("s",S[row])
Tmax = 5 
    #print(Tmax)

'''
#determine first samples
  // DETERMINATION OF THE FIRST SAMPLE (COPIED FROM C)
  int firstSample = int(tMax) - 1;
  if(nPulseSamples_ == 1) firstSample = int(tMax); // if only 1 sample -> the max sample is chosen
  //std::cout << "FIRST SAMPLE = " << firstSample << std::endl;
  //std::cout << "nParameters = " << nParams << std::endl;

  if (firstSample + nPulseSamples_ > nSamples) {
    if (verbosity_)
      std::cout << "ComputeWeights::compute: Warning: firstSample cannot be "
    << firstSample << " because there are too few samples beyond." 
    << std::endl << "firstSample is set to "
    << nSamples - nPulseSamples_ << std::endl;
    firstSample = nSamples - nPulseSamples_;
  } '''
 
#fill coef matrix [samples, samplederivatives]
#sample derivatives only added for time jitter weights     
jitter = True
#print(coef)
coef = []
if jitter: 
    for i in range(len(all_rows)):
        coef.append(np.zeros(shape=(len(S[i]),2)))
        for j in range(len(S[i])):
#            coef[i].append([])
#            coef[i][j].append(0)
#            coef[i][j].append(0)
            coef[i][j][0] = S[i][j]
            coef[i][j][1] = dS[i][j]
    #if timejitter = true: #changes the size of coef
    #    for i in range(len(nsamples)):
    #   coef[row][2,i]= dS[row][i]
    
#if jitter: 
#    #coef = np.zeros(shape=(len(all_rows),2))
#    coef = []
#    for i in range(len(all_rows)):
#        print(i)
#        coef.append([])
#        for j in range(len(S[i])):
#            coef[i].append([])
#            coef[i][j][0] = S[i][j]
#            coef[i][j][1] = dS[i][j]
else: 
    for i in range(len(all_rows)):
        print(i)
        coef.append([])
        for j in range(len(S[i])):
            coef[i].append([])
            coef[i][j].append(0)
            coef[i][j][0] = S[i][j]

        
#take transpose of coef matrix 

tcoef = map(list, zip(*coef[1]))
#print("coef", coef)     
#print("tcoef", tcoef) 
    
#incovariance matrix 
for row in range(len(all_rows)):
   covar.append([])
   covar[row] = np.identity(10)
   invcovar.append([])
   invcovar[row] = np.identity(10)

#print("covar" , covar[1])

def matmult(a,b):
    zip_b = zip(*b)
    # uncomment next line if python 3 : 
    # zip_b = list(zip_b)
    return [[sum(ele_a*ele_b for ele_a, ele_b in zip(row_a, col_b)) 
             for col_b in zip_b] for row_a in a]

var = matmult(invcovar, coef)
print(len(tcoef))
#variance = matmult(tcoef, var)
print("variance", variance)
#Variance matrix = [tCoef * invCov * 
#Variance matrix = [tCoef * invCov * coef]^-1
#var[row][i,j] = 


#calculate weights 
#Weights matrix = variance * tCoef * invCov
#take transpose of coef matrix 
#for row in range(len(all_rows)):
#   W[row] = var[row][i,j] * tcoef[row][i,j] * invCov[row]
        

# Chi2 matrix = (1 - coef * weights)^T * invCov * (1 - coef * weights)

'''
# Calculate amplitude for single pulse
for row in range(len(all_rows)):
    A.append(0)
    for j in range(nsamples):
        A[row] =+  all_rows[row][j]* W[row][j]
    
#Finding average amplitude over all pulses in file


#Plotting data
xdata = [0, 1,2,3,4,5,6,7,8,9] #data points
x = np.linspace(0, 250, 1000) #nanoseconds
'''
'''
pulse = plt.scatter(xdata,all_rows[1][0], color = 'b')
weights = plt.scatter(xdata,all_rows[2][0], color = 'r') 
plt.plot(xdata,all_rows[1][0])
plt.plot(xdata,all_rows[2][0])
plt.xlabel('Sample Number')
plt.legend((pulse, weights), ('pulse', 'weights'))
plt.ylabel('Normalized Pulse')

plt.show()'''

f.close() # close file 


