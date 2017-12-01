# Abe Tishleman-Charny
# November 2017
# The point of this code is to plot results from ComputeWeights

import csv
import numpy as np
import matplotlib.pyplot as plt

xdata = np.asarray([0,1,2,3,4,5,6,7,8,9])

# Import data from text file

all_rows = [] # list of lists

with open('testfile.txt', 'r') as f:  # Create file object f by opening testfile.txt in read mode.
    reader = csv.reader(f, delimiter = "\t")
    for row in reader: # Loop over rows
	all_rows.append(row) # appends row lists to all_rows

#content = f.readlines()

data = []

#print "all_rows[0] = ",all_rows[0]

for i in all_rows:
	i = np.asarray(i) # convert lists into arrays
	i = i.astype(np.float) # convert string arrays into float arrays

#print "all_rows = ", all_rows

#ydata = ydata.astype(np.float) # convert string array to float array

#print "ydata = ",ydata

plt.scatter(xdata,all_rows[0])
plt.xlabel('Sample Number')
plt.ylabel('Normalized Pulse')
plt.show()

f.close()
