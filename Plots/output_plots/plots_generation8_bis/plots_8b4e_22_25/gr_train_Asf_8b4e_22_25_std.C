void gr_train_Asf_8b4e_22_25_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:04:36 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.7415662,-0.433026,8.535542,2.128712);
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
   0.2634223,
   0.5438633,
   0.5448667,
   0.5239739,
   0.5082005,
   0.5439254,
   0.6062501,
   0.2657273};
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
   Graph_curr_8b4e_gr_train_Asf_std96->SetMinimum(0.2291395);
   Graph_curr_8b4e_gr_train_Asf_std96->SetMaximum(0.6405329);
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
   0.2622581,
   0.530745,
   0.5251641,
   0.5031387,
   0.4885588,
   0.5145219,
   0.572344,
   0.2688662};
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
   Graph_pu0_8b4e_gr_train_Asf_std97->SetMinimum(0.2312495);
   Graph_pu0_8b4e_gr_train_Asf_std97->SetMaximum(0.6033526);
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
   0.2472754,
   0.5537724,
   0.5267408,
   0.4860558,
   0.4640856,
   0.4755581,
   0.5097859,
   0.2711482};
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
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->SetMinimum(0.2166257);
   Graph_pu0_newavg_8b4e_gr_train_Asf_std98->SetMaximum(0.5844222);
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
   0.249081,
   0.5212931,
   0.5062002,
   0.4786241,
   0.460595,
   0.4810143,
   0.5333394,
   0.2636981};
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
   Graph_pu50s2_8b4e_gr_train_Asf_std99->SetMinimum(0.2206551);
   Graph_pu50s2_8b4e_gr_train_Asf_std99->SetMaximum(0.5617652);
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
   0.2613371,
   0.5308246,
   0.5251949,
   0.5026796,
   0.4831029,
   0.5140507,
   0.5730424,
   0.2685907};
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
   Graph_pu50s30_8b4e_gr_train_Asf_std100->SetMinimum(0.2301665);
   Graph_pu50s30_8b4e_gr_train_Asf_std100->SetMaximum(0.6042129);
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
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
