void gr_bias_nonzero_Asf_8b4e_22_25_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:04:31 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.4927711,-0.1063535,7.459036,0.4911351);
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
   
   Double_t curr_8b4e_gr_bias_nonzero_Asf_mean_fx51[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t curr_8b4e_gr_bias_nonzero_Asf_mean_fy51[7] = {
   0.4389906,
   0.02735214,
   0.02005741,
   0.0209767,
   0.02241479,
   0.0235139,
   0.02407144};
   TGraph *graph = new TGraph(7,curr_8b4e_gr_bias_nonzero_Asf_mean_fx51,curr_8b4e_gr_bias_nonzero_Asf_mean_fy51);
   graph->SetName("curr_8b4e_gr_bias_nonzero_Asf_mean");
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
   
   TH1F *Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51 = new TH1F("Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51","Graph",100,0.4,7.6);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->SetMinimum(0.01805167);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->SetMaximum(0.4808839);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->SetDirectory(0);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->SetStats(0);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->SetLineStyle(0);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_bias_nonzero_Asf_mean51);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_bias_nonzero_Asf_mean_fx52[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_8b4e_gr_bias_nonzero_Asf_mean_fy52[7] = {
   0.3921739,
   -0.002613621,
   -0.006409951,
   -0.004800142,
   -0.003138051,
   -0.001918369,
   -0.00128748};
   graph = new TGraph(7,pu0_8b4e_gr_bias_nonzero_Asf_mean_fx52,pu0_8b4e_gr_bias_nonzero_Asf_mean_fy52);
   graph->SetName("pu0_8b4e_gr_bias_nonzero_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52 = new TH1F("Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52","Graph",100,0.4,7.6);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->SetMinimum(-0.04626834);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->SetMaximum(0.4320323);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->SetDirectory(0);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->SetStats(0);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->SetLineStyle(0);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_bias_nonzero_Asf_mean52);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean_fx53[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean_fy53[7] = {
   0.4113054,
   0.04116426,
   0.04193822,
   0.04417678,
   0.04602807,
   0.04710413,
   0.04770681};
   graph = new TGraph(7,pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean_fx53,pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean_fy53);
   graph->SetName("pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53 = new TH1F("Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53","Graph",100,0.4,7.6);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->SetMinimum(0.004150154);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->SetMaximum(0.4483195);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean53);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_bias_nonzero_Asf_mean_fx54[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s2_8b4e_gr_bias_nonzero_Asf_mean_fy54[7] = {
   0.4295097,
   0.06799924,
   0.06888842,
   0.07159104,
   0.07366782,
   0.07505123,
   0.07576673};
   graph = new TGraph(7,pu50s2_8b4e_gr_bias_nonzero_Asf_mean_fx54,pu50s2_8b4e_gr_bias_nonzero_Asf_mean_fy54);
   graph->SetName("pu50s2_8b4e_gr_bias_nonzero_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54 = new TH1F("Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54","Graph",100,0.4,7.6);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->SetMinimum(0.0318482);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->SetMaximum(0.4656607);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->SetStats(0);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_bias_nonzero_Asf_mean54);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_bias_nonzero_Asf_mean_fx55[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s30_8b4e_gr_bias_nonzero_Asf_mean_fy55[7] = {
   0.3963721,
   0.002375335,
   -0.0014174,
   0.0002224104,
   0.001899293,
   0.003126074,
   0.00373675};
   graph = new TGraph(7,pu50s30_8b4e_gr_bias_nonzero_Asf_mean_fx55,pu50s30_8b4e_gr_bias_nonzero_Asf_mean_fy55);
   graph->SetName("pu50s30_8b4e_gr_bias_nonzero_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55 = new TH1F("Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55","Graph",100,0.4,7.6);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->SetMinimum(-0.04119634);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->SetMaximum(0.436151);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->SetStats(0);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_bias_nonzero_Asf_mean55);
   
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
   
   TLegend *leg = new TLegend(0.67,0.5,0.95,0.93,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("curr_8b4e_gr_bias_nonzero_Asf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_8b4e_gr_bias_nonzero_Asf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_8b4e_gr_bias_nonzero_Asf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_8b4e_gr_bias_nonzero_Asf_mean","#splitline{PU optimized}{(PU=50, ET=2GeV)}","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_8b4e_gr_bias_nonzero_Asf_mean","#splitline{PU optimized}{(PU=50, ET=30GeV)}","lp");

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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
