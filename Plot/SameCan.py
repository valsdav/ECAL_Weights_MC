# This should output average bias vs. eta range for desired time shift 
from ROOT import *
import os 
from array import array

from FindFiles import FindFiles
from SetLegend import SetLegend
from Sigma_Calc import Sigma_Calc

def SameCan(params):
    print('In SameCan')
    paths = FindFiles(params[1],params[2])
    plot_type = str(paths[0].split('/')[-1].split('_')[-8])
    #gStyle.SetOptStat(0); # no stats box
    mg = TMultiGraph()
    l1 = SetLegend(params[3])
    #EB_ranges = 0
    #EE_ranges = 0 

    # Create colors, styles for plot with many series

    #colors = [kRed, kOrange, kGreen, kCyan, kAzure + 4, kBlue, kViolet, kMagenta, kGray]
    #line_styles = []

    #static_line_styles = []

    # for i in range(10):
    #     static_line_styles.append(i+1)

    # num_paths = len(paths) 
    # num_colors = len(colors)

    # for i in range(num_colors):
    #     line_styles.append(1)

    # if ( num_paths > num_colors ):
    #     for i in range(num_paths - num_colors):
    #         #for j in range(num_paths - num_colors): 
    #         colors.append(colors[i])   #+ 4)
    #         line_styles.append(2)	


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

    i = 0

    # Add info from each path to multigraph

    ts = float(params[6]) # Start with ts 0. Later make optional 

    x = array('d')
    y = array('d')
    xe = array('d')
    ye = array('d')

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

    g = TGraphErrors(i - 1, x, y, xe, ye) # x, y, x errors, y errors 

    gne = TGraph(i - 1, x, y) # Graph with no errors 

    #EE_range = True
    g.SetMarkerStyle(kFullDotMedium)
    #g.SetLineStyle(line_style)
    g.SetMarkerColor(kBlack)
    g.SetLineColor(kBlack)
    g.SetFillColor(kBlue)
    g.SetFillStyle(1001)
		
    g.SetName("g" + str(68))
    label = "68 percent statistics"
    l1.AddEntry(g, label, "f")

    atmp = array('d')
    atemp = array('d')

    for el in ye:
       atmp.append(el)
       atemp.append(el)

    g2 = Sigma_Calc(g,i,x,y,xe,atmp,90) # using this not knowing how to copy graph and only change y errors. 
    g2.SetName("g" + str(90))
    label = "90 percent statistics"
    l1.AddEntry(g2, label, "f")

    g3 = Sigma_Calc(g,i,x,y,xe,atemp,99.5)
    g3.SetName("g" + str(99.5))
    label = "99.5 percent statistics"
    l1.AddEntry(g3, label, "f")

    mg.Add(g3, "L3") # 99.5% error band
    mg.Add(g2, "L3") # 90% error band
    mg.Add(g, "L3") # 68% error band 
    mg.Add(gne, "PL") # Avg

    WT = paths[0].split('_')[-3] # Weights Type
    if WT == 'online': WT = 'Online'
    PY = path.split('_')[-2]

    if plot_type == 'EC': mg.SetTitle(WT + ' Weights, ' + PY + ' Parameters, Time Shift = ' + str(ts) + 'ns')
    gROOT.SetBatch(kTRUE)
    c0 = TCanvas('c0', 'c0', 800, 600)
    #gROOT.SetBatch(kTRUE)

    ymin = float(params[4])
    ymax = float(params[5])

    mg.Draw("A")
    mg.GetYaxis().SetRangeUser(ymin,ymax) 
    mg.GetXaxis().SetTitle("Eta Region")
    #mg.GetXaxis().SetRangeUser(-3,3)
    #mg.GetYaxis().SetRangeUser(-0.04,0.02)
    mg.GetYaxis().SetTitle("Average Bias")
    mg.GetYaxis().SetTitleOffset(1.3)

    xline = TLine(c0.GetUxmin(),0,c0.GetUxmax(),0)
    #xline = TLine(-3,0,3,0)
    xline.SetLineColor(kBlack)
    xline.SetLineStyle(1)

    #EBLowLine = TLine(0,c0.GetUymin(),0,c0.GetUymax())
    EBLowLine = TLine(7,ymin,7,ymax)
    #EBLowLine = TLine(0,-0.04,0,0.02)
    EBLowLine.SetLineColor(kBlack)
    EBLowLine.SetLineStyle(2)

    #EBHighLine = TLine(0,c0.GetUymin(),0,c0.GetUymax())
    EBHighLine = TLine(14,ymin,14,ymax)
    #EBHighLine = TLine(0,-0.04,0,0.02)
    EBHighLine.SetLineColor(kBlack)
    EBHighLine.SetLineStyle(2)

    shift = 0.015

    EEmL = TLatex()
    EEmL.SetNDC()
    EEmL.SetTextAngle(0)
    EEmL.SetTextColor(kBlack)
    EEmL.SetTextFont(63)
    EEmL.SetTextAlign(11)
    EEmL.SetTextSize(22)
    EEmL.DrawLatex(0.225,0.8625,"EE-")
    EEmL.SetTextFont(53)

    EBL = TLatex()
    EBL.SetNDC()
    EBL.SetTextAngle(0)
    EBL.SetTextColor(kBlack)
    EBL.SetTextFont(63)
    EBL.SetTextAlign(11)
    EBL.SetTextSize(22)
    EBL.DrawLatex(0.5 - shift,0.8625,"EB")
    EBL.SetTextFont(53)

    EEpL = TLatex()
    EEpL.SetNDC()
    EEpL.SetTextAngle(0)
    EEpL.SetTextColor(kBlack)
    EEpL.SetTextFont(63)
    EEpL.SetTextAlign(11)
    EEpL.SetTextSize(22)
    EEpL.DrawLatex(0.75,0.8625,"EE+")
    EEpL.SetTextFont(53)

    l1.Draw("SAME")
    xline.Draw("SAME")
    EBLowLine.Draw("SAME")
    EBHighLine.Draw("SAME")

    #shift = 0.015

    # EEmL = TLatex()
    # EEmL.SetNDC()
    # EEmL.SetTextAngle(0)
    # EEmL.SetTextColor(kBlack)
    # EEmL.SetTextFont(63)
    # EEmL.SetTextAlign(11)
    # EEmL.SetTextSize(22)
    # EEmL.DrawLatex(0.225,0.8625,"EE-")
    # EEmL.SetTextFont(53)

    # EBL = TLatex()
    # EBL.SetNDC()
    # EBL.SetTextAngle(0)
    # EBL.SetTextColor(kBlack)
    # EBL.SetTextFont(63)
    # EBL.SetTextAlign(11)
    # EBL.SetTextSize(22)
    # EBL.DrawLatex(0.5 - shift,0.8625,"EB")
    # EBL.SetTextFont(53)

    # EEpL = TLatex()
    # EEpL.SetNDC()
    # EEpL.SetTextAngle(0)
    # EEpL.SetTextColor(kBlack)
    # EEpL.SetTextFont(63)
    # EEpL.SetTextAlign(11)
    # EEpL.SetTextSize(22)
    # EEpL.DrawLatex(0.75,0.8625,"EE+")
    # EEpL.SetTextFont(53)

    print'y range min = ',c0.GetUymin()
    print'y range max = ',c0.GetUymax()

    #Save_Title = "plots/plot" + section + str(int(histos[0].GetXaxis().GetBinLowEdge(1))) + ".pdf"
    #Save_Title = "bin/pyplot" + section + "_" + str(int(histos[0].GetXaxis().GetBinLowEdge(1))) + ".pdf"

    Save_Title_pdf = "/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/src/ECAL_Weights/Plot/bin/ABvsER_ts" + str(ts) + "_" + WT + "_" + PY + ".pdf"
    Save_Title_png = "/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/src/ECAL_Weights/Plot/bin/ABvsER_ts" + str(ts) + "_" + WT + "_" + PY + ".png"

    # gSystem.ProcessEvents()
    # img = TImage.Create()
    # img.FromPad(c0)
    # img.WriteImage("bin/canvas.png")

    #c0.SaveAs(Save_Title)
    c0.SaveAs(Save_Title_pdf)
    c0.SaveAs(Save_Title_png)
    os.system('evince ' + Save_Title_pdf)
    #os.system('scp ' + Save_Title + ' ${ssh%% *}/home/abe/Documents/Papers/Weights/Images')