void gr_bias_Asf_8b4e_22_25_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:04:28 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.4927711,-0.1721497,7.459036,0.2722411);
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
   
   Double_t curr_8b4e_gr_bias_Asf_mean_fx11[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t curr_8b4e_gr_bias_Asf_mean_fy11[7] = {
   0.0362874,
   0.01174984,
   0.01805645,
   0.02056617,
   0.02235182,
   0.02350655,
   0.02406954};
   TGraph *graph = new TGraph(7,curr_8b4e_gr_bias_Asf_mean_fx11,curr_8b4e_gr_bias_Asf_mean_fy11);
   graph->SetName("curr_8b4e_gr_bias_Asf_mean");
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
   
   TH1F *Graph_curr_8b4e_gr_bias_Asf_mean11 = new TH1F("Graph_curr_8b4e_gr_bias_Asf_mean11","Graph",100,0.4,7.6);
   Graph_curr_8b4e_gr_bias_Asf_mean11->SetMinimum(0.009296082);
   Graph_curr_8b4e_gr_bias_Asf_mean11->SetMaximum(0.03874116);
   Graph_curr_8b4e_gr_bias_Asf_mean11->SetDirectory(0);
   Graph_curr_8b4e_gr_bias_Asf_mean11->SetStats(0);
   Graph_curr_8b4e_gr_bias_Asf_mean11->SetLineStyle(0);
   Graph_curr_8b4e_gr_bias_Asf_mean11->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_Asf_mean11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_bias_Asf_mean11);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_bias_Asf_mean_fx12[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_8b4e_gr_bias_Asf_mean_fy12[7] = {
   -0.006970481,
   -0.01437889,
   -0.007656705,
   -0.005033737,
   -0.003172061,
   -0.001921974,
   -0.001289799};
   graph = new TGraph(7,pu0_8b4e_gr_bias_Asf_mean_fx12,pu0_8b4e_gr_bias_Asf_mean_fy12);
   graph->SetName("pu0_8b4e_gr_bias_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_bias_Asf_mean12 = new TH1F("Graph_pu0_8b4e_gr_bias_Asf_mean12","Graph",100,0.4,7.6);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->SetMinimum(-0.0156878);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->SetMaximum(1.910954e-05);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->SetDirectory(0);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->SetStats(0);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->SetLineStyle(0);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_Asf_mean12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_bias_Asf_mean12);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_bias_Asf_mean_fx13[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_newavg_8b4e_gr_bias_Asf_mean_fy13[7] = {
   0.04599315,
   0.03451041,
   0.04131842,
   0.04405277,
   0.04600615,
   0.04710273,
   0.04770385};
   graph = new TGraph(7,pu0_newavg_8b4e_gr_bias_Asf_mean_fx13,pu0_newavg_8b4e_gr_bias_Asf_mean_fy13);
   graph->SetName("pu0_newavg_8b4e_gr_bias_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13 = new TH1F("Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13","Graph",100,0.4,7.6);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->SetMinimum(0.03319107);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->SetMaximum(0.0490232);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_bias_Asf_mean13);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_bias_Asf_mean_fx14[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s2_8b4e_gr_bias_Asf_mean_fy14[7] = {
   0.06673528,
   0.05997065,
   0.06826536,
   0.07148837,
   0.07365238,
   0.07504985,
   0.07576411};
   graph = new TGraph(7,pu50s2_8b4e_gr_bias_Asf_mean_fx14,pu50s2_8b4e_gr_bias_Asf_mean_fy14);
   graph->SetName("pu50s2_8b4e_gr_bias_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_bias_Asf_mean14 = new TH1F("Graph_pu50s2_8b4e_gr_bias_Asf_mean14","Graph",100,0.4,7.6);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->SetMinimum(0.0583913);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->SetMaximum(0.07734346);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->SetStats(0);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_Asf_mean14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_bias_Asf_mean14);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_bias_Asf_mean_fx15[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s30_8b4e_gr_bias_Asf_mean_fy15[7] = {
   -0.0008042873,
   -0.009366722,
   -0.002655915,
   -5.814645e-06,
   0.001866184,
   0.003122737,
   0.003734175};
   graph = new TGraph(7,pu50s30_8b4e_gr_bias_Asf_mean_fx15,pu50s30_8b4e_gr_bias_Asf_mean_fy15);
   graph->SetName("pu50s30_8b4e_gr_bias_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_bias_Asf_mean15 = new TH1F("Graph_pu50s30_8b4e_gr_bias_Asf_mean15","Graph",100,0.4,7.6);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->SetMinimum(-0.01067681);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->SetMaximum(0.005044265);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->SetStats(0);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_Asf_mean15->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_bias_Asf_mean15);
   
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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
