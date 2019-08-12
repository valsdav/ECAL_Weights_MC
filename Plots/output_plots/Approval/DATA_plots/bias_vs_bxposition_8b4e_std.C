void bias_vs_bxposition_8b4e_std()
{
//=========Macro generated from canvas: c10/c10
//=========  (Wed Jul  3 11:06:23 2019) by ROOT version 6.16/00
   TCanvas *c10 = new TCanvas("c10", "c10",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c10->SetHighLightColor(2);
   c10->Range(-1.218072,0.3573171,8.90241,1.454878);
   c10->SetFillColor(0);
   c10->SetBorderMode(0);
   c10->SetBorderSize(2);
   c10->SetGridy();
   c10->SetTickx(1);
   c10->SetTicky(1);
   c10->SetLeftMargin(0.15);
   c10->SetRightMargin(0.02);
   c10->SetTopMargin(0.05);
   c10->SetBottomMargin(0.13);
   c10->SetFrameFillStyle(0);
   c10->SetFrameBorderMode(0);
   c10->SetFrameFillStyle(0);
   c10->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1018[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t Graph0_fy1018[8] = {
   0.7692686,
   0.7714899,
   0.7706537,
   0.7860641,
   0.7958494,
   0.7985049,
   0.8138708,
   0.889189};
   Double_t Graph0_fex1018[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1018[8] = {
   0.7692686,
   0.7714899,
   0.7706537,
   0.7860641,
   0.7958494,
   0.7985049,
   0.8138708,
   0.889189};
   TGraphErrors *gre = new TGraphErrors(8,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle(";BX Position;Fractional spread");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1183;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9933");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9933");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph010051018 = new TH1F("Graph_Graph_Graph010051018","",100,0.3,8.7);
   Graph_Graph_Graph010051018->SetMinimum(0.5);
   Graph_Graph_Graph010051018->SetMaximum(1.4);
   Graph_Graph_Graph010051018->SetDirectory(0);
   Graph_Graph_Graph010051018->SetStats(0);
   Graph_Graph_Graph010051018->SetLineStyle(0);
   Graph_Graph_Graph010051018->SetMarkerStyle(20);
   Graph_Graph_Graph010051018->GetXaxis()->SetTitle("BX Position");
   Graph_Graph_Graph010051018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010051018->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph010051018->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph010051018->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph010051018->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010051018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010051018->GetYaxis()->SetTitle("Fractional spread");
   Graph_Graph_Graph010051018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010051018->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph010051018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph010051018->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph010051018->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010051018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010051018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010051018->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph010051018->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph010051018->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph010051018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010051018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010051018);
   
   gre->Draw("aplx");
   
   Double_t Graph1_fx1019[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t Graph1_fy1019[8] = {
   0.7489303,
   0.738542,
   0.7906437,
   0.7938409,
   0.8323433,
   0.8072281,
   0.8052195,
   0.9231415};
   Double_t Graph1_fex1019[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1019[8] = {
   0.7489303,
   0.738542,
   0.7906437,
   0.7938409,
   0.8323433,
   0.8072281,
   0.8052195,
   0.9231415};
   gre = new TGraphErrors(8,Graph1_fx1019,Graph1_fy1019,Graph1_fex1019,Graph1_fey1019);
   gre->SetName("Graph1");
   gre->SetTitle("New Avg: TP-eRec vs BXposition in EE for 8b4e;BX position; TP - eRec [GeV]");

   ci = 1184;
   color = new TColor(ci, 0, 0, 0, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph110061019 = new TH1F("Graph_Graph_Graph110061019","New Avg: TP-eRec vs BXposition in EE for 8b4e",100,0.3,8.7);
   Graph_Graph_Graph110061019->SetMinimum(0);
   Graph_Graph_Graph110061019->SetMaximum(2.030911);
   Graph_Graph_Graph110061019->SetDirectory(0);
   Graph_Graph_Graph110061019->SetStats(0);
   Graph_Graph_Graph110061019->SetLineStyle(0);
   Graph_Graph_Graph110061019->SetMarkerStyle(20);
   Graph_Graph_Graph110061019->GetXaxis()->SetTitle("BX position");
   Graph_Graph_Graph110061019->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph110061019->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph110061019->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph110061019->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph110061019->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph110061019->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph110061019->GetYaxis()->SetTitle(" TP - eRec [GeV]");
   Graph_Graph_Graph110061019->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph110061019->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph110061019->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph110061019->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph110061019->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph110061019->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph110061019->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph110061019->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph110061019->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph110061019->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph110061019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph110061019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph110061019);
   
   gre->Draw("pxl ");
   
   Double_t Graph2_fx1020[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t Graph2_fy1020[8] = {
   0.7691423,
   0.771487,
   0.7931842,
   0.8053277,
   0.8415141,
   0.8128887,
   0.801491,
   0.732428};
   Double_t Graph2_fex1020[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1020[8] = {
   0.7691423,
   0.771487,
   0.7931842,
   0.8053277,
   0.8415141,
   0.8128887,
   0.801491,
   0.732428};
   gre = new TGraphErrors(8,Graph2_fx1020,Graph2_fy1020,Graph2_fex1020,Graph2_fey1020);
   gre->SetName("Graph2");
   gre->SetTitle("Per Strip: TP-eRec vs BXposition in EE for 8b4e;BX position; TP - eRec [GeV]");

   ci = 1185;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph210071020 = new TH1F("Graph_Graph_Graph210071020","Per Strip: TP-eRec vs BXposition in EE for 8b4e",100,0.3,8.7);
   Graph_Graph_Graph210071020->SetMinimum(0);
   Graph_Graph_Graph210071020->SetMaximum(1.851331);
   Graph_Graph_Graph210071020->SetDirectory(0);
   Graph_Graph_Graph210071020->SetStats(0);
   Graph_Graph_Graph210071020->SetLineStyle(0);
   Graph_Graph_Graph210071020->SetMarkerStyle(20);
   Graph_Graph_Graph210071020->GetXaxis()->SetTitle("BX position");
   Graph_Graph_Graph210071020->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph210071020->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph210071020->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph210071020->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph210071020->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph210071020->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph210071020->GetYaxis()->SetTitle(" TP - eRec [GeV]");
   Graph_Graph_Graph210071020->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph210071020->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph210071020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph210071020->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph210071020->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph210071020->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph210071020->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph210071020->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph210071020->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph210071020->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph210071020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph210071020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph210071020);
   
   gre->Draw("pxl ");
   
   Double_t Graph3_fx1021[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t Graph3_fy1021[8] = {
   0.7133369,
   0.7208775,
   0.7477192,
   0.7340827,
   0.7614533,
   0.7624045,
   0.7457247,
   0.6284313};
   Double_t Graph3_fex1021[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1021[8] = {
   0.7133369,
   0.7208775,
   0.7477192,
   0.7340827,
   0.7614533,
   0.7624045,
   0.7457247,
   0.6284313};
   gre = new TGraphErrors(8,Graph3_fx1021,Graph3_fy1021,Graph3_fex1021,Graph3_fey1021);
   gre->SetName("Graph3");
   gre->SetTitle("Per Strip: TP-eRec vs BXposition in EE for 8b4e;BX position; TP - eRec [GeV]");

   ci = 1186;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph310081021 = new TH1F("Graph_Graph_Graph310081021","Per Strip: TP-eRec vs BXposition in EE for 8b4e",100,0.3,8.7);
   Graph_Graph_Graph310081021->SetMinimum(0);
   Graph_Graph_Graph310081021->SetMaximum(1.67729);
   Graph_Graph_Graph310081021->SetDirectory(0);
   Graph_Graph_Graph310081021->SetStats(0);
   Graph_Graph_Graph310081021->SetLineStyle(0);
   Graph_Graph_Graph310081021->SetMarkerStyle(20);
   Graph_Graph_Graph310081021->GetXaxis()->SetTitle("BX position");
   Graph_Graph_Graph310081021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph310081021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph310081021->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph310081021->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph310081021->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph310081021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph310081021->GetYaxis()->SetTitle(" TP - eRec [GeV]");
   Graph_Graph_Graph310081021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph310081021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph310081021->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph310081021->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph310081021->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph310081021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph310081021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph310081021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph310081021->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph310081021->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph310081021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph310081021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph310081021);
   
   gre->Draw("pxl ");
   
   Double_t Graph4_fx1022[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t Graph4_fy1022[8] = {
   0.7646474,
   0.7591182,
   0.7881925,
   0.8058598,
   0.8311483,
   0.8215093,
   0.8063293,
   0.7238088};
   Double_t Graph4_fex1022[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1022[8] = {
   0.7646474,
   0.7591182,
   0.7881925,
   0.8058598,
   0.8311483,
   0.8215093,
   0.8063293,
   0.7238088};
   gre = new TGraphErrors(8,Graph4_fx1022,Graph4_fy1022,Graph4_fex1022,Graph4_fey1022);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph410091022 = new TH1F("Graph_Graph_Graph410091022","Graph",100,0.3,8.7);
   Graph_Graph_Graph410091022->SetMinimum(0);
   Graph_Graph_Graph410091022->SetMaximum(1.828526);
   Graph_Graph_Graph410091022->SetDirectory(0);
   Graph_Graph_Graph410091022->SetStats(0);
   Graph_Graph_Graph410091022->SetLineStyle(0);
   Graph_Graph_Graph410091022->SetMarkerStyle(20);
   Graph_Graph_Graph410091022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph410091022->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph410091022->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph410091022->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph410091022->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph410091022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph410091022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph410091022->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph410091022->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph410091022->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph410091022->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph410091022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph410091022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph410091022->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph410091022->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph410091022->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph410091022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph410091022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph410091022);
   
   gre->Draw("pxl ");
   
   TLegend *leg = new TLegend(0.69,0.54,0.95,0.92,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph2","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph3","PU optimized","lp");

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
   entry=leg->AddEntry("Graph4","PU optimized","lp");

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
   TText *pt_LaTex = pt->AddText("Run 306456");
   pt_LaTex = pt->AddText("PU=50");
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
      tex = new TLatex(0.2164,0.96,"Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0304);
   tex->SetLineWidth(2);
   tex->Draw();
   c10->Modified();
   c10->cd();
   c10->SetSelected(c10);
}
