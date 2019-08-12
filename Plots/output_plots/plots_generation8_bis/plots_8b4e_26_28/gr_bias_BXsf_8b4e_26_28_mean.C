void gr_bias_BXsf_8b4e_26_28_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:46:45 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.4927711,-0.3067437,7.459036,1.282283);
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
   
   Double_t curr_8b4e_gr_bias_BXsf_mean_fx21[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t curr_8b4e_gr_bias_BXsf_mean_fy21[7] = {
   0.3644944,
   0.03838454,
   0.04745249,
   0.05453766,
   0.04963085,
   0.04019038,
   0.03463365};
   TGraph *graph = new TGraph(7,curr_8b4e_gr_bias_BXsf_mean_fx21,curr_8b4e_gr_bias_BXsf_mean_fy21);
   graph->SetName("curr_8b4e_gr_bias_BXsf_mean");
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
   
   TH1F *Graph_curr_8b4e_gr_bias_BXsf_mean21 = new TH1F("Graph_curr_8b4e_gr_bias_BXsf_mean21","Graph",100,0.4,7.6);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->SetMinimum(0.001647574);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->SetMaximum(0.3974805);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->SetDirectory(0);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->SetStats(0);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->SetLineStyle(0);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_bias_BXsf_mean21);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_bias_BXsf_mean_fx22[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_8b4e_gr_bias_BXsf_mean_fy22[7] = {
   0.2885919,
   -0.000170237,
   0.01048069,
   0.01840816,
   0.01455019,
   0.006012905,
   0.001177679};
   graph = new TGraph(7,pu0_8b4e_gr_bias_BXsf_mean_fx22,pu0_8b4e_gr_bias_BXsf_mean_fy22);
   graph->SetName("pu0_8b4e_gr_bias_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_bias_BXsf_mean22 = new TH1F("Graph_pu0_8b4e_gr_bias_BXsf_mean22","Graph",100,0.4,7.6);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->SetMinimum(-0.02904645);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->SetMaximum(0.3174681);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->SetDirectory(0);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->SetStats(0);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->SetLineStyle(0);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_bias_BXsf_mean22);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_bias_BXsf_mean_fx23[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_newavg_8b4e_gr_bias_BXsf_mean_fy23[7] = {
   0.3120388,
   0.04465166,
   0.05997065,
   0.06981294,
   0.06777808,
   0.06000794,
   0.05649978};
   graph = new TGraph(7,pu0_newavg_8b4e_gr_bias_BXsf_mean_fx23,pu0_newavg_8b4e_gr_bias_BXsf_mean_fy23);
   graph->SetName("pu0_newavg_8b4e_gr_bias_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23 = new TH1F("Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23","Graph",100,0.4,7.6);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->SetMinimum(0.01791295);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->SetMaximum(0.3387776);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_bias_BXsf_mean_fx24[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s2_8b4e_gr_bias_BXsf_mean_fy24[7] = {
   0.32537,
   0.1166002,
   0.1407425,
   0.1551768,
   0.1555229,
   0.1492034,
   0.1468754};
   graph = new TGraph(7,pu50s2_8b4e_gr_bias_BXsf_mean_fx24,pu50s2_8b4e_gr_bias_BXsf_mean_fy24);
   graph->SetName("pu50s2_8b4e_gr_bias_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_bias_BXsf_mean24 = new TH1F("Graph_pu50s2_8b4e_gr_bias_BXsf_mean24","Graph",100,0.4,7.6);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->SetMinimum(0.09572319);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->SetMaximum(0.346247);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->SetStats(0);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_bias_BXsf_mean24);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_bias_BXsf_mean_fx25[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s30_8b4e_gr_bias_BXsf_mean_fy25[7] = {
   0.3080651,
   0.01436996,
   0.0253028,
   0.03336525,
   0.02943118,
   0.02082061,
   0.0159099};
   graph = new TGraph(7,pu50s30_8b4e_gr_bias_BXsf_mean_fx25,pu50s30_8b4e_gr_bias_BXsf_mean_fy25);
   graph->SetName("pu50s30_8b4e_gr_bias_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_bias_BXsf_mean25 = new TH1F("Graph_pu50s30_8b4e_gr_bias_BXsf_mean25","Graph",100,0.4,7.6);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->SetMinimum(0.01293296);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->SetMaximum(0.3374346);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->SetStats(0);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_bias_BXsf_mean25);
   
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
   
   TLegend *leg = new TLegend(0.67,0.54,0.95,0.92,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("curr_8b4e_gr_bias_BXsf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_8b4e_gr_bias_BXsf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_8b4e_gr_bias_BXsf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_8b4e_gr_bias_BXsf_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_8b4e_gr_bias_BXsf_mean","PU optimized","lp");

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
