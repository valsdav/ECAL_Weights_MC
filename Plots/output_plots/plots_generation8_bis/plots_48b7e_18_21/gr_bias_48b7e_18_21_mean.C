void gr_bias_48b7e_18_21_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:08:43 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.9903614,-0.3513396,9.612048,0.1422498);
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
   
   Double_t curr_48b7e_gr_bias_mean_fx1[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t curr_48b7e_gr_bias_mean_fy1[9] = {
   -0.1732434,
   -0.02459247,
   -0.00910106,
   -0.001060294,
   0.004107282,
   0.006998966,
   0.009327707,
   0.01067864,
   0.01135488};
   TGraph *graph = new TGraph(9,curr_48b7e_gr_bias_mean_fx1,curr_48b7e_gr_bias_mean_fy1);
   graph->SetName("curr_48b7e_gr_bias_mean");
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
   
   TH1F *Graph_curr_48b7e_gr_bias_mean1 = new TH1F("Graph_curr_48b7e_gr_bias_mean1","Graph",100,0.2,9.8);
   Graph_curr_48b7e_gr_bias_mean1->SetMinimum(-0.1917032);
   Graph_curr_48b7e_gr_bias_mean1->SetMaximum(0.02981471);
   Graph_curr_48b7e_gr_bias_mean1->SetDirectory(0);
   Graph_curr_48b7e_gr_bias_mean1->SetStats(0);
   Graph_curr_48b7e_gr_bias_mean1->SetLineStyle(0);
   Graph_curr_48b7e_gr_bias_mean1->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_bias_mean1->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_mean1->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_mean1->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_mean1->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_mean1->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_mean1->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_mean1->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_mean1->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_mean1->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_mean1->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_mean1->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_bias_mean1->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_mean1->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_mean1->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_mean1->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_mean1->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_mean1->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_mean1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_bias_mean1);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_bias_mean_fx2[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_48b7e_gr_bias_mean_fy2[9] = {
   -0.187173,
   -0.03695475,
   -0.0216783,
   -0.01368597,
   -0.008578861,
   -0.005797096,
   -0.003459501,
   -0.002103571,
   -0.001263322};
   graph = new TGraph(9,pu0_48b7e_gr_bias_mean_fx2,pu0_48b7e_gr_bias_mean_fy2);
   graph->SetName("pu0_48b7e_gr_bias_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_bias_mean2 = new TH1F("Graph_pu0_48b7e_gr_bias_mean2","Graph",100,0.2,9.8);
   Graph_pu0_48b7e_gr_bias_mean2->SetMinimum(-0.205764);
   Graph_pu0_48b7e_gr_bias_mean2->SetMaximum(0.01732765);
   Graph_pu0_48b7e_gr_bias_mean2->SetDirectory(0);
   Graph_pu0_48b7e_gr_bias_mean2->SetStats(0);
   Graph_pu0_48b7e_gr_bias_mean2->SetLineStyle(0);
   Graph_pu0_48b7e_gr_bias_mean2->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_bias_mean2->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_mean2->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_mean2->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_mean2->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_mean2->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_mean2->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_mean2->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_mean2->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_mean2->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_mean2->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_mean2->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_bias_mean2->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_mean2->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_mean2->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_mean2->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_mean2->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_mean2->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_mean2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_bias_mean2);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_bias_mean_fx3[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_newavg_48b7e_gr_bias_mean_fy3[9] = {
   -0.1518974,
   -0.000862108,
   0.01520346,
   0.02339847,
   0.028913,
   0.03201026,
   0.0342388,
   0.03562736,
   0.03542804};
   graph = new TGraph(9,pu0_newavg_48b7e_gr_bias_mean_fx3,pu0_newavg_48b7e_gr_bias_mean_fy3);
   graph->SetName("pu0_newavg_48b7e_gr_bias_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_bias_mean3 = new TH1F("Graph_pu0_newavg_48b7e_gr_bias_mean3","Graph",100,0.2,9.8);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->SetMinimum(-0.1706498);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->SetMaximum(0.05437983);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_bias_mean3);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_bias_mean_fx4[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s2_48b7e_gr_bias_mean_fy4[9] = {
   -0.1590193,
   -0.008473132,
   0.007479028,
   0.0156042,
   0.02095262,
   0.02402362,
   0.0263358,
   0.02770747,
   0.0278669};
   graph = new TGraph(9,pu50s2_48b7e_gr_bias_mean_fx4,pu50s2_48b7e_gr_bias_mean_fy4);
   graph->SetName("pu50s2_48b7e_gr_bias_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_bias_mean4 = new TH1F("Graph_pu50s2_48b7e_gr_bias_mean4","Graph",100,0.2,9.8);
   Graph_pu50s2_48b7e_gr_bias_mean4->SetMinimum(-0.1777079);
   Graph_pu50s2_48b7e_gr_bias_mean4->SetMaximum(0.04655552);
   Graph_pu50s2_48b7e_gr_bias_mean4->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_bias_mean4->SetStats(0);
   Graph_pu50s2_48b7e_gr_bias_mean4->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_bias_mean4->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_mean4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_bias_mean4);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_bias_mean_fx5[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s30_48b7e_gr_bias_mean_fy5[9] = {
   -0.1847896,
   -0.03464001,
   -0.01929641,
   -0.01129978,
   -0.006201329,
   -0.00339181,
   -0.001065052,
   0.0002980795,
   0.001128018};
   graph = new TGraph(9,pu50s30_48b7e_gr_bias_mean_fx5,pu50s30_48b7e_gr_bias_mean_fy5);
   graph->SetName("pu50s30_48b7e_gr_bias_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_bias_mean5 = new TH1F("Graph_pu50s30_48b7e_gr_bias_mean5","Graph",100,0.2,9.8);
   Graph_pu50s30_48b7e_gr_bias_mean5->SetMinimum(-0.2033813);
   Graph_pu50s30_48b7e_gr_bias_mean5->SetMaximum(0.01971978);
   Graph_pu50s30_48b7e_gr_bias_mean5->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_bias_mean5->SetStats(0);
   Graph_pu50s30_48b7e_gr_bias_mean5->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_bias_mean5->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_mean5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_bias_mean5);
   
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
   TLegendEntry *entry=leg->AddEntry("curr_48b7e_gr_bias_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_48b7e_gr_bias_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_48b7e_gr_bias_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_48b7e_gr_bias_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_48b7e_gr_bias_mean","PU optimized","lp");

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
