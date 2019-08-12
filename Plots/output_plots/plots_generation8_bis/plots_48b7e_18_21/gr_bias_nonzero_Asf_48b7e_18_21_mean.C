void gr_bias_nonzero_Asf_48b7e_18_21_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:03:59 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.9903614,-0.1025432,9.612048,0.2782319);
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
   
   Double_t curr_48b7e_gr_bias_nonzero_Asf_mean_fx51[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t curr_48b7e_gr_bias_nonzero_Asf_mean_fy51[9] = {
   0.242019,
   -0.02596684,
   -0.008520677,
   -0.001415601,
   0.003900527,
   0.007086988,
   0.009218411,
   0.01058154,
   0.01137935};
   TGraph *graph = new TGraph(9,curr_48b7e_gr_bias_nonzero_Asf_mean_fx51,curr_48b7e_gr_bias_nonzero_Asf_mean_fy51);
   graph->SetName("curr_48b7e_gr_bias_nonzero_Asf_mean");
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
   
   TH1F *Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51 = new TH1F("Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51","Graph",100,0.2,9.8);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->SetMinimum(-0.05276542);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->SetMaximum(0.2688175);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->SetDirectory(0);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->SetStats(0);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->SetLineStyle(0);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_bias_nonzero_Asf_mean_fx52[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_48b7e_gr_bias_nonzero_Asf_mean_fy52[9] = {
   0.2255509,
   -0.03884993,
   -0.02121015,
   -0.01405417,
   -0.008783722,
   -0.005822062,
   -0.003572174,
   -0.00220253,
   -0.001397748};
   graph = new TGraph(9,pu0_48b7e_gr_bias_nonzero_Asf_mean_fx52,pu0_48b7e_gr_bias_nonzero_Asf_mean_fy52);
   graph->SetName("pu0_48b7e_gr_bias_nonzero_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52 = new TH1F("Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52","Graph",100,0.2,9.8);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->SetMinimum(-0.06529001);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->SetMaximum(0.2519909);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->SetDirectory(0);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->SetStats(0);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->SetLineStyle(0);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean_fx53[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean_fy53[9] = {
   0.2425404,
   -0.00340154,
   0.01567103,
   0.02297501,
   0.0286692,
   0.03200495,
   0.03412678,
   0.03552693,
   0.03623438};
   graph = new TGraph(9,pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean_fx53,pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean_fy53);
   graph->SetName("pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53 = new TH1F("Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53","Graph",100,0.2,9.8);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->SetMinimum(-0.02799574);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->SetMaximum(0.2671346);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_bias_nonzero_Asf_mean_fx54[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s2_48b7e_gr_bias_nonzero_Asf_mean_fy54[9] = {
   0.2450006,
   -0.01063031,
   0.00796866,
   0.01519765,
   0.02072592,
   0.02409411,
   0.02622778,
   0.02760571,
   0.02836084};
   graph = new TGraph(9,pu50s2_48b7e_gr_bias_nonzero_Asf_mean_fx54,pu50s2_48b7e_gr_bias_nonzero_Asf_mean_fy54);
   graph->SetName("pu50s2_48b7e_gr_bias_nonzero_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54 = new TH1F("Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54","Graph",100,0.2,9.8);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->SetMinimum(-0.0361934);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->SetMaximum(0.2705637);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->SetStats(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_bias_nonzero_Asf_mean_fx55[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s30_48b7e_gr_bias_nonzero_Asf_mean_fy55[9] = {
   0.2273919,
   -0.03655579,
   -0.01882384,
   -0.01167091,
   -0.006407321,
   -0.003401364,
   -0.00117713,
   0.000198173,
   0.00100234};
   graph = new TGraph(9,pu50s30_48b7e_gr_bias_nonzero_Asf_mean_fx55,pu50s30_48b7e_gr_bias_nonzero_Asf_mean_fy55);
   graph->SetName("pu50s30_48b7e_gr_bias_nonzero_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55 = new TH1F("Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55","Graph",100,0.2,9.8);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->SetMinimum(-0.06295057);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->SetMaximum(0.2537867);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->SetStats(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55);
   
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
   entry=leg->AddEntry("pu50s2_48b7e_gr_bias_nonzero_Asf_mean","#splitline{PU optimized}{(PU=50, ET=2GeV)}","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_48b7e_gr_bias_nonzero_Asf_mean","#splitline{PU optimized}{(PU=50, ET=30GeV)}","lp");

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
