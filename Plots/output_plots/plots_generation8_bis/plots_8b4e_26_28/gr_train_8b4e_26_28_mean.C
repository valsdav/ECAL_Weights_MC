void gr_train_8b4e_26_28_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:46:48 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.7415662,-0.4370044,8.535542,1.001643);
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
   multigraph->SetTitle(";BX of signal;Fractional bias");
   
   Double_t curr_8b4e_gr_train_mean_fx81[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t curr_8b4e_gr_train_mean_fy81[8] = {
   0.0174951,
   0.1918245,
   0.1847002,
   0.122204,
   0.06864044,
   0.02445302,
   -0.04018128,
   -0.1158628};
   TGraph *graph = new TGraph(8,curr_8b4e_gr_train_mean_fx81,curr_8b4e_gr_train_mean_fy81);
   graph->SetName("curr_8b4e_gr_train_mean");
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
   
   TH1F *Graph_curr_8b4e_gr_train_mean81 = new TH1F("Graph_curr_8b4e_gr_train_mean81","Graph",100,0.3,8.7);
   Graph_curr_8b4e_gr_train_mean81->SetMinimum(-0.1466315);
   Graph_curr_8b4e_gr_train_mean81->SetMaximum(0.2225932);
   Graph_curr_8b4e_gr_train_mean81->SetDirectory(0);
   Graph_curr_8b4e_gr_train_mean81->SetStats(0);
   Graph_curr_8b4e_gr_train_mean81->SetLineStyle(0);
   Graph_curr_8b4e_gr_train_mean81->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_train_mean81->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_mean81->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_mean81->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_mean81->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_mean81->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_train_mean81->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_train_mean81->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_mean81->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_mean81->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_mean81->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_mean81->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_train_mean81->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_train_mean81->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_mean81->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_mean81->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_mean81->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_mean81->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_train_mean81->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_train_mean81);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_train_mean_fx82[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu0_8b4e_gr_train_mean_fy82[8] = {
   -0.0174106,
   0.1467316,
   0.1393245,
   0.08067782,
   0.02952752,
   -0.01361406,
   -0.0752202,
   -0.1499802};
   graph = new TGraph(8,pu0_8b4e_gr_train_mean_fx82,pu0_8b4e_gr_train_mean_fy82);
   graph->SetName("pu0_8b4e_gr_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_train_mean82 = new TH1F("Graph_pu0_8b4e_gr_train_mean82","Graph",100,0.3,8.7);
   Graph_pu0_8b4e_gr_train_mean82->SetMinimum(-0.1796513);
   Graph_pu0_8b4e_gr_train_mean82->SetMaximum(0.1764028);
   Graph_pu0_8b4e_gr_train_mean82->SetDirectory(0);
   Graph_pu0_8b4e_gr_train_mean82->SetStats(0);
   Graph_pu0_8b4e_gr_train_mean82->SetLineStyle(0);
   Graph_pu0_8b4e_gr_train_mean82->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_train_mean82->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_mean82->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_mean82->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_mean82->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_mean82->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_train_mean82->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_train_mean82->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_mean82->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_mean82->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_mean82->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_mean82->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_train_mean82->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_train_mean82->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_mean82->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_mean82->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_mean82->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_mean82->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_train_mean82->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_train_mean82);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_train_mean_fx83[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu0_newavg_8b4e_gr_train_mean_fy83[8] = {
   0.02620546,
   0.2079234,
   0.2063912,
   0.1424283,
   0.08658499,
   0.03913913,
   -0.0259706,
   -0.108813};
   graph = new TGraph(8,pu0_newavg_8b4e_gr_train_mean_fx83,pu0_newavg_8b4e_gr_train_mean_fy83);
   graph->SetName("pu0_newavg_8b4e_gr_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_train_mean83 = new TH1F("Graph_pu0_newavg_8b4e_gr_train_mean83","Graph",100,0.3,8.7);
   Graph_pu0_newavg_8b4e_gr_train_mean83->SetMinimum(-0.1404866);
   Graph_pu0_newavg_8b4e_gr_train_mean83->SetMaximum(0.2395971);
   Graph_pu0_newavg_8b4e_gr_train_mean83->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_train_mean83->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_train_mean83->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_train_mean83->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_train_mean83->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_train_mean83);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_train_mean_fx84[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu50s2_8b4e_gr_train_mean_fy84[8] = {
   0.1126406,
   0.2817306,
   0.2769644,
   0.2185404,
   0.1620183,
   0.112449,
   0.04951959,
   -0.04012144};
   graph = new TGraph(8,pu50s2_8b4e_gr_train_mean_fx84,pu50s2_8b4e_gr_train_mean_fy84);
   graph->SetName("pu50s2_8b4e_gr_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_train_mean84 = new TH1F("Graph_pu50s2_8b4e_gr_train_mean84","Graph",100,0.3,8.7);
   Graph_pu50s2_8b4e_gr_train_mean84->SetMinimum(-0.07230664);
   Graph_pu50s2_8b4e_gr_train_mean84->SetMaximum(0.3139158);
   Graph_pu50s2_8b4e_gr_train_mean84->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_train_mean84->SetStats(0);
   Graph_pu50s2_8b4e_gr_train_mean84->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_train_mean84->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_train_mean84->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_mean84->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_mean84->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_mean84->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_mean84->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_train_mean84->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_train_mean84->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_mean84->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_mean84->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_mean84->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_mean84->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_train_mean84->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_train_mean84->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_mean84->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_mean84->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_mean84->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_mean84->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_train_mean84->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_train_mean84);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_train_mean_fx85[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu50s30_8b4e_gr_train_mean_fy85[8] = {
   -0.003325549,
   0.1634188,
   0.1558174,
   0.09625232,
   0.04417711,
   0.0003805841,
   -0.06233843,
   -0.1383931};
   graph = new TGraph(8,pu50s30_8b4e_gr_train_mean_fx85,pu50s30_8b4e_gr_train_mean_fy85);
   graph->SetName("pu50s30_8b4e_gr_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_train_mean85 = new TH1F("Graph_pu50s30_8b4e_gr_train_mean85","Graph",100,0.3,8.7);
   Graph_pu50s30_8b4e_gr_train_mean85->SetMinimum(-0.1685743);
   Graph_pu50s30_8b4e_gr_train_mean85->SetMaximum(0.1935999);
   Graph_pu50s30_8b4e_gr_train_mean85->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_train_mean85->SetStats(0);
   Graph_pu50s30_8b4e_gr_train_mean85->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_train_mean85->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_train_mean85->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_mean85->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_mean85->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_mean85->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_mean85->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_train_mean85->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_train_mean85->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_mean85->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_mean85->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_mean85->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_mean85->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_train_mean85->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_train_mean85->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_mean85->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_mean85->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_mean85->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_mean85->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_train_mean85->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_train_mean85);
   
   multigraph->Add(graph,"");
   multigraph->Draw("APL");
   multigraph->GetXaxis()->SetTitle("BX of signal");
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
   TLegendEntry *entry=leg->AddEntry("curr_8b4e_gr_train_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_8b4e_gr_train_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_8b4e_gr_train_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_8b4e_gr_train_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_8b4e_gr_train_mean","PU optimized","lp");

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
