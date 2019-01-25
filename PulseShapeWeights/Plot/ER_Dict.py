def ER_Dict(emin):
	# Define Eta Range dictionary
	#print'In ERDict' 
	E_bounds = [-3.0, -2.9, -2.8, -2.7, -2.6, -2.5, -1.485, -1.16, -0.81, -0.46, 0, 0.44, 0.80, 1.14, 1.482, 2.5, 2.6, 2.7, 2.8, 2.9, 3.0]

	ER_D = {}
	found = False
	for i in range(len(E_bounds) - 1): # E_bounds - 1 eta ranges. 
		#print'i+1 = ',i+1
		ER_D["ER" + str(i + 1)] = [E_bounds[i],E_bounds[i+1]]
		#print 'Ebound = ',E_bounds[i]
		#print'emin = ',emin
		if E_bounds[i] == emin:
			ER_ = "ER" + str(i + 1) 
			found = True 
			break # Don't need to finish creating dictionary 

	if found == False:
		print'Could not find ',emin,' in dictionary'

	return ER_