void gr_train_totsf_8b4e_18_21_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:04:55 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.7415662,-0.3531761,8.535542,1.594332);
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
   
   Double_t curr_8b4e_gr_train_totsf_std_fx116[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t curr_8b4e_gr_train_totsf_std_fy116[8] = {
   0.3267224,
   0.4431572,
   0.4536232,
   0.4491101,
   0.439054,
   0.4411565,
   0.4401572,
   0.2594409};
   TGraph *graph = new TGraph(8,curr_8b4e_gr_train_totsf_std_fx116,curr_8b4e_gr_train_totsf_std_fy116);
   graph->SetName("curr_8b4e_gr_train_totsf_std");
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
   
   TH1F *Graph_curr_8b4e_gr_train_totsf_std116 = new TH1F("Graph_curr_8b4e_gr_train_totsf_std116","Graph",100,0.3,8.7);
   Graph_curr_8b4e_gr_train_totsf_std116->SetMinimum(0.2400227);
   Graph_curr_8b4e_gr_train_totsf_std116->SetMaximum(0.4730415);
   Graph_curr_8b4e_gr_train_totsf_std116->SetDirectory(0);
   Graph_curr_8b4e_gr_train_totsf_std116->SetStats(0);
   Graph_curr_8b4e_gr_train_totsf_std116->SetLineStyle(0);
   Graph_curr_8b4e_gr_train_totsf_std116->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_train_totsf_std116->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_totsf_std116->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_totsf_std116->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_totsf_std116->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_totsf_std116->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_train_totsf_std116->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_train_totsf_std116->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_totsf_std116->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_totsf_std116->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_totsf_std116->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_totsf_std116->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_train_totsf_std116->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_train_totsf_std116->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_totsf_std116->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_totsf_std116->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_totsf_std116->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_totsf_std116->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_train_totsf_std116->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_train_totsf_std116);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_train_totsf_std_fx117[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu0_8b4e_gr_train_totsf_std_fy117[8] = {
   0.3192058,
   0.4339642,
   0.443383,
   0.4373353,
   0.4246722,
   0.4282659,
   0.4228125,
   0.2621802};
   graph = new TGraph(8,pu0_8b4e_gr_train_totsf_std_fx117,pu0_8b4e_gr_train_totsf_std_fy117);
   graph->SetName("pu0_8b4e_gr_train_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_train_totsf_std117 = new TH1F("Graph_pu0_8b4e_gr_train_totsf_std117","Graph",100,0.3,8.7);
   Graph_pu0_8b4e_gr_train_totsf_std117->SetMinimum(0.2440599);
   Graph_pu0_8b4e_gr_train_totsf_std117->SetMaximum(0.4615033);
   Graph_pu0_8b4e_gr_train_totsf_std117->SetDirectory(0);
   Graph_pu0_8b4e_gr_train_totsf_std117->SetStats(0);
   Graph_pu0_8b4e_gr_train_totsf_std117->SetLineStyle(0);
   Graph_pu0_8b4e_gr_train_totsf_std117->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_train_totsf_std117->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_train_totsf_std117);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_train_totsf_std_fx118[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu0_newavg_8b4e_gr_train_totsf_std_fy118[8] = {
   0.3027038,
   0.430068,
   0.433577,
   0.4242565,
   0.4075738,
   0.406616,
   0.3938508,
   0.2589552};
   graph = new TGraph(8,pu0_newavg_8b4e_gr_train_totsf_std_fx118,pu0_newavg_8b4e_gr_train_totsf_std_fy118);
   graph->SetName("pu0_newavg_8b4e_gr_train_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_train_totsf_std118 = new TH1F("Graph_pu0_newavg_8b4e_gr_train_totsf_std118","Graph",100,0.3,8.7);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->SetMinimum(0.241493);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->SetMaximum(0.4510391);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_train_totsf_std118->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_train_totsf_std118);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_train_totsf_std_fx119[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu50s2_8b4e_gr_train_totsf_std_fy119[8] = {
   0.3165183,
   0.4340778,
   0.4422297,
   0.4341315,
   0.4215908,
   0.4237338,
   0.4145167,
   0.256029};
   graph = new TGraph(8,pu50s2_8b4e_gr_train_totsf_std_fx119,pu50s2_8b4e_gr_train_totsf_std_fy119);
   graph->SetName("pu50s2_8b4e_gr_train_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_train_totsf_std119 = new TH1F("Graph_pu50s2_8b4e_gr_train_totsf_std119","Graph",100,0.3,8.7);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->SetMinimum(0.2374089);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->SetMaximum(0.4608498);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->SetStats(0);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_train_totsf_std119->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_train_totsf_std119);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_train_totsf_std_fx120[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu50s30_8b4e_gr_train_totsf_std_fy120[8] = {
   0.319105,
   0.4342583,
   0.4436104,
   0.4377934,
   0.4248482,
   0.4279779,
   0.4229317,
   0.2617004};
   graph = new TGraph(8,pu50s30_8b4e_gr_train_totsf_std_fx120,pu50s30_8b4e_gr_train_totsf_std_fy120);
   graph->SetName("pu50s30_8b4e_gr_train_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_train_totsf_std120 = new TH1F("Graph_pu50s30_8b4e_gr_train_totsf_std120","Graph",100,0.3,8.7);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->SetMinimum(0.2435094);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->SetMaximum(0.4618014);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->SetStats(0);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_train_totsf_std120->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_train_totsf_std120);
   
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
   
   TLegend *leg = new TLegend(0.67,0.5,0.95,0.93,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("curr_8b4e_gr_train_totsf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_8b4e_gr_train_totsf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_8b4e_gr_train_totsf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_8b4e_gr_train_totsf_mean","#splitline{PU optimized}{(PU=50, ET=2GeV)}","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_8b4e_gr_train_totsf_mean","#splitline{PU optimized}{(PU=50, ET=30GeV)}","lp");

   ci = TColor::GetColor("#0000cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.35,0.68,0.65,0.88,"NB NDC");
   pt->SetFillColor(0);
   TText *pt_LaTex = pt->AddText("PU=50");
   pt_LaTex = pt->AddText("1.5<|#eta|<1.8");
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
