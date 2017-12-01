# Abe Tishleman-Charny
# November 2017
# The purpose of this code is to plot results from ComputeWeights

import csv
import numpy as np
import matplotlib.pyplot as plt

xdata = np.asarray([0,1,2,3,4,5,6,7,8,9])

# Import data from text file

all_rows = [] # list of lists

with open('ten_pulses.txt', 'r') as f:  # Create file object f by opening testfile.txt in read mode.
    reader = csv.reader(f, delimiter = "\t")
    for row in reader: # Loop over rows
	all_rows.append(row) # appends row lists to all_rows

for i in all_rows:
	i = np.asarray(i) # convert lists into arrays
	i = i.astype(np.float) # convert string arrays into float arrays

# Want to plot set of samples with weights
# Want to plot weight distributions

pulse_data_0 = []
weight_data_0 = []

# For single pulse below. Should expand to all pulses in data file.
# Store all_rows data into pulse data and weight data array
for i in range(len(all_rows[0])):
	if ((i > 0) and (i < 11)):
		pulse_data_0.append(all_rows[0][i])

	if ((i > 10)):
		weight_data_0.append(all_rows[0][i])


for i in range(len(pulse_data_0)):
	print "i = ", i
	print "pulse_data_0[",i,"] = ",pulse_data_0[i]

for i in range(len(weight_data_0)):
	print "i = ", i
	print "weight_data_0[",i,"] = ",weight_data_0[i]

#print "pulse_data_0 = ", pulse_data_0

pulse = plt.scatter(xdata,pulse_data_0, color = 'b') # all_rows[0], color = 'b')
weights = plt.scatter(xdata,weight_data_0, color = 'r') # all_rows[1], color = 'r')
plt.xlabel('Sample Number')
plt.legend((pulse, weights), ('pulse', 'weights'))
plt.ylabel('Normalized Pulse')
plt.show()

f.close() # close file 
