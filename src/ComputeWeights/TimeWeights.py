#!/usr/bin/env python2
# -*- coding: utf-8 -*-
"""
Created on Sun Dec  3 20:29:32 2017

@author: meganstark
"""

# Abe Tishleman-Charny
#    Edited by Megan Stark
# November 2017
# The purpose of this code is to plot results from Calculate.cpp

# Import multiple data files, each corresponding to different correlation matrix
# Calculate average amplitude for each, plot average ampltiude vs. noise 
# Want to plot weight distributions
# Can do things like calculate average ampltiude, plot samples & weights.
# import search path 
import sys 
import csv
import numpy as np
import matplotlib.pyplot as plt

# Sample numbers 
xdata = np.asarray([0,1,2,3,4,5,6,7,8,9]) # Assuming 10 samples. Should eventually obtain from data files.
all_rows = [[],[],[],[],[]] # [[raw],[samples],[weights],[amplitude]]

# all_rows[0] = raw data lists
# all_rows[1] = sample lists
# all_rows[2] = time weight lists
# all_rows[3] =  weight lists
# all_rows[4] =  time ampltiude values
# all_rows[5] = ampltiude values

# Import data file
with open('/Users/meganstark/Computation*/PHYS7321_Project/output/need.txt', 'r') as f: # Create file object f by opening file with given path in read mode.
    reader = csv.reader(f, delimiter = "\t") # Assuming tab delimited data
    for row in reader: # Loop over lines (pulses)
        row.pop()
        print(row)
        all_rows[0].append(map((lambda x: float(x)), row)) # add raw data list for every row (pulse)

	    #all_rows[0].append(row) # add raw data list for every row (pulse)

# Convert all data from strings -> float
# Might need to apply this to pulses and weights later. 
# Might not need to do this until add/sub or mult/div elements.

"""
for i in all_rows[0]:
	i = np.asarray(i) # lists -> arrays
	i = i.astype(np.float) # string arrays -> float arrays
"""

# raw data -> samples & weights
c1 = 0
c2 = 0
c3 = 0
# Go through j pulses
for j in range(len(all_rows[0])):
	all_rows[1].append([])
	all_rows[2].append([])

	# Go through i elements in the jth pulse
	for i in range(len(all_rows[0][j])):	
         print(i) 
         
		# Extract samples
		if ((i > 0) and (i < 11)):
			all_rows[1][j].append([])
			all_rows[1][j][c1] = (all_rows[0][j][i]) # all_rows[1][j] = jth sample list
			c1 += 1

		# Extract weights 
		if ((i >= 11) and (i < 21)): 
			all_rows[2][j].append([])
			all_rows[2][j][c2] = (all_rows[0][j][i]) # all_rows[2][j] = jth weights list 
			c2 += 1
        
        # Extract weights 
		if (i >= 21): 
            

            all_rows[3][j].append([])
		   all_rows[3][j][c3] = (all_rows[0][j][i]) # all_rows[2][j] = jth weights list 
		   c3 += 1


"""for i in all_rows[1]:
	i = np.asarray(i) # lists -> arrays
	i = i.astype(np.float) # string arrays -> float arrays
for i in all_rows[2]:
	i = np.asarray(i) # lists -> arrays
	i = i.astype(np.float) # string arrays -> float arrays"""

# Convert pulses and weights from string to float to calculate amplitude
#for j in range(len(all_rows[0])):
#
#	[float(i) for i in all_rows[1][j]]
#	[float(i) for i in all_rows[2][j]]

# Compute ampltiude values
for j in range(len(all_rows[1])):
	all_rows[4].append([])
	total = 0.0

	for i in range(len(all_rows[1][j])): #all_rows[1][j] size diff from all_rows[0] size because sample and weights are size 10.
		# determine jth ampltiude
		total += float(all_rows[1][j][i])*float(all_rows[2][j][i]) # Summing over S_i X w_i		

	# after summing over i
	all_rows[4][j] = total # Amplitude of jth pulse

# Compute ampltiude values
for j in range(len(all_rows[1])):
	all_rows[5].append([])
	total = 0.0

	for i in range(len(all_rows[1][j])): #all_rows[1][j] size diff from all_rows[0] size because sample and weights are size 10.
		# determine jth ampltiude
		total += float(all_rows[1][j][i])*float(all_rows[3][j][i]) # Summing over S_i X w_i		

	# after summing over i
	all_rows[5][j] = total # Amplitude of jth pulse
    
# Average Ampltiudes
total = 0.0
avg_amp = 0.0

for j in range(len(all_rows[4])):
	total += all_rows[4][j]

timeavg_amp = total / len(all_rows[4])

pulses = len(all_rows[4])

total = 0.0
avg_amp = 0.0

for j in range(len(all_rows[5])):
	total += all_rows[5][j]

avg_amp = total / len(all_rows[5])

pulses = len(all_rows[5])

print "Amplitude = ",avg_amp, "averaged over ",pulses,"pulses."
print "TimeAmplitude = ",timeavg_amp, "averaged over ",pulses,"pulses."


# Plot average amplitude

pulse = plt.scatter(xdata,all_rows[1][0], color = 'b')
weights = plt.scatter(xdata,all_rows[2][0], color = 'r') 
plt.plot(xdata,all_rows[1][0])
plt.plot(xdata,all_rows[2][0])
plt.xlabel('Sample Number')
plt.legend((pulse, weights), ('pulse', 'weights'))
plt.ylabel('Normalized Pulse')

plt.show()

f.close() # close file 