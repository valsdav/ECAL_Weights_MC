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
import random
import matplotlib
import matplotlib.pyplot as plt
from matplotlib.ticker import MaxNLocator
from matplotlib import cm
from mpl_toolkits.mplot3d import Axes3D
from matplotlib import rc 

import numpy 
from numpy.random import randn, shuffle
from scipy import linspace, meshgrid, arange, empty, concatenate, newaxis, shape


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
chosen_weights = []
file_numbers = []
#functions = []

file_number = -1

for i in paths:

	file_number += 1
	file_numbers.append(file_number)

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
	print "tau = ",float(all_rows[0][0][0])
	
	# To append weights of 0th waveform:
	# weights.append(all_rows[2][0])

	chosen_weights.append([])

	n = 5

	# Take nth weight from all j functions

	for j in range(len(all_rows[2])):
		chosen_weights[file_number].append(all_rows[2][j][n])

	#print "range(len(all_rows[2])) = ", range(len(all_rows[2]))
	#for j in range(len(all_rows[2])):
	#	print "all_rows[2][",j,"] = ",all_rows[2][j] 
	#	weights.append(all_rows[2][j])

	# Save tau value
	tau.append(all_rows[0][0][0]) # all_rows[0][0][n] is tau value of file.

	f.close() # close file 

# Order desired data

# One tau, multiple f(t)
#wf_num = [x for x,_ in sorted(zip(range(len(weights)),weights))] # all_rows[2][0] = weights for the 0th set of normalized samples (f(t))
#data_y = [y for _,y in sorted(zip(range(len(weights)),weights))]

functions = range(len(chosen_weights[0]))

for i in range(len(tau)):
	tau[i] = float(tau[i])

for i in range(len(chosen_weights)):
	for j in range(len(chosen_weights[0])):
		chosen_weights[i][j] = float(chosen_weights[i][j])

print 'tau = ',tau
print 'functions = ',functions
print 'chosen_weights = ',chosen_weights

tau_o = [x for _,x,_,_ in sorted(zip(file_numbers,tau,functions,chosen_weights))] 
functions_o = [y for _,_,y,_ in sorted(zip(file_numbers,tau,functions,chosen_weights))]
chosen_weights_o = [z for _,_,_,z in sorted(zip(file_numbers,tau,functions,chosen_weights))]
file_numbers_o = [f for f,_,_,z in sorted(zip(file_numbers,tau,functions,chosen_weights))]

print 'tau_o = ',tau_o
print 'functions_o = ',functions_o
print 'chosen_weights_o = ',chosen_weights_o

def fn_to_tau(fn):
  t = [x for x,_ in sorted(zip())]
  funct = [y for _,y in sorted(zip())]

  return tau[fn]

#plt.scatter()


# Might need to convert to float for color plot to work

# Many tau, single f(t)
#tau_sorted = [x for x,_ in sorted(zip(tau,weights))] # all_rows[2][0] = weights for the 0th set of normalized samples (f(t))
#data_y = [y for _,y in sorted(zip(tau,weights))]

#print "tau_sorted = ", tau_sorted
#print "weights = ",weights

# label maker

#def labelmaker(element):
#  label = "tau = " + str(element) 
#  return label

# Need tau for xdata, f(t) for y data, nth weight for z data

#plt.scatter(tau, functions, c = chosen_weights, cmap = 'jet', vmin = 0, vmax = 250)
#plt.colorbar()
#plt.contourf(tau_o,functions_o,chosen_weights_o)
#plt.scatter(tau, chosen_weights)
#plt.xlabel('Tau')
#plt.ylabel('Function')
#title_ = "w_{5}(tau,f(t))"
#plt.title(title_, fontsize = 20)
#figtitle = str(data_folder) + '/' + "output/" + str(int(time.time())) + ".png"
#plt.savefig(figtitle)
#plt.show()

#

# =========================
## generating ordered data:

#X, Y = meshgrid(file_numbers, functions)
#Z = 
#print 'X = ',X
#print 'Y = ',Y
#print 'chosen_weights[0][0] = ',chosen_weights[0][0]
#Z = chosen_weights[X][Y] 

# Make sure file_numbers corresponds to correct tau value ^^^^

#N = 32
#x = sorted(randn(N))
#y = sorted(randn(N))

#random_array = [[random.random() for i in range(N)] for j in range(N)]

#X, Y = meshgrid(file_numbers_o, functions_o)
#Z = []

#print 'Z = ',Z

#for i in range(chosen_weights): # taus
#  Z.append([])
#  for j in range(chosen_weights[0]): # functions
#    Z[i].append([])
#    Z[i][j] = chosen_weights[X][Y]

# ======================================
## reference picture (X, Y and Z in 2D):

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

surf = ax.plot_surface(tau_o, functions_o, chosen_weights_o, rstride=1, cstride=1, cmap=cm.jet, linewidth=0)
fig.colorbar(surf)

title = ax.set_title("plot_surface: given X, Y and Z as 2D:")
title.set_y(1.01)

ax.set_xlabel('Tau')
ax.set_ylabel('f(t)')
#ax.xaxis.set_title('Tau')

ax.xaxis.set_major_locator(MaxNLocator(5))
ax.yaxis.set_major_locator(MaxNLocator(6))
ax.zaxis.set_major_locator(MaxNLocator(5))

fig.tight_layout()
plt.show()
#fig.savefig('plot.png')

"""fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

surf = ax.plot_surface(X, Y, Z, rstride=1, cstride=1, cmap=cm.jet, linewidth=0)
fig.colorbar(surf)

title = ax.set_title("plot_surface: given X, Y and Z as 2D:")
title.set_y(1.01)

ax.xaxis.set_major_locator(MaxNLocator(5))
ax.yaxis.set_major_locator(MaxNLocator(6))
ax.zaxis.set_major_locator(MaxNLocator(5))

fig.tight_layout()
fig.savefig('3D-constructing-{}.png'.format(N))"""

