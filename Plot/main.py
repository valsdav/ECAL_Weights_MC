# Abe Tishelman-Charny
#
# The purpose of this program is to plot average bias vs. time shift from root files

#from ROOT import *
#from array import array
import argparse

from Sigma_Calc import *
from SameCan import *
from SepCan import *

#gROOT.SetBatch(kTRUE) # Don't show plot upon Draw function use 

def main():
	print('In main function')

	# Get command line arguments 
	parser = argparse.ArgumentParser(description='Process some files')
	parser.add_argument('-p', '--params', type = str, nargs='+', help='CanOption,Directory,Range,Legend_Location,y_range')
	#parser.add_argument('-d', '--bias_dist_only', action='store_true')

	# Examples and Formats
	#
	# CanOption: same or sep. One to plot all on one canvas, sep to plot on separate canvases. 
	# Directory: bin
	# Range: -10_10
	# Legend_Location: BR: Bottom Right, MR: Middle Right
	# y_min: -2
	# y_max: 2
	# time_shift: 
	#
	# python plot.py -p same,bin,-10_10,BR,-2,2

	args = parser.parse_args()
	argument = args.params[0].split(',')
	
	# Store arguments as parameters 
	params = [] 

	for param in argument: 
		params.append(param)

	# PlotOption = params[0]
	# data_folder = params[1]
	# file_string = params[2]
	# ymin = float(params[4])
	# ymax = float(params[5])
	# time shift is 6th param, used in samecan. 

	# Find all files in working directory containing ""
	# for data_folder path in  directory

	# Have function for taking data_folder and file_string and returning paths. 

	if (params[0] == 'same'):
		print('Plotting on same canvas')
		SameCan(params)

	if (params[0] == 'sep'):
		print('Plotting on separate canvases')
		SepCan(params)

	#sub_plot_type = str(args.sub_plot_type[0]) # ETR or WPC 

if __name__ == '__main__':
	main()
