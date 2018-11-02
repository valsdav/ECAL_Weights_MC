from FindFiles import FindFiles
from SetLegend import SetLegend
from Sigma_Calc import Sigma_Calc

from ROOT import *
from array import array 

def SepCan(params):
    print'In SepCan'
    paths = FindFiles(params[1],params[2])

    # Want to plot avg. b vs. ts for each #\eta_{R} and save as separate canvases.  

    plot_type = str(paths[0].split('/')[-1].split('_')[-8])
    #gStyle.SetOptStat(0); # no stats box
    #l1 = SetLegend(params[3])

    # Order by eta range
    # Need this for plotting avg bias vs. #\eta_{R} for given timeshift, so that x entries are in order. 

    temp_list = []

    for i in range(len(paths)):
        current_min = 1000
        for path in paths:
            emi = float(path.split('/')[-1].split('_')[-6])
            if (emi < current_min): 
                current_min = emi

        for path in paths:
            emi = float(path.split('/')[-1].split('_')[-6])
            if emi == current_min:
                temp_list.append(path)	
                paths.remove(path)

    paths = temp_list

    # for plotting all eta ranges on separate bias vs ts plots:

    i = 0

    gROOT.SetBatch(kTRUE)

    for path in paths:
        l1 = SetLegend(params[3]) # Reset legend 

        #can = eval('c' + str(i))

        #can = TCanvas('can','can',800,600)
        #mg_str = 'mg' + str(i)
        #mg = eval('TMultiGraph(' + mg_str + ', ' + mg_str + ', 800, 600)')

        #eval('' + mg_str + ' = TMultiGraph' + mg_str + ', ' + mg_str + ', 800, 600)')

        #mg = TMultiGraph('mg','mg') # For plotting error bands on same plot 

        mga = TMultiGraph() # If you want to access root file later, need to give this a name 

        #mga = eval(mg_tsr)

        x = array('d',[])
        y = array('d',[])
        xe = array('d',[])
        ye = array('d',[])

        h = TH1F()
        f = TFile().Open(path)

        if plot_type == 'EC':
            h = f.Get("EC")
        else:
            print'Plot Type not recognized. Should be EC'
    
        counter = 1
        value = 0
        ts = 0
        dt = h.GetXaxis().GetBinLowEdge(3) - h.GetXaxis().GetBinLowEdge(2)

        found = False

        while( (h.GetBinContent(counter) != 0) and (found == False)):
            ts = h.GetXaxis().GetBinLowEdge(counter)
            # if hts == ts:
            #     found = True
            #     x.append()
            value = h.GetBinContent(counter)
            #print'value = ',value
            x.append(ts)
            xe.append(0)
            ye.append(h.GetBinError(counter))
            y.append(value)
            ts += dt
            counter += 1

        g = TGraphErrors(counter - 1, x, y, xe, ye) # x, y, x errors, y errors 
            
        # Have tgrapherrors for plot path_{i}

        gne = TGraph(counter - 1, x, y) # Graph with no errors 
        gne.SetName("gne")
        gne.SetMarkerStyle(7)

        #EE_range = True
        g.SetMarkerStyle(kFullDotMedium)
        #g.SetLineStyle(line_style)
        g.SetMarkerColor(kBlack)
        g.SetLineColor(kBlack)
        g.SetFillColor(kBlue)
        g.SetFillStyle(1001)

        min_eta = float(path.split('_')[-7]) # min is -7 when there's a note. With no note, one less '_'
        max_eta = float(path.split('_')[-6])
  
        label = "Average"
        l1.AddEntry(gne, label, "lp") 
            
        g.SetName("g" + str(68))
        label = "68 percent statistics"
        l1.AddEntry(g, label, "f")

        atmp = array('d',[])
        atemp = array('d',[])

        for el in ye:
            atmp.append(el)
            atemp.append(el)

        g2 = Sigma_Calc(g,counter,x,y,xe,atmp,90) # using this not knowing how to copy graph and only changing y errors. 
        g2.SetName("g" + str(90))
        label = "90 percent statistics"
        l1.AddEntry(g2, label, "f")

        g3 = Sigma_Calc(g,counter,x,y,xe,atemp,99.5)
        g3.SetName("g" + str(99.5))
        label = "99.5 percent statistics"
        l1.AddEntry(g3, label, "f") # options: lpfe 

        # mg.Add(g3, "L3") # 99.5% error band
        # mg.Add(g2, "L3") # 90% error band
        # mg.Add(g, "L3") # 68% error band 
        # mg.Add(gne, "PL") # Avg

        mga.Add(g3, "L3") # 99.5% error band
        mga.Add(g2, "L3") # 90% error band
        mga.Add(g, "L3") # 68% error band 
        mga.Add(gne, "PL") # Avg

        WT = paths[0].split('_')[-3] # Weights Type
        if WT == 'online': WT = 'Online'
        PD = path.split('_')[-2]

        #if plot_type == 'EC': 
        mga.SetTitle(WT + ' Weights, ' + PD + ' Parameters, [#eta_{min},#eta_{max}] = [' + str(min_eta) + ', ' + str(max_eta) + ']')
        #mg.SetTitle(WT + ' Weights, ' + PD + ' Parameters, [etamin,etamax] = [' + str(min_eta) + ', ' + str(max_eta) + ']')

        #gROOT.SetBatch(kTRUE)
        can = TCanvas('can','can',800,600)
        
        #print'i = ',i

        #can_str = ''
        #can_str = 'c' + str(i)
        #eval('c' + str(i) + ' = TCanvas(' + can_str + ', ' + can_str + ', 800, 600)')

        #can = eval('c' + str(i))

        #can = TCanvas('can','can',800,600)
        #can = eval('TCanvas(' + can_str + ', ' + can_str + ', 800, 600)')

        #gROOT.SetBatch(kTRUE)

        # Set equal for automatic range 
        ymin = float(params[4])
        ymax = float(params[5])

        mga.Draw("A")

        #mg.SetTitleSize(0.04)
        mga.GetYaxis().SetTitle("#bar{b}") # rotate this. Maybe with ttext or tlatex. Don't set title just place latex or text at correct position. 
        #mg.GetYaxis().SetTitleFont(61)
        mga.GetYaxis().SetTitleSize(0.04)
        mga.GetYaxis().SetTitleOffset(1.2) # This doesn't work when ymin=ymax=0
        mga.GetXaxis().SetTitle("ts (ns)")
        #mg.GetXaxis().SetTitleSize(0.04)

        if (ymin == ymax):   
            lymin = can.GetUymin()
            lymax = can.GetUymax()

        else:
            mga.GetYaxis().SetRangeUser(ymin,ymax) 
            lymin = ymin
            lymax = ymax

        xline = TLine(can.GetUxmin(),0,can.GetUxmax(),0)
        xline.SetLineColor(kBlack)
        xline.SetLineStyle(1)

        yline = TLine(0,lymin,0,lymax)
        yline.SetLineColor(kBlack)
        yline.SetLineStyle(1)

        l1.Draw("SAME")
        xline.Draw("SAME")
        yline.Draw("SAME")

        save_title = "/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/src/ECAL_Weights/Plot/bin/tmp/ABvsts_" + str(min_eta) + "_" + str(max_eta) + "_" + WT + "_" + PD 

        Save_Title_root = save_title + ".root"
        Save_Title_pdf = save_title + ".pdf"
        Save_Title_png = save_title + ".png"

        #print'save title = ',save_title
        #print'Save_Title_pdf = ',Save_Title_pdf

        mga.SaveAs(Save_Title_root)
        can.SaveAs(Save_Title_pdf)
        can.SaveAs(Save_Title_png)

        #mg.Delete()
        #gPad.Clear()

        i += 1

        #os.system('evince ' + Save_Title_pdf)
        #os.system('scp ' + Save_Title + ' ${ssh%% *}/home/abe/Documents/Papers/Weights/Images')

        # Should create function for all of this code that's also in SameCan.py

    print'I must have been in a coma, because I\'m out of the loop'
