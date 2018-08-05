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
