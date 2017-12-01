# Abe Tishleman-Charny
# November 2017
# The purpose of this code is to plot results from ComputeWeights

import csv
import numpy as np
import matplotlib.pyplot as plt

# Can do things like average amplitude 

# sample number 
xdata = np.asarray([0,1,2,3,4,5,6,7,8,9])

# all_rows[1] = pulse arrays
# all_rows[2] = weights arrays
# all_rows[3] = ampltiude arrays

all_rows = [[],[],[],[]] # [[all],[pulses],[weights],[amplitude]]

# Import data file

with open('ten_pulses.txt', 'r') as f:  # Create file object f by opening file in read mode.
    reader = csv.reader(f, delimiter = "\t") # Assuming tab delimited data
    for row in reader: # Loop over lines
	all_rows[0].append(row) # add list for every line (pulse

# Convert all data from strings -> float
# Might need to apply this to pulses and weights later
#for i in all_rows[0]:
#	i = np.asarray(i) # lists -> arrays
#	i = i.astype(np.float) # string arrays -> float arrays

# Want to plot set of samples with weights
# Want to plot weight distributions

# Extract samples and weights from all pulses

# Go through j pulses
for j in range(len(all_rows[0])):
	all_rows[1].append([])
	all_rows[2].append([])

	c1 = 0
	c2 = 0
	#print "all_rows[1] = ",all_rows[1]

	# go through i elements in the jth pulse
	for i in range(len(all_rows[0][j])):	

		# Extract pulse samples
		if ((i > 0) and (i < 11)):
			all_rows[1][j].append([])
			all_rows[1][j][c1] = (all_rows[0][j][i]) # all_rows[1][j] = jth pulse list
			c1 += 1

		# Extract weights 
		if ((i > 10)): 
			all_rows[2][j].append([])
			all_rows[2][j][c2] = (all_rows[0][j][i]) # all_rows[2][j] = jth weights list 
			c2 += 1

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

# Average ampltiude

# Amplitude = sum over elements signal * weight 



print "range(len(all_rows[1]))",range(len(all_rows[1]))
for j in range(len(all_rows[1])):
	all_rows[3].append([])
	total = 0.0

	for i in range(len(all_rows[1][j])): #all_rows[1][j] size diff from all_rows[0] size because sample and weights are size 10.
		# determine jth ampltiude
		total += float(all_rows[1][j][i])*float(all_rows[2][j][i]) # Summing over S_i X w_i		

	# after summing over i
	all_rows[3][j] = total # Amplitude of jth pulse

print "all_rows[3] = ",all_rows[3]

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
