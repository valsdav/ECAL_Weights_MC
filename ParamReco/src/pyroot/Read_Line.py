from array import *

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

	with open('data/XTAL_Params.txt') as p_f:
    		p_f = p_f.readlines()[line+1+Param_Skip+manual_skip:]
		params_str = p_f[0].split() # current line
		params_fl = [float(x) for x in params_str]
		params = array('d',params_fl)

	# Should change to if all params are 0 since I think this is what causes nan weights.
	if (params[0] == 838868019) or (params[0] == 838871589) or (params[0] == 838882900) or (params[0] == 838882985) or (params[0] == 838900809) or (params[0] == 838949036) or (params[0] == 838951621) or (params[0] == 872436486):
		skip_line = True # Don't count previous statistics twice. 
		if (args.weights): return params, weights, last_line, DOF_Skip, skip_line
		if(args.online): return params, last_line, DOF_Skip, skip_line
	
	if (args.weights):
		w_p = 'data/' + str(args.weights) # Weights Path
		IDs_Match= False

		while(not IDs_Match):
			with open(w_p) as w_f:
		    		w_f = w_f.readlines()[line+1+Param_Skip+manual_skip:]  
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
					# Determine if last line 
					if (args.rows == line): # Max specified rows 
						last_line = True
					if (args.EB) and (params[0] == 838970211): # Last EB line 
						last_line = True
					if (args.EEminus) and (params[0] == 872428092): # Last EE- line
						last_line = True
					if (args.EEplus) and (params[0] == 872444475): # Last EE+ line in params
						last_line = True
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
			return params,weights,last_line,skip_line
		if args.online:
			return params,last_line,skip_line 

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
