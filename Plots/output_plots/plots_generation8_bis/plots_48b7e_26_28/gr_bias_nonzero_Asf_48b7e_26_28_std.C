void gr_bias_nonzero_Asf_48b7e_26_28_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:46:37 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.9903614,-0.1755713,9.612048,1.174978);
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
   multigraph->SetTitle(";ET (GeV);Fractional spread");
   
   Double_t curr_48b7e_gr_bias_nonzero_Asf_std_fx56[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t curr_48b7e_gr_bias_nonzero_Asf_std_fy56[9] = {
   1.055203,
   0.4034477,
   0.2442933,
   0.1595424,
   0.09764548,
   0.06106135,
   0.03661026,
   0.02034179,
   0.0133519};
   TGraph *graph = new TGraph(9,curr_48b7e_gr_bias_nonzero_Asf_std_fx56,curr_48b7e_gr_bias_nonzero_Asf_std_fy56);
   graph->SetName("curr_48b7e_gr_bias_nonzero_Asf_std");
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
   
   TH1F *Graph_curr_48b7e_gr_bias_nonzero_Asf_std56 = new TH1F("Graph_curr_48b7e_gr_bias_nonzero_Asf_std56","Graph",100,0.2,9.8);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->SetMinimum(0.01201671);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->SetMaximum(1.159388);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->SetDirectory(0);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->SetStats(0);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->SetLineStyle(0);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_std56->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_bias_nonzero_Asf_std56);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_bias_nonzero_Asf_std_fx57[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_48b7e_gr_bias_nonzero_Asf_std_fy57[9] = {
   1.002869,
   0.3988297,
   0.2419129,
   0.1575165,
   0.09588613,
   0.05944415,
   0.03496498,
   0.018133,
   0.01025842};
   graph = new TGraph(9,pu0_48b7e_gr_bias_nonzero_Asf_std_fx57,pu0_48b7e_gr_bias_nonzero_Asf_std_fy57);
   graph->SetName("pu0_48b7e_gr_bias_nonzero_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57 = new TH1F("Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57","Graph",100,0.2,9.8);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->SetMinimum(0.009232581);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->SetMaximum(1.10213);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->SetDirectory(0);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->SetStats(0);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->SetLineStyle(0);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_bias_nonzero_Asf_std57);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_bias_nonzero_Asf_std_fx58[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_newavg_48b7e_gr_bias_nonzero_Asf_std_fy58[9] = {
   1.050939,
   0.3942404,
   0.2399234,
   0.1566989,
   0.09514197,
   0.05907589,
   0.03501606,
   0.01872511,
   0.01186215};
   graph = new TGraph(9,pu0_newavg_48b7e_gr_bias_nonzero_Asf_std_fx58,pu0_newavg_48b7e_gr_bias_nonzero_Asf_std_fy58);
   graph->SetName("pu0_newavg_48b7e_gr_bias_nonzero_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58 = new TH1F("Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58","Graph",100,0.2,9.8);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->SetMinimum(0.01067593);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->SetMaximum(1.154847);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_std58);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_bias_nonzero_Asf_std_fx59[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s2_48b7e_gr_bias_nonzero_Asf_std_fy59[9] = {
   0.8611124,
   0.3842324,
   0.2256179,
   0.1452155,
   0.08742701,
   0.05441224,
   0.03320219,
   0.0199826,
   0.02245509};
   graph = new TGraph(9,pu50s2_48b7e_gr_bias_nonzero_Asf_std_fx59,pu50s2_48b7e_gr_bias_nonzero_Asf_std_fy59);
   graph->SetName("pu50s2_48b7e_gr_bias_nonzero_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59 = new TH1F("Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59","Graph",100,0.2,9.8);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->SetMinimum(0.01798434);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->SetMaximum(0.9452253);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->SetStats(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_std59);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_bias_nonzero_Asf_std_fx60[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s30_48b7e_gr_bias_nonzero_Asf_std_fy60[9] = {
   1.008106,
   0.399328,
   0.2412592,
   0.1568964,
   0.09516649,
   0.05876838,
   0.03442876,
   0.01793147,
   0.01064343};
   graph = new TGraph(9,pu50s30_48b7e_gr_bias_nonzero_Asf_std_fx60,pu50s30_48b7e_gr_bias_nonzero_Asf_std_fy60);
   graph->SetName("pu50s30_48b7e_gr_bias_nonzero_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60 = new TH1F("Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60","Graph",100,0.2,9.8);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->SetMinimum(0.009579091);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->SetMaximum(1.107853);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->SetStats(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_std60);
   
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
   TLegendEntry *entry=leg->AddEntry("curr_48b7e_gr_bias_nonzero_Asf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_48b7e_gr_bias_nonzero_Asf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_48b7e_gr_bias_nonzero_Asf_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_48b7e_gr_bias_nonzero_Asf_mean","PU optimized","lp");

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
   pt_LaTex = pt->AddText("schema: 48b7e");
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
