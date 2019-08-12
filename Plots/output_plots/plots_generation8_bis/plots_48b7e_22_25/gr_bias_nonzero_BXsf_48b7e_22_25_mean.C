void gr_bias_nonzero_BXsf_48b7e_22_25_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:08:37 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.9903614,-0.2502773,9.612048,0.4004085);
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
   
   Double_t curr_48b7e_gr_bias_nonzero_BXsf_mean_fx61[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t curr_48b7e_gr_bias_nonzero_BXsf_mean_fy61[9] = {
   0.09264547,
   -0.04044828,
   -0.02088906,
   -0.006888107,
   0.004700273,
   0.0117707,
   0.01772899,
   0.02125965,
   0.02306888};
   TGraph *graph = new TGraph(9,curr_48b7e_gr_bias_nonzero_BXsf_mean_fx61,curr_48b7e_gr_bias_nonzero_BXsf_mean_fy61);
   graph->SetName("curr_48b7e_gr_bias_nonzero_BXsf_mean");
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
   
   TH1F *Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61 = new TH1F("Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61","Graph",100,0.2,9.8);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->SetMinimum(-0.05375765);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->SetMaximum(0.1059548);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->SetDirectory(0);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->SetStats(0);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->SetLineStyle(0);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_bias_nonzero_BXsf_mean_fx62[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_48b7e_gr_bias_nonzero_BXsf_mean_fy62[9] = {
   0.06035502,
   -0.06568814,
   -0.04559203,
   -0.03152167,
   -0.02013532,
   -0.01321747,
   -0.007388794,
   -0.003933501,
   -0.001646952};
   graph = new TGraph(9,pu0_48b7e_gr_bias_nonzero_BXsf_mean_fx62,pu0_48b7e_gr_bias_nonzero_BXsf_mean_fy62);
   graph->SetName("pu0_48b7e_gr_bias_nonzero_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62 = new TH1F("Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62","Graph",100,0.2,9.8);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->SetMinimum(-0.07829246);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->SetMaximum(0.07295934);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->SetDirectory(0);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->SetStats(0);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->SetLineStyle(0);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean_fx63[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean_fy63[9] = {
   0.08978006,
   -0.02189583,
   0.0008546569,
   0.01574786,
   0.02785225,
   0.03519388,
   0.04126722,
   0.04487891,
   0.04550027};
   graph = new TGraph(9,pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean_fx63,pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean_fy63);
   graph->SetName("pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63 = new TH1F("Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63","Graph",100,0.2,9.8);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->SetMinimum(-0.03306342);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->SetMaximum(0.1009477);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_bias_nonzero_BXsf_mean_fx64[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s2_48b7e_gr_bias_nonzero_BXsf_mean_fy64[9] = {
   0.111477,
   0.003145448,
   0.02689161,
   0.04260033,
   0.05544875,
   0.06296486,
   0.06929339,
   0.07303687,
   0.07091111};
   graph = new TGraph(9,pu50s2_48b7e_gr_bias_nonzero_BXsf_mean_fx64,pu50s2_48b7e_gr_bias_nonzero_BXsf_mean_fy64);
   graph->SetName("pu50s2_48b7e_gr_bias_nonzero_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64 = new TH1F("Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64","Graph",100,0.2,9.8);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->SetMinimum(0.002830903);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->SetMaximum(0.1223102);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->SetStats(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_bias_nonzero_BXsf_mean_fx65[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s30_48b7e_gr_bias_nonzero_BXsf_mean_fy65[9] = {
   0.06455813,
   -0.06105956,
   -0.04081146,
   -0.02666365,
   -0.01520371,
   -0.008247499,
   -0.002391495,
   0.001089659,
   0.003365047};
   graph = new TGraph(9,pu50s30_48b7e_gr_bias_nonzero_BXsf_mean_fx65,pu50s30_48b7e_gr_bias_nonzero_BXsf_mean_fy65);
   graph->SetName("pu50s30_48b7e_gr_bias_nonzero_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65 = new TH1F("Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65","Graph",100,0.2,9.8);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->SetMinimum(-0.07362133);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->SetMaximum(0.0771199);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->SetStats(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65);
   
   multigraph->Add(graph,"");
   multigraph->Draw("APL");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.007);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
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
   TLegendEntry *entry=leg->AddEntry("curr_48b7e_gr_bias_nonzero_BXsf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_48b7e_gr_bias_nonzero_BXsf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_48b7e_gr_bias_nonzero_BXsf_mean","PU optimized","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("NULL","PU=50, ET=2GeV","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_48b7e_gr_bias_nonzero_BXsf_mean","PU optimized","lp");

   ci = TColor::GetColor("#0000cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("NULL","PU=50, ET=30GeV","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.35,0.68,0.65,0.88,"NB NDC");
   pt->SetFillColor(0);
   TText *pt_LaTex = pt->AddText("PU=50");
   pt_LaTex = pt->AddText("1.8<|#eta|<2.3");
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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
