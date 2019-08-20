void bias_etbin_8b4e_26_28_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug 20 10:22:21 2019) by ROOT version 6.16/00
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
   
   Double_t gr_curr_8b4e_26_28_bias_etbin_mean_fx41[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_curr_8b4e_26_28_bias_etbin_mean_fy41[8] = {
   0.7544655,
   -0.01244416,
   -0.1747812,
   -0.2430375,
   -0.2717826,
   -0.2639647,
   -0.2333025,
   -0.2337662};
   TGraph *graph = new TGraph(8,gr_curr_8b4e_26_28_bias_etbin_mean_fx41,gr_curr_8b4e_26_28_bias_etbin_mean_fy41);
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
   
   TH1F *Graph_gr_curr_8b4e_26_28_bias_etbin_mean41 = new TH1F("Graph_gr_curr_8b4e_26_28_bias_etbin_mean41","Graph",100,0.3,8.7);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->SetMinimum(-0.3744075);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->SetMaximum(0.8570903);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->SetDirectory(0);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->SetStats(0);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->SetLineStyle(0);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->SetMarkerStyle(20);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetXaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetXaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetXaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetYaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetYaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetZaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetZaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_26_28_bias_etbin_mean41->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_curr_8b4e_26_28_bias_etbin_mean41);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_8b4e_26_28_bias_etbin_mean_fx42[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_8b4e_26_28_bias_etbin_mean_fy42[8] = {
   0.6593517,
   -0.02846253,
   -0.1784818,
   -0.2425908,
   -0.2591379,
   -0.2589804,
   -0.1972908,
   -0.1190314};
   graph = new TGraph(8,gr_pu0_8b4e_26_28_bias_etbin_mean_fx42,gr_pu0_8b4e_26_28_bias_etbin_mean_fy42);
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
   
   TH1F *Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42 = new TH1F("Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42","Graph",100,0.3,8.7);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->SetMinimum(-0.3509869);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->SetMaximum(0.7512007);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->SetDirectory(0);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->SetStats(0);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->SetLineStyle(0);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->SetMarkerStyle(20);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_8b4e_26_28_bias_etbin_mean42);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_newavg_8b4e_26_28_bias_etbin_mean_fx43[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_newavg_8b4e_26_28_bias_etbin_mean_fy43[8] = {
   0.6651688,
   -0.02657124,
   -0.1860178,
   -0.2483898,
   -0.2627497,
   -0.2582175,
   -0.2167756,
   -0.1459866};
   graph = new TGraph(8,gr_pu0_newavg_8b4e_26_28_bias_etbin_mean_fx43,gr_pu0_newavg_8b4e_26_28_bias_etbin_mean_fy43);
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
   
   TH1F *Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43 = new TH1F("Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43","Graph",100,0.3,8.7);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->SetMinimum(-0.3555415);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->SetMaximum(0.7579606);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->SetDirectory(0);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->SetStats(0);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->SetLineStyle(0);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->SetMarkerStyle(20);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_newavg_8b4e_26_28_bias_etbin_mean43);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s2_8b4e_26_28_bias_etbin_mean_fx44[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s2_8b4e_26_28_bias_etbin_mean_fy44[8] = {
   0.562708,
   -0.01435759,
   -0.1579988,
   -0.2061314,
   -0.2088373,
   -0.1884756,
   -0.1208753,
   -0.003321747};
   graph = new TGraph(8,gr_pu50s2_8b4e_26_28_bias_etbin_mean_fx44,gr_pu50s2_8b4e_26_28_bias_etbin_mean_fy44);
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
   
   TH1F *Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44 = new TH1F("Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44","Graph",100,0.3,8.7);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->SetMinimum(-0.2859919);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->SetMaximum(0.6398625);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->SetDirectory(0);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->SetStats(0);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->SetLineStyle(0);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->SetMarkerStyle(20);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s2_8b4e_26_28_bias_etbin_mean44);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s30_8b4e_26_28_bias_etbin_mean_fx45[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s30_8b4e_26_28_bias_etbin_mean_fy45[8] = {
   0.612073,
   -0.003532147,
   -0.1480726,
   -0.1998718,
   -0.2047702,
   -0.1878173,
   -0.1301446,
   -0.01784709};
   graph = new TGraph(8,gr_pu50s30_8b4e_26_28_bias_etbin_mean_fx45,gr_pu50s30_8b4e_26_28_bias_etbin_mean_fy45);
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
   
   TH1F *Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45 = new TH1F("Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45","Graph",100,0.3,8.7);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->SetMinimum(-0.2864545);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->SetMaximum(0.6937573);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->SetDirectory(0);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->SetStats(0);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->SetLineStyle(0);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->SetMarkerStyle(20);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s30_8b4e_26_28_bias_etbin_mean45);
   
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
