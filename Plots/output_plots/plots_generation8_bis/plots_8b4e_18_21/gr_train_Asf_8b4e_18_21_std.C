void gr_train_Asf_8b4e_18_21_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:04:48 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.7415662,-0.352936,8.535542,1.592725);
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
   
   Double_t curr_8b4e_gr_train_Asf_std_fx96[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t curr_8b4e_gr_train_Asf_std_fy96[8] = {
   0.3267276,
   0.4429857,
   0.4531644,
   0.4483001,
   0.4386607,
   0.4405554,
   0.4429744,
   0.2645692};
   TGraph *graph = new TGraph(8,curr_8b4e_gr_train_Asf_std_fx96,curr_8b4e_gr_train_Asf_std_fy96);
   graph->SetName("curr_8b4e_gr_train_Asf_std");
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
   
   TH1F *Graph_curr_8b4e_gr_train_Asf_std96 = new TH1F("Graph_curr_8b4e_gr_train_Asf_std96","Graph",100,0.3,8.7);
   Graph_curr_8b4e_gr_train_Asf_std96->SetMinimum(0.2457096);
   Graph_curr_8b4e_gr_train_Asf_std96->SetMaximum(0.4720239);
   Graph_curr_8b4e_gr_train_Asf_std96->SetDirectory(0);
   Graph_curr_8b4e_gr_train_Asf_std96->SetStats(0);
   Graph_curr_8b4e_gr_train_Asf_std96->SetLineStyle(0);
   Graph_curr_8b4e_gr_train_Asf_std96->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_train_Asf_std96->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_Asf_std96->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_Asf_std96->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_Asf_std96->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_Asf_std96->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_train_Asf_std96->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_train_Asf_std96->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_Asf_std96->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_Asf_std96->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_Asf_std96->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_Asf_std96->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_train_Asf_std96->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_train_Asf_std96->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_Asf_std96->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_Asf_std96->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_Asf_std96->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_Asf_std96->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_train_Asf_std96->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_train_Asf_std96);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_train_Asf_std_fx97[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu0_8b4e_gr_train_Asf_std_fy97[8] = {
   0.3192041,
   0.4338272,
   0.4430048,
   0.4366344,
   0.4243305,
   0.4277268,
   0.4253439,
   0.2669869};
   graph = new TGraph(8,pu0_8b4e_gr_train_Asf_std_fx97,pu0_8b4e_gr_train_Asf_std_fy97);
   graph->SetName("pu0_8b4e_gr_train_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_train_Asf_std97 = new TH1F("Graph_pu0_8b4e_gr_train_Asf_std97","Graph",100,0.3,8.7);
   Graph_pu0_8b4e_gr_train_Asf_std97->SetMinimum(0.2493851);
   Graph_pu0_8b4e_gr_train_Asf_std97->SetMaximum(0.4606065);
   Graph_pu0_8b4e_gr_train_Asf_std97->SetDirectory(0);
   Graph_pu0_8b4e_gr_train_Asf_std97->SetStats(0);
   Graph_pu0_8b4e_gr_train_Asf_std97->SetLineStyle(0);
   Graph_pu0_8b4e_gr_train_Asf_std97->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_train_Asf_std97->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_train_Asf_std97);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_train_Asf_std_fx98[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu0_newavg_8b4e_gr_train_Asf_std_fy98[8] = {
   0.3027144,
   0.4298336,
   0.433006,
   0.4233478,
   0.4071749,
   0.4060346,
   0.3961426,
   0.2630557};
   graph = new TGraph(8,pu0_newavg_8b4e_gr_train_Asf_std_fx98,pu0_newavg_8b4e_gr_train_Asf_std_fy98);
   graph->SetName("pu0_newavg_8b4e_gr_train_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_train_Asf_std98 = new TH1F("Graph_pu0_newavg_8b4e_gr_train_Asf_std98","Graph",100,0.3,8.7);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->SetMinimum(0.2460606);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->SetMaximum(0.450001);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_train_Asf_std98);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_train_Asf_std_fx99[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu50s2_8b4e_gr_train_Asf_std_fy99[8] = {
   0.3165263,
   0.4338753,
   0.441694,
   0.4332462,
   0.4211846,
   0.4231251,
   0.4171004,
   0.2607014};
   graph = new TGraph(8,pu50s2_8b4e_gr_train_Asf_std_fx99,pu50s2_8b4e_gr_train_Asf_std_fy99);
   graph->SetName("pu50s2_8b4e_gr_train_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_train_Asf_std99 = new TH1F("Graph_pu50s2_8b4e_gr_train_Asf_std99","Graph",100,0.3,8.7);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->SetMinimum(0.2426021);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->SetMaximum(0.4597933);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->SetStats(0);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_train_Asf_std99);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_train_Asf_std_fx100[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu50s30_8b4e_gr_train_Asf_std_fy100[8] = {
   0.3191042,
   0.4341156,
   0.4432179,
   0.4370733,
   0.4245002,
   0.4274342,
   0.4254754,
   0.2665012};
   graph = new TGraph(8,pu50s30_8b4e_gr_train_Asf_std_fx100,pu50s30_8b4e_gr_train_Asf_std_fy100);
   graph->SetName("pu50s30_8b4e_gr_train_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_train_Asf_std100 = new TH1F("Graph_pu50s30_8b4e_gr_train_Asf_std100","Graph",100,0.3,8.7);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->SetMinimum(0.2488296);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->SetMaximum(0.4608896);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->SetStats(0);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_train_Asf_std100);
   
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
   TLegendEntry *entry=leg->AddEntry("curr_8b4e_gr_train_Asf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_8b4e_gr_train_Asf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_8b4e_gr_train_Asf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_8b4e_gr_train_Asf_mean","#splitline{PU optimized}{(PU=50, ET=2GeV)}","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_8b4e_gr_train_Asf_mean","#splitline{PU optimized}{(PU=50, ET=30GeV)}","lp");

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
