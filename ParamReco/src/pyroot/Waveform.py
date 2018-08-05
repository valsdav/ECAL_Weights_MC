from ROOT import *

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




