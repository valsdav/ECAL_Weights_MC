from ROOT import *
from array import array
from Sigma_Calc import Sigma_Calc

def Fill_mg(mg,l1,i,x,y,xe,ye,gne,g):
    'In Fillmg()'

    g.SetMarkerStyle(kFullDotMedium)
    g.SetMarkerColor(kBlack)
    g.SetLineColor(kBlack)
    g.SetFillColor(kBlue)
    g.SetFillStyle(1001)
		
    label = "Average"
    l1.AddEntry(gne, label, "lp") 
        
    g.SetName("g" + str(68))
    label = "68 percent statistics"
    l1.AddEntry(g, label, "f")

    atmp = array('d')
    atemp = array('d')

    for el in ye:
       atmp.append(el)
       atemp.append(el)

    #print'atmp = ',atmp
    #print'atemp = ',atemp

    g2 = Sigma_Calc(g,i,x,y,xe,atmp,90) # using this not knowing how to copy graph and only changing y errors. 
    g2.SetName("g" + str(90))
    label = "90 percent statistics"
    l1.AddEntry(g2, label, "f")

    g3 = Sigma_Calc(g,i,x,y,xe,atemp,99.5)
    g3.SetName("g" + str(99.5))
    label = "99.5 percent statistics"
    l1.AddEntry(g3, label, "f") # options: lpfe 

    mg.Add(g3, "L3") # 99.5% error band
    mg.Add(g2, "L3") # 90% error band
    mg.Add(g, "L3") # 68% error band 
    mg.Add(gne, "PL") # Avg

    #WT = paths[0].split('_')[-3] # Weights Type
    #if WT == 'online': WT = 'Online'
    #PD = path.split('_')[-2]

    #if plot_type == 'EC': mg.SetTitle(WT + ' Weights, ' + PD + ' Parameters, Time Shift = ' + str(ts) + 'ns')
    # gROOT.SetBatch(kTRUE)
    # c0 = TCanvas('c0', 'c0', 800, 600)
    #gROOT.SetBatch(kTRUE)

    # Set both to zero for automatic range
    # ymin = float(params[4])
    # ymax = float(params[5])

    return mg 