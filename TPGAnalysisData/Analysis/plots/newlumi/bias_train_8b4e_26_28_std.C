void bias_train_8b4e_26_28_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Tue Aug 20 10:22:22 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.7415662,-0.6983904,8.535542,3.904613);
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
   
   Double_t gr_curr_8b4e_26_28_bias_train_std_fx56[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_curr_8b4e_26_28_bias_train_std_fy56[8] = {
   1.048716,
   1.097998,
   1.179139,
   1.025889,
   1.097259,
   1.18531,
   1.122485,
   1.168333};
   TGraph *graph = new TGraph(8,gr_curr_8b4e_26_28_bias_train_std_fx56,gr_curr_8b4e_26_28_bias_train_std_fy56);
   graph->SetName("gr_curr_8b4e_26_28_bias_train_std");
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
   
   TH1F *Graph_gr_curr_8b4e_26_28_bias_train_std56 = new TH1F("Graph_gr_curr_8b4e_26_28_bias_train_std56","Graph",100,0.3,8.7);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->SetMinimum(1.009947);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->SetMaximum(1.201253);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->SetDirectory(0);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->SetStats(0);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->SetLineStyle(0);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->SetMarkerStyle(20);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetXaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetXaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetXaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetYaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetYaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetZaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetZaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_26_28_bias_train_std56->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_curr_8b4e_26_28_bias_train_std56);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_8b4e_26_28_bias_train_std_fx57[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_8b4e_26_28_bias_train_std_fy57[8] = {
   0.9880791,
   1.054445,
   1.151804,
   1.029358,
   0.9743418,
   1.061485,
   1.01912,
   0.9582498};
   graph = new TGraph(8,gr_pu0_8b4e_26_28_bias_train_std_fx57,gr_pu0_8b4e_26_28_bias_train_std_fy57);
   graph->SetName("gr_pu0_8b4e_26_28_bias_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_8b4e_26_28_bias_train_std57 = new TH1F("Graph_gr_pu0_8b4e_26_28_bias_train_std57","Graph",100,0.3,8.7);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->SetMinimum(0.9388944);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->SetMaximum(1.17116);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->SetDirectory(0);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->SetStats(0);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->SetLineStyle(0);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->SetMarkerStyle(20);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_26_28_bias_train_std57->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_8b4e_26_28_bias_train_std57);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_newavg_8b4e_26_28_bias_train_std_fx58[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_newavg_8b4e_26_28_bias_train_std_fy58[8] = {
   0.9804969,
   1.034412,
   1.059321,
   1.066835,
   1.018938,
   1.126695,
   1.056645,
   1.000793};
   graph = new TGraph(8,gr_pu0_newavg_8b4e_26_28_bias_train_std_fx58,gr_pu0_newavg_8b4e_26_28_bias_train_std_fy58);
   graph->SetName("gr_pu0_newavg_8b4e_26_28_bias_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58 = new TH1F("Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58","Graph",100,0.3,8.7);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->SetMinimum(0.9658771);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->SetMaximum(1.141314);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->SetDirectory(0);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->SetStats(0);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->SetLineStyle(0);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->SetMarkerStyle(20);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_newavg_8b4e_26_28_bias_train_std58);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s2_8b4e_26_28_bias_train_std_fx59[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s2_8b4e_26_28_bias_train_std_fy59[8] = {
   0.8949454,
   0.9944286,
   0.9253485,
   0.9250792,
   0.8683675,
   0.893094,
   0.8761286,
   0.8677975};
   graph = new TGraph(8,gr_pu50s2_8b4e_26_28_bias_train_std_fx59,gr_pu50s2_8b4e_26_28_bias_train_std_fy59);
   graph->SetName("gr_pu50s2_8b4e_26_28_bias_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s2_8b4e_26_28_bias_train_std59 = new TH1F("Graph_gr_pu50s2_8b4e_26_28_bias_train_std59","Graph",100,0.3,8.7);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->SetMinimum(0.8551344);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->SetMaximum(1.007092);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->SetDirectory(0);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->SetStats(0);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->SetLineStyle(0);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->SetMarkerStyle(20);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_std59->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s2_8b4e_26_28_bias_train_std59);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s30_8b4e_26_28_bias_train_std_fx60[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s30_8b4e_26_28_bias_train_std_fy60[8] = {
   0.9257712,
   0.9785356,
   0.9989739,
   0.9907161,
   0.9553242,
   1.033885,
   0.9127366,
   0.8679793};
   graph = new TGraph(8,gr_pu50s30_8b4e_26_28_bias_train_std_fx60,gr_pu50s30_8b4e_26_28_bias_train_std_fy60);
   graph->SetName("gr_pu50s30_8b4e_26_28_bias_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s30_8b4e_26_28_bias_train_std60 = new TH1F("Graph_gr_pu50s30_8b4e_26_28_bias_train_std60","Graph",100,0.3,8.7);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->SetMinimum(0.8513887);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->SetMaximum(1.050476);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->SetDirectory(0);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->SetStats(0);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->SetLineStyle(0);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->SetMarkerStyle(20);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_std60->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s30_8b4e_26_28_bias_train_std60);
   
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
   TLegendEntry *entry=leg->AddEntry("gr_curr_8b4e_26_28_bias_train_std","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_newavg_8b4e_26_28_bias_train_std","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_8b4e_26_28_bias_train_std","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu50s2_8b4e_26_28_bias_train_std","PU optimized","lp");

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
   entry=leg->AddEntry("gr_pu50s30_8b4e_26_28_bias_train_std","PU optimized","lp");

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
