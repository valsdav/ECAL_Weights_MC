from FindFiles import FindFiles
from SetLegend import SetLegend
from Fill_mg import Fill_mg
#from ERDict import ERDict 

from ROOT import *
from array import array 

def SepCan(params):
    from ER_Dict import ER_Dict # I'm not sure why this needs to be in definition and doesn't work in header. 

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
        print'Plotting ',path
        l1 = SetLegend(params[3]) # Reset legend 

        #can = eval('c' + str(i))

        #can = TCanvas('can','can',800,600)
        #mg_str = 'mg' + str(i)
        #mg = eval('TMultiGraph(' + mg_str + ', ' + mg_str + ', 800, 600)')

        #eval('' + mg_str + ' = TMultiGraph' + mg_str + ', ' + mg_str + ', 800, 600)')

        #mg = TMultiGraph('mg','mg') # For plotting error bands on same plot 

        mg = TMultiGraph() # If you want to access root file later, need to give this a name 

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

        WT = paths[0].split('_')[-3] # Weights Type
        if WT == 'online': WT = 'Online'
        PD = path.split('_')[-2]

        min_eta = float(path.split('_')[-7]) # min is -7 when there's a note. With no note, one less '_'
        max_eta = float(path.split('_')[-6])

        #print'1sig errors = ',ye 

        # Fill multigraph 
        mg = Fill_mg(mg,l1,counter,x,y,xe,ye,gne,g)
  
        if WT == 'PedSub0+5':
            WT = 'Ideal' # Eventually Have Ideal1, Ideal2, .. for diff. weights configurations. Online1, Online2, .. 
            
        #if plot_type == 'EC': 
        mg.SetTitle(WT + ' Weights, ' + PD + ' Parameters, [#eta_{min},#eta_{max}) = [' + str(min_eta) + ', ' + str(max_eta) + ')')

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

        mg.Draw("A")

        #mg.SetTitleSize(0.04)
        #mg.GetYaxis().SetTitle("#bar{b}") # rotate this. Maybe with ttext or tlatex. Don't set title just place latex or text at correct position. 
        #mg.GetYaxis().SetTitleFont(61)
        mg.GetYaxis().SetTitleSize(0.04)
        mg.GetYaxis().SetTitleOffset(1.2) # This doesn't work when ymin=ymax=0
        mg.GetXaxis().SetTitle("ts (ns)")
        #mg.GetXaxis().SetTitleSize(0.04)

        if (ymin == ymax):   
            lymin = can.GetUymin()
            lymax = can.GetUymax()

        else:
            mg.GetYaxis().SetRangeUser(ymin,ymax) 
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

        yTitle = TLatex()
        yTitle.SetNDC()
        yTitle.SetTextAngle(0)
        yTitle.SetTextColor(kBlack)
        yTitle.SetTextFont(53) #63 
        yTitle.SetTextAlign(11)
        yTitle.SetTextSize(26) #22
        yTitle.DrawLatex(0.02,0.87,"#bar{b}") #0.8625
        #yTitle.SetTextFont(53)

        ER = ER_Dict(min_eta)

        save_title = "/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/src/ECAL_Weights/Plot/bin/tmp/ABvsts_" + ER + "_" + WT + "_" + PD 

        Save_Title_root = save_title + ".root"
        Save_Title_pdf = save_title + ".pdf"
        Save_Title_png = save_title + ".png"

        #print'save title = ',save_title
        #print'Save_Title_pdf = ',Save_Title_pdf

        mg.SaveAs(Save_Title_root)
        can.SaveAs(Save_Title_pdf)
        can.SaveAs(Save_Title_png)

        #mg.Delete()
        #gPad.Clear()

        i += 1

        #os.system('evince ' + Save_Title_pdf)
        #os.system('scp ' + Save_Title + ' ${ssh%% *}/home/abe/Documents/Papers/Weights/Images')

        # Should create function for all of this code that's also in SameCan.py

    print'I must have been in a coma, because I\'m out of the loop'
