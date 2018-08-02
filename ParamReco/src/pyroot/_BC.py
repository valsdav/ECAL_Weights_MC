# Bias Curve Plot 

from array import *
import sys

def BC_Plot(args):

	# Default Plot bounds  
	"""if args.EB:
		print 'Plotting EB'
		1min = -85;
		1max = 85;
		2min = 0;
		2max = 360;

	if args.EEminus | args.EEplus:
		print 'Plotting EE'
		1min = 0; 
		1max = 100;
		2min = 0;
		2max = 100;"""

	

	# Initialize

	# _w = {-0.3812788, -0.3812788, -0.3812788, 0, 0.235699, 0.4228363, 0.3298652, 0.1575187, -0.002082776, 0};

	if args.online:
		print 'Online weights Chosen'

		EB_w = array('d',[0, 0, -0.56, -0.55, 0.25, 0.48, 0.38, 0, 0, 0])	
		EE_w = array('d',[0, 0, -0.65, -0.52, 0.25, 0.52, 0.50, 0, 0, 0])

		#for i in range(len(EB_w)):
			#print 'EB_w[',i,'] = ',EB_w[i]
			#print 'EE_w[',i,'] = ',EB_w[i]


		#print 'EB_w[1] = ',EB_w[2]
		#print 'EE_w[1] = ',EE_w[2]

	elif args.weights: # Use specified weights path
		print '<weights>.txt path Chosen' # Don't save, just access during amplitude calculation
		#EB_w = 
		#EE_w = 
	
	else:
		print 'Specify either Online or path to file weights'
		#print 'Exiting'
		sys.exit('Exiting')
	







"""

	// Make histogram(s)

	// Titles
	ostringstream ts_range_title, single_ts_title;

	if (plot_EB){
	  ts_range_title << "EB, ";
	  single_ts_title << "EB, ";
	  }

	if (plot_EE){
	  ts_range_title << "EE";
	  single_ts_title << "EE";
	  if (plot_EE_minus){
		ts_range_title << "-, ";	
		single_ts_title << "-, ";	
	    }
	  if (plot_EE_plus){
		ts_range_title << "+, ";	
		single_ts_title << "+, ";	
	    }
	  }

	ts_range_title << "Bias vs. Time Shift, ";
	single_ts_title << "Bias, ts = " << ts << "ns, ";

	if (ideal_weights) {
		ts_range_title << "Ideal Weights";
		single_ts_title << "Ideal Weights";
		}

	if (!ideal_weights) {
		ts_range_title << "Online Weights";
		single_ts_title << "Online Weights";
		}

	/*if (max_rows == -1) {
		ts_range_title << "All XTALs";
		single_ts_title << "All XTALs";
		}*/

	else {
		ts_range_title << max_rows << " XTALS per ts";	
		single_ts_title << max_rows << " XTALS";	
		}	

	TString ts_range_title_string= ts_range_title.str(); 
	TString single_ts_title_string = single_ts_title.str(); 
	//TH1F *tsr = new TH1F("tsr",ts_range_title_string,((ts_max - ts_min) / (dts)) + 1,ts_min,ts_max + dts); // ts range
	TH1F *tsr = new TH1F("tsr",ts_range_title_string,tsr_bins,ts_min,ts_max + dts); // ts range
	//cout << "bins = " << ((ts_max - ts_min) / (dts)) + 1 << endl;
	//cout << "min = " << ts_min << endl;
	//cout << "max = " << ts_max << endl;
	TH2F *sts = new TH2F("sts",single_ts_title_string,(DOF1max - DOF1min),DOF1min,DOF1max,(DOF2max - DOF2min),DOF2min,DOF2max); // single ts

	// For debugging
	TH1F *values = new TH1F("values","values",1000,-0.3,0.3);

	//TH2F *sts = new TH2F("sts",single_ts_title_string); //,,,,,);

"""
