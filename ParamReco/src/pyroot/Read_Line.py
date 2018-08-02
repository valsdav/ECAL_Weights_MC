#import linecache
import csv

def Read_Line(args,line):

	print 'Reading line',line

	# Open Parameters file
	# Do I want to open it each time? 

	#p_f = open('data/XTAL_Params.txt','r')

	with open('data/XTAL_Params.txt') as p_f:
	    	params = p_f.readlines()[line+1:line+2] # skip zeroth line
	params = [x.strip().split('\t') for x in params]
	print'params = ',params
	print'str(params) = ',str(params)
	print'str(params[0]) = ',str(params[0])

	#for i in range(len(params[0])):
		#print'params[0][',i,'] = ',params[0][i]

	#rawid = params[0][0]
	#A = params[0][1]
	#t_0 = params[0][2]
	#alpha = params[0][3]
	#beta = params[0][4]
	
	parameters = []
	#parameters.extend((rawid,A,t_0,alpha,beta))
	#print'parameters = ',parameters

	#print'line reads:',linecache.getline('data/XTAL_Params.txt') 

	# If custom weights, open weights file 

	if not args.weights:
		print'non ideal weights'

	if args.weights:
		print'Using ideal weights' 
		w_f = open('data/' + args.weights,'r')
