void bias_etbin_8b4e_26_28_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Aug 19 15:35:09 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.7415662,-0.5020627,8.535542,0.8746116);
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
   multigraph->SetTitle(";ET (GeV);Fractional bias");
   
   Double_t gr_curr_8b4e_26_28_bias_etbin_mean_fx1[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_curr_8b4e_26_28_bias_etbin_mean_fy1[8] = {
   0.7544655,
   -0.01244416,
   -0.1747812,
   -0.2430375,
   -0.2717826,
   -0.2639647,
   -0.2333025,
   -0.2337662};
   TGraph *graph = new TGraph(8,gr_curr_8b4e_26_28_bias_etbin_mean_fx1,gr_curr_8b4e_26_28_bias_etbin_mean_fy1);
   graph->SetName("gr_curr_8b4e_26_28_bias_etbin_mean");
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
   
   TH1F *Graph_gr_curr_8b4e_26_28_bias_etbin_mean1 = new TH1F("Graph_gr_curr_8b4e_26_28_bias_etbin_mean1","Graph",100,0.3,8.7);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->SetMinimum(-0.3744075);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->SetMaximum(0.8570903);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->SetDirectory(0);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->SetStats(0);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->SetLineStyle(0);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->SetMarkerStyle(20);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetXaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetXaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetXaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetYaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetYaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetZaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetZaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_curr_8b4e_26_28_bias_etbin_mean1);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_8b4e_26_28_bias_etbin_mean_fx2[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_8b4e_26_28_bias_etbin_mean_fy2[8] = {
   0.6637483,
   -0.02661455,
   -0.1761451,
   -0.2377766,
   -0.2585079,
   -0.2686329,
   -0.1882705,
   -0.1265808};
   graph = new TGraph(8,gr_pu0_8b4e_26_28_bias_etbin_mean_fx2,gr_pu0_8b4e_26_28_bias_etbin_mean_fy2);
   graph->SetName("gr_pu0_8b4e_26_28_bias_etbin_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2 = new TH1F("Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2","Graph",100,0.3,8.7);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->SetMinimum(-0.361871);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->SetMaximum(0.7569864);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->SetDirectory(0);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->SetStats(0);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->SetLineStyle(0);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->SetMarkerStyle(20);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_8b4e_26_28_bias_etbin_mean2);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_newavg_8b4e_26_28_bias_etbin_mean_fx3[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_newavg_8b4e_26_28_bias_etbin_mean_fy3[8] = {
   0.6637483,
   -0.02661455,
   -0.1761451,
   -0.2377766,
   -0.2585079,
   -0.2686329,
   -0.1882705,
   -0.1265808};
   graph = new TGraph(8,gr_pu0_newavg_8b4e_26_28_bias_etbin_mean_fx3,gr_pu0_newavg_8b4e_26_28_bias_etbin_mean_fy3);
   graph->SetName("gr_pu0_newavg_8b4e_26_28_bias_etbin_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3 = new TH1F("Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3","Graph",100,0.3,8.7);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->SetMinimum(-0.361871);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->SetMaximum(0.7569864);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->SetDirectory(0);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->SetStats(0);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->SetLineStyle(0);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->SetMarkerStyle(20);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean3);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s2_8b4e_26_28_bias_etbin_mean_fx4[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s2_8b4e_26_28_bias_etbin_mean_fy4[8] = {
   0.5725673,
   -0.01565479,
   -0.1550684,
   -0.2023272,
   -0.2097029,
   -0.1990358,
   -0.09972811,
   -0.02957407};
   graph = new TGraph(8,gr_pu50s2_8b4e_26_28_bias_etbin_mean_fx4,gr_pu50s2_8b4e_26_28_bias_etbin_mean_fy4);
   graph->SetName("gr_pu50s2_8b4e_26_28_bias_etbin_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4 = new TH1F("Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4","Graph",100,0.3,8.7);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->SetMinimum(-0.2879299);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->SetMaximum(0.6507943);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->SetDirectory(0);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->SetStats(0);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->SetLineStyle(0);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->SetMarkerStyle(20);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean4);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s30_8b4e_26_28_bias_etbin_mean_fx5[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s30_8b4e_26_28_bias_etbin_mean_fy5[8] = {
   0.620906,
   -0.004078386,
   -0.144698,
   -0.1934183,
   -0.2045737,
   -0.1986516,
   -0.1262128,
   -0.0454593};
   graph = new TGraph(8,gr_pu50s30_8b4e_26_28_bias_etbin_mean_fx5,gr_pu50s30_8b4e_26_28_bias_etbin_mean_fy5);
   graph->SetName("gr_pu50s30_8b4e_26_28_bias_etbin_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5 = new TH1F("Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5","Graph",100,0.3,8.7);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->SetMinimum(-0.2871217);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->SetMaximum(0.703454);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->SetDirectory(0);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->SetStats(0);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->SetLineStyle(0);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->SetMarkerStyle(20);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean5);
   
   multigraph->Add(graph,"");
   multigraph->Draw("APL");
   multigraph->GetXaxis()->SetTitle("ET (GeV)");
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
   TLegendEntry *entry=leg->AddEntry("gr_curr_8b4e_26_28_bias_etbin_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_newavg_8b4e_26_28_bias_etbin_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_8b4e_26_28_bias_etbin_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu50s2_8b4e_26_28_bias_etbin_mean","PU optimized","lp");

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
   entry=leg->AddEntry("gr_pu50s30_8b4e_26_28_bias_etbin_mean","PU optimized","lp");

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
