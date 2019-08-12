void gr_bias_totsf_8b4e_18_21_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:04:44 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.4927711,-0.2659742,7.459036,0.1498433);
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
   
   Double_t curr_8b4e_gr_bias_totsf_mean_fx31[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t curr_8b4e_gr_bias_totsf_mean_fy31[7] = {
   -0.09143888,
   -0.0002135411,
   0.004357986,
   0.009778435,
   0.010156,
   0.01411398,
   0.01288808};
   TGraph *graph = new TGraph(7,curr_8b4e_gr_bias_totsf_mean_fx31,curr_8b4e_gr_bias_totsf_mean_fy31);
   graph->SetName("curr_8b4e_gr_bias_totsf_mean");
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
   
   TH1F *Graph_curr_8b4e_gr_bias_totsf_mean31 = new TH1F("Graph_curr_8b4e_gr_bias_totsf_mean31","Graph",100,0.4,7.6);
   Graph_curr_8b4e_gr_bias_totsf_mean31->SetMinimum(-0.1019942);
   Graph_curr_8b4e_gr_bias_totsf_mean31->SetMaximum(0.02466926);
   Graph_curr_8b4e_gr_bias_totsf_mean31->SetDirectory(0);
   Graph_curr_8b4e_gr_bias_totsf_mean31->SetStats(0);
   Graph_curr_8b4e_gr_bias_totsf_mean31->SetLineStyle(0);
   Graph_curr_8b4e_gr_bias_totsf_mean31->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_totsf_mean31->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_bias_totsf_mean31);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_bias_totsf_mean_fx32[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_8b4e_gr_bias_totsf_mean_fy32[7] = {
   -0.1119179,
   -0.01337167,
   -0.008480798,
   -0.003131708,
   -0.002651324,
   0.001175575,
   5.454298e-05};
   graph = new TGraph(7,pu0_8b4e_gr_bias_totsf_mean_fx32,pu0_8b4e_gr_bias_totsf_mean_fy32);
   graph->SetName("pu0_8b4e_gr_bias_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_bias_totsf_mean32 = new TH1F("Graph_pu0_8b4e_gr_bias_totsf_mean32","Graph",100,0.4,7.6);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->SetMinimum(-0.1232273);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->SetMaximum(0.01248492);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->SetDirectory(0);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->SetStats(0);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->SetLineStyle(0);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_totsf_mean32->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_bias_totsf_mean32);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_bias_totsf_mean_fx33[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_newavg_8b4e_gr_bias_totsf_mean_fy33[7] = {
   -0.07937644,
   0.02225879,
   0.02809917,
   0.03377123,
   0.03491954,
   0.03910679,
   0.03786404};
   graph = new TGraph(7,pu0_newavg_8b4e_gr_bias_totsf_mean_fx33,pu0_newavg_8b4e_gr_bias_totsf_mean_fy33);
   graph->SetName("pu0_newavg_8b4e_gr_bias_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33 = new TH1F("Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33","Graph",100,0.4,7.6);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->SetMinimum(-0.09122477);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->SetMaximum(0.05095512);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_bias_totsf_mean33);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_bias_totsf_mean_fx34[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s2_8b4e_gr_bias_totsf_mean_fy34[7] = {
   -0.07999931,
   0.0155897,
   0.02076494,
   0.02632749,
   0.02706309,
   0.03116667,
   0.02996189};
   graph = new TGraph(7,pu50s2_8b4e_gr_bias_totsf_mean_fx34,pu50s2_8b4e_gr_bias_totsf_mean_fy34);
   graph->SetName("pu50s2_8b4e_gr_bias_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_bias_totsf_mean34 = new TH1F("Graph_pu50s2_8b4e_gr_bias_totsf_mean34","Graph",100,0.4,7.6);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->SetMinimum(-0.09111591);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->SetMaximum(0.04228326);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->SetStats(0);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_totsf_mean34->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_bias_totsf_mean34);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_bias_totsf_mean_fx35[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s30_8b4e_gr_bias_totsf_mean_fy35[7] = {
   -0.1091091,
   -0.01098872,
   -0.006087097,
   -0.0007286643,
   -0.0002620512,
   0.00357417,
   0.002462985};
   graph = new TGraph(7,pu50s30_8b4e_gr_bias_totsf_mean_fx35,pu50s30_8b4e_gr_bias_totsf_mean_fy35);
   graph->SetName("pu50s30_8b4e_gr_bias_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_bias_totsf_mean35 = new TH1F("Graph_pu50s30_8b4e_gr_bias_totsf_mean35","Graph",100,0.4,7.6);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->SetMinimum(-0.1203774);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->SetMaximum(0.0148425);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->SetStats(0);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_totsf_mean35->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_bias_totsf_mean35);
   
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
   entry=leg->AddEntry("pu50s2_8b4e_gr_bias_totsf_mean","#splitline{PU optimized}{(PU=50, ET=2GeV)}","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_8b4e_gr_bias_totsf_mean","#splitline{PU optimized}{(PU=50, ET=30GeV)}","lp");

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
