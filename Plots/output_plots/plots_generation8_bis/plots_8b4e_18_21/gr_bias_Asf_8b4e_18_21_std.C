void gr_bias_Asf_8b4e_18_21_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:04:43 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.4927711,-0.1777736,7.459036,1.189716);
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
   
   Double_t curr_8b4e_gr_bias_Asf_std_fx16[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t curr_8b4e_gr_bias_Asf_std_fy16[7] = {
   1.065139,
   0.15081,
   0.08158827,
   0.05494375,
   0.03565454,
   0.0230929,
   0.01725407};
   TGraph *graph = new TGraph(7,curr_8b4e_gr_bias_Asf_std_fx16,curr_8b4e_gr_bias_Asf_std_fy16);
   graph->SetName("curr_8b4e_gr_bias_Asf_std");
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
   
   TH1F *Graph_curr_8b4e_gr_bias_Asf_std16 = new TH1F("Graph_curr_8b4e_gr_bias_Asf_std16","Graph",100,0.4,7.6);
   Graph_curr_8b4e_gr_bias_Asf_std16->SetMinimum(0.01552866);
   Graph_curr_8b4e_gr_bias_Asf_std16->SetMaximum(1.169928);
   Graph_curr_8b4e_gr_bias_Asf_std16->SetDirectory(0);
   Graph_curr_8b4e_gr_bias_Asf_std16->SetStats(0);
   Graph_curr_8b4e_gr_bias_Asf_std16->SetLineStyle(0);
   Graph_curr_8b4e_gr_bias_Asf_std16->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_Asf_std16->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_bias_Asf_std16);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_bias_Asf_std_fx17[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_8b4e_gr_bias_Asf_std_fy17[7] = {
   1.068654,
   0.1500551,
   0.08087482,
   0.05412034,
   0.03448942,
   0.02134106,
   0.01492057};
   graph = new TGraph(7,pu0_8b4e_gr_bias_Asf_std_fx17,pu0_8b4e_gr_bias_Asf_std_fy17);
   graph->SetName("pu0_8b4e_gr_bias_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_bias_Asf_std17 = new TH1F("Graph_pu0_8b4e_gr_bias_Asf_std17","Graph",100,0.4,7.6);
   Graph_pu0_8b4e_gr_bias_Asf_std17->SetMinimum(0.01342852);
   Graph_pu0_8b4e_gr_bias_Asf_std17->SetMaximum(1.174028);
   Graph_pu0_8b4e_gr_bias_Asf_std17->SetDirectory(0);
   Graph_pu0_8b4e_gr_bias_Asf_std17->SetStats(0);
   Graph_pu0_8b4e_gr_bias_Asf_std17->SetLineStyle(0);
   Graph_pu0_8b4e_gr_bias_Asf_std17->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_Asf_std17->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_bias_Asf_std17);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_bias_Asf_std_fx18[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_newavg_8b4e_gr_bias_Asf_std_fy18[7] = {
   1.038614,
   0.1474173,
   0.07967591,
   0.05352779,
   0.03442763,
   0.02147295,
   0.01552911};
   graph = new TGraph(7,pu0_newavg_8b4e_gr_bias_Asf_std_fx18,pu0_newavg_8b4e_gr_bias_Asf_std_fy18);
   graph->SetName("pu0_newavg_8b4e_gr_bias_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_bias_Asf_std18 = new TH1F("Graph_pu0_newavg_8b4e_gr_bias_Asf_std18","Graph",100,0.4,7.6);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->SetMinimum(0.0139762);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->SetMaximum(1.140922);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_std18->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_bias_Asf_std18);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_bias_Asf_std_fx19[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s2_8b4e_gr_bias_Asf_std_fy19[7] = {
   1.048866,
   0.1487183,
   0.08046025,
   0.054169,
   0.03510995,
   0.02253081,
   0.01667807};
   graph = new TGraph(7,pu50s2_8b4e_gr_bias_Asf_std_fx19,pu50s2_8b4e_gr_bias_Asf_std_fy19);
   graph->SetName("pu50s2_8b4e_gr_bias_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_bias_Asf_std19 = new TH1F("Graph_pu50s2_8b4e_gr_bias_Asf_std19","Graph",100,0.4,7.6);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->SetMinimum(0.01501026);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->SetMaximum(1.152085);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->SetStats(0);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_Asf_std19->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_bias_Asf_std19);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_bias_Asf_std_fx20[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s30_8b4e_gr_bias_Asf_std_fy20[7] = {
   1.067071,
   0.149993,
   0.0808567,
   0.05410688,
   0.03451808,
   0.02140203,
   0.0150339};
   graph = new TGraph(7,pu50s30_8b4e_gr_bias_Asf_std_fx20,pu50s30_8b4e_gr_bias_Asf_std_fy20);
   graph->SetName("pu50s30_8b4e_gr_bias_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_bias_Asf_std20 = new TH1F("Graph_pu50s30_8b4e_gr_bias_Asf_std20","Graph",100,0.4,7.6);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->SetMinimum(0.01353051);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->SetMaximum(1.172275);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->SetStats(0);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_Asf_std20->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_bias_Asf_std20);
   
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
   TLegendEntry *entry=leg->AddEntry("curr_8b4e_gr_bias_Asf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_8b4e_gr_bias_Asf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_8b4e_gr_bias_Asf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_8b4e_gr_bias_Asf_mean","#splitline{PU optimized}{(PU=50, ET=2GeV)}","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_8b4e_gr_bias_Asf_mean","#splitline{PU optimized}{(PU=50, ET=30GeV)}","lp");

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
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
