void bias_train_8b4e_22_25_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Mon Aug 19 15:31:51 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.7415662,-0.5880914,8.535542,3.166458);
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
   
   Double_t gr_curr_8b4e_22_25_bias_train_std_fx16[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_curr_8b4e_22_25_bias_train_std_fy16[8] = {
   0.7519614,
   0.8136438,
   0.8088128,
   0.872029,
   0.9608808,
   0.8357267,
   0.8992876,
   0.7139891};
   TGraph *graph = new TGraph(8,gr_curr_8b4e_22_25_bias_train_std_fx16,gr_curr_8b4e_22_25_bias_train_std_fy16);
   graph->SetName("gr_curr_8b4e_22_25_bias_train_std");
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
   
   TH1F *Graph_gr_curr_8b4e_22_25_bias_train_std16 = new TH1F("Graph_gr_curr_8b4e_22_25_bias_train_std16","Graph",100,0.3,8.7);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->SetMinimum(0.6892999);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->SetMaximum(0.98557);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->SetDirectory(0);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->SetStats(0);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->SetLineStyle(0);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->SetMarkerStyle(20);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetXaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetXaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetXaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetYaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetYaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetZaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetZaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_22_25_bias_train_std16->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_curr_8b4e_22_25_bias_train_std16);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_8b4e_22_25_bias_train_std_fx17[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_8b4e_22_25_bias_train_std_fy17[8] = {
   0.6834523,
   0.7207296,
   0.7600965,
   0.7713944,
   0.755089,
   0.7371196,
   0.8144687,
   0.6403966};
   graph = new TGraph(8,gr_pu0_8b4e_22_25_bias_train_std_fx17,gr_pu0_8b4e_22_25_bias_train_std_fy17);
   graph->SetName("gr_pu0_8b4e_22_25_bias_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_8b4e_22_25_bias_train_std17 = new TH1F("Graph_gr_pu0_8b4e_22_25_bias_train_std17","Graph",100,0.3,8.7);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->SetMinimum(0.6229894);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->SetMaximum(0.831876);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->SetDirectory(0);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->SetStats(0);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->SetLineStyle(0);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->SetMarkerStyle(20);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_22_25_bias_train_std17->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_8b4e_22_25_bias_train_std17);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_newavg_8b4e_22_25_bias_train_std_fx18[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_newavg_8b4e_22_25_bias_train_std_fy18[8] = {
   0.6834523,
   0.7207296,
   0.7600965,
   0.7713944,
   0.755089,
   0.7371196,
   0.8144687,
   0.6403966};
   graph = new TGraph(8,gr_pu0_newavg_8b4e_22_25_bias_train_std_fx18,gr_pu0_newavg_8b4e_22_25_bias_train_std_fy18);
   graph->SetName("gr_pu0_newavg_8b4e_22_25_bias_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18 = new TH1F("Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18","Graph",100,0.3,8.7);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->SetMinimum(0.6229894);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->SetMaximum(0.831876);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->SetDirectory(0);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->SetStats(0);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->SetLineStyle(0);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->SetMarkerStyle(20);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std18);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s2_8b4e_22_25_bias_train_std_fx19[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s2_8b4e_22_25_bias_train_std_fy19[8] = {
   0.6741113,
   0.6754544,
   0.7051391,
   0.7308983,
   0.7106124,
   0.7286709,
   0.7760922,
   0.6351118};
   graph = new TGraph(8,gr_pu50s2_8b4e_22_25_bias_train_std_fx19,gr_pu50s2_8b4e_22_25_bias_train_std_fy19);
   graph->SetName("gr_pu50s2_8b4e_22_25_bias_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s2_8b4e_22_25_bias_train_std19 = new TH1F("Graph_gr_pu50s2_8b4e_22_25_bias_train_std19","Graph",100,0.3,8.7);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->SetMinimum(0.6210138);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->SetMaximum(0.7901902);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->SetDirectory(0);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->SetStats(0);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->SetLineStyle(0);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->SetMarkerStyle(20);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std19->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s2_8b4e_22_25_bias_train_std19);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s30_8b4e_22_25_bias_train_std_fx20[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s30_8b4e_22_25_bias_train_std_fy20[8] = {
   0.6908311,
   0.7089509,
   0.7137942,
   0.7589282,
   0.7235973,
   0.75494,
   0.7772893,
   0.6502587};
   graph = new TGraph(8,gr_pu50s30_8b4e_22_25_bias_train_std_fx20,gr_pu50s30_8b4e_22_25_bias_train_std_fy20);
   graph->SetName("gr_pu50s30_8b4e_22_25_bias_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s30_8b4e_22_25_bias_train_std20 = new TH1F("Graph_gr_pu50s30_8b4e_22_25_bias_train_std20","Graph",100,0.3,8.7);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->SetMinimum(0.6375556);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->SetMaximum(0.7899923);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->SetDirectory(0);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->SetStats(0);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->SetLineStyle(0);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->SetMarkerStyle(20);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std20->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s30_8b4e_22_25_bias_train_std20);
   
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
   TLegendEntry *entry=leg->AddEntry("gr_curr_8b4e_22_25_bias_train_std","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_newavg_8b4e_22_25_bias_train_std","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_8b4e_22_25_bias_train_std","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu50s2_8b4e_22_25_bias_train_std","PU optimized","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

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
   entry=leg->AddEntry("gr_pu50s30_8b4e_22_25_bias_train_std","PU optimized","lp");

   ci = TColor::GetColor("#0000cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

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
