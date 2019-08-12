void gr_bias_8b4e_26_28_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:46:44 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.4927711,-0.3042492,7.459036,1.017095);
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
   
   Double_t curr_8b4e_gr_bias_mean_fx1[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t curr_8b4e_gr_bias_mean_fy1[7] = {
   0.2881903,
   0.003705412,
   0.01426541,
   0.02167769,
   0.02652894,
   0.02937593,
   0.03195393};
   TGraph *graph = new TGraph(7,curr_8b4e_gr_bias_mean_fx1,curr_8b4e_gr_bias_mean_fy1);
   graph->SetName("curr_8b4e_gr_bias_mean");
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
   
   TH1F *Graph_curr_8b4e_gr_bias_mean1 = new TH1F("Graph_curr_8b4e_gr_bias_mean1","Graph",100,0.4,7.6);
   Graph_curr_8b4e_gr_bias_mean1->SetMinimum(0.003334871);
   Graph_curr_8b4e_gr_bias_mean1->SetMaximum(0.3166388);
   Graph_curr_8b4e_gr_bias_mean1->SetDirectory(0);
   Graph_curr_8b4e_gr_bias_mean1->SetStats(0);
   Graph_curr_8b4e_gr_bias_mean1->SetLineStyle(0);
   Graph_curr_8b4e_gr_bias_mean1->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_bias_mean1->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_mean1->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_mean1->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_mean1->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_mean1->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_mean1->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_mean1->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_mean1->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_mean1->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_mean1->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_mean1->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_bias_mean1->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_mean1->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_mean1->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_mean1->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_mean1->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_mean1->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_mean1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_bias_mean1);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_bias_mean_fx2[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_8b4e_gr_bias_mean_fy2[7] = {
   0.2195051,
   -0.03247445,
   -0.02044772,
   -0.01237323,
   -0.007069421,
   -0.004043635,
   -0.001301442};
   graph = new TGraph(7,pu0_8b4e_gr_bias_mean_fx2,pu0_8b4e_gr_bias_mean_fy2);
   graph->SetName("pu0_8b4e_gr_bias_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_bias_mean2 = new TH1F("Graph_pu0_8b4e_gr_bias_mean2","Graph",100,0.4,7.6);
   Graph_pu0_8b4e_gr_bias_mean2->SetMinimum(-0.05767241);
   Graph_pu0_8b4e_gr_bias_mean2->SetMaximum(0.244703);
   Graph_pu0_8b4e_gr_bias_mean2->SetDirectory(0);
   Graph_pu0_8b4e_gr_bias_mean2->SetStats(0);
   Graph_pu0_8b4e_gr_bias_mean2->SetLineStyle(0);
   Graph_pu0_8b4e_gr_bias_mean2->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_bias_mean2->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_mean2->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_mean2->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_mean2->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_mean2->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_mean2->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_mean2->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_mean2->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_mean2->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_mean2->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_mean2->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_bias_mean2->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_mean2->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_mean2->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_mean2->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_mean2->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_mean2->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_mean2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_bias_mean2);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_bias_mean_fx3[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_newavg_8b4e_gr_bias_mean_fy3[7] = {
   0.2814752,
   0.02410103,
   0.03624884,
   0.04415734,
   0.04925287,
   0.05223878,
   0.05493547};
   graph = new TGraph(7,pu0_newavg_8b4e_gr_bias_mean_fx3,pu0_newavg_8b4e_gr_bias_mean_fy3);
   graph->SetName("pu0_newavg_8b4e_gr_bias_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_bias_mean3 = new TH1F("Graph_pu0_newavg_8b4e_gr_bias_mean3","Graph",100,0.4,7.6);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->SetMinimum(0.02169093);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->SetMaximum(0.3072126);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_mean3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_bias_mean3);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_bias_mean_fx4[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s2_8b4e_gr_bias_mean_fy4[7] = {
   0.2764734,
   0.09094257,
   0.1139139,
   0.1270461,
   0.1355896,
   0.1404687,
   0.1449031};
   graph = new TGraph(7,pu50s2_8b4e_gr_bias_mean_fx4,pu50s2_8b4e_gr_bias_mean_fy4);
   graph->SetName("pu50s2_8b4e_gr_bias_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_bias_mean4 = new TH1F("Graph_pu50s2_8b4e_gr_bias_mean4","Graph",100,0.4,7.6);
   Graph_pu50s2_8b4e_gr_bias_mean4->SetMinimum(0.07238949);
   Graph_pu50s2_8b4e_gr_bias_mean4->SetMaximum(0.2950265);
   Graph_pu50s2_8b4e_gr_bias_mean4->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_bias_mean4->SetStats(0);
   Graph_pu50s2_8b4e_gr_bias_mean4->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_bias_mean4->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_mean4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_bias_mean4);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_bias_mean_fx5[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s30_8b4e_gr_bias_mean_fy5[7] = {
   0.2378491,
   -0.01836511,
   -0.00610326,
   0.002123834,
   0.007481328,
   0.01059392,
   0.01339242};
   graph = new TGraph(7,pu50s30_8b4e_gr_bias_mean_fx5,pu50s30_8b4e_gr_bias_mean_fy5);
   graph->SetName("pu50s30_8b4e_gr_bias_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_bias_mean5 = new TH1F("Graph_pu50s30_8b4e_gr_bias_mean5","Graph",100,0.4,7.6);
   Graph_pu50s30_8b4e_gr_bias_mean5->SetMinimum(-0.04398653);
   Graph_pu50s30_8b4e_gr_bias_mean5->SetMaximum(0.2634706);
   Graph_pu50s30_8b4e_gr_bias_mean5->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_bias_mean5->SetStats(0);
   Graph_pu50s30_8b4e_gr_bias_mean5->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_bias_mean5->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_mean5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_bias_mean5);
   
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
   TLegendEntry *entry=leg->AddEntry("curr_8b4e_gr_bias_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_8b4e_gr_bias_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_8b4e_gr_bias_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_8b4e_gr_bias_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_8b4e_gr_bias_mean","PU optimized","lp");

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
