from array import *

def Read_Line(args,line,last_line,pre_extra):

	print 'Reading line',line

	# Open Parameters file

	# Bad Lines:
	# (d1 == 838868019) || (d1 == 838871589) || (d1 == 838882900) || (d1 == 838882985) || (d1 == 838900809) || (d1 == 838949036) || (d1 == 838951621) || (d1 == 872436486)

	# Three options: EB, EEplus, EEminus
	# 
	# EB: Stop once either last EB line read or first EE line read. 
	# Last EB: 838970211
	# First EE: 872415401
	# Last EE: 872444475
	#
	# EEminus: Skip EB lines, stop at last EEminus line or first EEplus line
	#
	# EEplus: Skip EB lines and EEminus lines, stop after last line read 

	# Skip to line of interest

	manual_skip = 0

	#if (args.EEminus or args.EEplus):
		#manual_skip += 


	with open('data/XTAL_Params.txt') as p_f:
    		p_f = p_f.readlines()[line+1:]
		params_str = p_f[0].split() # current line
		params_fl = [float(x) for x in params_str]
		params = array('d',params_fl)

	if (params[0] == 838868019) or (params[0] == 838871589) or (params[0] == 838882900) or (params[0] == 838882985) or (params[0] == 838900809) or (params[0] == 838949036) or (params[0] == 838951621) or (params[0] == 872436486):
		skip_line = True # Don't count previous statistics twice
		pre_extra += 1
		if (args.weights): return params, weights, last_line, pre_extra, skip_line
		if(args.online): return params, last_line, pre_extra, skip_line
	
	if (args.weights):
		w_p = 'data/' + str(args.weights) # Weights Path
		IDs_Match= False

		while(not IDs_Match):
			with open(w_p) as w_f:
		    		w_f = w_f.readlines()[line+1:]  
				weights_str = w_f[0].split() # current line
				weights_fl = [float(x) for x in weights_str]
				weights = array('d',weights_fl)
				#print'paramsID = ',params[0]
				#print'weightsID = ',weights[0]
				if (weights[0] == params[0]): 
					#print'IDs Match' 	# Keep cycling weights file until ID matches params
					IDs_Match = True
					weights = weights[1:] # No longer need weight ID 
					#print'weights = ',weights
					if (args.rows == line): # Max specified rows 
						last_line = True
					if (args.EB) and (params[0] == 838970211): # Last EB line 
						last_line = True

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
		    		p_dof = p_dof.readlines()[line+1+pre_extra+extra:]
				dof_str = p_dof[0].split() # current line

				#print'params[0] = ',params[0]
				#print'dof_str[0] = ',dof_str[0]
				#dof_fl = [float(x) for x in dof_str]
				#dof_line = array('d',dof_fl)
				# Keep cycling weights file until ID matches params
				if (float(dof_str[0]) == params[0]): 
					#print'IDs Match' 	
					IDs_Match = True
					params.append(float(dof_str[3])) # EB: iphi
					params.append(float(dof_str[4])) # EB: ieta
					# = weights[1:]
					# When EE, need to deal with endcaps filling. While not full. 
				if (not IDs_Match):	
					extra += 1 # XTAL_params not defined for every XTAL, so sometimes need to cycle through DOF which should be defined for every XTAL, or at least more XTALS than there are defined waveforms.
	
	pre_extra += extra # Lines to skip before next time 

	if (args.weights): return params, weights, last_line, pre_extra
	if(args.online): return params, last_line, pre_extra 
