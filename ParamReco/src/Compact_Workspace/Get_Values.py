# Abe Tishelman-Charny
# 20 July 2018
# The purpose of this program is to plot average bias vs. time shift for multiple 

# https://www-zeuthen.desy.de/~middell/public/pyroot/pyroot.html

from ROOT import *
from array import array
import os
import argparse

# dashed line across zero? 

parser = argparse.ArgumentParser(description='Process some files')
#parser.add_argument('-f', '--files', type = str, nargs='+' , help='files to plot from')
parser.add_argument('-d', '--directory', type = str, nargs='+',  help='directory to root files')
args = parser.parse_args()

# Open all flies from desired directory

paths = []
data_folder = args.directory[0]

# Find all files in current working directory ending in ".root"
# for data_folder path in current directory
for file in os.listdir(str(os.getcwd()) + '/' + str(data_folder)):
    if file.endswith(".root"):
        print(os.path.join(file))
	paths.append(str(data_folder) + '/' + os.path.join(file))

print "paths = ",paths

print "len(paths) = ",len(paths)

#gStyle.SetOptStat(0); # no stats box

# figure out how to loop 
# Set maximum number of files 
f1 = TFile()
f2 = TFile()
f3 = TFile()
f4 = TFile() 
f5 = TFile()
f6 = TFile()

h1 = TH1F()
h2 = TH1F()
h3 = TH1F()
h4 = TH1F()
h5 = TH1F()
h6 = TH1F()

#files = [f1, f2, f3, f4, f5, f6]
#histos = [h1, h2, h3, h4, h5, h6]
#graphs = [g1, g2, g3, g4, g5, g6]

histos = []

#i = 0

"""for path in paths: # Should start with this and create 
	#files[i] = TFile.Open(paths[i])
	print 'path = ',path
	f = TFile.Open(path)
	#if files[i].GetListOfKeys().Contains("values"):
	if f.GetListOfKeys().Contains("values"):
		#histos[i] = files[i].Get("values")
		histos.append(f.Get('values'))
	#if files[i].GetListOfKeys().Contains("Bias_Values"):
	if f.GetListOfKeys().Contains("Bias_Values"):
		#histos[i] = files[i].Get("Bias_Values")
		histos.append(f.Get('Bias_Values'))"""
	#i += 1
	#files.append()	
	#f1 = TFile.Open(path) 

#print 'histos = ',histos

#extra = len(histos) - len(paths)

#while extra > 0:
	#files = files[:-1]
	#histos = histos[:-1]
	#graphs = graphs[:-1]
	#extra -= 1

#for p, path in enumerate(paths, 0):
for path in paths:
	print 'path = ',path
	f = TFile.Open(path)
	if f.GetListOfKeys().Contains("values"):
		#histos[i] = files[i].Get("values")
		hist = f.Get('values')
	#if files[i].GetListOfKeys().Contains("Bias_Values"):
	if f.GetListOfKeys().Contains("Bias_Values"):
		#histos[i] = files[i].Get("Bias_Values")
		hist = f.Get('Bias_Values')
	#title = str(paths[h-1].split('/')[-1].split('.')[-2])[3:]
	title = str(path.split('/')[-1].split('.')[-2])[3:]
	#section = str(paths[h-1].split('/')[-1].split('.')[-2].split('_')[1])
	section = str(path.split('/')[-1].split('.')[-2].split('_')[1])
	c0 = TCanvas('c0', 'c0', 800, 600)
	c0.SetBatch(kTRUE)
	hist.SetTitle(title)
	hist.SetName('Bias Values')
	#if section == 'EB':
	#	hist.GetXaxis().SetRangeUser(-0.05,0.05)
	#if (section == 'EE+') or (section == 'EE-'):
	#	hist.GetXaxis().SetRangeUser(-0.05,0.16)

	# get avereage and deviation to determine range of histos
	avg = hist.GetMean()
	dev = hist.GetStdDev()
	print'avg = ',avg
	print'dev = ',dev

	hist.GetXaxis().SetRangeUser(avg-5*dev,avg+5*dev)
	
	hist.Draw()

	#xline = TLine(c0.GetUxmin(),0,c0.GetUxmax(),0)
	#xline.SetLineColor(kBlack)
	#xline.SetLineStyle(1)

	#yline = TLine(0,c0.GetUymin(),0,c0.GetUymax())
	#yline.SetLineColor(kBlack)
	#yline.SetLineStyle(1)

	#xline.Draw("SAME")
	#yline.Draw("SAME")

	c0.SaveAs("values/values_" + title + ".pdf")



