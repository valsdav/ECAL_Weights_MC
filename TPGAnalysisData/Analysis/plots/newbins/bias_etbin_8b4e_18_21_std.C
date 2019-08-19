void bias_etbin_8b4e_18_21_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Mon Aug 19 15:31:57 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.7415662,-0.1293319,8.535542,0.865529);
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
   multigraph->SetTitle("");
   
   Double_t gr_curr_8b4e_18_21_bias_etbin_std_fx6[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_curr_8b4e_18_21_bias_etbin_std_fy6[8] = {
   0.7782639,
   0.3657266,
   0.2712709,
   0.2221065,
   0.1891429,
   0.1048592,
   0.1034853,
   0.02782252};
   TGraph *graph = new TGraph(8,gr_curr_8b4e_18_21_bias_etbin_std_fx6,gr_curr_8b4e_18_21_bias_etbin_std_fy6);
   graph->SetName("gr_curr_8b4e_18_21_bias_etbin_std");
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
   
   TH1F *Graph_gr_curr_8b4e_18_21_bias_etbin_std6 = new TH1F("Graph_gr_curr_8b4e_18_21_bias_etbin_std6","Graph",100,0.3,8.7);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->SetMinimum(0.02504027);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->SetMaximum(0.853308);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->SetDirectory(0);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->SetStats(0);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->SetLineStyle(0);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->SetMarkerStyle(20);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetXaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetXaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetXaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetYaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetYaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetZaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetZaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_18_21_bias_etbin_std6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_curr_8b4e_18_21_bias_etbin_std6);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_8b4e_18_21_bias_etbin_std_fx7[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_8b4e_18_21_bias_etbin_std_fy7[8] = {
   0.722132,
   0.35293,
   0.2490312,
   0.1853572,
   0.1338909,
   0.1187922,
   0.09678105,
   0.04002792};
   graph = new TGraph(8,gr_pu0_8b4e_18_21_bias_etbin_std_fx7,gr_pu0_8b4e_18_21_bias_etbin_std_fy7);
   graph->SetName("gr_pu0_8b4e_18_21_bias_etbin_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_8b4e_18_21_bias_etbin_std7 = new TH1F("Graph_gr_pu0_8b4e_18_21_bias_etbin_std7","Graph",100,0.3,8.7);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->SetMinimum(0.03602513);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->SetMaximum(0.7903424);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->SetDirectory(0);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->SetStats(0);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->SetLineStyle(0);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->SetMarkerStyle(20);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_18_21_bias_etbin_std7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_8b4e_18_21_bias_etbin_std7);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_newavg_8b4e_18_21_bias_etbin_std_fx8[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_newavg_8b4e_18_21_bias_etbin_std_fy8[8] = {
   0.722132,
   0.35293,
   0.2490312,
   0.1853572,
   0.1338909,
   0.1187922,
   0.09678105,
   0.04002792};
   graph = new TGraph(8,gr_pu0_newavg_8b4e_18_21_bias_etbin_std_fx8,gr_pu0_newavg_8b4e_18_21_bias_etbin_std_fy8);
   graph->SetName("gr_pu0_newavg_8b4e_18_21_bias_etbin_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8 = new TH1F("Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8","Graph",100,0.3,8.7);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->SetMinimum(0.03602513);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->SetMaximum(0.7903424);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->SetDirectory(0);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->SetStats(0);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->SetLineStyle(0);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->SetMarkerStyle(20);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_newavg_8b4e_18_21_bias_etbin_std8);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s2_8b4e_18_21_bias_etbin_std_fx9[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s2_8b4e_18_21_bias_etbin_std_fy9[8] = {
   0.7021637,
   0.3540106,
   0.2441359,
   0.1797242,
   0.1174586,
   0.1118669,
   0.09678105,
   0.02891529};
   graph = new TGraph(8,gr_pu50s2_8b4e_18_21_bias_etbin_std_fx9,gr_pu50s2_8b4e_18_21_bias_etbin_std_fy9);
   graph->SetName("gr_pu50s2_8b4e_18_21_bias_etbin_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9 = new TH1F("Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9","Graph",100,0.3,8.7);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->SetMinimum(0.02602376);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->SetMaximum(0.7694885);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->SetDirectory(0);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->SetStats(0);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->SetLineStyle(0);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->SetMarkerStyle(20);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s2_8b4e_18_21_bias_etbin_std9);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s30_8b4e_18_21_bias_etbin_std_fx10[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s30_8b4e_18_21_bias_etbin_std_fy10[8] = {
   0.7060397,
   0.3555492,
   0.2457868,
   0.1802863,
   0.1180645,
   0.1151416,
   0.09678105,
   0.04520119};
   graph = new TGraph(8,gr_pu50s30_8b4e_18_21_bias_etbin_std_fx10,gr_pu50s30_8b4e_18_21_bias_etbin_std_fy10);
   graph->SetName("gr_pu50s30_8b4e_18_21_bias_etbin_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10 = new TH1F("Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10","Graph",100,0.3,8.7);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->SetMinimum(0.04068107);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->SetMaximum(0.7721236);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->SetDirectory(0);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->SetStats(0);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->SetLineStyle(0);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->SetMarkerStyle(20);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s30_8b4e_18_21_bias_etbin_std10);
   
   multigraph->Add(graph,"");
   multigraph->Draw("APL");
   multigraph->GetXaxis()->SetTitle("ET (GeV)");
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
   TLegendEntry *entry=leg->AddEntry("gr_curr_8b4e_18_21_bias_etbin_std","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_newavg_8b4e_18_21_bias_etbin_std","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_8b4e_18_21_bias_etbin_std","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu50s2_8b4e_18_21_bias_etbin_std","PU optimized","lp");

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
   entry=leg->AddEntry("gr_pu50s30_8b4e_18_21_bias_etbin_std","PU optimized","lp");

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
