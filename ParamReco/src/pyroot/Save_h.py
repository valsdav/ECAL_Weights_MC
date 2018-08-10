from ROOT import *
import time

def Save_h(args,h):
	#print'In Save_h'

	gStyle.SetOptStat(0) # 0: no stats box

	c1 =  TCanvas("c1","c1",800,600);
	c1.SetBatch(1) # 1: Don't draw during runtime

	add2name = ''

	if args.EB:	
		add2name += 'EB_'
	
	if args.EEminus:
		add2name += 'EE-_'

	if args.EEplus:
		add2name += 'EE+_'

	if args.weights:
		add2name += str(args.weights) + '_' + str(args.PY) + '_' + str(int(time.time())) 

	if args.online:
		#add2name += 'online_' + str(int(time.time())) 
		add2name += 'online' + str(args.PY) + '_' + str(int(time.time()))

	if args.BC:

		c1.cd()
		gStyle.SetOptStat(0)
		h.Draw("HIST")
		c1.Update()
		#EB->GetZaxis()->SetRangeUser(zmin,zmax) # for DOF plot
		#tsr->GetZaxis()->SetLabelSize(0.02) # for DOF plot
		h.GetXaxis().SetTitle("Time Shift (ns)")
		h.GetXaxis().SetTitleOffset(1.2)
		h.GetYaxis().SetTitle("Average Bias")
		h.GetYaxis().SetTitleOffset(1.4)
		h.GetXaxis().SetTitle("Time Shift (ns)")
		h.Draw("HIST")

		root_name = 'results/root/BC_Plot_'
		pdf_name = 'results/pdfs/BC_Plot_'

		pdf_name += add2name + '.pdf' 
		root_name += add2name + '.root' 
		
		c1.SaveAs(pdf_name) # Canvas screenshot
		h.SaveAs(root_name) # Editable histogram
		print'in plot saving'		
		#return


	if args.BD:

		c1.cd()
		gStyle.SetOptStat(0)
		h.Draw("COLZ1")
		c1.Update()

		if args.EB:
			h.GetXaxis().SetTitle('iPhi')
			h.GetYaxis().SetTitle('iEta')
			
		if args.EEminus or args.EEplus:
			h.GetXaxis().SetTitle('ix')
			h.GetYaxis().SetTitle('iy')
			
		h.GetXaxis().SetTitleOffset(1.1);
		h.GetYaxis().SetTitleOffset(1.2);
		h.GetZaxis().SetLabelSize(0.02);

		#h.GetZaxis()->SetRangeUser(zmin,zmax) 
		#h.GetZaxis().SetRangeUser(-0.08,0.12)
		h.GetZaxis().SetRangeUser(0,0.014)
		h.Draw("COLZ1")

		root_name = 'results/root/BD_Plot_'
		pdf_name = 'results/pdfs/BD_Plot_'

		pdf_name += add2name + '.pdf' 
		root_name += add2name + '.root' 
		
		c1.SaveAs(pdf_name) # Canvas screenshot
		h.SaveAs(root_name) # Editable histogram

		#f = TFile(root_name,"NEW");
		#h.Write();
		#values->Write();
	
		#f.Write()
		#f.Close()
	
		#return 
