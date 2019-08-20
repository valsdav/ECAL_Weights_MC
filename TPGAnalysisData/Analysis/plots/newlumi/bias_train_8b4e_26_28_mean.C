void bias_train_8b4e_26_28_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug 20 10:22:21 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.7415662,-0.3629267,8.535542,0.4043263);
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
   
   Double_t gr_curr_8b4e_26_28_bias_train_mean_fx51[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_curr_8b4e_26_28_bias_train_mean_fy51[8] = {
   0.1811705,
   0.337366,
   0.3341425,
   0.2485984,
   0.1600768,
   0.1454972,
   0.004023676,
   -0.2147797};
   TGraph *graph = new TGraph(8,gr_curr_8b4e_26_28_bias_train_mean_fx51,gr_curr_8b4e_26_28_bias_train_mean_fy51);
   graph->SetName("gr_curr_8b4e_26_28_bias_train_mean");
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
   
   TH1F *Graph_gr_curr_8b4e_26_28_bias_train_mean51 = new TH1F("Graph_gr_curr_8b4e_26_28_bias_train_mean51","Graph",100,0.3,8.7);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->SetMinimum(-0.2699943);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->SetMaximum(0.3925806);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->SetDirectory(0);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->SetStats(0);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->SetLineStyle(0);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->SetMarkerStyle(20);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetXaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetXaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetXaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetYaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetYaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetZaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetZaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_26_28_bias_train_mean51->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_curr_8b4e_26_28_bias_train_mean51);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_8b4e_26_28_bias_train_mean_fx52[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_8b4e_26_28_bias_train_mean_fy52[8] = {
   0.1319561,
   0.3154141,
   0.2937299,
   0.1979425,
   0.09000651,
   0.0524557,
   -0.06844659,
   -0.2345862};
   graph = new TGraph(8,gr_pu0_8b4e_26_28_bias_train_mean_fx52,gr_pu0_8b4e_26_28_bias_train_mean_fy52);
   graph->SetName("gr_pu0_8b4e_26_28_bias_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_8b4e_26_28_bias_train_mean52 = new TH1F("Graph_gr_pu0_8b4e_26_28_bias_train_mean52","Graph",100,0.3,8.7);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->SetMinimum(-0.2895863);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->SetMaximum(0.3704142);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->SetDirectory(0);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->SetStats(0);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->SetLineStyle(0);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->SetMarkerStyle(20);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_26_28_bias_train_mean52->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_8b4e_26_28_bias_train_mean52);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_newavg_8b4e_26_28_bias_train_mean_fx53[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_newavg_8b4e_26_28_bias_train_mean_fy53[8] = {
   0.1418073,
   0.3127438,
   0.2781129,
   0.2151232,
   0.09560741,
   0.06205374,
   -0.06189065,
   -0.2260708};
   graph = new TGraph(8,gr_pu0_newavg_8b4e_26_28_bias_train_mean_fx53,gr_pu0_newavg_8b4e_26_28_bias_train_mean_fy53);
   graph->SetName("gr_pu0_newavg_8b4e_26_28_bias_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53 = new TH1F("Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53","Graph",100,0.3,8.7);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->SetMinimum(-0.2799523);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->SetMaximum(0.3666253);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->SetDirectory(0);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->SetStats(0);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->SetLineStyle(0);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->SetMarkerStyle(20);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_newavg_8b4e_26_28_bias_train_mean53);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s2_8b4e_26_28_bias_train_mean_fx54[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s2_8b4e_26_28_bias_train_mean_fy54[8] = {
   0.1351564,
   0.3137387,
   0.2677621,
   0.1784194,
   0.07262294,
   0.02224629,
   -0.06815632,
   -0.1783767};
   graph = new TGraph(8,gr_pu50s2_8b4e_26_28_bias_train_mean_fx54,gr_pu50s2_8b4e_26_28_bias_train_mean_fy54);
   graph->SetName("gr_pu50s2_8b4e_26_28_bias_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54 = new TH1F("Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54","Graph",100,0.3,8.7);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->SetMinimum(-0.2275883);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->SetMaximum(0.3629503);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->SetDirectory(0);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->SetStats(0);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->SetLineStyle(0);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->SetMarkerStyle(20);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s2_8b4e_26_28_bias_train_mean54);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s30_8b4e_26_28_bias_train_mean_fx55[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s30_8b4e_26_28_bias_train_mean_fy55[8] = {
   0.1547815,
   0.3358631,
   0.2965196,
   0.2117914,
   0.09313764,
   0.04970777,
   -0.06384163,
   -0.1921568};
   graph = new TGraph(8,gr_pu50s30_8b4e_26_28_bias_train_mean_fx55,gr_pu50s30_8b4e_26_28_bias_train_mean_fy55);
   graph->SetName("gr_pu50s30_8b4e_26_28_bias_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55 = new TH1F("Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55","Graph",100,0.3,8.7);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->SetMinimum(-0.2449588);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->SetMaximum(0.3886651);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->SetDirectory(0);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->SetStats(0);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->SetLineStyle(0);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->SetMarkerStyle(20);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s30_8b4e_26_28_bias_train_mean55);
   
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
   TLegendEntry *entry=leg->AddEntry("gr_curr_8b4e_26_28_bias_train_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_newavg_8b4e_26_28_bias_train_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_8b4e_26_28_bias_train_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu50s2_8b4e_26_28_bias_train_mean","PU optimized","lp");

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
   entry=leg->AddEntry("gr_pu50s30_8b4e_26_28_bias_train_mean","PU optimized","lp");

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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
