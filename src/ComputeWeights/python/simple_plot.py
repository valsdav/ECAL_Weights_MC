# Abe Tishleman-Charny
# November 2017
# The purpose of this code is to plot results from Calculate.cpp

# Import multiple data files, each corresponding to different correlation matrix
# Want to plot weight distributions
# Can do things like calculate average ampltiude, plot samples & weights.

import os
import sys
import time
import csv
import numpy as np
import matplotlib.pyplot as plt
from matplotlib import rc 

# Read files as you run this file with Python

#name_ = "*data-tau*"
#path_ = "/"

paths = []

data_folder = raw_input("Choose folder to search for files:")

# Find all files in current working directory ending in ".txt"
# for file in os.listdir(str(os.getcwd())): # Current working directory 
for file in os.listdir(str(os.getcwd()) + '/' + str(data_folder)):
    if file.endswith(".txt"):
        print(os.path.join(file))
	paths.append(str(data_folder) + '/' + os.path.join(file))

print "paths = ",paths

# Can access after loops
data = [[],[],[],[]] 

# data[0] = file number
# data[1] = avg sample values # turns out this is actually the same for all tau values since the weights are what changes.
# data[2] = avg amplitude values

tau = []
weights = []
pulses_per_file = []

file_number = -1

for i in paths:

	file_number += 1

	print "file number = ",file_number
	print "i = ",i

	data[0].append(file_number)
	data[1].append([]) # average sample list for each file 
	data[2].append([]) # average amplitude list for each file
	data[3].append(0) # difference

	# print "File: ",i	

	# This updates every file
	all_rows = [[],[],[]] # [[raw],[samples],[weights],[amplitude]]

	# all_rows[0] = raw data lists
	# all_rows[1] = sample lists
	# all_rows[2] = weight lists

	# Import data file
	with open(i, 'r') as f: # Create file object f by opening file with given path in read mode.
	    reader = csv.reader(f, delimiter = "\t") # Assuming tab delimited data
	    for row in reader: # Loop over lines (pulses)
		all_rows[0].append(row) # add raw data list for every row (pulse)

	# Fill all_rows for given file

	# Go through j pulses
	for j in range(len(all_rows[0])):
		all_rows[1].append([])
		all_rows[2].append([])

		c1 = 0
		c2 = 0

		# Go through k elements in the jth pulse
		for k in range(len(all_rows[0][j])):	

			# Extract samples
			if ((k > 0) and (k < 11)):
				all_rows[1][j].append([])
				all_rows[1][j][c1] = (all_rows[0][j][k]) # all_rows[1][j] = jth sample list
				c1 += 1

			# Extract weights 
			if ((k > 10)): 
				all_rows[2][j].append([])
				all_rows[2][j][c2] = (all_rows[0][j][k]) # all_rows[2][j] = jth weights list 
				c2 += 1	

	#print "all_rows[0] = ",all_rows[0]
	#print "all_rows[1] = ",all_rows[1]
	#print "all_rows[2] = ",all_rows[2]

	
	# To append weights of 0th waveform:
	# weights.append(all_rows[2][0])

	# To append weights of all waveforms for one tau
	print "tau = ",float(all_rows[0][0][0])

	choice = False

	# Choose arbitrary tau to extract different sample weights from 
	if float(all_rows[0][0][0]) == float(1):
		choice = True
	  
	print "choice = ",choice

	if choice:
		print "range(len(all_rows[2])) = ", range(len(all_rows[2]))
		for j in range(len(all_rows[2])):
			print "all_rows[2][",j,"] = ",all_rows[2][j] 
			weights.append(all_rows[2][j])

	  	# Save tau value
		tau.append(all_rows[0][0][0]) # all_rows[0][0][n] is tau value of file.

	f.close() # close file 

# Order desired data

# One tau, multiple f(t)
wf_num = [x for x,_ in sorted(zip(range(len(weights)),weights))] # all_rows[2][0] = weights for the 0th set of normalized samples (f(t))
data_y = [y for _,y in sorted(zip(range(len(weights)),weights))]

# Many tau, single f(t)
#tau_sorted = [x for x,_ in sorted(zip(tau,weights))] # all_rows[2][0] = weights for the 0th set of normalized samples (f(t))
#data_y = [y for _,y in sorted(zip(tau,weights))]

#print "tau_sorted = ", tau_sorted
print "weights = ",weights

#for i in range(len(tau_sorted)):
#	tau_sorted[i] = float(tau_sorted[i])

# time in ns
data_x = np.asarray([0,25,50,75,100,125,150,175,200,225]) # Assuming 10 samples. Should eventually obtain from data files.

# label maker

def labelmaker(element):
  label = "tau = " + str(element) 
  return label

#tau0 = plt.scatter(data_x,data_y[0], color = 'r')
#tau1 = plt.scatter(data_x,data_y[1], color = 'orange')
#tau2 = plt.scatter(data_x,data_y[2], color = 'g')
#tau3 = plt.scatter(data_x,data_y[3], color = 'b')
#plt.plot(data_x,data_y[0],'r', label = labelmaker(tau_sorted[0]))  # 0th file samples
#plt.plot(data_x, data_y[1], 'orange', label = labelmaker(tau_sorted[1]))
#plt.plot(data_x, data_y[2], 'g', label = labelmaker(tau_sorted[2]))
#plt.plot(data_x, data_y[3], 'b', label = labelmaker(tau_sorted[3]))
#plt.legend()

wf0 = plt.scatter(data_x,data_y[0], color = 'r')
wf1 = plt.scatter(data_x,data_y[1], color = 'orange')
wf2 = plt.scatter(data_x,data_y[2], color = 'g')
wf3 = plt.scatter(data_x,data_y[3], color = 'b')
plt.plot(data_x,data_y[0],'r', label = labelmaker(wf_num[0]))  # 0th file samples
plt.plot(data_x, data_y[1], 'orange', label = labelmaker(wf_num[1]))
plt.plot(data_x, data_y[2], 'g', label = labelmaker(wf_num[2]))
plt.plot(data_x, data_y[3], 'b', label = labelmaker(wf_num[3]))
plt.legend()

plt.xlabel('Time (ns)')
plt.ylabel('Weight Value')
title_ = "Weights for different Tau's"
plt.title(title_, fontsize = 20)
figtitle = str(data_folder) + '/' + "output/" + str(int(time.time())) + ".png"
#plt.savefig(figtitle)
plt.show()
