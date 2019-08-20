void bias_train_8b4e_22_25_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug 20 10:22:21 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.7415662,-0.58232,8.535542,0.9872902);
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
   
   Double_t gr_curr_8b4e_22_25_bias_train_mean_fx31[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_curr_8b4e_22_25_bias_train_mean_fy31[8] = {
   0.1662715,
   0.2758886,
   0.2739017,
   0.2931644,
   0.2151346,
   0.2574206,
   0.2260684,
   -0.246643};
   TGraph *graph = new TGraph(8,gr_curr_8b4e_22_25_bias_train_mean_fx31,gr_curr_8b4e_22_25_bias_train_mean_fy31);
   graph->SetName("gr_curr_8b4e_22_25_bias_train_mean");
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
   
   TH1F *Graph_gr_curr_8b4e_22_25_bias_train_mean31 = new TH1F("Graph_gr_curr_8b4e_22_25_bias_train_mean31","Graph",100,0.3,8.7);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->SetMinimum(-0.3006238);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->SetMaximum(0.3471451);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->SetDirectory(0);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->SetStats(0);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->SetLineStyle(0);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->SetMarkerStyle(20);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetXaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetXaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetXaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetYaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetYaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetZaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetZaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_22_25_bias_train_mean31->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_curr_8b4e_22_25_bias_train_mean31);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_8b4e_22_25_bias_train_mean_fx32[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_8b4e_22_25_bias_train_mean_fy32[8] = {
   0.05124076,
   0.1619862,
   0.1529774,
   0.1539469,
   0.07194294,
   0.09836148,
   0.03828578,
   -0.2782707};
   graph = new TGraph(8,gr_pu0_8b4e_22_25_bias_train_mean_fx32,gr_pu0_8b4e_22_25_bias_train_mean_fy32);
   graph->SetName("gr_pu0_8b4e_22_25_bias_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_8b4e_22_25_bias_train_mean32 = new TH1F("Graph_gr_pu0_8b4e_22_25_bias_train_mean32","Graph",100,0.3,8.7);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->SetMinimum(-0.3222964);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->SetMaximum(0.2060119);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->SetDirectory(0);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->SetStats(0);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->SetLineStyle(0);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->SetMarkerStyle(20);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_22_25_bias_train_mean32->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_8b4e_22_25_bias_train_mean32);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_newavg_8b4e_22_25_bias_train_mean_fx33[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_newavg_8b4e_22_25_bias_train_mean_fy33[8] = {
   0.05708953,
   0.1641985,
   0.1591645,
   0.1606328,
   0.08717223,
   0.1002514,
   0.0557999,
   -0.2723859};
   graph = new TGraph(8,gr_pu0_newavg_8b4e_22_25_bias_train_mean_fx33,gr_pu0_newavg_8b4e_22_25_bias_train_mean_fy33);
   graph->SetName("gr_pu0_newavg_8b4e_22_25_bias_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33 = new TH1F("Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33","Graph",100,0.3,8.7);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->SetMinimum(-0.3160444);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->SetMaximum(0.2078569);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->SetDirectory(0);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->SetStats(0);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->SetLineStyle(0);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->SetMarkerStyle(20);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_newavg_8b4e_22_25_bias_train_mean33);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s2_8b4e_22_25_bias_train_mean_fx34[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s2_8b4e_22_25_bias_train_mean_fy34[8] = {
   0.09395542,
   0.1964541,
   0.1757837,
   0.1730666,
   0.09184092,
   0.1088155,
   0.0447875,
   -0.2045882};
   graph = new TGraph(8,gr_pu50s2_8b4e_22_25_bias_train_mean_fx34,gr_pu50s2_8b4e_22_25_bias_train_mean_fy34);
   graph->SetName("gr_pu50s2_8b4e_22_25_bias_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34 = new TH1F("Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34","Graph",100,0.3,8.7);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->SetMinimum(-0.2446925);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->SetMaximum(0.2365583);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->SetDirectory(0);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->SetStats(0);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->SetLineStyle(0);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->SetMarkerStyle(20);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s2_8b4e_22_25_bias_train_mean34);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s30_8b4e_22_25_bias_train_mean_fx35[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s30_8b4e_22_25_bias_train_mean_fy35[8] = {
   0.078444,
   0.1837236,
   0.1689549,
   0.1687436,
   0.09187502,
   0.1051945,
   0.04611804,
   -0.23193};
   graph = new TGraph(8,gr_pu50s30_8b4e_22_25_bias_train_mean_fx35,gr_pu50s30_8b4e_22_25_bias_train_mean_fy35);
   graph->SetName("gr_pu50s30_8b4e_22_25_bias_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35 = new TH1F("Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35","Graph",100,0.3,8.7);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->SetMinimum(-0.2734954);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->SetMaximum(0.225289);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->SetDirectory(0);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->SetStats(0);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->SetLineStyle(0);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->SetMarkerStyle(20);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s30_8b4e_22_25_bias_train_mean35);
   
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
   TLegendEntry *entry=leg->AddEntry("gr_curr_8b4e_22_25_bias_train_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_newavg_8b4e_22_25_bias_train_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_8b4e_22_25_bias_train_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu50s2_8b4e_22_25_bias_train_mean","PU optimized","lp");

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
   entry=leg->AddEntry("gr_pu50s30_8b4e_22_25_bias_train_mean","PU optimized","lp");

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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
