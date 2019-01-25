# Bias distribution plot 

	# print'args.bias_dist_only = ',args.bias_dist_only

	# if args.bias_dist_only is True:

	# 	# Create Canvas with all ts0ns bias distributions

	# 	dist_paths = []

	# 	#for file in os.listdir(str(os.getcwd()) + '/' + str(data_folder) + '/dist'):
	# 	#for file in 
	# 	for file in os.listdir(str(os.getcwd()) + '/' + str(data_folder)):
	# 		if 'ts0ns' in file:
	# 			# print '	Found dist File: ',os.path.join(file)
	# 			print '	Found File: ',str(file)
	# 			#dist_paths.append(str(data_folder) + '/' + os.path.join(file))
	# 			dist_paths.append(str(data_folder) + '/' + os.path.join(file))

	# 	#print'Dist paths = ',dist_paths

	# 	# Create Canvas
	# 	# Loop paths
	# 		# titles, figure ranges (set range? dynamic)
	# 		# equal number of bins, same ranges? 
	# 		# add to next canvas pad 

	# 	# save pad image 

	# 	cc = TCanvas('cc', 'cc', 1200, 400)
	# 	#pp = TPad()
	# 	#cc.Divide(6,3)
	# 	#cc.Divide(6,3)
	# 	columns = 4
	# 	rows = 3
	# 	num_plots = columns*rows
	# 	cc.Divide(columns,rows)
	# 	#cc.SetBatch(kTRUE)
	# 	#pp.Divide(6,3)

	# 	#if even

	# 	#if odd 

	# 	# For now 18 intervals

	# 	#print'dist_paths[0] = ',dist_paths[0]

	# 	i = 1

	# 	test_hists = []
	# 	tfiles = []

	# 	# order by eta min 

	# 	#for j in range(len(dist_paths)):
	# 	min_etas = []
	# 	#ordered_files = [] #(path, eta_min)

	# 	temp_list = []

	# 	for i in range(len(dist_paths)):
	# 		#print'i = ',i
	# 		current_min = 1000
	# 		for path in dist_paths:
	# 			emi = float(path.split('/')[-1].split('_')[-6])
	# 			#print'emi = ',emi
	# 			if (emi < current_min): 
	# 				current_min = emi
	# 				#print'new current min = ',current_min
	# 			#min_etas.append(emi)

	# 		#i = 0
	# 		for path in dist_paths:
	# 			emi = float(path.split('/')[-1].split('_')[-6])
	# 			if emi == current_min:
	# 				#print'appending: ',path
	# 				temp_list.append(path)	
	# 				dist_paths.remove(path)
	# 		#i += 1
			
	# 		#if (emi < current_min): current_min = emi

	# 	#print'temp_list = ',temp_list

	# 	i = 1

	# 	#indices = [0,5,11]

	# 	indices = []
	# 	for k in range(13):	
	# 		indices.append(k)

	# 	print'ind = ',indices

	# 	for j in indices:

	# 	#for path in temp_list:
	# 		path = temp_list[j]
	# 		print'path = ',path
	# 		emi = path.split('/')[-1].split('_')[-6]
	# 		ema = path.split('/')[-1].split('_')[-5]
	# 		wt = path.split('/')[-1].split('_')[-3]
	# 		wy = path.split('/')[-1].split('_')[-2]

	# 		tfiles.append(TFile().Open(path))
	# 		test_hists.append(tfiles[i-1].Get("bias_dist"))

	# 		#test_hists[i-1] = f.Get("bias_dist")
	# 		#h = f.Get("bias_dist")
	# 		#print'cc.cd(i)
	# 		cc.cd(i)
	# 		#test_hists[i-1].GetXaxis().SetRangeUser(-0.02,0.2)
	# 		test_hists[i-1].GetXaxis().SetRangeUser(-0.15,0.15)
	# 		test_hists[i-1].SetTitle('Bias, ' + str(emi) + ' #leq #eta < ' + str(ema) + ', ' + str(wt) + ' ' + str(wy))
	# 		test_hists[i-1].Draw()
	# 		if i == num_plots: break
	# 		i += 1

	# 	cc.cd()

	# 	weights_type = temp_list[0].split('/')[-1].split('_')[-3]
	# 	PY = temp_list[0].split('/')[-1].split('_')[-2]
	# 	mineta = temp_list[0].split('/')[-1].split('_')[-6]
	# 	maxeta = temp_list[0].split('/')[-1].split('_')[-7]
	# 	ts = temp_list[0].split('/')[-1].split('_')[-4]

	# 	Save_Title = "/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/src/ECAL_Weights/Plot/bin/pyplot_Bias_Dist_" + weights_type + "_" + PY + "_" + mineta + '_' + maxeta + '_' + ts + ".pdf"

	# 	cc.SaveAs(Save_Title)