# Abe Tishleman-Charny
# November 2017
# The purpose of this code is to plot results from Calculate.cpp

# Import multiple data files, each corresponding to different correlation matrix
# Calculate average amplitude for each, plot average ampltiude vs. noise 
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
#print "Python file: ",sys.argv[0]
#print "Number of files: ",len(sys.argv)
#print "File names: ",str(sys.argv)

#name_ = "*data-tau*"
#path_ = "/"

paths = []

# Find all files in current working directory ending in ".txt"
for file in os.listdir(str(os.getcwd())): # current working directory
    if file.endswith(".txt"):
        print(os.path.join(file))
	paths.append(os.path.join(file))

print "paths = ",paths

# average pulse and tau for each data file
average_pulses = []
tau = []

data = [[],[],[],[]]

# data[0] = file number
# data[1] = avg sample values # turns out this is actually the same for all tau values since the weights are what changes.
# data[2] = avg amplitude values

# xdata = []

pulses_per_file = []

#xdata = np.asarray([0,25,50,75,100,125,150,175,200,225]) # Assuming 10 samples. Should eventually obtain from data files.

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

	# Sample numbers 
	#xdata = np.asarray([0,1,2,3,4,5,6,7,8,9]) # Assuming 10 samples. Should eventually obtain from data files.
	all_rows = [[],[],[],[]] # [[raw],[samples],[weights],[amplitude]]

	# all_rows[0] = raw data lists
	# all_rows[1] = sample lists
	# all_rows[2] = weight lists
	# all_rows[3] = ampltiude values

	# Import data file
	with open(i, 'r') as f: # Create file object f by opening file with given path in read mode.
	    reader = csv.reader(f, delimiter = "\t") # Assuming tab delimited data
	    for row in reader: # Loop over lines (pulses)
		all_rows[0].append(row) # add raw data list for every row (pulse)

	# Convert all data from strings -> float
	# Might need to apply this to pulses and weights later. 
	# Might not need to do this until add/sub or mult/div elements.

	"""
	for i in all_rows[0]:
		i = np.asarray(i) # lists -> arrays
		i = i.astype(np.float) # string arrays -> float arrays
	"""

	# raw data -> samples & weights

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
				#print "k = ",k ,"all_rows[1][j][c1] = ",all_rows[1][j][c1] 

			# Extract weights 
			if ((k > 10)): 
				all_rows[2][j].append([])
				all_rows[2][j][c2] = (all_rows[0][j][k]) # all_rows[2][j] = jth weights list 
				c2 += 1	

	#print "all_rows[1] = ",all_rows[1]
	#print "all_rows[2] = ",all_rows[2]

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

	# for each sample position, add and average all sample values 

	for j in range(len(all_rows[1][0])):

		data[1][file_number].append([]) # add average sample index
		data[2][file_number].append([]) # the file_number'th average ampltiude list

	# sample index total
	totals = []
	avg_samp = []

	full = False

	for j in range(len(all_rows[1])): #for each pulse j
		#print "j =",j
		if (j == 1):
			#print"full = True"
			full = True
		#counter = 0
		#total = 0.0

		for k in range(len(all_rows[1][j])): # for each sample index k
			#print "k = ",k
			if (full == False):
				totals.append(0) # need to append a number, not a list 
				avg_samp.append(0)
			totals[k] +=  float(all_rows[1][j][k])*float(all_rows[2][j][k])
			avg_samp[k] += float(all_rows[1][j][k])
			#print "k = ", k, " avg_samp = ", avg_samp
			#print"in loop"
			#print "samp = ",float(all_rows[1][j][k])
			#print "weight = ",float(all_rows[2][j][k])
			#print "AmpCalc = ",float(all_rows[1][j][k])*float(all_rows[2][j][k])
			#print"k = ",k," totals = ",totals
			#totals[k] += (float(all_rows[1][j][k])*float(all_rows[2][j][k]))
			

		#print "Out of loop."

		if ( j == ( len(all_rows[1]) - 1) ):

			for k in range(len(all_rows[1][0])):	

				avg_samp[k] = avg_samp[k] / ( j + 1 )
				data[1][file_number][k] = avg_samp[k]

				totals[k] =  totals[k] / ( j + 1 )
				totals[k] = totals[k] / totals[5] # Normalize to peak
				data[2][file_number][k] = totals[k]
				
			
	#print "totals = ",totals

	# print "avg_samp = ",avg_samp

	#print "data[1][0] = ", data[1][0]
	#print "data = ", data

	# Compute total ampltiude values
	for j in range(len(all_rows[1])):
		#all_rows[3].append([])
		all_rows[3].append(0)
		total = 0.0

		for k in range(len(all_rows[1][j])): #all_rows[1][j] size diff from all_rows[0] size because sample and weights are size 10.
			# determine jth total ampltiude
			total += float(all_rows[1][j][k])*float(all_rows[2][j][k]) # Summing over S_i X w_i		
			#print "Amp[",k,"] = ",float(all_rows[1][j][k])*float(all_rows[2][j][k])

		# after summing over k
		print "Total amp = ",total
		all_rows[3][j] = total # Total Amplitude of jth pulse

	# Average Ampltiudes
	total = 0.0
	avg_amp = 0.0

	for j in range(len(all_rows[3])):
		#print "j = ",j ," all_rows[3][j] = ",all_rows[3][j]
		total += all_rows[3][j]

	avg_amp = total / len(all_rows[3])

	pulses = len(all_rows[3])
	
	pulses_per_file.append(pulses)

	# print "Amplitude = ",avg_amp, "averaged over",pulses,"pulses."

	# Add (tau,avg_amp) data point
	tau.append(all_rows[0][0][0]) # all_rows[0][0][n] is tau value of file.
	average_pulses.append(avg_amp)

	diff = []
	

	#data[3][file_number].append(0)
	for j in range(len(data[1][file_number])):
		print "difference loop."
		print "j = ",j
		data[3][file_number] += abs(float(data[2][file_number][j]) - float(data[1][file_number][j]))

	print "float(data[2][file_number][5]) = ",float(data[2][file_number][5])

	#data[3][file_number] = 

	#print "all_rows[0] = ",all_rows[0]

	#print "all_rows[1][0] = ",all_rows[1][0]

	f.close() # close file 

# print "tau = ",tau

data_x = [x for x,_ in sorted(zip(tau,data[2]))]
data_y = [y for _,y in sorted(zip(tau,data[2]))]

#tau.sort()
#average_pulses.sort()

#print "tau = ",tau
#print "average_pulses = ",average_pulses

print "data_x = ",data_x
print "data_y = ",data_y

print "pulses_per_file = ",pulses_per_file

"""
# Plot
amplitude = plt.scatter(tau,average_pulses, color = 'b') 
plt.plot(tau,average_pulses, color = 'b')
#plt.plot(,all_rows[2][0])
plt.xlabel('Time Constant')
#plt.legend((amplitude),('amplitude'))   # , weights), ('pulse', 'weights'))
plt.ylabel('Average Amplitude')
plt.title(r'$\hat{\bar{\mathcal{A}}}$ vs. $\tau$', fontsize = 28)
#figtitle = 
plt.savefig("ampvstau")

plt.show() """

# time in ns
xdata = np.asarray([0,25,50,75,100,125,150,175,200,225]) # Assuming 10 samples. Should eventually obtain from data files.

all_x_data = []

for i in range(len(pulses_per_file)): # files
	all_x_data.append(xdata)
	
for i in data[2]:
	i = np.asarray(i) # lists -> arrays
	i = i.astype(np.float) # string arrays -> float arrays

#print "data[2] = ",data[2]

#print "int(time.time()) = ",int(time.time()) # seconds since 1, January 1970

#print "all_x_data = ",all_x_data
#print "data[2] = ",data[2]

# Calculate total difference here

"""
# Plot
samples = plt.scatter(xdata,data[1][0], color = 'b') # Plot avg samples of 0th file. Might be same for all files
amp1 = plt.scatter(all_x_data[0],data[2][0], color = 'r')  # Plot avg Amp (per point) of 0th file
amp2 = plt.scatter(all_x_data[0],data[2][-1], color = 'g')
plt.plot(all_x_data[0],data[1][0], color = 'b') # 0th file samples
plt.plot(all_x_data[0],data[2][0], color = 'r') 
plt.plot(all_x_data[0],data[2][-1], color = 'g') 
#amp1 = plt.plot(all_x_data[0],data[2][0], color = 'r') # 0th file amplitudes
#amp2 = plt.plot(all_x_data[0],data[2][1], color = 'g') # 0th file amplitudes
#plt.plot(all_x_data[0],data[2][2], color = 'c') # 0th file amplitudes
#plt.plot(all_x_data[0],data[2][3], color = 'y') # 0th file amplitudes
plt.xlabel('Time (ns)')

title1 = 'Tau = ' + str(data_x[0])
title2 = 'Tau = ' + str(data_x[-1])

plt.legend((samples, amp1, amp2), ('samples', title1, title2))
plt.ylabel('Normalized ADC')
title_ = 'Data Averaged Over ' + str(pulses_per_file[0]) +' Pulses, Tau = [' + str(data_x[0]) + ', ' + str(data_x[-1]) + ']'
plt.title(title_, fontsize = 18)
figtitle = "output_" + str(int(time.time())) + ".png"
plt.savefig(figtitle)

plt.show()"""

# Plot

print "len(data[0]) = ",len(data[0])
print "len(data[3]) = ",len(data[3])

print "data[0] = ",data[0]
print "data[3] = ",data[3]


differences = plt.scatter(data_x, data[3], color = 'b') # Plot avg samples of 0th file. Might be same for all files
#amp1 = plt.scatter(all_x_data[0],data[2][0], color = 'r')  # Plot avg Amp (per point) of 0th file
#amp2 = plt.scatter(all_x_data[0],data[2][-1], color = 'g')
plt.plot(data_x,data[3], color = 'b') # 0th file samples
#plt.plot(all_x_data[0],data[2][0], color = 'r') 
#plt.plot(all_x_data[0],data[2][-1], color = 'g') 
#amp1 = plt.plot(all_x_data[0],data[2][0], color = 'r') # 0th file amplitudes
#amp2 = plt.plot(all_x_data[0],data[2][1], color = 'g') # 0th file amplitudes
#plt.plot(all_x_data[0],data[2][2], color = 'c') # 0th file amplitudes
#plt.plot(all_x_data[0],data[2][3], color = 'y') # 0th file amplitudes
plt.xlabel('Time Constant')

#title1 = 'Tau = ' + str(data_x[0])
#title2 = 'Tau = ' + str(data_x[-1])

#plt.legend((differences),('Differences'))
plt.ylabel('Normalized ADC')
title_ = 'Data Averaged Over ' + str(pulses_per_file[0]) +' Pulses, Tau = [' + str(data_x[0]) + ', ' + str(data_x[-1]) + ']'
plt.title(title_, fontsize = 16)
figtitle = "output_" + str(int(time.time())) + ".png"
plt.savefig(figtitle)

plt.show()
