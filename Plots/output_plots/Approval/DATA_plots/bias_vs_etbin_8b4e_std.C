void bias_vs_etbin_8b4e_std()
{
//=========Macro generated from canvas: c10/c5
//=========  (Wed Jul  3 11:08:17 2019) by ROOT version 6.16/00
   TCanvas *c10 = new TCanvas("c10", "c5",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c10->SetHighLightColor(2);
   c10->Range(-0.9012048,-0.07439024,7.773494,1.267073);
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
   
   Double_t Graph0_fx1026[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1026[7] = {
   0.8059145,
   0.5477996,
   0.5362722,
   0.4041383,
   0.3219054,
   0.338992,
   0.4369992};
   Double_t Graph0_fex1026[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1026[7] = {
   0.8059145,
   0.5477996,
   0.5362722,
   0.4041383,
   0.3219054,
   0.338992,
   0.4369992};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1026,Graph0_fy1026,Graph0_fex1026,Graph0_fey1026);
   gre->SetName("Graph0");
   gre->SetTitle(";Energy [GeV];Fractional spread");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
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
   
   TH1F *Graph_Graph_Graph_Graph0100610161026 = new TH1F("Graph_Graph_Graph_Graph0100610161026","",100,0.4,7.6);
   Graph_Graph_Graph_Graph0100610161026->SetMinimum(0.1);
   Graph_Graph_Graph_Graph0100610161026->SetMaximum(1.2);
   Graph_Graph_Graph_Graph0100610161026->SetDirectory(0);
   Graph_Graph_Graph_Graph0100610161026->SetStats(0);
   Graph_Graph_Graph_Graph0100610161026->SetLineStyle(0);
   Graph_Graph_Graph_Graph0100610161026->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0100610161026->GetXaxis()->SetTitle("Energy [GeV]");
   Graph_Graph_Graph_Graph0100610161026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100610161026->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0100610161026->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0100610161026->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0100610161026->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0100610161026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph0100610161026->GetYaxis()->SetTitle("Fractional spread");
   Graph_Graph_Graph_Graph0100610161026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100610161026->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0100610161026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0100610161026->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0100610161026->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph0100610161026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph0100610161026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100610161026->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0100610161026->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0100610161026->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0100610161026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0100610161026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph0100610161026);
   
   gre->Draw("aplx");
   
   Double_t Graph1_fx1027[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph1_fy1027[7] = {
   0.7036831,
   0.5162286,
   0.4655538,
   0.371953,
   0.3058661,
   0.3527457,
   0.4119771};
   Double_t Graph1_fex1027[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1027[7] = {
   0.7036831,
   0.5162286,
   0.4655538,
   0.371953,
   0.3058661,
   0.3527457,
   0.4119771};
   gre = new TGraphErrors(7,Graph1_fx1027,Graph1_fy1027,Graph1_fex1027,Graph1_fey1027);
   gre->SetName("Graph1");
   gre->SetTitle("Current TP-eRec vs Eta Ring in EE;Eta Ring; TP - eRec [GeV]");

   ci = 1185;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9933");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9933");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph_Graph1100710171027 = new TH1F("Graph_Graph_Graph_Graph1100710171027","Current TP-eRec vs Eta Ring in EE",100,0.4,7.6);
   Graph_Graph_Graph_Graph1100710171027->SetMinimum(0);
   Graph_Graph_Graph_Graph1100710171027->SetMaximum(1.548103);
   Graph_Graph_Graph_Graph1100710171027->SetDirectory(0);
   Graph_Graph_Graph_Graph1100710171027->SetStats(0);
   Graph_Graph_Graph_Graph1100710171027->SetLineStyle(0);
   Graph_Graph_Graph_Graph1100710171027->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1100710171027->GetXaxis()->SetTitle("Eta Ring");
   Graph_Graph_Graph_Graph1100710171027->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1100710171027->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1100710171027->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph1100710171027->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph1100710171027->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1100710171027->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1100710171027->GetYaxis()->SetTitle(" TP - eRec [GeV]");
   Graph_Graph_Graph_Graph1100710171027->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1100710171027->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1100710171027->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph1100710171027->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph1100710171027->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph1100710171027->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1100710171027->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1100710171027->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1100710171027->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph1100710171027->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph1100710171027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1100710171027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph1100710171027);
   
   gre->Draw("pxl ");
   
   Double_t Graph2_fx1028[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph2_fy1028[7] = {
   0.8400673,
   0.5618653,
   0.5315882,
   0.4209046,
   0.3421728,
   0.3312821,
   0.269458};
   Double_t Graph2_fex1028[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1028[7] = {
   0.8400673,
   0.5618653,
   0.5315882,
   0.4209046,
   0.3421728,
   0.3312821,
   0.269458};
   gre = new TGraphErrors(7,Graph2_fx1028,Graph2_fy1028,Graph2_fex1028,Graph2_fey1028);
   gre->SetName("Graph2");
   gre->SetTitle("Per Strip TP-eRec vs Eta Ring in EE;Eta Ring; TP - eRec [GeV]");

   ci = 1186;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph_Graph2100810181028 = new TH1F("Graph_Graph_Graph_Graph2100810181028","Per Strip TP-eRec vs Eta Ring in EE",100,0.4,7.6);
   Graph_Graph_Graph_Graph2100810181028->SetMinimum(0);
   Graph_Graph_Graph_Graph2100810181028->SetMaximum(1.848148);
   Graph_Graph_Graph_Graph2100810181028->SetDirectory(0);
   Graph_Graph_Graph_Graph2100810181028->SetStats(0);
   Graph_Graph_Graph_Graph2100810181028->SetLineStyle(0);
   Graph_Graph_Graph_Graph2100810181028->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph2100810181028->GetXaxis()->SetTitle("Eta Ring");
   Graph_Graph_Graph_Graph2100810181028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2100810181028->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph2100810181028->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph2100810181028->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph2100810181028->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph2100810181028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph2100810181028->GetYaxis()->SetTitle(" TP - eRec [GeV]");
   Graph_Graph_Graph_Graph2100810181028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2100810181028->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph2100810181028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph2100810181028->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph2100810181028->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph2100810181028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph2100810181028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2100810181028->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph2100810181028->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph2100810181028->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph2100810181028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph2100810181028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph2100810181028);
   
   gre->Draw("pxl ");
   
   Double_t Graph3_fx1029[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph3_fy1029[7] = {
   0.8033487,
   0.5174581,
   0.4880332,
   0.4220203,
   0.3562049,
   0.3210288,
   0.2759895};
   Double_t Graph3_fex1029[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1029[7] = {
   0.8033487,
   0.5174581,
   0.4880332,
   0.4220203,
   0.3562049,
   0.3210288,
   0.2759895};
   gre = new TGraphErrors(7,Graph3_fx1029,Graph3_fy1029,Graph3_fex1029,Graph3_fey1029);
   gre->SetName("Graph3");
   gre->SetTitle("PU 30 S2 per strip TP-eRec vs Eta Ring in EE;Eta Ring; TP - eRec [GeV]");

   ci = 1187;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph_Graph3100910191029 = new TH1F("Graph_Graph_Graph_Graph3100910191029","PU 30 S2 per strip TP-eRec vs Eta Ring in EE",100,0.4,7.6);
   Graph_Graph_Graph_Graph3100910191029->SetMinimum(0);
   Graph_Graph_Graph_Graph3100910191029->SetMaximum(1.767367);
   Graph_Graph_Graph_Graph3100910191029->SetDirectory(0);
   Graph_Graph_Graph_Graph3100910191029->SetStats(0);
   Graph_Graph_Graph_Graph3100910191029->SetLineStyle(0);
   Graph_Graph_Graph_Graph3100910191029->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph3100910191029->GetXaxis()->SetTitle("Eta Ring");
   Graph_Graph_Graph_Graph3100910191029->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph3100910191029->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph3100910191029->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph3100910191029->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph3100910191029->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph3100910191029->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph3100910191029->GetYaxis()->SetTitle(" TP - eRec [GeV]");
   Graph_Graph_Graph_Graph3100910191029->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph3100910191029->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph3100910191029->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph3100910191029->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph3100910191029->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph3100910191029->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph3100910191029->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph3100910191029->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph3100910191029->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph3100910191029->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph3100910191029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph3100910191029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph3100910191029);
   
   gre->Draw("pxl ");
   
   Double_t Graph4_fx1030[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph4_fy1030[7] = {
   0.8374232,
   0.5647951,
   0.5302448,
   0.4194027,
   0.3422245,
   0.3295384,
   0.2680769};
   Double_t Graph4_fex1030[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1030[7] = {
   0.8374232,
   0.5647951,
   0.5302448,
   0.4194027,
   0.3422245,
   0.3295384,
   0.2680769};
   gre = new TGraphErrors(7,Graph4_fx1030,Graph4_fy1030,Graph4_fex1030,Graph4_fey1030);
   gre->SetName("Graph4");
   gre->SetTitle("PU 30 S2 per strip TP-eRec vs Eta Ring in EE;Eta Ring; TP - eRec [GeV]");

   ci = 1188;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph_Graph4101010201030 = new TH1F("Graph_Graph_Graph_Graph4101010201030","PU 30 S2 per strip TP-eRec vs Eta Ring in EE",100,0.4,7.6);
   Graph_Graph_Graph_Graph4101010201030->SetMinimum(0);
   Graph_Graph_Graph_Graph4101010201030->SetMaximum(1.842331);
   Graph_Graph_Graph_Graph4101010201030->SetDirectory(0);
   Graph_Graph_Graph_Graph4101010201030->SetStats(0);
   Graph_Graph_Graph_Graph4101010201030->SetLineStyle(0);
   Graph_Graph_Graph_Graph4101010201030->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph4101010201030->GetXaxis()->SetTitle("Eta Ring");
   Graph_Graph_Graph_Graph4101010201030->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph4101010201030->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph4101010201030->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph4101010201030->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph4101010201030->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph4101010201030->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph4101010201030->GetYaxis()->SetTitle(" TP - eRec [GeV]");
   Graph_Graph_Graph_Graph4101010201030->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph4101010201030->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph4101010201030->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph4101010201030->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph4101010201030->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph4101010201030->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph4101010201030->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph4101010201030->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph4101010201030->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph4101010201030->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph4101010201030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph4101010201030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph4101010201030);
   
   gre->Draw("pxl ");
   
   TLegend *leg = new TLegend(0.67,0.54,0.95,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph1","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0","New (avg)","lp");

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
   
   TPaveText *pt = new TPaveText(0.35,0.68,0.65,0.88,"NDC NB");
   pt->SetFillColor(0);
   TText *pt_LaTex = pt->AddText("Run 306456");
   pt_LaTex = pt->AddText("PU=50");
   pt_LaTex = pt->AddText("2.3<|#eta|<3.0");
   pt_LaTex = pt->AddText("LHC filling ");
   pt_LaTex = pt->AddText("schema: 8b4e");
   pt->Draw();
   
   leg = new TLegend(0.67,0.54,0.95,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("Graph1","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0","New (avg)","lp");

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
