from FindFiles import FindFiles
from SetLegend import SetLegend

def SepCan(params):
    print'In SepCan'
    paths = FindFiles(params[1],params[2])




        ## Saving extra code: 
    # for plotting all eta ranges on single bias vs ts plot:


    #     h = TH1F()
    #     f = TFile().Open(path)

    #     if plot_type == 'EC':
    #         h = f.Get("EC")
    #     else:
    #         print'Plot Type not recognized. Should be EC'
    
    #     counter = 1
    #     value = 0
    #     hts = 0
    #     dt = h.GetXaxis().GetBinLowEdge(3) - h.GetXaxis().GetBinLowEdge(2)

    #     found = False

    #     while( (h.GetBinContent(counter) != 0) and (found == False)):
    #         #print ("hist.GetXaxis().GetBinContent(" + str(counter) + ") = " + str(hist.GetXaxis().GetBinLowEdge(counter)))
    #         hts = h.GetXaxis().GetBinLowEdge(counter)
    #         if hts == ts:
    #             found = True
    #             x.append()
    #         #print ("hist.GetBinContent(" + str(counter) + ") = " + str(hist.GetBinContent(counter)))
    #         value = h.GetBinContent(counter)

    #         #cout << "abs(" << value << ") = " << abs(value) << endl;
    #         #h2->Fill(ts,fabs(value));
    #         x.append(ts)
    #         xe.append(0)
    #         ye.append(h.GetBinError(counter))
    #         #print'x = ',ts
    #         #print'y error = ',h.GetBinError(counter)
    #         #if (abs_val): y.append(fabs(value))
    #         #else: y.append(value)
    #         y.append(value)
    #         #print("ts = " + str(ts) )
    #         #print("value = " + str(value) )
    #         #print("counter = " + str(counter) )
    #         ts += dt
    #         counter += 1

    #     #g = TGraph(counter - 1, x, y)
    #     g = TGraphErrors(counter - 1, x, y, xe, ye) # x, y, x errors, y errors 

    #     if plot_type == 'BC':
    #         g.SetMarkerStyle(8)

    #         if path.split('_')[-4] == "online": 
    #             if path.split('_')[-3] == "2017":
    #                 g.SetMarkerColor(kRed + 2) 
    #                 g.SetLineColor(kRed + 2)
    #             elif path.split('_')[-3] == "2018":
    #                 g.SetMarkerColor(kRed) 
    #                 g.SetLineColor(kRed)

    #         if path.split('_')[-4] == "PedSub1+4": 
    #             if path.split('_')[-3] == "2017":
    #                 #print 'year = 2017'
    #                 g.SetMarkerColor(kGreen + 4) 
    #                 g.SetLineColor(kGreen + 4)
    #             elif path.split('_')[-3] == "2018":
    #                 #print 'year = 2018'
    #                 g.SetMarkerColor(kGreen) 
    #                 g.SetLineColor(kGreen)
            
    #     elif plot_type == 'EC':

    #         #gStyle.SetPalette(55) # kRainbow

    #         min_eta = float(path.split('_')[-7]) #min is -7 when there's a note. With no note, one less '_'
    #         max_eta = float(path.split('_')[-6])

    #         #print'min eta = ',min_eta
    #         #print'max eta = ',max_eta

    #         EE_range = True

    #         if ( (min_eta >= -1.485) and (1.482 > min_eta) ): EE_range = False

    #         color = colors[i]
    #         line_style = line_styles[i]

    #         #print"color = ",color 

    #         g.SetMarkerStyle(kFullDotMedium)
    # #		g.SetMarkerColor(color)
    #         g.SetLineStyle(line_style)
    # #		g.SetLineColor(color)

    #         #g.SetMarkerColor(kRed - EE_ranges)
    #         #g.SetMarkerColorAlpha(kRed, (1 - (0.1)*(EE_ranges) ) )
    #         #g.SetLineColorAlpha(kRed,(1 - (0.1)*(EE_ranges) ) )
        

    #         if(EE_range):
    #             #print'i = ',i
    #             #print'EE'
    #             #g.SetMarkerColor(kRed - EE_ranges)
    #             #g.SetMarkerColorAlpha(kRed, (1 - (0.1)*(EE_ranges) ) )
    #             #g.SetLineColorAlpha(kRed,(1 - (0.1)*(EE_ranges) ) )
    #             g.SetMarkerColor(kRed)
    #             g.SetLineColor(kRed)
    #             g.SetLineStyle(static_line_styles[EE_ranges])
    #             g.SetFillColor(kRed) # make this optional?
    #             g.SetFillStyle(1001)
            
    #             EE_ranges += 1	

    #         if(not EE_range):
    #             #print'i = ',i
    #             #print'EB'
    #             #g.SetMarkerColor(kRed - EE_ranges)
    #             #g.SetMarkerColorAlpha(kGreen, (1 - (0.1)*(EB_ranges) ) )
    #             #g.SetLineColorAlpha(kGreen,(1 - (0.1)*(EB_ranges) ) )
    #             g.SetMarkerColor(kGreen)
    #             g.SetLineColor(kGreen)
    #             g.SetLineStyle(static_line_styles[EB_ranges])
    #             g.SetFillColor(kGreen)
    #             g.SetFillStyle(1001)

    #             EB_ranges += 1			

    #         # Greater abs(eta), less transparent 

    # #		# EE
    # #		if ( (min_eta < -1.479) or (min_eta >= 1.479) ): 
    # #			#print'i = ',i
    # #			#print'EE'
    # #			#g.SetMarkerColor(kRed - EE_ranges)
    # #			g.SetMarkerColorAlpha(kRed, (1 - (0.1)*(EE_ranges) ) )
    # #			g.SetLineColorAlpha(kRed,(1 - (0.1)*(EE_ranges) ) )
    # #			EE_ranges += 1

    # #		# EB
    # #		elif ( (min_eta >= -1.479) and (min_eta < 1.479) ): 
    # #			#print'i = ',i
    # #			#print'EB'
    # #			g.SetMarkerColorAlpha(kGreen, 0 + 0.1*EB_ranges)
    # #			g.SetLineColorAlpha(kGreen, 0 + 0.1*EB_ranges)
    # #			EB_ranges += 1
    # #		#i += 1

    #     #l1 = TLegend(0.7, 0.3, 0.9, 0.5)
    #     #l1 = TLegend(0.1, 0.7, 0.3, 0.9) # Upper left

    #     g.SetName("g" + str(i))

    #     if plot_type == 'BC':
    #         label = path.split('_')[-4] + '_' + path.split('_')[-3]
    #         l1.AddEntry(g, label, "lp")

    #     if plot_type == 'EC':
    #         label = path.split('_')[-7] + ' #leq #eta < ' + path.split('_')[-6]
    #         l1.AddEntry(g, label, "lp")

    #     if plot_type == 'BC':
    #         section = path.split('_')[-5] #.split('/')[-1]
    #         minimum = path.split('_')[-2] + 'ns'
    #         maximum = path.split('.')[-2].split('_')[-1] + 'ns'
    #         #print 'section = ',section

    #     if plot_type == 'EC':
    #         weights_type = paths[0].split('_')[-3]
    #         #print 'weights type:',weights_type
    #         if weights_type == 'online': weights_type = 'Online'
    #         #print 'weights type = ',weights_type
    #         PY = path.split('_')[-2]

    #         minimum = path.split('_')[-5]   
    #         maximum = path.split('_')[-4] 

    #     #g.SetFillColor(kRed)
    #     #g.SetFillStyle(1001) # solid 
    #     #g.SetFillStyle(1001)

    #     g2 = Sigma_Calc(g,counter,x,y,xe,ye,90) # using this not knowing how to copy graph and only change y errors. 
    #     g3 = Sigma_Calc(g,counter,x,y,xe,ye,99.5)

    #     #mg.Add(g, "LP2") # 1 sigma error band
    #     mg.Add(g3, "L3") # 99.5% error band
    #     mg.Add(g2, "L3") # 90% error band
    #     mg.Add(g, "L3")
    #     #mg.Add(g, "3")
    #     # Add function that inputs TGraph with 1 sigma error, returns TGraph with x sigma error. Or pass desired percentage into TGraph. 
        
    #     #g2 = Sigma_Calc(g,90)
    #     #mg.Add(g2, "LP2") # 90% error band
    #     #mg.Add(g, "LP3") error bar range 
    #     i += 1

    # if plot_type == 'BC': mg.SetTitle(section + " Average Bias vs. Time Shift")
    # if plot_type == 'EC': mg.SetTitle(weights_type + ' Weights, ' + PY + ' Parameters')

    # c0 = TCanvas('c0', 'c0', 800, 600)
    # c0.SetBatch(kTRUE)


    # mg.Draw("A")
    # mg.GetYaxis().SetRangeUser(ymin,ymax) 
    # mg.GetXaxis().SetTitle("Time Shift (ns)")
    # #mg.GetXaxis().SetRangeUser(-3,3)
    # #mg.GetYaxis().SetRangeUser(-0.04,0.02)
    # mg.GetYaxis().SetTitle("Average Bias")
    # mg.GetYaxis().SetTitleOffset(1.3)

    # xline = TLine(c0.GetUxmin(),0,c0.GetUxmax(),0)
    # #xline = TLine(-3,0,3,0)
    # xline.SetLineColor(kBlack)
    # xline.SetLineStyle(1)

    # #yline = TLine(0,c0.GetUymin(),0,c0.GetUymax())
    # yline = TLine(0,ymin,0,ymax)
    # #yline = TLine(0,-0.04,0,0.02)
    # yline.SetLineColor(kBlack)
    # yline.SetLineStyle(1)

    # l1.Draw("SAME")
    # xline.Draw("SAME")
    # yline.Draw("SAME")

    # print'y range min = ',c0.GetUymin()
    # print'y range max = ',c0.GetUymax()

    # #Save_Title = "plots/plot" + section + str(int(histos[0].GetXaxis().GetBinLowEdge(1))) + ".pdf"
    # #Save_Title = "bin/pyplot" + section + "_" + str(int(histos[0].GetXaxis().GetBinLowEdge(1))) + ".pdf"
    # if plot_type == 'BC': Save_Title = "/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/src/ECAL_Weights/Plot/bin/pyplot" + section + "_" + minimum + '_' + maximum + ".pdf"
    # if plot_type == 'EC': Save_Title = "/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/src/ECAL_Weights/Plot/bin/pyplot_EC_" + weights_type + "_" + PY + "_" + minimum + '_' + maximum + "__.pdf"

    # c0.SaveAs(Save_Title)
    # os.system('evince ' + Save_Title)