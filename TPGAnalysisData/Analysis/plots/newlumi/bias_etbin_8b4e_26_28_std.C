void bias_etbin_8b4e_26_28_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Tue Aug 20 10:22:21 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.7415662,0.07758265,8.535542,1.223951);
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
   
   Double_t gr_curr_8b4e_26_28_bias_etbin_std_fx46[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_curr_8b4e_26_28_bias_etbin_std_fy46[8] = {
   1.123905,
   0.5906902,
   0.5659494,
   0.5615712,
   0.5276401,
   0.4993942,
   0.4170765,
   0.4963495};
   TGraph *graph = new TGraph(8,gr_curr_8b4e_26_28_bias_etbin_std_fx46,gr_curr_8b4e_26_28_bias_etbin_std_fy46);
   graph->SetName("gr_curr_8b4e_26_28_bias_etbin_std");
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
   
   TH1F *Graph_gr_curr_8b4e_26_28_bias_etbin_std46 = new TH1F("Graph_gr_curr_8b4e_26_28_bias_etbin_std46","Graph",100,0.3,8.7);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->SetMinimum(0.3463936);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->SetMaximum(1.194588);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->SetDirectory(0);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->SetStats(0);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->SetLineStyle(0);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->SetMarkerStyle(20);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetXaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetXaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetXaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetYaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetYaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetZaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetZaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_26_28_bias_etbin_std46->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_curr_8b4e_26_28_bias_etbin_std46);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_8b4e_26_28_bias_etbin_std_fx47[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_8b4e_26_28_bias_etbin_std_fy47[8] = {
   1.10609,
   0.5700737,
   0.5545812,
   0.5460251,
   0.5084499,
   0.472329,
   0.380412,
   0.328941};
   graph = new TGraph(8,gr_pu0_8b4e_26_28_bias_etbin_std_fx47,gr_pu0_8b4e_26_28_bias_etbin_std_fy47);
   graph->SetName("gr_pu0_8b4e_26_28_bias_etbin_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_8b4e_26_28_bias_etbin_std47 = new TH1F("Graph_gr_pu0_8b4e_26_28_bias_etbin_std47","Graph",100,0.3,8.7);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->SetMinimum(0.251226);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->SetMaximum(1.183805);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->SetDirectory(0);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->SetStats(0);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->SetLineStyle(0);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->SetMarkerStyle(20);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_std47->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_8b4e_26_28_bias_etbin_std47);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_newavg_8b4e_26_28_bias_etbin_std_fx48[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_newavg_8b4e_26_28_bias_etbin_std_fy48[8] = {
   1.082934,
   0.5737399,
   0.5552506,
   0.5468935,
   0.5161774,
   0.4740275,
   0.4027795,
   0.3629278};
   graph = new TGraph(8,gr_pu0_newavg_8b4e_26_28_bias_etbin_std_fx48,gr_pu0_newavg_8b4e_26_28_bias_etbin_std_fy48);
   graph->SetName("gr_pu0_newavg_8b4e_26_28_bias_etbin_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48 = new TH1F("Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48","Graph",100,0.3,8.7);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->SetMinimum(0.2909271);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->SetMaximum(1.154935);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->SetDirectory(0);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->SetStats(0);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->SetLineStyle(0);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->SetMarkerStyle(20);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_std48);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s2_8b4e_26_28_bias_etbin_std_fx49[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s2_8b4e_26_28_bias_etbin_std_fy49[8] = {
   1.000216,
   0.548551,
   0.5490959,
   0.532386,
   0.4881963,
   0.4401072,
   0.3542629,
   0.2693389};
   graph = new TGraph(8,gr_pu50s2_8b4e_26_28_bias_etbin_std_fx49,gr_pu50s2_8b4e_26_28_bias_etbin_std_fy49);
   graph->SetName("gr_pu50s2_8b4e_26_28_bias_etbin_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49 = new TH1F("Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49","Graph",100,0.3,8.7);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->SetMinimum(0.1962512);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->SetMaximum(1.073304);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->SetDirectory(0);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->SetStats(0);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->SetLineStyle(0);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->SetMarkerStyle(20);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s2_8b4e_26_28_bias_etbin_std49);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s30_8b4e_26_28_bias_etbin_std_fx50[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s30_8b4e_26_28_bias_etbin_std_fy50[8] = {
   1.046154,
   0.562853,
   0.5518126,
   0.5355189,
   0.4961901,
   0.4478002,
   0.3746332,
   0.2855176};
   graph = new TGraph(8,gr_pu50s30_8b4e_26_28_bias_etbin_std_fx50,gr_pu50s30_8b4e_26_28_bias_etbin_std_fy50);
   graph->SetName("gr_pu50s30_8b4e_26_28_bias_etbin_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50 = new TH1F("Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50","Graph",100,0.3,8.7);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->SetMinimum(0.2094539);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->SetMaximum(1.122218);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->SetDirectory(0);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->SetStats(0);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->SetLineStyle(0);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->SetMarkerStyle(20);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s30_8b4e_26_28_bias_etbin_std50);
   
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
   TLegendEntry *entry=leg->AddEntry("gr_curr_8b4e_26_28_bias_etbin_std","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_newavg_8b4e_26_28_bias_etbin_std","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_8b4e_26_28_bias_etbin_std","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu50s2_8b4e_26_28_bias_etbin_std","PU optimized","lp");

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
   entry=leg->AddEntry("gr_pu50s30_8b4e_26_28_bias_etbin_std","PU optimized","lp");

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
