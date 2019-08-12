void gr_train_BXsf_8b4e_26_28_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:46:54 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.7415662,-0.3010803,8.535542,1.245691);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetGridy();
   c2->SetTickx(1);
   c2->SetTicky(1);
   c2->SetLeftMargin(0.15);
   c2->SetRightMargin(0.02);
   c2->SetTopMargin(0.05);
   c2->SetBottomMargin(0.13);
   c2->SetFrameFillStyle(0);
   c2->SetFrameBorderMode(0);
   c2->SetFrameFillStyle(0);
   c2->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle(";BX of signal;Fractional spread");
   
   Double_t curr_8b4e_gr_train_BXsf_std_fx106[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t curr_8b4e_gr_train_BXsf_std_fy106[8] = {
   0.09783842,
   0.3477461,
   0.3094553,
   0.2272155,
   0.1909394,
   0.2314157,
   0.2295612,
   0.1697547};
   TGraph *graph = new TGraph(8,curr_8b4e_gr_train_BXsf_std_fx106,curr_8b4e_gr_train_BXsf_std_fy106);
   graph->SetName("curr_8b4e_gr_train_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9933");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_curr_8b4e_gr_train_BXsf_std106 = new TH1F("Graph_curr_8b4e_gr_train_BXsf_std106","Graph",100,0.3,8.7);
   Graph_curr_8b4e_gr_train_BXsf_std106->SetMinimum(0.07284765);
   Graph_curr_8b4e_gr_train_BXsf_std106->SetMaximum(0.3727368);
   Graph_curr_8b4e_gr_train_BXsf_std106->SetDirectory(0);
   Graph_curr_8b4e_gr_train_BXsf_std106->SetStats(0);
   Graph_curr_8b4e_gr_train_BXsf_std106->SetLineStyle(0);
   Graph_curr_8b4e_gr_train_BXsf_std106->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_train_BXsf_std106->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_train_BXsf_std106);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_train_BXsf_std_fx107[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu0_8b4e_gr_train_BXsf_std_fy107[8] = {
   0.09802171,
   0.3279743,
   0.2826451,
   0.2084074,
   0.177906,
   0.2116637,
   0.2118508,
   0.1787407};
   graph = new TGraph(8,pu0_8b4e_gr_train_BXsf_std_fx107,pu0_8b4e_gr_train_BXsf_std_fy107);
   graph->SetName("pu0_8b4e_gr_train_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_train_BXsf_std107 = new TH1F("Graph_pu0_8b4e_gr_train_BXsf_std107","Graph",100,0.3,8.7);
   Graph_pu0_8b4e_gr_train_BXsf_std107->SetMinimum(0.07502645);
   Graph_pu0_8b4e_gr_train_BXsf_std107->SetMaximum(0.3509695);
   Graph_pu0_8b4e_gr_train_BXsf_std107->SetDirectory(0);
   Graph_pu0_8b4e_gr_train_BXsf_std107->SetStats(0);
   Graph_pu0_8b4e_gr_train_BXsf_std107->SetLineStyle(0);
   Graph_pu0_8b4e_gr_train_BXsf_std107->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_train_BXsf_std107->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_train_BXsf_std107);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_train_BXsf_std_fx108[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu0_newavg_8b4e_gr_train_BXsf_std_fy108[8] = {
   0.08786879,
   0.3540463,
   0.2953246,
   0.2057267,
   0.1708506,
   0.1988517,
   0.1973194,
   0.1939768};
   graph = new TGraph(8,pu0_newavg_8b4e_gr_train_BXsf_std_fx108,pu0_newavg_8b4e_gr_train_BXsf_std_fy108);
   graph->SetName("pu0_newavg_8b4e_gr_train_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_train_BXsf_std108 = new TH1F("Graph_pu0_newavg_8b4e_gr_train_BXsf_std108","Graph",100,0.3,8.7);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->SetMinimum(0.06125103);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->SetMaximum(0.3806641);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_std108->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_train_BXsf_std108);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_train_BXsf_std_fx109[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu50s2_8b4e_gr_train_BXsf_std_fy109[8] = {
   0.09282799,
   0.2596683,
   0.2068617,
   0.1548641,
   0.141559,
   0.1647438,
   0.183627,
   0.2050802};
   graph = new TGraph(8,pu50s2_8b4e_gr_train_BXsf_std_fx109,pu50s2_8b4e_gr_train_BXsf_std_fy109);
   graph->SetName("pu50s2_8b4e_gr_train_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_train_BXsf_std109 = new TH1F("Graph_pu50s2_8b4e_gr_train_BXsf_std109","Graph",100,0.3,8.7);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->SetMinimum(0.07614396);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->SetMaximum(0.2763524);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->SetStats(0);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_train_BXsf_std109->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_train_BXsf_std109);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_train_BXsf_std_fx110[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu50s30_8b4e_gr_train_BXsf_std_fy110[8] = {
   0.09753533,
   0.3289135,
   0.2823873,
   0.2093527,
   0.1775155,
   0.2107891,
   0.2106808,
   0.1789736};
   graph = new TGraph(8,pu50s30_8b4e_gr_train_BXsf_std_fx110,pu50s30_8b4e_gr_train_BXsf_std_fy110);
   graph->SetName("pu50s30_8b4e_gr_train_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_train_BXsf_std110 = new TH1F("Graph_pu50s30_8b4e_gr_train_BXsf_std110","Graph",100,0.3,8.7);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->SetMinimum(0.07439752);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->SetMaximum(0.3520513);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->SetStats(0);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_train_BXsf_std110->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_train_BXsf_std110);
   
   multigraph->Add(graph,"");
   multigraph->Draw("APL");
   multigraph->GetXaxis()->SetTitle("BX of signal");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.007);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Fractional spread");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.007);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleOffset(1.1);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.67,0.54,0.95,0.92,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("curr_8b4e_gr_train_BXsf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_8b4e_gr_train_BXsf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_8b4e_gr_train_BXsf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_8b4e_gr_train_BXsf_mean","PU optimized","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("NULL","PU=50, ET=2GeV","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry->SetTextSize(0.026);
   entry=leg->AddEntry("pu50s30_8b4e_gr_train_BXsf_mean","PU optimized","lp");

   ci = TColor::GetColor("#0000cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("NULL","PU=50, ET=30GeV","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry->SetTextSize(0.026);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.35,0.68,0.65,0.88,"NB NDC");
   pt->SetFillColor(0);
   TText *pt_LaTex = pt->AddText("PU=50");
   pt_LaTex = pt->AddText("2.3<|#eta|<3.0");
   pt_LaTex = pt->AddText("LHC filling ");
   pt_LaTex = pt->AddText("schema: 8b4e");
   pt->Draw();
   TLatex *   tex = new TLatex(0.98,0.96,"(13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.96,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2164,0.96,"Simulation Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0304);
   tex->SetLineWidth(2);
   tex->Draw();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
