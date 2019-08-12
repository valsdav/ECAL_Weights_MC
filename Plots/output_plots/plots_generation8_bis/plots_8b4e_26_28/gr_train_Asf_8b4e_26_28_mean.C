void gr_train_Asf_8b4e_26_28_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:46:54 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.7415662,-0.4820941,8.535542,0.6950964);
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
   
   Double_t curr_8b4e_gr_train_Asf_mean_fx91[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t curr_8b4e_gr_train_Asf_mean_fy91[8] = {
   -0.006390467,
   0.5614451,
   0.5279372,
   0.3511412,
   0.2043094,
   0.1173801,
   -0.02258499,
   -0.2522394};
   TGraph *graph = new TGraph(8,curr_8b4e_gr_train_Asf_mean_fx91,curr_8b4e_gr_train_Asf_mean_fy91);
   graph->SetName("curr_8b4e_gr_train_Asf_mean");
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
   
   TH1F *Graph_curr_8b4e_gr_train_Asf_mean91 = new TH1F("Graph_curr_8b4e_gr_train_Asf_mean91","Graph",100,0.3,8.7);
   Graph_curr_8b4e_gr_train_Asf_mean91->SetMinimum(-0.3336079);
   Graph_curr_8b4e_gr_train_Asf_mean91->SetMaximum(0.6428136);
   Graph_curr_8b4e_gr_train_Asf_mean91->SetDirectory(0);
   Graph_curr_8b4e_gr_train_Asf_mean91->SetStats(0);
   Graph_curr_8b4e_gr_train_Asf_mean91->SetLineStyle(0);
   Graph_curr_8b4e_gr_train_Asf_mean91->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_train_Asf_mean91->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_train_Asf_mean91);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_train_Asf_mean_fx92[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu0_8b4e_gr_train_Asf_mean_fy92[8] = {
   -0.04354909,
   0.4828372,
   0.439891,
   0.2754073,
   0.1396967,
   0.05373042,
   -0.07520508,
   -0.2851822};
   graph = new TGraph(8,pu0_8b4e_gr_train_Asf_mean_fx92,pu0_8b4e_gr_train_Asf_mean_fy92);
   graph->SetName("pu0_8b4e_gr_train_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_train_Asf_mean92 = new TH1F("Graph_pu0_8b4e_gr_train_Asf_mean92","Graph",100,0.3,8.7);
   Graph_pu0_8b4e_gr_train_Asf_mean92->SetMinimum(-0.3619841);
   Graph_pu0_8b4e_gr_train_Asf_mean92->SetMaximum(0.5596391);
   Graph_pu0_8b4e_gr_train_Asf_mean92->SetDirectory(0);
   Graph_pu0_8b4e_gr_train_Asf_mean92->SetStats(0);
   Graph_pu0_8b4e_gr_train_Asf_mean92->SetLineStyle(0);
   Graph_pu0_8b4e_gr_train_Asf_mean92->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_train_Asf_mean92->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_train_Asf_mean92);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_train_Asf_mean_fx93[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu0_newavg_8b4e_gr_train_Asf_mean_fy93[8] = {
   -0.008625981,
   0.5923598,
   0.5311425,
   0.3346019,
   0.1875921,
   0.08766133,
   -0.05090671,
   -0.2566524};
   graph = new TGraph(8,pu0_newavg_8b4e_gr_train_Asf_mean_fx93,pu0_newavg_8b4e_gr_train_Asf_mean_fy93);
   graph->SetName("pu0_newavg_8b4e_gr_train_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_train_Asf_mean93 = new TH1F("Graph_pu0_newavg_8b4e_gr_train_Asf_mean93","Graph",100,0.3,8.7);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->SetMinimum(-0.3415536);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->SetMaximum(0.677261);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_train_Asf_mean93->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_train_Asf_mean93);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_train_Asf_mean_fx94[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu50s2_8b4e_gr_train_Asf_mean_fy94[8] = {
   0.06707177,
   0.5754088,
   0.5201006,
   0.3625593,
   0.2226439,
   0.114767,
   -0.009669342,
   -0.2142479};
   graph = new TGraph(8,pu50s2_8b4e_gr_train_Asf_mean_fx94,pu50s2_8b4e_gr_train_Asf_mean_fy94);
   graph->SetName("pu50s2_8b4e_gr_train_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_train_Asf_mean94 = new TH1F("Graph_pu50s2_8b4e_gr_train_Asf_mean94","Graph",100,0.3,8.7);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->SetMinimum(-0.2932135);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->SetMaximum(0.6543744);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->SetStats(0);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_train_Asf_mean94->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_train_Asf_mean94);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_train_Asf_mean_fx95[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu50s30_8b4e_gr_train_Asf_mean_fy95[8] = {
   -0.03107991,
   0.5034369,
   0.4593525,
   0.2923895,
   0.1540627,
   0.0663785,
   -0.06468198,
   -0.2771629};
   graph = new TGraph(8,pu50s30_8b4e_gr_train_Asf_mean_fx95,pu50s30_8b4e_gr_train_Asf_mean_fy95);
   graph->SetName("pu50s30_8b4e_gr_train_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_train_Asf_mean95 = new TH1F("Graph_pu50s30_8b4e_gr_train_Asf_mean95","Graph",100,0.3,8.7);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->SetMinimum(-0.3552229);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->SetMaximum(0.5814968);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->SetStats(0);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_train_Asf_mean95->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_train_Asf_mean95);
   
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
   
   TLegend *leg = new TLegend(0.67,0.54,0.95,0.92,NULL,"brNDC");
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
   entry=leg->AddEntry("pu50s2_8b4e_gr_train_Asf_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_8b4e_gr_train_Asf_mean","PU optimized","lp");

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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
