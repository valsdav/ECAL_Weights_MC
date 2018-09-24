# Abe Tishelman-Charny
# 20 July 2018
# The purpose of this program is to plot average bias vs. time shift for multiple 

# https://www-zeuthen.desy.de/~middell/public/pyroot/pyroot.html

from ROOT import *
from array import array
import os
import argparse

gROOT.SetBatch(kTRUE)

# dashed line across zero? 

parser = argparse.ArgumentParser(description='Process some files')
#parser.add_argument('-f', '--files', type = str, nargs='+' , help='files to plot from')
parser.add_argument('-d', '--directory', type = str, nargs='+',  help='directory to root files')
#parser.add_argument('-t', '--plot_type', type = str, nargs='+',  help='Type of Plot, BC or EC')
#parser.add_argument('-st', '--sub_plot_type', type = str, nargs='+',  help='What to show on one plot. All eta ranges (ETR), Weights/Params combos (WPC)') 
args = parser.parse_args()

# Open all flies from desired directory

paths = []
dist_paths = []
data_folder = args.directory[0]
#sub_plot_type = str(args.sub_plot_type[0]) # ETR or WPC 

#print "plot type = ",plot_type

# Find all files in current working directory ending in ".root"
# for data_folder path in current directory
for file in os.listdir(str(os.getcwd()) + '/' + str(data_folder)):
    #if file.endswith(".root"):
    if 'EC_' in file:
        #print '	Found File: ',os.path.join(file)
	paths.append(str(data_folder) + '/' + os.path.join(file)) # Why am I saving the 'bin/' part of the path? 

#plot_type = str(paths[0].split('/')[-1].split('_')[-8])

plot_type = "EC"
weights_type = "whatever"

#print 'plot type = ',plot_type

#print "Number of paths = ",len(paths)
#gStyle.SetOptStat(0); # no stats box

mg = TMultiGraph()
l1 = TLegend(0.7, 0.1, 0.9, 0.3) # Bottom right
l1.SetHeader("Legend") # I actually can't believe you can declare l1 in an if statement then access outside

EB_ranges = 0
EE_ranges = 0 


colors = [kRed, kOrange, kGreen, kCyan, kAzure + 4, kBlue, kViolet, kMagenta, kGray]
line_styles = []

static_line_styles = []

for i in range(10):
	static_line_styles.append(i+1)

num_paths = len(paths) 
num_colors = len(colors)

for i in range(num_colors):
	line_styles.append(1)

if ( num_paths > num_colors ):
	for i in range(num_paths - num_colors):
		#for j in range(num_paths - num_colors): 
		colors.append(colors[i])   #+ 4)
		line_styles.append(2)	

i = 0

for path in paths:
	#f = TFile()
	h = TH1F()
	#g = TGraph()

	f = TFile().Open(path)

	if plot_type == 'EC':
		h = f.Get("EC")
	elif plot_type == 'BC':
		h = f.Get("tsr")
	
	counter = 1
	value = 0
	ts = 0
	dt = h.GetXaxis().GetBinLowEdge(3) - h.GetXaxis().GetBinLowEdge(2)

	x = array('d')
	y = array('d')


	while(h.GetBinContent(counter) != 0):
		#print ("hist.GetXaxis().GetBinContent(" + str(counter) + ") = " + str(hist.GetXaxis().GetBinLowEdge(counter)))
		ts = h.GetXaxis().GetBinLowEdge(counter)
		#print ("hist.GetBinContent(" + str(counter) + ") = " + str(hist.GetBinContent(counter)))
		value = h.GetBinContent(counter)

		#cout << "abs(" << value << ") = " << abs(value) << endl;
		#h2->Fill(ts,fabs(value));
		x.append(ts)
		#if (abs_val): y.append(fabs(value))
		#else: y.append(value)
		y.append(value)
		#print("ts = " + str(ts) )
		#print("value = " + str(value) )
		#print("counter = " + str(counter) )
		ts += dt
		counter += 1

	g = TGraph(counter - 1, x, y)

	if plot_type == 'BC':
		g.SetMarkerStyle(8)

		if path.split('_')[-4] == "online": 
			if path.split('_')[-3] == "2017":
				g.SetMarkerColor(kRed + 2) 
				g.SetLineColor(kRed + 2)
			elif path.split('_')[-3] == "2018":
				g.SetMarkerColor(kRed) 
				g.SetLineColor(kRed)

		if path.split('_')[-4] == "PedSub1+4": 
			if path.split('_')[-3] == "2017":
				#print 'year = 2017'
				g.SetMarkerColor(kGreen + 4) 
				g.SetLineColor(kGreen + 4)
			elif path.split('_')[-3] == "2018":
				#print 'year = 2018'
				g.SetMarkerColor(kGreen) 
				g.SetLineColor(kGreen)
			
	elif plot_type == 'EC':

		#gStyle.SetPalette(55) # kRainbow

		#eta_boundaries = [-3.0,-2.6, -2.3, -2.0, -1.479, -1.133, -0.78477, -0.04362, 0.45396, 0.80182, 1.1479, 1.479, 2.0, 2.3, 2.6, 3.0]
		#eta_boundaries = [-3.0, -2.6, -2.3, -2.0, -1.479, -65, -45, -25, 0, 25, 45, 65, 1.479, 2.0, 2.3, 2.6, 3.0]

		# i = 0

		min_eta = float(path.split('_')[-7]) #min is -7 when there's a note. With no note, one less '_'
		max_eta = float(path.split('_')[-6])

		#print'min eta = ',min_eta
		#print'max eta = ',max_eta

		EE_range = True
		
		#if ( ( (abs(min_eta) > 3.1) and (abs(max_eta) > 3.1) ) or (min_eta == 0) or (max_eta == 0)): EE_range = False # Then these are ieta values, not eta
		#if ( ( (abs(min_eta) > 3.1) and (abs(max_eta) > 3.1) ) or (min_eta == 0) or (max_eta == 0)): EE_range = False # Then these are ieta values, not eta

		#print 'i = ',i

		if ( (min_eta >= -1.485) and (1.482 > min_eta) ): EE_range = False

		color = colors[i]
		line_style = line_styles[i]

		#print"color = ",color 

		g.SetMarkerStyle(kFullDotMedium)
#		g.SetMarkerColor(color)
		g.SetLineStyle(line_style)
#		g.SetLineColor(color)

		#g.SetMarkerColor(kRed - EE_ranges)
		#g.SetMarkerColorAlpha(kRed, (1 - (0.1)*(EE_ranges) ) )
		#g.SetLineColorAlpha(kRed,(1 - (0.1)*(EE_ranges) ) )
		

		if(EE_range):
			#print'i = ',i
			#print'EE'
			#g.SetMarkerColor(kRed - EE_ranges)
			#g.SetMarkerColorAlpha(kRed, (1 - (0.1)*(EE_ranges) ) )
			#g.SetLineColorAlpha(kRed,(1 - (0.1)*(EE_ranges) ) )
			g.SetMarkerColor(kRed)
			g.SetLineColor(kRed)
			g.SetLineStyle(static_line_styles[EE_ranges])
			
			EE_ranges += 1	

		if(not EE_range):
			#print'i = ',i
			#print'EB'
			#g.SetMarkerColor(kRed - EE_ranges)
			#g.SetMarkerColorAlpha(kGreen, (1 - (0.1)*(EB_ranges) ) )
			#g.SetLineColorAlpha(kGreen,(1 - (0.1)*(EB_ranges) ) )
			g.SetMarkerColor(kGreen)
			g.SetLineColor(kGreen)
			g.SetLineStyle(static_line_styles[EB_ranges])
			EB_ranges += 1			

		# Greater abs(eta), less transparent 

#		# EE
#		if ( (min_eta < -1.479) or (min_eta >= 1.479) ): 
#			#print'i = ',i
#			#print'EE'
#			#g.SetMarkerColor(kRed - EE_ranges)
#			g.SetMarkerColorAlpha(kRed, (1 - (0.1)*(EE_ranges) ) )
#			g.SetLineColorAlpha(kRed,(1 - (0.1)*(EE_ranges) ) )
#			EE_ranges += 1

#		# EB
#		elif ( (min_eta >= -1.479) and (min_eta < 1.479) ): 
#			#print'i = ',i
#			#print'EB'
#			g.SetMarkerColorAlpha(kGreen, 0 + 0.1*EB_ranges)
#			g.SetLineColorAlpha(kGreen, 0 + 0.1*EB_ranges)
#			EB_ranges += 1
#		#i += 1

	#l1 = TLegend(0.7, 0.3, 0.9, 0.5)
	#l1 = TLegend(0.1, 0.7, 0.3, 0.9) # Upper left

	g.SetName("g" + str(i))

	if plot_type == 'BC':
		label = path.split('_')[-4] + '_' + path.split('_')[-3]
		l1.AddEntry(g, label, "lp")

	if plot_type == 'EC':
		#label = paths[i].split('_')[-7] + ' #leq #||{#eta} < ' + paths[i].split('_')[-6]
#		if (EE_range): label = path.split('_')[-7] + ' #leq #eta < ' + path.split('_')[-6]
#		if (not EE_range): 
#			#if max_eta == 85:
#				#label = path.split('_')[-7] + ' #leq i#eta #leq ' + path.split('_')[-6]
#			#else:
#			label = path.split('_')[-7] + ' #leq i#eta < ' + path.split('_')[-6]

		label = path.split('_')[-7] + ' #leq #eta < ' + path.split('_')[-6]

		l1.AddEntry(g, label, "lp")

	if plot_type == 'BC':
		section = path.split('_')[-5] #.split('/')[-1]
		minimum = path.split('_')[-2] + 'ns'
		maximum = path.split('.')[-2].split('_')[-1] + 'ns'
		#print 'section = ',section

	if plot_type == 'EC':
		weights_type = paths[0].split('_')[-3]
		#print 'weights type:',weights_type
		if weights_type == 'online': weights_type = 'Online'
		#print 'weights type = ',weights_type
		PY = path.split('_')[-2]

		minimum = path.split('_')[-5]   
		maximum = path.split('_')[-4] 

	mg.Add(g, "LP")
	i += 1

if plot_type == 'BC': mg.SetTitle(section + " Average Bias vs. Time Shift")
if plot_type == 'EC': mg.SetTitle(weights_type + ' Weights, ' + PY + ' Parameters')

c0 = TCanvas('c0', 'c0', 800, 600)
c0.SetBatch(kTRUE)

mg.Draw("A")
mg.GetXaxis().SetTitle("Time Shift (ns)")
#mg.GetXaxis().SetRangeUser(-3,3)
#mg.GetYaxis().SetRangeUser(-0.04,0.02)
mg.GetYaxis().SetTitle("Average Bias")
mg.GetYaxis().SetTitleOffset(1.3)

xline = TLine(c0.GetUxmin(),0,c0.GetUxmax(),0)
#xline = TLine(-3,0,3,0)
xline.SetLineColor(kBlack)
xline.SetLineStyle(1)

yline = TLine(0,c0.GetUymin(),0,c0.GetUymax())
#yline = TLine(0,-0.04,0,0.02)
yline.SetLineColor(kBlack)
yline.SetLineStyle(1)

l1.Draw("SAME")
xline.Draw("SAME")
yline.Draw("SAME")

#Save_Title = "plots/plot" + section + str(int(histos[0].GetXaxis().GetBinLowEdge(1))) + ".pdf"
#Save_Title = "bin/pyplot" + section + "_" + str(int(histos[0].GetXaxis().GetBinLowEdge(1))) + ".pdf"
if plot_type == 'BC': Save_Title = "pyplot/pyplot" + section + "_" + minimum + '_' + maximum + ".pdf"
if plot_type == 'EC': Save_Title = "pyplot/pyplot_EC_" + weights_type + "_" + PY + "_" + minimum + '_' + maximum + ".pdf"

c0.SaveAs(Save_Title)

# Create Canvas with all ts0ns bias distributions

#for file in os.listdir(str(os.getcwd()) + '/' + str(data_folder) + '/dist'):
#for file in 
for file in os.listdir(str(os.getcwd()) + '/' + str(data_folder)):
    if 'ts0ns' in file:
       # print '	Found dist File: ',os.path.join(file)
	#print ' file = ',str(file)
	#dist_paths.append(str(data_folder) + '/' + os.path.join(file))
	dist_paths.append(str(data_folder) + '/' + os.path.join(file))

#print'Dist paths = ',dist_paths

# Create Canvas
# Loop paths
	# titles, figure ranges (set range? dynamic)
	# equal number of bins, same ranges? 
	# add to next canvas pad 

# save pad image 

cc = TCanvas('cc', 'cc', 3000, 1000)
#pp = TPad()
#cc.Divide(6,3)
cc.Divide(6,3)
#cc.SetBatch(kTRUE)
#pp.Divide(6,3)

#if even

#if odd 

# For now 18 intervals

#print'dist_paths[0] = ',dist_paths[0]

i = 1

test_hists = []
tfiles = []

# order by eta min 

#for j in range(len(dist_paths)):
min_etas = []
#ordered_files = [] #(path, eta_min)

temp_list = []

for i in range(len(dist_paths)):
	print'i = ',i
	current_min = 1000
	for path in dist_paths:
		emi = float(path.split('/')[-1].split('_')[-6])
		#print'emi = ',emi
		if (emi < current_min): 
			current_min = emi
			#print'new current min = ',current_min
		#min_etas.append(emi)

	#i = 0
	for path in dist_paths:
		emi = float(path.split('/')[-1].split('_')[-6])
		if emi == current_min:
			print'appending: ',path
			temp_list.append(path)	
			dist_paths.remove(path)
	#i += 1
		
	#if (emi < current_min): current_min = emi

print'temp_list = ',temp_list

i = 1
#for path in ordered_files[0]:
for path in temp_list:
	print'path = ',path
	emi = path.split('/')[-1].split('_')[-6]
	ema = path.split('/')[-1].split('_')[-5]
	wt = path.split('/')[-1].split('_')[-3]
	wy = path.split('/')[-1].split('_')[-2]

	tfiles.append(TFile().Open(path))
	test_hists.append(tfiles[i-1].Get("bias_dist"))

	#test_hists[i-1] = f.Get("bias_dist")
	#h = f.Get("bias_dist")
	#print'cc.cd(i)
	cc.cd(i)
	test_hists[i-1].GetXaxis().SetRangeUser(-0.02,0.2)
	test_hists[i-1].SetTitle('Bias, ' + str(emi) + '_' + str(ema) + '_' + str(wt) + '_' + str(wy))
	test_hists[i-1].Draw()
	i += 1
	#if i == 5: break

cc.cd()
cc.SaveAs("pyplot/Bias_Dists.pdf")

