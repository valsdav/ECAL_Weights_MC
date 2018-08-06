from ROOT import *
from array import *
import sys

def Create_h(args):

	h_title = ''

	if args.BC:
		print'Creating BC Plot'
		h_title += 'Average Bias vs. Time Shift,'

	elif args.BD:
		print'Creating BD Plot'
		h_title += 'Bias Distribution,'
	else:
		print 'Please Choose a Plot type'
		sys.exit('Exiting')

	if args.EB:
		print 'Plotting EB'
		h_title += ' EB'

	if args.EEminus:
		print 'Plotting EE-'
		h_title += ' EE-'

	if args.EEplus:
		print 'Plotting EE+'
		h_title += ' EE+'

	# Get Plot Boundaries (PB)

	# Bias Curve 
	if args.BC:
		# PB = [bins,min,max] 
		# args.tsr = 'bins,tsmin,tsmax'
		xbins = int(args.tsr.split(',')[-3])
		xmin = float(args.tsr.split(',')[-2])
		xmax = float(args.tsr.split(',')[-1])
		#xbins = int ( (xmax - xmin) / float((args.tsr.split(',')[-3]) ) )
		PB = [xbins,xmin,xmax]
		

	# Bias Distribution
	if args.BD:
		# PB = [xmin,xmax,ymin,ymax] 
		if args.EB:
			PB = [0,360,-85,85]

		if args.EEminus:
			PB = [0,100,0,100]

		if args.EEplus:
			PB = [0,100,0,100]
		h_title += ', Time Shift ' + str(args.ts) + 'ns'

	print 'PB =',PB
	print 'h_title = ',h_title

	if args.BC: 
		h = TH1F("h", h_title, PB[0], PB[1], PB[2])
	if args.BD: 
		h = TH2F("h", h_title, ( PB[1] - PB[0] ) , PB[0], PB[1], ( PB[3]-PB[2] ) , PB[2], PB[3])

	return h # can also return list of multiple histograms. 

