void gr_bias_totsf_8b4e_26_28_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:46:46 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.4927711,-0.2240816,7.459036,1.499623);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetGridy();
   c2->SetTickx(1);
   c2->SetTicky(1);
   c2->SetLeftMargin(0.15);
   c2->SetRightMargin(0.02);
   c2->SetTopMargin(0.05);
   c2->SetBottomMargin(0.13);
   c2->SetFrameFillStyle(0);
   c2->SetFrameBorderMode(0);
   c2->SetFrameFillStyle(0);
   c2->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle(";ET (GeV);Fractional spread");
   
   Double_t curr_8b4e_gr_bias_totsf_std_fx36[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t curr_8b4e_gr_bias_totsf_std_fy36[7] = {
   1.327995,
   0.372768,
   0.2006602,
   0.1246119,
   0.07748769,
   0.05095061,
   0.03674321};
   TGraph *graph = new TGraph(7,curr_8b4e_gr_bias_totsf_std_fx36,curr_8b4e_gr_bias_totsf_std_fy36);
   graph->SetName("curr_8b4e_gr_bias_totsf_std");
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
   
   TH1F *Graph_curr_8b4e_gr_bias_totsf_std36 = new TH1F("Graph_curr_8b4e_gr_bias_totsf_std36","Graph",100,0.4,7.6);
   Graph_curr_8b4e_gr_bias_totsf_std36->SetMinimum(0.03306888);
   Graph_curr_8b4e_gr_bias_totsf_std36->SetMaximum(1.457121);
   Graph_curr_8b4e_gr_bias_totsf_std36->SetDirectory(0);
   Graph_curr_8b4e_gr_bias_totsf_std36->SetStats(0);
   Graph_curr_8b4e_gr_bias_totsf_std36->SetLineStyle(0);
   Graph_curr_8b4e_gr_bias_totsf_std36->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_totsf_std36->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_bias_totsf_std36);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_bias_totsf_std_fx37[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_8b4e_gr_bias_totsf_std_fy37[7] = {
   1.333369,
   0.3683304,
   0.1975327,
   0.1226624,
   0.07605323,
   0.04966534,
   0.03530686};
   graph = new TGraph(7,pu0_8b4e_gr_bias_totsf_std_fx37,pu0_8b4e_gr_bias_totsf_std_fy37);
   graph->SetName("pu0_8b4e_gr_bias_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_bias_totsf_std37 = new TH1F("Graph_pu0_8b4e_gr_bias_totsf_std37","Graph",100,0.4,7.6);
   Graph_pu0_8b4e_gr_bias_totsf_std37->SetMinimum(0.03177618);
   Graph_pu0_8b4e_gr_bias_totsf_std37->SetMaximum(1.463175);
   Graph_pu0_8b4e_gr_bias_totsf_std37->SetDirectory(0);
   Graph_pu0_8b4e_gr_bias_totsf_std37->SetStats(0);
   Graph_pu0_8b4e_gr_bias_totsf_std37->SetLineStyle(0);
   Graph_pu0_8b4e_gr_bias_totsf_std37->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_totsf_std37->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_bias_totsf_std37);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_bias_totsf_std_fx38[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_newavg_8b4e_gr_bias_totsf_std_fy38[7] = {
   1.347742,
   0.3652814,
   0.1950838,
   0.1218359,
   0.07564247,
   0.04925901,
   0.03483121};
   graph = new TGraph(7,pu0_newavg_8b4e_gr_bias_totsf_std_fx38,pu0_newavg_8b4e_gr_bias_totsf_std_fy38);
   graph->SetName("pu0_newavg_8b4e_gr_bias_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_bias_totsf_std38 = new TH1F("Graph_pu0_newavg_8b4e_gr_bias_totsf_std38","Graph",100,0.4,7.6);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->SetMinimum(0.03134809);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->SetMaximum(1.479033);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_std38->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_bias_totsf_std38);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_bias_totsf_std_fx39[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s2_8b4e_gr_bias_totsf_std_fy39[7] = {
   1.28776,
   0.3401272,
   0.1792482,
   0.1117275,
   0.06995358,
   0.04636547,
   0.03382205};
   graph = new TGraph(7,pu50s2_8b4e_gr_bias_totsf_std_fx39,pu50s2_8b4e_gr_bias_totsf_std_fy39);
   graph->SetName("pu50s2_8b4e_gr_bias_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_bias_totsf_std39 = new TH1F("Graph_pu50s2_8b4e_gr_bias_totsf_std39","Graph",100,0.4,7.6);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->SetMinimum(0.03043984);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->SetMaximum(1.413154);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->SetStats(0);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_totsf_std39->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_bias_totsf_std39);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_bias_totsf_std_fx40[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s30_8b4e_gr_bias_totsf_std_fy40[7] = {
   1.33216,
   0.368431,
   0.1976943,
   0.1229102,
   0.07645502,
   0.05003101,
   0.03564551};
   graph = new TGraph(7,pu50s30_8b4e_gr_bias_totsf_std_fx40,pu50s30_8b4e_gr_bias_totsf_std_fy40);
   graph->SetName("pu50s30_8b4e_gr_bias_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_bias_totsf_std40 = new TH1F("Graph_pu50s30_8b4e_gr_bias_totsf_std40","Graph",100,0.4,7.6);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->SetMinimum(0.03208096);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->SetMaximum(1.461811);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->SetStats(0);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_totsf_std40->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_bias_totsf_std40);
   
   multigraph->Add(graph,"");
   multigraph->Draw("APL");
   multigraph->GetXaxis()->SetTitle("ET (GeV)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.007);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Fractional spread");
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
   TLegendEntry *entry=leg->AddEntry("curr_8b4e_gr_bias_totsf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_8b4e_gr_bias_totsf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_8b4e_gr_bias_totsf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_8b4e_gr_bias_totsf_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_8b4e_gr_bias_totsf_mean","PU optimized","lp");

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
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
