# Abe Tishelman-Charny
# 2 August 2018

from ROOT import *
#from Tools import *
from Create_h import *
from Read_Line import *
from Waveform import *
from Calc_Bias import *
from Save_h import *
from BCPlot import *
from array import *
import argparse
import sys
import time
import os

# Add feature for multiple plots? 

def input_arguments():
	parser = argparse.ArgumentParser(description='Choose what bias plots to create')
	parser.add_argument('-BCPlot', action='store_true', help='Plot BC Root files in plot_data/plot')
	parser.add_argument('--PY', action='store', help='Year of Parameters to use')
	parser.add_argument('-EB',  action='store_true', help='Create plot for Barrel')
	parser.add_argument('-EEminus'  ,  action='store_true', help='Create plot for EE-')
	parser.add_argument('-EEplus'  ,  action='store_true', help='Create plot for EE+')
	parser.add_argument('-BD'  ,  action='store_true', help='Create Bias Distribution plot')
	parser.add_argument('-BC'  ,  action='store_true', help='Create Bias Curve plot')
	parser.add_argument('-nA'  ,  action='store_true', help='Normalize A parameter')
	parser.add_argument('-nt0'  ,  action='store_true', help='Normalize t0 parameter')
	parser.add_argument('--ts' , action='store', help='Single time shift value. Used for BD.')
	parser.add_argument('--tsr' , action='store', help='Time Shift Range. Used for BC. Format: tsmin,tsmax,dts')
	parser.add_argument('--weights' , action='store', help='Path to weights file to use')
	parser.add_argument('-online' , action='store_true', help='Use Online Weights')
	parser.add_argument('--rows' , action='store', help='Number of Rows to read') # Change to Xtals? 

	if len(sys.argv[1:])==0: 	# Print help if no options given	
		parser.print_help()
		sys.exit("\n")

	return parser.parse_args()

def main():
	args = input_arguments()

	if args.BC or args.BD:
		h = Create_h(args) 
	#h = Create_h(args)

	#if (args.BC or args.BD) and (not args.rows):
		#print 'Please choose how many rows to read in XTAL Parameters.'
		#sys.exit('Exiting')

	rows = 0

	# If no lines specified, assume all.
	if (args.BC or args.BD) and (not args.rows):
		print 'Reading all rows...'
		rows = 100000

	if (args.BC or args.BD) and (args.rows):
		print 'Reading',args.rows,'rows...'
		rows = int(args.rows)	

	#if not args.weights:
		#print'Online 
	Online_EB_w = array('d',[0, 0, -0.56, -0.55, 0.25, 0.48, 0.38, 0, 0, 0])	
	Online_EE_w = array('d',[0, 0, -0.65, -0.52, 0.25, 0.52, 0.50, 0, 0, 0])
	weights = [] # define for function passing when online weights used
	params = []

	count = 0 # number times through loop
	DOF_Skip = 0
	Param_Skip = 0

	if args.EEminus or args.EEplus: 
		Param_Skip += 60493 # Skip EB params

	if args.EEplus:
		Param_Skip += 7209 # Skip EE- params. Note this has less entries than number of EE- XTALS
				# Param skip may depend on param file
		DOF_Skip += 7324 # Skip EE- DOF's 

	if args.BC:
		shifts = []
		tsmin = h.GetXaxis().GetBinLowEdge(1)
		dts = h.GetXaxis().GetBinWidth(1)

		for i in range(h.GetNbinsX() + 1):
			#print'h.GetBinLowEdge(',i + 1,') = ',h.GetBinLowEdge(i + 1)
			shifts.append(tsmin + i*dts)
			#h.Fill(shifts[i],i+2) 

		print'Time Shifts: ',shifts

		for ts in shifts:
			total_bias = 0.
			XTALS = 0
			print 'ts = ',ts
			for line in range(rows):
				skip_line = False
				last_line = False
				#print'in loop'
				#while(not last_line):
				if (args.weights): # return params and weights 
					params, weights, last_line, DOF_Skip, skip_line = Read_Line(args, line, last_line, DOF_Skip, Param_Skip) # return params 

				if (not args.weights): # return params and weights 
					params, last_line, DOF_Skip, skip_line = Read_Line(args, line, last_line, DOF_Skip, Param_Skip) # return params 
		
				#print'skip_line = ',skip_line
	
				if (not skip_line):
					wf,tstart = Create_Waveform(params, ts) # TF1
					samples = Sample_Waveform(wf,tstart) 
					total_bias += Calc_Bias(args,params,samples,weights,Online_EB_w,Online_EE_w) # Add to num. xtals # Pass Online weights too
					XTALS += 1
				if (skip_line):
					print'Skipping line',line
				if (XTALS%500 == 0):
					print'Reading Line ',XTALS
				if (last_line):
					print'Read_Line declared this the last line. Stopping file reading.'
					break
				
			h.Fill(ts, total_bias / XTALS)

	# Here, last two elements of params are DOFs

	if args.BD: 
		ts = float(args.ts)
		for line in range(rows):
			
			skip_line = False
			last_line = False
			if (args.weights): # return params (+ DOF), weights 
				params, weights, last_line, DOF_Skip, skip_line = Read_Line(args,line,last_line,DOF_Skip,Param_Skip) 
			if (not args.weights): # return params 
				params, last_line, DOF_Skip, skip_line = Read_Line(args,line,last_line,DOF_Skip,Param_Skip) # return params
			#print'skip_line = ',skip_line 
			if (not skip_line):
				wf,tstart = Create_Waveform(params, ts) 
				samples = Sample_Waveform(wf,tstart)
				bias = Calc_Bias(args,params,samples,weights,Online_EB_w,Online_EE_w) #<-return bias. Loop over N rows. <- If BC< loop over M time shifts	
				#print'iphi = ',params[5]
				#print'ieta = ',params[6]
				#print'bias = ',bias
				#print'params = ',params
				h.Fill(params[5], params[6], bias)
				count += 1
				
			if (skip_line):
				print'Skipping Line ',line
			if (count%500 == 0):
				print'Reading line ',count
			if (last_line):
				print'Last line reached. Stopping file reading.'
				break
				
	# Can combine functions into python files later if you want to. For now giving each its own file.

	if (args.BC or args.BD):
		Save_h(args,h) # Save histogram pdf and root 
	
	if args.BCPlot:
		print'BCPlot chosen'
		Plot_BCs(args) # plot all BC's

	print'Finished'
	

if __name__ == "__main__":
	initial_time = int(time.time()) 
	main()
	final_time = int(time.time())
	total_time = float(final_time - initial_time) / 60.
	print'Run Time: ',total_time,'minutes'

