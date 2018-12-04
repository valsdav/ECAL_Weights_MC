def ER_Dict(emin):
	# Define Eta Range dictionary
	#print'In ERDict'
	#print'emin = ',emin 
	#E_bounds = [-3.0, -2.9, -2.8, -2.7, -2.6, -2.5, -1.485, -1.16, -0.81, -0.46, 0, 0.44, 0.80, 1.14, 1.482, 2.5, 2.6, 2.7, 2.8, 2.9, 3.0]
	E_bounds = [-3.0, -2.65, -2.5, -2.322, -2.172, -2.0430, -1.93, -1.83, -1.74, -1.653, -1.566, -1.479, -1.131, -0.783, -0.435, 0, 0.435, 0.783, 1.131, 1.479, 1.566, 1.653, 1.74, 1.83, 1.93, 2.0430, 2.172, 2.322, 2.5, 2.65, 3.0]

	E_bounds_i = [-15,-14,-13,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
	#E_bounds_i = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]

	ER_D = {}
	found = False
	#for i in range(len(E_bounds) - 1): # E_bounds - 1 eta ranges. 
	for i,b in enumerate(E_bounds_i): # E_bounds - 1 eta ranges. 
		#print'i+1 = ',i+1
		ER_D["ER" + str(i + 1)] = [E_bounds[i],E_bounds[i+1]]
		#print 'Ebound = ',E_bounds[i]
		#print'emin = ',emin
		if E_bounds[i] == emin:
			#ER_ = "ER" + str(i + 1)
			ER_ = "ER" + str(b)  
			found = True 
			break # Don't need to finish creating dictionary 

	if found == False:
		print'Could not find ',emin,' in dictionary'

	return ER_