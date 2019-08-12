void gr_bias_48b7e_26_28_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:46:31 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.9903614,-0.6474894,9.612048,0.5081497);
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
   -0.3623395,
   -0.2251283,
   -0.1215601,
   -0.06373818,
   -0.02588009,
   -0.004635108,
   0.01273736,
   0.02314261,
   0.0288172};
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
   Graph_curr_48b7e_gr_bias_mean1->SetMinimum(-0.4014552);
   Graph_curr_48b7e_gr_bias_mean1->SetMaximum(0.06793288);
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
   -0.3972563,
   -0.2515161,
   -0.1503052,
   -0.09403133,
   -0.05728276,
   -0.03658343,
   -0.01968936,
   -0.009588348,
   -0.003261405};
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
   Graph_pu0_48b7e_gr_bias_mean2->SetMinimum(-0.4366558);
   Graph_pu0_48b7e_gr_bias_mean2->SetMaximum(0.03613809);
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
   -0.3638697,
   -0.2086092,
   -0.102,
   -0.04285518,
   -0.0041235,
   0.01759846,
   0.03537801,
   0.04601824,
   0.05039593};
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
   Graph_pu0_newavg_48b7e_gr_bias_mean3->SetMinimum(-0.4052962);
   Graph_pu0_newavg_48b7e_gr_bias_mean3->SetMaximum(0.09182249);
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
   -0.3633044,
   -0.1483349,
   -0.02795315,
   0.03780491,
   0.08082422,
   0.1049233,
   0.1246663,
   0.1364751,
   0.1286014};
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
   Graph_pu50s2_48b7e_gr_bias_mean4->SetMinimum(-0.4132824);
   Graph_pu50s2_48b7e_gr_bias_mean4->SetMaximum(0.186453);
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
   -0.3881337,
   -0.2408245,
   -0.1380226,
   -0.08085622,
   -0.04345008,
   -0.0224423,
   -0.005289799,
   0.004985007,
   0.01124651};
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
   Graph_pu50s30_48b7e_gr_bias_mean5->SetMinimum(-0.4280717);
   Graph_pu50s30_48b7e_gr_bias_mean5->SetMaximum(0.05118453);
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
   
   TLegend *leg = new TLegend(0.67,0.54,0.95,0.92,NULL,"brNDC");
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
   entry=leg->AddEntry("NULL","PU=50, ET=2GeV","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry->SetTextSize(0.026);
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
