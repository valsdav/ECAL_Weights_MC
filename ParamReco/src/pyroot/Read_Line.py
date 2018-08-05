from array import *

def Read_Line(args,line):

	print 'Reading line',line

	# Open Parameters file

	# Bad Lines:
	# (d1 == 838868019) || (d1 == 838871589) || (d1 == 838882900) || (d1 == 838882985) || (d1 == 838900809) || (d1 == 838949036) || (d1 == 838951621) || (d1 == 872436486)


	# Skip to line of interest
	with open('data/test_Params.txt') as p_f:
    		p_f = p_f.readlines()[line+1:]
		params_str = p_f[0].split() # current line
		params_fl = [float(x) for x in params_str]
		params = array('d',params_fl)

	if (args.weights):
		w_p = 'data/' + str(args.weights) # Weights Path
		IDs_Match= False

		while(not IDs_Match):
			with open(w_p) as w_f:
		    		w_f = w_f.readlines()[line+1:]  
				weights_str = w_f[0].split() # current line
				weights_fl = [float(x) for x in weights_str]
				weights = array('d',weights_fl)
				print'paramsID = ',params[0]
				print'weightsID = ',weights[0]
				if (weights[0] == params[0]): 
					print'IDs Match' 	# Keep cycling weights file until ID matches params
					IDs_Match = True
					weights = weights[1:] # No longer need weight ID 
					#print'weights = ',weights

	# If ID's match, find matching DOF line

	p_DOF = ''

	# EB
	if (params[0] >= 838861313) and (params[0] <= 838970216):
		p_DOF += 'data/EB_DOF.txt'

	# EE
	if (params[0] >= 872415401):
		p_DOF += 'data/EE_DOF.txt'
	
	# 3,4 iphi, ieta EB 

	#DOFs = []

	if (args.BD):
		with open(p_DOF) as p_dof:
	    		p_dof = p_dof.readlines()[line+1:]
			dof_str = p_dof[0].split() # current line
			#dof_fl = [float(x) for x in dof_str]
			#dof_line = array('d',dof_fl)
			# Keep cycling weights file until ID matches params
			if (float(dof_str[0]) == params[0]): 
				print'IDs Match' 	
				IDs_Match = True
				params.append(float(dof_str[3])) # EB: iphi
				params.append(float(dof_str[4])) # EB: ieta
				# = weights[1:]
				# When EE, need to deal with endcaps filling. While not full. 
				#print'DOF1 = ',float(dof_str[3])
				#print'DOF2 = ',float(dof_str[4])	

	if (args.weights): return params, weights
	if(args.online): return params
