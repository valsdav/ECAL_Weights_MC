void bias_vs_etbin_8b4e_mean()
{
//=========Macro generated from canvas: c5/c5
//=========  (Wed Jul  3 11:08:11 2019) by ROOT version 6.16/00
   TCanvas *c5 = new TCanvas("c5", "c5",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c5->SetHighLightColor(2);
   c5->Range(-0.9012048,-0.8597561,7.773494,2.676829);
   c5->SetFillColor(0);
   c5->SetBorderMode(0);
   c5->SetBorderSize(2);
   c5->SetGridy();
   c5->SetTickx(1);
   c5->SetTicky(1);
   c5->SetLeftMargin(0.15);
   c5->SetRightMargin(0.02);
   c5->SetTopMargin(0.05);
   c5->SetBottomMargin(0.13);
   c5->SetFrameFillStyle(0);
   c5->SetFrameBorderMode(0);
   c5->SetFrameFillStyle(0);
   c5->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1021[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1021[7] = {
   2.135884,
   0.5929301,
   0.3191119,
   0.2311932,
   0.04102962,
   -0.09730152,
   -0.02462659};
   Double_t Graph0_fex1021[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1021[7] = {
   0.7036831,
   0.5162286,
   0.4655538,
   0.371953,
   0.3058661,
   0.3527457,
   0.4119771};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle(";Energy [GeV];Fractional bias");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1180;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9933");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9933");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph_Graph0100110111021 = new TH1F("Graph_Graph_Graph_Graph0100110111021","",100,0.4,7.6);
   Graph_Graph_Graph_Graph0100110111021->SetMinimum(-0.4);
   Graph_Graph_Graph_Graph0100110111021->SetMaximum(2.5);
   Graph_Graph_Graph_Graph0100110111021->SetDirectory(0);
   Graph_Graph_Graph_Graph0100110111021->SetStats(0);
   Graph_Graph_Graph_Graph0100110111021->SetLineStyle(0);
   Graph_Graph_Graph_Graph0100110111021->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0100110111021->GetXaxis()->SetTitle("Energy [GeV]");
   Graph_Graph_Graph_Graph0100110111021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100110111021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0100110111021->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0100110111021->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0100110111021->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0100110111021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph0100110111021->GetYaxis()->SetTitle("Fractional bias");
   Graph_Graph_Graph_Graph0100110111021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100110111021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0100110111021->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0100110111021->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0100110111021->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph0100110111021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph0100110111021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100110111021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0100110111021->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0100110111021->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0100110111021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0100110111021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph0100110111021);
   
   gre->Draw("aplx");
   
   Double_t Graph1_fx1022[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph1_fy1022[7] = {
   0.6829294,
   -0.02141779,
   0.01139591,
   0.06270207,
   -0.06176233,
   -0.161174,
   -0.1293116};
   Double_t Graph1_fex1022[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1022[7] = {
   0.8059145,
   0.5477996,
   0.5362722,
   0.4041383,
   0.3219054,
   0.338992,
   0.4369992};
   gre = new TGraphErrors(7,Graph1_fx1022,Graph1_fy1022,Graph1_fex1022,Graph1_fey1022);
   gre->SetName("Graph1");
   gre->SetTitle("New Avg TP - eRec vs Eta Ring for EE; Et Bin;Bias");

   ci = 1179;
   color = new TColor(ci, 0, 0, 0, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph_Graph1100210121022 = new TH1F("Graph_Graph_Graph_Graph1100210121022","New Avg TP - eRec vs Eta Ring for EE",100,0.4,7.6);
   Graph_Graph_Graph_Graph1100210121022->SetMinimum(-0.7750236);
   Graph_Graph_Graph_Graph1100210121022->SetMaximum(1.69465);
   Graph_Graph_Graph_Graph1100210121022->SetDirectory(0);
   Graph_Graph_Graph_Graph1100210121022->SetStats(0);
   Graph_Graph_Graph_Graph1100210121022->SetLineStyle(0);
   Graph_Graph_Graph_Graph1100210121022->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1100210121022->GetXaxis()->SetTitle(" Et Bin");
   Graph_Graph_Graph_Graph1100210121022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1100210121022->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1100210121022->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph1100210121022->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph1100210121022->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1100210121022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1100210121022->GetYaxis()->SetTitle("Bias");
   Graph_Graph_Graph_Graph1100210121022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1100210121022->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1100210121022->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph1100210121022->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph1100210121022->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph1100210121022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1100210121022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1100210121022->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1100210121022->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph1100210121022->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph1100210121022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1100210121022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph1100210121022);
   
   gre->Draw("pxl ");
   
   Double_t Graph2_fx1023[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph2_fy1023[7] = {
   0.6990426,
   0.01588248,
   0.06884563,
   0.1115844,
   -0.01297963,
   -0.09265918,
   -0.01735};
   Double_t Graph2_fex1023[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1023[7] = {
   0.8400673,
   0.5618653,
   0.5315882,
   0.4209046,
   0.3421728,
   0.3312821,
   0.269458};
   gre = new TGraphErrors(7,Graph2_fx1023,Graph2_fy1023,Graph2_fex1023,Graph2_fey1023);
   gre->SetName("Graph2");
   gre->SetTitle("Per Strip TP-eRec vs Eta Ring in EE;Et Bin; Bias");

   ci = 1181;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph_Graph2100310131023 = new TH1F("Graph_Graph_Graph_Graph2100310131023","Per Strip TP-eRec vs Eta Ring in EE",100,0.4,7.6);
   Graph_Graph_Graph_Graph2100310131023->SetMinimum(-0.7544921);
   Graph_Graph_Graph_Graph2100310131023->SetMaximum(1.747619);
   Graph_Graph_Graph_Graph2100310131023->SetDirectory(0);
   Graph_Graph_Graph_Graph2100310131023->SetStats(0);
   Graph_Graph_Graph_Graph2100310131023->SetLineStyle(0);
   Graph_Graph_Graph_Graph2100310131023->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph2100310131023->GetXaxis()->SetTitle("Et Bin");
   Graph_Graph_Graph_Graph2100310131023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2100310131023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph2100310131023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph2100310131023->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph2100310131023->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph2100310131023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph2100310131023->GetYaxis()->SetTitle(" Bias");
   Graph_Graph_Graph_Graph2100310131023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2100310131023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph2100310131023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph2100310131023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph2100310131023->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph2100310131023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph2100310131023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2100310131023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph2100310131023->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph2100310131023->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph2100310131023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph2100310131023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph2100310131023);
   
   gre->Draw("pxl ");
   
   Double_t Graph3_fx1024[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph3_fy1024[7] = {
   0.5993308,
   0.04142084,
   0.09095991,
   0.1187003,
   0.01653139,
   -0.02495556,
   0.06523268};
   Double_t Graph3_fex1024[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1024[7] = {
   0.8033487,
   0.5174581,
   0.4880332,
   0.4220203,
   0.3562049,
   0.3210288,
   0.2759895};
   gre = new TGraphErrors(7,Graph3_fx1024,Graph3_fy1024,Graph3_fex1024,Graph3_fey1024);
   gre->SetName("Graph3");
   gre->SetTitle("PU 30 S2 per strip TP-eRec vs Eta Ring in EE;Et Bin; Bias");

   ci = 1182;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph_Graph3100410141024 = new TH1F("Graph_Graph_Graph_Graph3100410141024","PU 30 S2 per strip TP-eRec vs Eta Ring in EE",100,0.4,7.6);
   Graph_Graph_Graph_Graph3100410141024->SetMinimum(-0.6639089);
   Graph_Graph_Graph_Graph3100410141024->SetMaximum(1.590551);
   Graph_Graph_Graph_Graph3100410141024->SetDirectory(0);
   Graph_Graph_Graph_Graph3100410141024->SetStats(0);
   Graph_Graph_Graph_Graph3100410141024->SetLineStyle(0);
   Graph_Graph_Graph_Graph3100410141024->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph3100410141024->GetXaxis()->SetTitle("Et Bin");
   Graph_Graph_Graph_Graph3100410141024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph3100410141024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph3100410141024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph3100410141024->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph3100410141024->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph3100410141024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph3100410141024->GetYaxis()->SetTitle(" Bias");
   Graph_Graph_Graph_Graph3100410141024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph3100410141024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph3100410141024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph3100410141024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph3100410141024->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph3100410141024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph3100410141024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph3100410141024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph3100410141024->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph3100410141024->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph3100410141024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph3100410141024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph3100410141024);
   
   gre->Draw("pxl ");
   
   Double_t Graph4_fx1025[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph4_fy1025[7] = {
   0.7125345,
   0.03164368,
   0.08863288,
   0.1358123,
   0.006563824,
   -0.07323538,
   0.006421071};
   Double_t Graph4_fex1025[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1025[7] = {
   0.8374232,
   0.5647951,
   0.5302448,
   0.4194027,
   0.3422245,
   0.3295384,
   0.2680769};
   gre = new TGraphErrors(7,Graph4_fx1025,Graph4_fy1025,Graph4_fex1025,Graph4_fey1025);
   gre->SetName("Graph4");
   gre->SetTitle("PU 30 S2 per strip TP-eRec vs Eta Ring in EE;Et Bin; Bias");

   ci = 1183;
   color = new TColor(ci, 0, 0, 0.8, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph_Graph4100510151025 = new TH1F("Graph_Graph_Graph_Graph4100510151025","PU 30 S2 per strip TP-eRec vs Eta Ring in EE",100,0.4,7.6);
   Graph_Graph_Graph_Graph4100510151025->SetMinimum(-0.7414623);
   Graph_Graph_Graph_Graph4100510151025->SetMaximum(1.758269);
   Graph_Graph_Graph_Graph4100510151025->SetDirectory(0);
   Graph_Graph_Graph_Graph4100510151025->SetStats(0);
   Graph_Graph_Graph_Graph4100510151025->SetLineStyle(0);
   Graph_Graph_Graph_Graph4100510151025->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph4100510151025->GetXaxis()->SetTitle("Et Bin");
   Graph_Graph_Graph_Graph4100510151025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph4100510151025->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph4100510151025->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph4100510151025->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph4100510151025->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph4100510151025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph4100510151025->GetYaxis()->SetTitle(" Bias");
   Graph_Graph_Graph_Graph4100510151025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph4100510151025->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph4100510151025->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph4100510151025->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph4100510151025->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph4100510151025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph4100510151025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph4100510151025->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph4100510151025->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph4100510151025->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph4100510151025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph4100510151025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph4100510151025);
   
   gre->Draw("pxl ");
   
   TLegend *leg = new TLegend(0.67,0.54,0.95,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
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
   entry=leg->AddEntry("Graph0","Current","lp");

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
   c5->Modified();
   c5->cd();
   c5->SetSelected(c5);
}
