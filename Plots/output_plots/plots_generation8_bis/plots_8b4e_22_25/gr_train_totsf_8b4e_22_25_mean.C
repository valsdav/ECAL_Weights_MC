void gr_train_totsf_8b4e_22_25_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:04:39 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.7415662,-0.636417,8.535542,2.058717);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.15);
   c1->SetRightMargin(0.02);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.13);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle(";BX of signal;Fractional bias");
   
   Double_t curr_8b4e_gr_train_totsf_mean_fx111[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t curr_8b4e_gr_train_totsf_mean_fy111[8] = {
   0.1235165,
   0.5668982,
   0.5774899,
   0.4730506,
   0.3654024,
   0.3204053,
   0.1844124,
   -0.170004};
   TGraph *graph = new TGraph(8,curr_8b4e_gr_train_totsf_mean_fx111,curr_8b4e_gr_train_totsf_mean_fy111);
   graph->SetName("curr_8b4e_gr_train_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9933");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#ff9933");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_curr_8b4e_gr_train_totsf_mean111 = new TH1F("Graph_curr_8b4e_gr_train_totsf_mean111","Graph",100,0.3,8.7);
   Graph_curr_8b4e_gr_train_totsf_mean111->SetMinimum(-0.2447533);
   Graph_curr_8b4e_gr_train_totsf_mean111->SetMaximum(0.6522392);
   Graph_curr_8b4e_gr_train_totsf_mean111->SetDirectory(0);
   Graph_curr_8b4e_gr_train_totsf_mean111->SetStats(0);
   Graph_curr_8b4e_gr_train_totsf_mean111->SetLineStyle(0);
   Graph_curr_8b4e_gr_train_totsf_mean111->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_train_totsf_mean111->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_train_totsf_mean111);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_train_totsf_mean_fx112[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu0_8b4e_gr_train_totsf_mean_fy112[8] = {
   0.09967837,
   0.5239894,
   0.5264114,
   0.4241675,
   0.3213867,
   0.2735842,
   0.1436956,
   -0.1860496};
   graph = new TGraph(8,pu0_8b4e_gr_train_totsf_mean_fx112,pu0_8b4e_gr_train_totsf_mean_fy112);
   graph->SetName("pu0_8b4e_gr_train_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_train_totsf_mean112 = new TH1F("Graph_pu0_8b4e_gr_train_totsf_mean112","Graph",100,0.3,8.7);
   Graph_pu0_8b4e_gr_train_totsf_mean112->SetMinimum(-0.2572956);
   Graph_pu0_8b4e_gr_train_totsf_mean112->SetMaximum(0.5976575);
   Graph_pu0_8b4e_gr_train_totsf_mean112->SetDirectory(0);
   Graph_pu0_8b4e_gr_train_totsf_mean112->SetStats(0);
   Graph_pu0_8b4e_gr_train_totsf_mean112->SetLineStyle(0);
   Graph_pu0_8b4e_gr_train_totsf_mean112->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_train_totsf_mean112->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_train_totsf_mean112);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_train_totsf_mean_fx113[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu0_newavg_8b4e_gr_train_totsf_mean_fy113[8] = {
   0.09970047,
   0.5758777,
   0.5675349,
   0.4447134,
   0.3374637,
   0.281693,
   0.1564796,
   -0.1370656};
   graph = new TGraph(8,pu0_newavg_8b4e_gr_train_totsf_mean_fx113,pu0_newavg_8b4e_gr_train_totsf_mean_fy113);
   graph->SetName("pu0_newavg_8b4e_gr_train_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_train_totsf_mean113 = new TH1F("Graph_pu0_newavg_8b4e_gr_train_totsf_mean113","Graph",100,0.3,8.7);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->SetMinimum(-0.2083599);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->SetMaximum(0.6471721);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_train_totsf_mean113->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_train_totsf_mean113);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_train_totsf_mean_fx114[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu50s2_8b4e_gr_train_totsf_mean_fy114[8] = {
   0.1432207,
   0.5830183,
   0.5805038,
   0.467545,
   0.3606533,
   0.3082722,
   0.1849286,
   -0.135279};
   graph = new TGraph(8,pu50s2_8b4e_gr_train_totsf_mean_fx114,pu50s2_8b4e_gr_train_totsf_mean_fy114);
   graph->SetName("pu50s2_8b4e_gr_train_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_train_totsf_mean114 = new TH1F("Graph_pu50s2_8b4e_gr_train_totsf_mean114","Graph",100,0.3,8.7);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->SetMinimum(-0.2071087);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->SetMaximum(0.654848);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->SetStats(0);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_train_totsf_mean114->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_train_totsf_mean114);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_train_totsf_mean_fx115[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu50s30_8b4e_gr_train_totsf_mean_fy115[8] = {
   0.1030516,
   0.5290164,
   0.531936,
   0.4286664,
   0.325363,
   0.2777457,
   0.1473104,
   -0.1827065};
   graph = new TGraph(8,pu50s30_8b4e_gr_train_totsf_mean_fx115,pu50s30_8b4e_gr_train_totsf_mean_fy115);
   graph->SetName("pu50s30_8b4e_gr_train_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_train_totsf_mean115 = new TH1F("Graph_pu50s30_8b4e_gr_train_totsf_mean115","Graph",100,0.3,8.7);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->SetMinimum(-0.2541707);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->SetMaximum(0.6034003);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->SetStats(0);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_train_totsf_mean115->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_train_totsf_mean115);
   
   multigraph->Add(graph,"");
   multigraph->Draw("APL");
   multigraph->GetXaxis()->SetTitle("BX of signal");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.007);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Fractional bias");
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
   pt_LaTex = pt->AddText("1.8<|#eta|<2.3");
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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
