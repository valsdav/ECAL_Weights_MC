# Abe Tishleman-Charny
# November 2017
# The purpose of this code is to plot results from Calculate.cpp

# Import multiple data files, each corresponding to different correlation matrix
# Calculate average amplitude for each, plot average ampltiude vs. noise 
# Want to plot weight distributions
# Can do things like calculate average ampltiude, plot samples & weights.

import csv
import numpy as np
import matplotlib.pyplot as plt

# Sample numbers 
xdata = np.asarray([0,1,2,3,4,5,6,7,8,9]) # Assuming 10 samples. Should eventually obtain from data files.
all_rows = [[],[],[],[]] # [[raw],[samples],[weights],[amplitude]]

# all_rows[0] = raw data lists
# all_rows[1] = sample lists
# all_rows[2] = weight lists
# all_rows[3] = ampltiude values

# Import data file
with open('output-1516207044516402191.txt', 'r') as f: # Create file object f by opening file with given path in read mode.
    reader = csv.reader(f, delimiter = "\t") # Assuming tab delimited data
    for row in reader: # Loop over lines (pulses)
	all_rows[0].append(row) # add raw data list for every row (pulse)

# Uncomment below to search for all files ending in ".txt"

#paths = []

# Find all files in current working directory ending in ".txt"
#for file in os.listdir(str(os.getcwd())): # current working directory
#    if file.endswith(".txt"):
#        print(os.path.join(file))
#	paths.append(os.path.join(file))

#print "paths = ",paths

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

	# Go through i elements in the jth pulse
	for i in range(len(all_rows[0][j])):	

		# Extract samples
		if ((i > 0) and (i < 11)):
			all_rows[1][j].append([])
			all_rows[1][j][c1] = (all_rows[0][j][i]) # all_rows[1][j] = jth sample list
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

# Compute ampltiude values
for j in range(len(all_rows[1])):
	all_rows[3].append([])
	total = 0.0

	for i in range(len(all_rows[1][j])): #all_rows[1][j] size diff from all_rows[0] size because sample and weights are size 10.
		# determine jth ampltiude
		total += float(all_rows[1][j][i])*float(all_rows[2][j][i]) # Summing over S_i X w_i		

	# after summing over i
	all_rows[3][j] = total # Amplitude of jth pulse

# Average Ampltiudes
total = 0.0
avg_amp = 0.0

for j in range(len(all_rows[3])):
	total += all_rows[3][j]

avg_amp = total / len(all_rows[3])

pulses = len(all_rows[3])

print "Amplitude = ",avg_amp, "averaged over ",pulses,"pulses."

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
