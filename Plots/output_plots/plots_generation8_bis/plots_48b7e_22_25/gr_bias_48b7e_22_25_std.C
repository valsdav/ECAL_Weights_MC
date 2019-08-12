void gr_bias_48b7e_22_25_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:08:36 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.9903614,-0.1954143,9.612048,1.307773);
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
   
   Double_t curr_48b7e_gr_bias_std_fx6[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t curr_48b7e_gr_bias_std_fy6[9] = {
   1.174201,
   0.2175949,
   0.1219607,
   0.07597966,
   0.04679941,
   0.03111215,
   0.01979704,
   0.01415257,
   0.01224806};
   TGraph *graph = new TGraph(9,curr_48b7e_gr_bias_std_fx6,curr_48b7e_gr_bias_std_fy6);
   graph->SetName("curr_48b7e_gr_bias_std");
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
   
   TH1F *Graph_curr_48b7e_gr_bias_std6 = new TH1F("Graph_curr_48b7e_gr_bias_std6","Graph",100,0.2,9.8);
   Graph_curr_48b7e_gr_bias_std6->SetMinimum(0.01102326);
   Graph_curr_48b7e_gr_bias_std6->SetMaximum(1.290397);
   Graph_curr_48b7e_gr_bias_std6->SetDirectory(0);
   Graph_curr_48b7e_gr_bias_std6->SetStats(0);
   Graph_curr_48b7e_gr_bias_std6->SetLineStyle(0);
   Graph_curr_48b7e_gr_bias_std6->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_bias_std6->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_std6->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_std6->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_std6->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_std6->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_std6->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_std6->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_std6->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_std6->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_std6->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_std6->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_bias_std6->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_std6->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_std6->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_std6->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_std6->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_std6->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_std6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_bias_std6);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_bias_std_fx7[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_48b7e_gr_bias_std_fy7[9] = {
   1.173649,
   0.2160912,
   0.121004,
   0.07520707,
   0.04575674,
   0.02953168,
   0.01704698,
   0.009608348,
   0.005954111};
   graph = new TGraph(9,pu0_48b7e_gr_bias_std_fx7,pu0_48b7e_gr_bias_std_fy7);
   graph->SetName("pu0_48b7e_gr_bias_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_bias_std7 = new TH1F("Graph_pu0_48b7e_gr_bias_std7","Graph",100,0.2,9.8);
   Graph_pu0_48b7e_gr_bias_std7->SetMinimum(0.0053587);
   Graph_pu0_48b7e_gr_bias_std7->SetMaximum(1.290418);
   Graph_pu0_48b7e_gr_bias_std7->SetDirectory(0);
   Graph_pu0_48b7e_gr_bias_std7->SetStats(0);
   Graph_pu0_48b7e_gr_bias_std7->SetLineStyle(0);
   Graph_pu0_48b7e_gr_bias_std7->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_bias_std7->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_std7->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_std7->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_std7->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_std7->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_std7->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_std7->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_std7->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_std7->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_std7->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_std7->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_bias_std7->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_std7->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_std7->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_std7->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_std7->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_std7->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_std7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_bias_std7);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_bias_std_fx8[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_newavg_48b7e_gr_bias_std_fy8[9] = {
   1.144828,
   0.2116749,
   0.1186354,
   0.07373592,
   0.04510612,
   0.02946282,
   0.01790528,
   0.01177982,
   0.01138454};
   graph = new TGraph(9,pu0_newavg_48b7e_gr_bias_std_fx8,pu0_newavg_48b7e_gr_bias_std_fy8);
   graph->SetName("pu0_newavg_48b7e_gr_bias_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_bias_std8 = new TH1F("Graph_pu0_newavg_48b7e_gr_bias_std8","Graph",100,0.2,9.8);
   Graph_pu0_newavg_48b7e_gr_bias_std8->SetMinimum(0.01024608);
   Graph_pu0_newavg_48b7e_gr_bias_std8->SetMaximum(1.258173);
   Graph_pu0_newavg_48b7e_gr_bias_std8->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_bias_std8->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_bias_std8->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_bias_std8->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_std8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_bias_std8);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_bias_std_fx9[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s2_48b7e_gr_bias_std_fy9[9] = {
   1.133097,
   0.208095,
   0.1165583,
   0.07326222,
   0.04637573,
   0.03291487,
   0.02484648,
   0.02183833,
   0.02388034};
   graph = new TGraph(9,pu50s2_48b7e_gr_bias_std_fx9,pu50s2_48b7e_gr_bias_std_fy9);
   graph->SetName("pu50s2_48b7e_gr_bias_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_bias_std9 = new TH1F("Graph_pu50s2_48b7e_gr_bias_std9","Graph",100,0.2,9.8);
   Graph_pu50s2_48b7e_gr_bias_std9->SetMinimum(0.0196545);
   Graph_pu50s2_48b7e_gr_bias_std9->SetMaximum(1.244223);
   Graph_pu50s2_48b7e_gr_bias_std9->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_bias_std9->SetStats(0);
   Graph_pu50s2_48b7e_gr_bias_std9->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_bias_std9->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_bias_std9->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_std9->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_std9->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_std9->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_std9->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_std9->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_std9->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_std9->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_std9->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_std9->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_std9->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_bias_std9->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_std9->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_std9->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_std9->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_std9->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_std9->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_std9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_bias_std9);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_bias_std_fx10[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s30_48b7e_gr_bias_std_fy10[9] = {
   1.171734,
   0.2157913,
   0.1207939,
   0.07502971,
   0.04564063,
   0.02949088,
   0.01712439,
   0.009910874,
   0.006555169};
   graph = new TGraph(9,pu50s30_48b7e_gr_bias_std_fx10,pu50s30_48b7e_gr_bias_std_fy10);
   graph->SetName("pu50s30_48b7e_gr_bias_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_bias_std10 = new TH1F("Graph_pu50s30_48b7e_gr_bias_std10","Graph",100,0.2,9.8);
   Graph_pu50s30_48b7e_gr_bias_std10->SetMinimum(0.005899652);
   Graph_pu50s30_48b7e_gr_bias_std10->SetMaximum(1.288252);
   Graph_pu50s30_48b7e_gr_bias_std10->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_bias_std10->SetStats(0);
   Graph_pu50s30_48b7e_gr_bias_std10->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_bias_std10->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_bias_std10->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_std10->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_std10->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_std10->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_std10->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_std10->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_std10->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_std10->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_std10->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_std10->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_std10->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_bias_std10->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_std10->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_std10->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_std10->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_std10->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_std10->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_std10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_bias_std10);
   
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
   pt_LaTex = pt->AddText("1.8<|#eta|<2.3");
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
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
