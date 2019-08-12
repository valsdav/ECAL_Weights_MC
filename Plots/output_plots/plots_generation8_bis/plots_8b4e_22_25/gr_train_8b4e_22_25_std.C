void gr_train_8b4e_22_25_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:04:36 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.7415662,-0.2355974,8.535542,0.8074594);
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
   multigraph->SetTitle(";BX of signal;Fractional spread");
   
   Double_t curr_8b4e_gr_train_std_fx86[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t curr_8b4e_gr_train_std_fy86[8] = {
   0.1079602,
   0.2288808,
   0.2176471,
   0.1810932,
   0.1617754,
   0.1666407,
   0.1558267,
   0.1130897};
   TGraph *graph = new TGraph(8,curr_8b4e_gr_train_std_fx86,curr_8b4e_gr_train_std_fy86);
   graph->SetName("curr_8b4e_gr_train_std");
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
   
   TH1F *Graph_curr_8b4e_gr_train_std86 = new TH1F("Graph_curr_8b4e_gr_train_std86","Graph",100,0.3,8.7);
   Graph_curr_8b4e_gr_train_std86->SetMinimum(0.09586817);
   Graph_curr_8b4e_gr_train_std86->SetMaximum(0.2409728);
   Graph_curr_8b4e_gr_train_std86->SetDirectory(0);
   Graph_curr_8b4e_gr_train_std86->SetStats(0);
   Graph_curr_8b4e_gr_train_std86->SetLineStyle(0);
   Graph_curr_8b4e_gr_train_std86->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_train_std86->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_std86->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_std86->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_std86->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_std86->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_train_std86->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_train_std86->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_std86->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_std86->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_std86->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_std86->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_train_std86->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_train_std86->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_std86->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_std86->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_std86->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_std86->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_train_std86->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_train_std86);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_train_std_fx87[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu0_8b4e_gr_train_std_fy87[8] = {
   0.107432,
   0.2238974,
   0.2112228,
   0.1763658,
   0.1582557,
   0.1608259,
   0.1521652,
   0.1158659};
   graph = new TGraph(8,pu0_8b4e_gr_train_std_fx87,pu0_8b4e_gr_train_std_fy87);
   graph->SetName("pu0_8b4e_gr_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_train_std87 = new TH1F("Graph_pu0_8b4e_gr_train_std87","Graph",100,0.3,8.7);
   Graph_pu0_8b4e_gr_train_std87->SetMinimum(0.09578546);
   Graph_pu0_8b4e_gr_train_std87->SetMaximum(0.2355439);
   Graph_pu0_8b4e_gr_train_std87->SetDirectory(0);
   Graph_pu0_8b4e_gr_train_std87->SetStats(0);
   Graph_pu0_8b4e_gr_train_std87->SetLineStyle(0);
   Graph_pu0_8b4e_gr_train_std87->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_train_std87->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_std87->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_std87->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_std87->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_std87->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_train_std87->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_train_std87->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_std87->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_std87->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_std87->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_std87->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_train_std87->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_train_std87->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_std87->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_std87->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_std87->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_std87->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_train_std87->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_train_std87);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_train_std_fx88[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu0_newavg_8b4e_gr_train_std_fy88[8] = {
   0.0984991,
   0.2237204,
   0.2083796,
   0.1693892,
   0.1509398,
   0.1510256,
   0.1445035,
   0.1194052};
   graph = new TGraph(8,pu0_newavg_8b4e_gr_train_std_fx88,pu0_newavg_8b4e_gr_train_std_fy88);
   graph->SetName("pu0_newavg_8b4e_gr_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_train_std88 = new TH1F("Graph_pu0_newavg_8b4e_gr_train_std88","Graph",100,0.3,8.7);
   Graph_pu0_newavg_8b4e_gr_train_std88->SetMinimum(0.08597696);
   Graph_pu0_newavg_8b4e_gr_train_std88->SetMaximum(0.2362426);
   Graph_pu0_newavg_8b4e_gr_train_std88->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_train_std88->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_train_std88->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_train_std88->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_train_std88->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_train_std88);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_train_std_fx89[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu50s2_8b4e_gr_train_std_fy89[8] = {
   0.103797,
   0.2139221,
   0.1998611,
   0.1663805,
   0.1494299,
   0.1511853,
   0.146091,
   0.1165442};
   graph = new TGraph(8,pu50s2_8b4e_gr_train_std_fx89,pu50s2_8b4e_gr_train_std_fy89);
   graph->SetName("pu50s2_8b4e_gr_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_train_std89 = new TH1F("Graph_pu50s2_8b4e_gr_train_std89","Graph",100,0.3,8.7);
   Graph_pu50s2_8b4e_gr_train_std89->SetMinimum(0.09278443);
   Graph_pu50s2_8b4e_gr_train_std89->SetMaximum(0.2249347);
   Graph_pu50s2_8b4e_gr_train_std89->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_train_std89->SetStats(0);
   Graph_pu50s2_8b4e_gr_train_std89->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_train_std89->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_train_std89->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_std89->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_std89->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_std89->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_std89->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_train_std89->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_train_std89->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_std89->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_std89->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_std89->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_std89->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_train_std89->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_train_std89->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_std89->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_std89->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_std89->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_std89->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_train_std89->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_train_std89);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_train_std_fx90[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu50s30_8b4e_gr_train_std_fy90[8] = {
   0.1071885,
   0.2236143,
   0.210985,
   0.1760016,
   0.1570761,
   0.1605566,
   0.1520606,
   0.115714};
   graph = new TGraph(8,pu50s30_8b4e_gr_train_std_fx90,pu50s30_8b4e_gr_train_std_fy90);
   graph->SetName("pu50s30_8b4e_gr_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_train_std90 = new TH1F("Graph_pu50s30_8b4e_gr_train_std90","Graph",100,0.3,8.7);
   Graph_pu50s30_8b4e_gr_train_std90->SetMinimum(0.09554595);
   Graph_pu50s30_8b4e_gr_train_std90->SetMaximum(0.2352568);
   Graph_pu50s30_8b4e_gr_train_std90->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_train_std90->SetStats(0);
   Graph_pu50s30_8b4e_gr_train_std90->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_train_std90->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_train_std90->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_std90->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_std90->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_std90->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_std90->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_train_std90->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_train_std90->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_std90->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_std90->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_std90->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_std90->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_train_std90->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_train_std90->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_std90->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_std90->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_std90->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_std90->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_train_std90->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_train_std90);
   
   multigraph->Add(graph,"");
   multigraph->Draw("APL");
   multigraph->GetXaxis()->SetTitle("BX of signal");
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
   entry=leg->AddEntry("pu50s2_8b4e_gr_train_mean","#splitline{PU optimized}{(PU=50, ET=2GeV)}","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_8b4e_gr_train_mean","#splitline{PU optimized}{(PU=50, ET=30GeV)}","lp");

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
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
