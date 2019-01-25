# This should output average bias vs. eta range for desired time shift 
from ROOT import *
import os 
from array import array

from FindFiles import FindFiles
from SetLegend import SetLegend
from Fill_mg import Fill_mg
#from Sigma_Calc import Sigma_Calc

def SameCan(params):
    print'In SameCan'
    paths = FindFiles(params[1],params[2])
    plot_type = str(paths[0].split('/')[-1].split('_')[-8])
    #gStyle.SetOptStat(0); # no stats box
    mg = TMultiGraph("mg","mg")
    l1 = SetLegend(params[3])
    #EB_ranges = 0
    #EE_ranges = 0 

    # Order by eta range
    # Need this for legend entries to be in proper order, when plotting many eta ranges on single plot. 
    # Actually also need this for plotting avg bias vs. etarange for given timeshift, so that x entries are in order. 

    temp_list = []

    for i in range(len(paths)):
        #print'i = ',i
        current_min = 1000
        for path in paths:
            emi = float(path.split('/')[-1].split('_')[-6])
            #print'emi = ',emi
            if (emi < current_min): 
                current_min = emi
                #print'new current min = ',current_min
            #min_etas.append(emi)

        #i = 0
        for path in paths:
            emi = float(path.split('/')[-1].split('_')[-6])
            if emi == current_min:
                #print'appending: ',path
                temp_list.append(path)	
                paths.remove(path)

    paths = temp_list

    ts = float(params[6]) # user selected time shift

    # Add info from each path to multigraph

    x = array('d',[]) 
    y = array('d',[])
    xe = array('d',[])
    ye = array('d',[])
    
    i = 1

    for path in paths:
        
        h = TH1F()
        f = TFile().Open(path)

        if plot_type == 'EC':
            h = f.Get("EC")
        else:
            print'Plot Type not recognized. Should be EC'
    
        counter = 1
        hts = 0
        dt = h.GetXaxis().GetBinLowEdge(3) - h.GetXaxis().GetBinLowEdge(2)

        found = False
        
        while( (h.GetBinContent(counter) != 0) and (found == False)):
            hts = h.GetXaxis().GetBinLowEdge(counter)
            #print'hts = ',hts
            if hts == ts:
                #print'found ts = ',ts
                found = True
                ab = h.GetBinContent(counter) # average bias 
                abe = h.GetBinError(counter) # average bias error (one sigma)
                x.append(i)
                y.append(ab)
                xe.append(0)
                ye.append(abe)

            counter += 1
            
        i += 1

    print'all files checked'
    ts = int(ts)
    
    g = TGraphErrors(i - 1, x, y, xe, ye) # x, y, x errors, y errors 

    gne = TGraph(i - 1, x, y) # Graph with no errors 
    gne.SetName("gne")
    gne.SetMarkerStyle(7)

    WT = paths[0].split('_')[-3] # Weights Type
    if WT == 'online': WT = 'Online'
    PD = path.split('_')[-2]

    # Fill multigraph
    mg = Fill_mg(mg,l1,i,x,y,xe,ye,gne,g)
 
    if plot_type == 'EC': mg.SetTitle(WT + ' Weights, ' + PD + ' Parameters, Time Shift = ' + str(ts) + 'ns')

    gROOT.SetBatch(kTRUE)
    c0 = TCanvas('c0', 'c0', 800, 600)
    #gROOT.SetBatch(kTRUE)

    # Set both to zero for automatic range
    ymin = float(params[4])
    ymax = float(params[5])

    mg.Draw("A")

    #mg.SetTitleSize(0.04)
    #mg.GetYaxis().SetTitle("#bar{b}") # rotate this. Maybe with ttext or tlatex. Don't set title just place latex or text at correct position. 
    #mg.GetYaxis().SetTitleFont(61)
    mg.GetYaxis().SetTitleSize(0.04)
    mg.GetYaxis().SetTitleOffset(1.2) # This doesn't work when ymin=ymax=0
    mg.GetXaxis().SetTitle("#eta_{R}")
    mg.GetXaxis().SetTitleSize(0.04)

    if (ymin == ymax):   
        lymin = c0.GetUymin()
        lymax = c0.GetUymax()

    else:
        mg.GetYaxis().SetRangeUser(ymin,ymax) 
        lymin = ymin
        lymax = ymax

    xline = TLine(c0.GetUxmin(),0,c0.GetUxmax(),0)
    #xline = TLine(-3,0,3,0)
    xline.SetLineColor(kBlack)
    xline.SetLineStyle(1)

    EBLowLine = TLine(7,lymin,7,lymax)
    EBLowLine.SetLineColor(kBlack)
    EBLowLine.SetLineStyle(2)

    EBHighLine = TLine(14,lymin,14,lymax)
    EBHighLine.SetLineColor(kBlack)
    EBHighLine.SetLineStyle(2)

    # tlt = TLine(3.5,lymin,3.5,lymax)
    # tlt.SetLineColor(kBlack)
    # tlt.SetLineStyle(2)

    # tlta = TLine(10.5,lymin,10.5,lymax)
    # tlta.SetLineColor(kBlack)
    # tlta.SetLineStyle(2)

    # tltb = TLine(17.5,lymin,17.5,lymax)
    # tltb.SetLineColor(kBlack)
    # tltb.SetLineStyle(2)

    l1.Draw("SAME")
    xline.Draw("SAME")
    EBLowLine.Draw("SAME")
    EBHighLine.Draw("SAME")
    # tlt.Draw("SAME") # For checking text alignment 
    # tlta.Draw("SAME")
    # tltb.Draw("SAME")

    shift = 0.015
    width = 0.037 # 0.04 is a decent width for EE- text 
    third = 0.8/3 

    EEmL = TLatex()
    EEmL.SetNDC()
    EEmL.SetTextAngle(0)
    EEmL.SetTextColor(kBlack)
    EEmL.SetTextFont(63)
    EEmL.SetTextAlign(11)
    EEmL.SetTextSize(22)
    EEmL.DrawLatex(0.1+((third)/2) - (width/2),0.8625,"EE-")
    EEmL.SetTextFont(53)

    EBL = TLatex()
    EBL.SetNDC()
    EBL.SetTextAngle(0)
    EBL.SetTextColor(kBlack)
    EBL.SetTextFont(63)
    EBL.SetTextAlign(11)
    EBL.SetTextSize(22)
    EBL.DrawLatex(0.1+(3*(third)/2) - (width/2),0.8625,"EB")
    EBL.SetTextFont(53)

    EEpL = TLatex()
    EEpL.SetNDC()
    EEpL.SetTextAngle(0)
    EEpL.SetTextColor(kBlack)
    EEpL.SetTextFont(63)
    EEpL.SetTextAlign(11)
    EEpL.SetTextSize(22)
    EEpL.DrawLatex(0.1+(5*(third)/2) - (width/2),0.8625,"EE+")
    EEpL.SetTextFont(53)

    yTitle = TLatex()
    yTitle.SetNDC()
    yTitle.SetTextAngle(0)
    yTitle.SetTextColor(kBlack)
    yTitle.SetTextFont(53) #63 
    yTitle.SetTextAlign(11)
    yTitle.SetTextSize(26) #22
    yTitle.DrawLatex(0.02,0.87,"#bar{b}") #0.8625
    #yTitle.SetTextFont(53)

    save_title = "/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/src/ECAL_Weights/Plot/bin/tmp/ABvsER_ts" + str(ts) + "_" + WT + "_" + PD 

    Save_Title_pdf = save_title + ".pdf"
    Save_Title_png = save_title + ".png"
    Save_Title_root = save_title + ".root"

    mg.SaveAs(Save_Title_root)
    c0.SaveAs(Save_Title_pdf)
    c0.SaveAs(Save_Title_png)
    os.system('evince ' + Save_Title_pdf)
    mg.Delete()
    #os.system('scp ' + Save_Title + ' ${ssh%% *}/home/abe/Documents/Papers/Weights/Images')