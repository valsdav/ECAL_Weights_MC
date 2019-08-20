void bias_etbin_8b4e_22_25_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug 20 10:22:20 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.7415662,-0.772381,8.535542,0.4502096);
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
   
   Double_t gr_curr_8b4e_22_25_bias_etbin_mean_fx21[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_curr_8b4e_22_25_bias_etbin_mean_fy21[8] = {
   0.3435107,
   -0.4224538,
   -0.3848528,
   -0.3620122,
   -0.3536733,
   -0.3501685,
   -0.2507424,
   -0.5678749};
   TGraph *graph = new TGraph(8,gr_curr_8b4e_22_25_bias_etbin_mean_fx21,gr_curr_8b4e_22_25_bias_etbin_mean_fy21);
   graph->SetName("gr_curr_8b4e_22_25_bias_etbin_mean");
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
   
   TH1F *Graph_gr_curr_8b4e_22_25_bias_etbin_mean21 = new TH1F("Graph_gr_curr_8b4e_22_25_bias_etbin_mean21","Graph",100,0.3,8.7);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->SetMinimum(-0.6590135);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->SetMaximum(0.4346493);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->SetDirectory(0);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->SetStats(0);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->SetLineStyle(0);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->SetMarkerStyle(20);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetXaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetXaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetXaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetYaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetYaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetZaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetZaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_22_25_bias_etbin_mean21->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_curr_8b4e_22_25_bias_etbin_mean21);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_8b4e_22_25_bias_etbin_mean_fx22[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_8b4e_22_25_bias_etbin_mean_fy22[8] = {
   0.2089299,
   -0.418921,
   -0.3556661,
   -0.3237617,
   -0.2890402,
   -0.290992,
   -0.2403259,
   -0.4086722};
   graph = new TGraph(8,gr_pu0_8b4e_22_25_bias_etbin_mean_fx22,gr_pu0_8b4e_22_25_bias_etbin_mean_fy22);
   graph->SetName("gr_pu0_8b4e_22_25_bias_etbin_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22 = new TH1F("Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22","Graph",100,0.3,8.7);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->SetMinimum(-0.4817061);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->SetMaximum(0.271715);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->SetDirectory(0);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->SetStats(0);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->SetLineStyle(0);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->SetMarkerStyle(20);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_8b4e_22_25_bias_etbin_mean22);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_newavg_8b4e_22_25_bias_etbin_mean_fx23[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_newavg_8b4e_22_25_bias_etbin_mean_fy23[8] = {
   0.2143755,
   -0.417638,
   -0.354283,
   -0.3113703,
   -0.3017724,
   -0.310997,
   -0.3797649,
   -0.3398235};
   graph = new TGraph(8,gr_pu0_newavg_8b4e_22_25_bias_etbin_mean_fx23,gr_pu0_newavg_8b4e_22_25_bias_etbin_mean_fy23);
   graph->SetName("gr_pu0_newavg_8b4e_22_25_bias_etbin_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23 = new TH1F("Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23","Graph",100,0.3,8.7);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->SetMinimum(-0.4808394);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->SetMaximum(0.2775769);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->SetDirectory(0);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->SetStats(0);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->SetLineStyle(0);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->SetMarkerStyle(20);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_newavg_8b4e_22_25_bias_etbin_mean23);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s2_8b4e_22_25_bias_etbin_mean_fx24[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s2_8b4e_22_25_bias_etbin_mean_fy24[8] = {
   0.214948,
   -0.3668845,
   -0.2954537,
   -0.2483998,
   -0.2239637,
   -0.2311386,
   -0.2115698,
   -0.3401465};
   graph = new TGraph(8,gr_pu50s2_8b4e_22_25_bias_etbin_mean_fx24,gr_pu50s2_8b4e_22_25_bias_etbin_mean_fy24);
   graph->SetName("gr_pu50s2_8b4e_22_25_bias_etbin_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24 = new TH1F("Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24","Graph",100,0.3,8.7);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->SetMinimum(-0.4250677);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->SetMaximum(0.2731312);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->SetDirectory(0);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->SetStats(0);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->SetLineStyle(0);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->SetMarkerStyle(20);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s2_8b4e_22_25_bias_etbin_mean24);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s30_8b4e_22_25_bias_etbin_mean_fx25[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s30_8b4e_22_25_bias_etbin_mean_fy25[8] = {
   0.2144972,
   -0.3877946,
   -0.3176658,
   -0.2750837,
   -0.2391399,
   -0.2587232,
   -0.3677303,
   -0.28619};
   graph = new TGraph(8,gr_pu50s30_8b4e_22_25_bias_etbin_mean_fx25,gr_pu50s30_8b4e_22_25_bias_etbin_mean_fy25);
   graph->SetName("gr_pu50s30_8b4e_22_25_bias_etbin_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25 = new TH1F("Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25","Graph",100,0.3,8.7);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->SetMinimum(-0.4480238);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->SetMaximum(0.2747264);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->SetDirectory(0);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->SetStats(0);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->SetLineStyle(0);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->SetMarkerStyle(20);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s30_8b4e_22_25_bias_etbin_mean25);
   
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
   TLegendEntry *entry=leg->AddEntry("gr_curr_8b4e_22_25_bias_etbin_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_newavg_8b4e_22_25_bias_etbin_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_8b4e_22_25_bias_etbin_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu50s2_8b4e_22_25_bias_etbin_mean","PU optimized","lp");

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
   entry=leg->AddEntry("gr_pu50s30_8b4e_22_25_bias_etbin_mean","PU optimized","lp");

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
