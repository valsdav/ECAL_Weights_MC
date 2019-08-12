void gr_bias_nonzero_BXsf_48b7e_18_21_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:03:59 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.9903614,-0.2084567,9.612048,0.3667737);
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
   0.09163985,
   -0.02079197,
   -0.007403837,
   -6.886186e-07,
   0.004677177,
   0.007536097,
   0.009325857,
   0.01079283,
   0.01138822};
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
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->SetMinimum(-0.03203515);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_mean61->SetMaximum(0.102883);
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
   0.07548874,
   -0.03367673,
   -0.02012161,
   -0.01266921,
   -0.008032011,
   -0.005278315,
   -0.003461995,
   -0.001992067,
   -0.001230113};
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
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->SetMinimum(-0.04459328);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_mean62->SetMaximum(0.08640529);
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
   0.1024279,
   0.002036609,
   0.01672092,
   0.02443883,
   0.02948459,
   0.03254396,
   0.03423045,
   0.03573797,
   0.03546019};
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
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->SetMinimum(0.001832948);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean63->SetMaximum(0.1124671);
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
   0.1005136,
   -0.005262495,
   0.009048972,
   0.01663695,
   0.02152357,
   0.02455353,
   0.02633429,
   0.02782312,
   0.02789835};
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
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->SetMinimum(-0.0158401);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_mean64->SetMaximum(0.1110912);
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
   0.07769323,
   -0.03135515,
   -0.01773167,
   -0.01028261,
   -0.005651274,
   -0.002868448,
   -0.001067762,
   0.0004098438,
   0.001160242};
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
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->SetMinimum(-0.04225998);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_mean65->SetMaximum(0.08859807);
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
   entry=leg->AddEntry("pu50s2_48b7e_gr_bias_nonzero_BXsf_mean","#splitline{PU optimized}{(PU=50, ET=2GeV)}","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_48b7e_gr_bias_nonzero_BXsf_mean","#splitline{PU optimized}{(PU=50, ET=30GeV)}","lp");

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
   pt_LaTex = pt->AddText("1.5<|#eta|<1.8");
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
