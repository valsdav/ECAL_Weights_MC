# Abe Tishleman-Charny
# March 2018
# The purpose of this file is to plot a single weight as a function of tau and f(t)

import os
import sys
import time
import csv
import random
import matplotlib
import matplotlib.pyplot as plt

import numpy as np

# Read files as you run this file with Python

#name_ = "*data-tau*"
#path_ = "/"

paths = []

data_folder = raw_input("Choose folder in current directory to search for files:")

# Find all files in current working directory ending in ".txt"
# for file in os.listdir(str(os.getcwd())): # Current working directory 
for file in os.listdir(str(os.getcwd()) + '/' + str(data_folder)):
    if file.endswith(".txt"):
        print(os.path.join(file))
	paths.append(str(data_folder) + '/' + os.path.join(file))

print "paths = ",paths

weights = []
pulses_per_file = []
file_numbers = []
#functions = []

samples = []

for i in range(10):
	samples.append(i)

print "samples = ",samples

for n in samples:

	file_number = -1
	chosen_weights = []
	tau = []

	for i in paths:

		file_number += 1
		file_numbers.append(file_number)

		print "file number = ",file_number
		print "i = ",i

		#data[0].append(file_number)
		#data[1].append([]) # average sample list for each file 
		#data[2].append([]) # average amplitude list for each file
		#data[3].append(0) # difference

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
		print "tau = ",float(all_rows[0][0][0])

		# To append weights of 0th waveform:
		# weights.append(all_rows[2][0])

		chosen_weights.append([])

		# Take nth weight from all j functions

		for j in range(len(all_rows[2])):
			chosen_weights[file_number].append(all_rows[2][j][n])
			#chosen_weights.append(all_rows[2][j][n])

		print 'chosen_weights = ',chosen_weights

		#print "range(len(all_rows[2])) = ", range(len(all_rows[2]))
		#for j in range(len(all_rows[2])):
		#	print "all_rows[2][",j,"] = ",all_rows[2][j] 
		#	weights.append(all_rows[2][j])

		# Save tau value
		tau.append(all_rows[0][0][0]) # all_rows[0][0][n] is tau value of file.

		f.close() # close file 

	# Order desired data

	functions = range(len(chosen_weights[0]))

	for i in range(len(tau)):
		tau[i] = float(tau[i])

	for i in range(len(chosen_weights)):
		for j in range(len(chosen_weights[0])):
			chosen_weights[i][j] = float(chosen_weights[i][j])

	print 'tau = ',tau
	print 'functions = ',functions
	print 'chosen_weights = ',chosen_weights

	t = []
	f = []
	w = []

	for i in range(len(chosen_weights)):
		for j in range(len(chosen_weights[0])):
			t.append(tau[i])
			f.append(functions[j])
			w.append(chosen_weights[i][j])

	print 't = ',t
	print 'f = ',f
	#print 'chosen_weights_o = ',chosen_weights_o

	plt.scatter(t, f, c = chosen_weights)
	#plt.colorbar()

	#plt.contourf(tau, functions, chosen_weights)
	#plt.colorbar()
	plt.xlabel('Tau')
	plt.ylabel('Function')
	title_ = "Weight of Sample " + str(n)
	plt.title(title_, fontsize = 20)
	figtitle = str(data_folder) + '/' + "output/" + "w_" + str(n) + "_" + str(int(time.time())) + ".png"
	plt.savefig(figtitle)
	plt.show()

