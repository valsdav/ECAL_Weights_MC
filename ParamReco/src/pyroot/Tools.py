# Put everything here
from ROOT import *
from array import *
import sys
import time 
import os

def Create_h(args):

	h_title = ''

	if args.BC:
		print'Creating BC Plot'
		h_title += 'Average Bias vs. Time Shift,'

	elif args.BD:
		print'Creating BD Plot'
		h_title += 'Bias Distribution,'
	else:
		print 'Please Choose a Plot type'
		sys.exit('Exiting')

	if args.EB:
		print 'Plotting EB'
		h_title += ' EB'

	if args.EEminus:
		print 'Plotting EE-'
		h_title += ' EE-'

	if args.EEplus:
		print 'Plotting EE+'
		h_title += ' EE+'

	h_title += ', ' + str(args.PY) + ' Parameters'

	if args.online:
		h_title += ', Online Weights'
	if args.weights:
		htitle += ', ' + str(args.weights[:4])

	# Get Plot Boundaries (PB)

	# Bias Curve 
	if args.BC:
		# PB = [bins,min,max] 
		# args.tsr = 'bins,tsmin,tsmax'
		xbins = int(args.tsr.split(',')[-3])
		xmin = float(args.tsr.split(',')[-2])
		xmax = float(args.tsr.split(',')[-1])
		#xbins = int ( (xmax - xmin) / float((args.tsr.split(',')[-3]) ) )
		PB = [xbins,xmin,xmax]
		

	# Bias Distribution
	if args.BD:
		# PB = [xmin,xmax,ymin,ymax] 
		if args.EB:
			PB = [0,360,-85,85]

		if args.EEminus:
			PB = [0,100,0,100]

		if args.EEplus:
			PB = [0,100,0,100]
		h_title += ', Time Shift ' + str(args.ts) + 'ns'

	print 'PB =',PB
	print 'h_title = ',h_title

	if args.BC: 
		h = TH1F("h", h_title, PB[0], PB[1], PB[2])
	if args.BD: 
		h = TH2F("h", h_title, ( PB[1] - PB[0] ) , PB[0], PB[1], ( PB[3]-PB[2] ) , PB[2], PB[3])

	return h # can also return list of multiple histograms. 


def Read_Line(args,line,last_line,DOF_Skip,Param_Skip):

	#print 'Reading line',line
	skip_line = False

	# DOF_Skip, Param_Skip
	#7325 last DOF line for EE-

	# Open Parameters file
	# 67703 first XTAL PARAMS EE+ 
	# Bad Lines:
	# (d1 == 838868019) || (d1 == 838871589) || (d1 == 838882900) || (d1 == 838882985) || (d1 == 838900809) || (d1 == 838949036) || (d1 == 838951621) || (d1 == 872436486)

	# Three options: EB, EEplus, EEminus
	# 
	# EB: Stop once either last EB line read or first EE line read. 
	# Last EB: 838970211
	# First EE-: 872415401
	# Last EE-: 872428092
	# First EE+: 872431785
	# Last EE+: 872444475 (in params. one more in DOF)
	#
	# EEminus: Skip EB lines, stop at last EEminus line or first EEplus line
	#
	# EEplus: Skip EB lines and EEminus lines, stop after last line read 

	# Skip to line of interest

	manual_skip = 0

	weights = [] # Declaring to return if skipping bad XTAL

	# EE skip
	#if args.EEminus or args.EEplus:
	#	manual_skip += 60493 # 60495 is the line of the first EE-

	#if args.EEplus:
	#	manual_skip += 7324 # EE- skip

	if (not args.PY):
		print'Please choose a parameter file year with --PY <year>'
		sys.exit('Exiting')
	param_path = 'data/XTAL_Params_' + str(args.PY) + '.txt'
	if (args.weights):
		weight_path = 'data/' + str(args.weights) + '_' + str(args.PY) + '.txt'

	# May need both 2017 and 2018 last line conditions lists. Might have different first/final XTAL IDs

	#with open('data/XTAL_Params.txt') as p_f:
	with open(param_path) as p_f:
    		p_f = p_f.readlines()[line+1+Param_Skip+manual_skip:]
		params_str = p_f[0].split() # current line
		params_fl = [float(x) for x in params_str]
		params = array('d',params_fl)
		#print'params[0] = ',params[0]

	# Should change to if all params are 0 since I think this is what causes nan weights.
	#print'params[0] == 838864037 = ',params[0] == 838864037
	#print'int(args.PY) = ',int(args.PY)
	#print'int(args.PY) == 2018 = ',int(args.PY) == 2018
	if ( (int(args.PY) == 2017) and ( (params[0] == 838868019) or (params[0] == 838871589) or (params[0] == 838882900) or (params[0] == 838882985) or (params[0] == 838900809) or (params[0] == 838949036) or (params[0] == 838951621) or (params[0] == 872436486) ) ):
		skip_line = True # Don't count previous statistics twice. 
		if (args.weights): return params, weights, last_line, DOF_Skip, skip_line
		if(args.online): return params, last_line, DOF_Skip, skip_line
	
	if ( (int(args.PY) == 2018) and ( (params[0] == 838864037) or (params[0] == 838869123) or (params[0] == 838874865) or (params[0] == 838891641) or (params[0] == 838958295) or (params[0] == 838966532) ) ):
		skip_line = True
		#print'skip_line = true for 
		if (args.weights): return params, weights, last_line, DOF_Skip, skip_line
		if (args.online): return params, last_line, DOF_Skip, skip_line

	if (args.weights):
		#w_p = 'data/' + str(args.weights) + '_' + str(args.PY) # Weights Path
		IDs_Match= False

		while(not IDs_Match):
			with open(weight_path) as w_f:
				#Should be on same ID line as Params because weight lines derived from param lines
		    		w_f = w_f.readlines()[line+1+Param_Skip+manual_skip:]  
				weights_str = w_f[0].split() # current line
				weights_fl = [float(x) for x in weights_str]
				weights = array('d',weights_fl)
				#print'w_f[0] = ',w_f[0]
				#print'w_f[1] = ',w_f[1]
				#print'weights = ',weights
				#print'paramsID = ',params[0]
				#print'weightsID = ',weights[0]
				if (weights[0] == params[0]): 
					#print'IDs Match' 	# Keep cycling weights file until ID matches params
					IDs_Match = True
					weights = weights[1:] # No longer need weight ID 
					#print'weights = ',weights
					# Determine if last line 
					if (args.rows == line): # Max specified rows 
						last_line = True
					if (args.EB) and (params[0] == 838970211): # Last EB line 
						last_line = True
					if (args.EEminus) and (params[0] == 872428092): # Last EE- line
						last_line = True
					if (args.EEplus) and (params[0] == 872444475): # Last EE+ line in params
						last_line = True
				else:
					weights_skip += 1
	if (args.online):
		if (args.rows == line):
			last_line = True
		if (args.EB) and (params[0] == 838970211):
			last_line = True
		if (args.EEminus) and (params[0] == 872428092):
			last_line = True
		if (args.EEplus) and (params[0] == 872444475):
			last_line = True


	if args.BC:
		if args.weights:
			return params,weights,last_line, DOF_Skip, skip_line
		if args.online:
			return params,last_line, DOF_Skip, skip_line 

	# Just define list of last-line conditions then loop through to see if they're true. implement in weights and online loop.


	# If ID's match: If BC, leave with params and weights. If BD, find matching DOF line. 
	
	# 3,4 iphi, ieta EB 

	if (args.BD):
		
		p_DOF = '' # DOF path

		# EB
		if (params[0] >= 838861313) and (params[0] <= 838970216):
			p_DOF += 'data/EB_DOF.txt'

		# EE
		if (params[0] >= 872415401):
			p_DOF += 'data/EE_DOF.txt'

		extra = 0
		IDs_Match= False
		while(not IDs_Match):
			with open(p_DOF) as p_dof:
				#print'dof line = ',line+1+DOF_Skip+extra+manual_skip
		    		p_dof = p_dof.readlines()[line+1+DOF_Skip+extra+manual_skip:]
				
				dof_str = p_dof[0].split() # current line

				#print'params[0] = ',params[0]
				#print'dof_str[0] = ',dof_str[0]
				#dof_fl = [float(x) for x in dof_str]
				#dof_line = array('d',dof_fl)
				# Keep cycling weights file until ID matches params
				if (float(dof_str[0]) == params[0]): 
					#print'IDs Match' 	
					IDs_Match = True
					# EB
					if (params[0] >= 838861313) and (params[0] <= 838970216):
						params.append(float(dof_str[3])) # iphi
						params.append(float(dof_str[4])) # ieta	
					# EE
					if (params[0] >= 872415401):
						params.append(float(dof_str[4])) # ix
						params.append(float(dof_str[5])) # iy

					#print'DOF 1 =',params[5]
					#print'DOF 2 = ',params[6]
		
					
					# = weights[1:]
					# When EE, need to deal with endcaps filling. While not full. 
				if (not IDs_Match):	
					extra += 1 # XTAL_params not defined for every XTAL, so sometimes need to cycle through DOF which should be defined for every XTAL, or at least more XTALS than there are defined waveforms.
	
		DOF_Skip += extra # Lines to skip before next time 

	if (args.weights): return params, weights, last_line, DOF_Skip, skip_line
	if(args.online): return params, last_line, DOF_Skip, skip_line


def Create_Waveform(params,ts):

	A = params[1]
	t_0 = params[2]
	alpha = params[3]
	beta = params[4]

	name = 'function_alphabeta'
	formula = '( (1 + (x-[1]) / ([2]*[3]) ) > 0.0)*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + ((1 + (x-[1]) / ([2]*[3]) <= 0.0 ))*(0)'

	tmin = 0.
	tmax = 250.

	function_alphabeta = TF1(name, formula, tmin, tmax)

	function_alphabeta.SetParameter(0, A)  
	function_alphabeta.SetParameter(1, t_0 + ts) # +/- ts moves waveform right/left   
	function_alphabeta.SetParameter(2, alpha)  
	function_alphabeta.SetParameter(3, beta)  

	tstart = (t_0 + ts - alpha*beta) # Where the function's definition begins in [0,250] window

	return function_alphabeta,tstart

def Sample_Waveform(wf,tstart):

	tmin = 0.
	tmax = 250.
	dt = 25
	num_samp = 10 # Number of samples to take 

	time = 0.

	samples = []
	for i in range(num_samp):
		#print'time = ',time
		#print'waveform(time) = ',wf.Eval(time)
	 	if ( (tmin + i*dt) <= tstart ): 
			samples.append(0.)  # if nan, set to zero 
	  	else: 
			samples.append(wf.Eval(time))
	
		time += dt

	return samples

def Calc_Bias(args,params,samples,weights,Online_EB_w,Online_EE_w):
# Might need ID param to determine EB vs. EE weights. 
	bias = 0.0
	amplitude = 0.0

	#print'samples = ',samples
	#print'weights = ',weights

	for i in range(len(samples)):
		if (args.online):
			if (params[0] >= 838861313) and (params[0] <= 838970216): #EB
				amplitude += samples[i]*Online_EB_w[i]
			elif (params[0] >= 872415401):
				amplitude += samples[i]*Online_EE_w[i]
			else:
				print'Unrecognized XTAL ID'
				sys.exit('Exiting')

		elif(args.weights): 
			amplitude += samples[i]*weights[i]
			




	bias = (amplitude / params[1]) - 1

	return bias

def Save_h(args,h):
	#print'In Save_h'

	gStyle.SetOptStat(0) # 0: no stats box

	c1 =  TCanvas("c1","c1",800,600);
	c1.SetBatch(1) # 1: Don't draw during runtime

	add2name = ''

	if args.EB:	
		add2name += 'EB_'
	
	if args.EEminus:
		add2name += 'EE-_'

	if args.EEplus:
		add2name += 'EE+_'

	if args.weights:
		add2name += str(args.weights) + '_' + str(args.PY) + '_' + str(int(time.time())) 

	if args.online:
		#add2name += 'online_' + str(int(time.time())) 
		add2name += 'online' + str(args.PY) + '_' + str(int(time.time()))

	if args.BC:

		c1.cd()
		gStyle.SetOptStat(0)
		h.Draw("HIST")
		c1.Update()
		#EB->GetZaxis()->SetRangeUser(zmin,zmax) # for DOF plot
		#tsr->GetZaxis()->SetLabelSize(0.02) # for DOF plot
		h.GetXaxis().SetTitle("Time Shift (ns)")
		h.GetXaxis().SetTitleOffset(1.2)
		h.GetYaxis().SetTitle("Average Bias")
		h.GetYaxis().SetTitleOffset(1.4)
		h.GetXaxis().SetTitle("Time Shift (ns)")
		h.Draw("HIST")

		root_name = 'results/root/BC_Plot_'
		pdf_name = 'results/pdfs/BC_Plot_'

		pdf_name += add2name + '.pdf' 
		root_name += add2name + '.root' 
		
		c1.SaveAs(pdf_name) # Canvas screenshot
		h.SaveAs(root_name) # Editable histogram
		print'in plot saving'		
		#return


	if args.BD:

		c1.cd()
		gStyle.SetOptStat(0)
		h.Draw("COLZ1")
		c1.Update()

		if args.EB:
			h.GetXaxis().SetTitle('iPhi')
			h.GetYaxis().SetTitle('iEta')
			
		if args.EEminus or args.EEplus:
			h.GetXaxis().SetTitle('ix')
			h.GetYaxis().SetTitle('iy')
			
		h.GetXaxis().SetTitleOffset(1.1);
		h.GetYaxis().SetTitleOffset(1.2);
		h.GetZaxis().SetLabelSize(0.02);

		#h.GetZaxis()->SetRangeUser(zmin,zmax) 
		#h.GetZaxis().SetRangeUser(-0.08,0.12)
		h.GetZaxis().SetRangeUser(0,0.014)
		h.Draw("COLZ1")

		root_name = 'results/root/BD_Plot_'
		pdf_name = 'results/pdfs/BD_Plot_'

		pdf_name += add2name + '.pdf' 
		root_name += add2name + '.root' 
		
		c1.SaveAs(pdf_name) # Canvas screenshot
		h.SaveAs(root_name) # Editable histogram

		#f = TFile(root_name,"NEW");
		#h.Write();
		#values->Write();
	
		#f.Write()
		#f.Close()
	
		#return 
def Plot_BCs(args):


	print'In Plot_BCs'
	#parser = argparse.ArgumentParser(description='Process some files')
	#parser.add_argument('-f', '--files', type = str, nargs='+' , help='files to plot from')
	#parser.add_argument('-d', '--directory', type = str, nargs='+',  help='directory to root files')
	#args = parser.parse_args()

	# Open all flies from desired directory

	paths = []

	# Find all files in current working directory ending in ".root"
	# for data_folder path in current directory
	#for file in os.listdir(str(os.getcwd()) + '/' + str(data_folder)):
	for file in os.listdir(str(os.getcwd()) + '/' + 'plot_data/plot'):
	    if file.endswith(".root"):
		print(os.path.join(file))
		paths.append('plot_data/plot' + '/' + os.path.join(file))
		#paths.append('plot_data/plot/' + os.path.join(file))

	print "paths = ",paths

	print "len(paths) = ",len(paths)

	if len(paths) == 0:
		print'No Files Found. Exiting.'
		os._exit(0) 

	#elem0 = paths[0]
	#elem1 = paths[1]

	#paths[0] = elem1
	#paths[1] = elem0

	gStyle.SetOptStat(0); # no stats box

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

	g1 = TGraph()
	g2 = TGraph()
	g3 = TGraph()
	g4 = TGraph()
	g5 = TGraph()
	g6 = TGraph()

	files = [f1, f2, f3, f4, f5, f6]
	histos = [h1, h2, h3, h4, h5, h6]
	graphs = [g1, g2, g3, g4, g5, g6]

	i = 0

	for path in paths: # Should start with this and create 
		files[i] = TFile.Open(paths[i])
		histos[i] = files[i].Get('h')
		i += 1
		#files.append()	
		#f1 = TFile.Open(path) 

	extra = len(histos) - len(paths)

	while extra > 0:
		files = files[:-1]
		histos = histos[:-1]
		graphs = graphs[:-1]
		extra -= 1

	# Doing the following because g = TGraph(h) seems to incorrectly translate values. 

	abs_val = False

	for h, hist in enumerate(histos, 1): 

		counter = 1
		value = 0
		ts = 0
		#dt = hist.GetXaxis().GetBinLowEdge(3) - hist.GetXaxis().GetBinLowEdge(2)
		dt = hist.GetXaxis().GetBinWidth(1)

		x = array('d')
		y = array('d')
		
		

		#print'x = ',x
		#print'y = ',y

		#while(hist.GetBinContent(counter) != 0):
		# While value doesn't equal previous value 
		while(counter < 40):
			#print ("hist.GetXaxis().GetBinContent(" + str(counter) + ") = " + str(hist.GetXaxis().GetBinLowEdge(counter)))
			ts = hist.GetXaxis().GetBinLowEdge(counter)
			#print ("hist.GetBinContent(" + str(counter) + ") = " + str(hist.GetBinContent(counter)))
			value = hist.GetBinContent(counter)
			if (value == hist.GetBinContent(counter-1)):
				print'Breaking loop'
				break

			#cout << "abs(" << value << ") = " << abs(value) << endl;
			#h2->Fill(ts,fabs(value));
			x.append(ts)
			if (abs_val): y.append(fabs(value))
			else: y.append(value)
			print("ts = " + str(ts) )
			print("value = " + str(value) )
			print("counter = " + str(counter) )
			
			ts += dt
			counter += 1

		#graphs[h - 1] = TGraph(counter - 1, x, y)
		#print'out of while'
		graphs[h - 1] = TGraph(counter - 1,x,y)
		#print'after graph line'

	i = 0

	print'before graph loop'	

	for g in graphs:
		g.SetMarkerStyle(8)
		g.SetMarkerColor(2+i)
		g.SetLineColor(2+i)
		i += 1	

	print'after graph loop'

	#graphs[0].SetMarkerColor(kBlue)
	#graphs[0].SetLineColor(kBlue)

	#graphs[1].SetMarkerColor(kGreen)
	#graphs[1].SetLineColor(kGreen)

	#graphs[2].SetMarkerColor(kRed)
	#graphs[2].SetLineColor(kRed)



	#g1.SetMarkerStyle(8)
	#g1.SetMarkerColor(3)
	#g1.SetLineColor(3)

	#if(abs_val) g1->SetTitle("EB abs(Average Bias) vs. Time Shift")
	#else g1->SetTitle("EB Average Bias vs. Time Shift");
	#g1->GetXaxis()->SetTitle("Time Shift (ns)");
	#g1->GetXaxis()->SetTitleOffset(1.3);
	#if(abs_val) g1->GetYaxis()->SetTitle("abs(Average Bias)");
	#else g1->GetYaxis()->SetTitle("Average Bias");
	#g1->GetYaxis()->SetTitleOffset(1.5);

	#g1->Draw();
	i = 0
	for g in graphs:
		g.SetName("g" + str(i))
		i += 1

	print'after loop'

	#if (abs_val): l1 = TLegend(0.5, 0.5, 0.8, 0.8)
	#else: l1 = TLegend(0.7, 0.1, 0.9, 0.3)
	#else: l1 = TLegend(0.5, 0.1, 0.8, 0.4)

	l1 = TLegend(0.7, 0.1, 0.9, 0.3) # Bottom right
	#l1 = TLegend(0.1, 0.7, 0.3, 0.9) # Upper left

	#l1.SetHeader("Legend") # I actually can't believe you can declare l1 in an if statement then access outside 

	i = 0

	for g in graphs:
		label = paths[i].split('_')[-2]
		l1.AddEntry(g, label, "lp")
		i += 1

	#paths[0].slice('_')[1] # section_weights_range.root
	#section = str(paths[0])[10:-17] # EE+/-, EB
	print'paths[0] = ',paths[0]
	section = paths[0].split('/')[-1].split('_')[0] # .split('/')[-1]
	#print 'section = ',section

	mg = TMultiGraph()

	for g in graphs:
		mg.Add(g, "LP")

	#section = ''

	mg.SetTitle(section + " Average Bias vs. Time Shift")
	#mg.SetTitle("Title")
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


	#section = ''
	Save_Title = "plots/plot" + section + str(int(histos[0].GetXaxis().GetBinLowEdge(1))) + ".pdf"

	c0.SaveAs(Save_Title)

