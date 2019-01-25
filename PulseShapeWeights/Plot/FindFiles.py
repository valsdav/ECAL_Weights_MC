#from ROOT import *
import os

def FindFiles(data_folder,file_string):
	print'In FindFiles'
	paths = []

	for file in os.listdir(str(os.getcwd()) + '/' + str(data_folder)):
	#if file.endswith(".root"):
	#if 'EC_' in file:
		if file_string in file:
			print '	Found File: ',os.path.join(file)
			paths.append(str(data_folder) + '/' + os.path.join(file)) 

	return paths