void bias_vs_etbin_48b7e_mean()
{
//=========Macro generated from canvas: c5/c5
//=========  (Wed Jul  3 11:07:13 2019) by ROOT version 6.16/00
   TCanvas *c5 = new TCanvas("c5", "c5",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c5->SetHighLightColor(2);
   c5->Range(-1.53494,-0.7804878,10.03133,2.146341);
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
   
   Double_t Graph0_fx1041[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t Graph0_fy1041[9] = {
   1.803815,
   0.1844456,
   -0.001861077,
   -0.07981119,
   -0.2110569,
   -0.2358277,
   -0.1735999,
   -0.142667,
   -0.1109936};
   Double_t Graph0_fex1041[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1041[9] = {
   0.7728047,
   0.5636351,
   0.5176836,
   0.4294782,
   0.3224571,
   0.3556464,
   0.1637891,
   0.1143611,
   0.1977938};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
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
   
   TH1F *Graph_Graph_Graph_Graph_Graph01001102110311041 = new TH1F("Graph_Graph_Graph_Graph_Graph01001102110311041","",100,0.2,9.8);
   Graph_Graph_Graph_Graph_Graph01001102110311041->SetMinimum(-0.4);
   Graph_Graph_Graph_Graph_Graph01001102110311041->SetMaximum(2);
   Graph_Graph_Graph_Graph_Graph01001102110311041->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph01001102110311041->SetStats(0);
   Graph_Graph_Graph_Graph_Graph01001102110311041->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph01001102110311041->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetXaxis()->SetTitle("Energy [GeV]");
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetYaxis()->SetTitle("Fractional bias");
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph01001102110311041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph01001102110311041);
   
   gre->Draw("aplx");
   
   Double_t Graph0_fx1042[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t Graph0_fy1042[9] = {
   0.6241855,
   -0.1688164,
   -0.1956666,
   -0.1877928,
   -0.2748555,
   -0.2924207,
   -0.2338436,
   -0.2027469,
   -0.2008234};
   Double_t Graph0_fex1042[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1042[9] = {
   0.9043133,
   0.5444951,
   0.5352986,
   0.4218013,
   0.3201423,
   0.3483424,
   0.1615037,
   0.1051493,
   0.146681};
   gre = new TGraphErrors(9,Graph0_fx1042,Graph0_fy1042,Graph0_fex1042,Graph0_fey1042);
   gre->SetName("Graph0");
   gre->SetTitle("New Avg TP - eRec vs Eta Ring for EE; Et Bin;Bias");

   ci = 1189;
   color = new TColor(ci, 0, 0, 0, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph_Graph0102210321042 = new TH1F("Graph_Graph_Graph_Graph0102210321042","New Avg TP - eRec vs Eta Ring for EE",100,0.2,9.8);
   Graph_Graph_Graph_Graph0102210321042->SetMinimum(-0.9569116);
   Graph_Graph_Graph_Graph0102210321042->SetMaximum(1.754445);
   Graph_Graph_Graph_Graph0102210321042->SetDirectory(0);
   Graph_Graph_Graph_Graph0102210321042->SetStats(0);
   Graph_Graph_Graph_Graph0102210321042->SetLineStyle(0);
   Graph_Graph_Graph_Graph0102210321042->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0102210321042->GetXaxis()->SetTitle(" Et Bin");
   Graph_Graph_Graph_Graph0102210321042->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0102210321042->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0102210321042->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0102210321042->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0102210321042->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0102210321042->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph0102210321042->GetYaxis()->SetTitle("Bias");
   Graph_Graph_Graph_Graph0102210321042->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0102210321042->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0102210321042->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0102210321042->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0102210321042->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph0102210321042->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph0102210321042->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0102210321042->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0102210321042->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0102210321042->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0102210321042->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0102210321042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph0102210321042);
   
   gre->Draw("pxl ");
   
   Double_t Graph2_fx1043[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t Graph2_fy1043[9] = {
   0.6674368,
   -0.1325194,
   -0.1449884,
   -0.1407062,
   -0.2382158,
   -0.2576011,
   -0.1991526,
   -0.1663202,
   -0.1683712};
   Double_t Graph2_fex1043[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1043[9] = {
   0.9059185,
   0.5565405,
   0.5366969,
   0.4203029,
   0.3140588,
   0.3467477,
   0.1590146,
   0.1042437,
   0.150203};
   gre = new TGraphErrors(9,Graph2_fx1043,Graph2_fy1043,Graph2_fex1043,Graph2_fey1043);
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
   
   TH1F *Graph_Graph_Graph_Graph_Graph21003102310331043 = new TH1F("Graph_Graph_Graph_Graph_Graph21003102310331043","Per Strip TP-eRec vs Eta Ring in EE",100,0.2,9.8);
   Graph_Graph_Graph_Graph_Graph21003102310331043->SetMinimum(-0.9153015);
   Graph_Graph_Graph_Graph_Graph21003102310331043->SetMaximum(1.799597);
   Graph_Graph_Graph_Graph_Graph21003102310331043->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph21003102310331043->SetStats(0);
   Graph_Graph_Graph_Graph_Graph21003102310331043->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph21003102310331043->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetXaxis()->SetTitle("Et Bin");
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetYaxis()->SetTitle(" Bias");
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph21003102310331043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph21003102310331043);
   
   gre->Draw("pxl ");
   
   Double_t Graph3_fx1044[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t Graph3_fy1044[9] = {
   0.5112041,
   -0.09302029,
   -0.06672893,
   -0.05780442,
   -0.1195576,
   -0.1274746,
   -0.06885498,
   -0.04041689,
   -0.05586521};
   Double_t Graph3_fex1044[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1044[9] = {
   0.8523453,
   0.4924019,
   0.4707227,
   0.3955372,
   0.2902634,
   0.3213205,
   0.1429154,
   0.1042651,
   0.1677957};
   gre = new TGraphErrors(9,Graph3_fx1044,Graph3_fy1044,Graph3_fex1044,Graph3_fey1044);
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
   
   TH1F *Graph_Graph_Graph_Graph_Graph31004102410341044 = new TH1F("Graph_Graph_Graph_Graph_Graph31004102410341044","PU 30 S2 per strip TP-eRec vs Eta Ring in EE",100,0.2,9.8);
   Graph_Graph_Graph_Graph_Graph31004102410341044->SetMinimum(-0.7803193);
   Graph_Graph_Graph_Graph_Graph31004102410341044->SetMaximum(1.558447);
   Graph_Graph_Graph_Graph_Graph31004102410341044->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph31004102410341044->SetStats(0);
   Graph_Graph_Graph_Graph_Graph31004102410341044->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph31004102410341044->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetXaxis()->SetTitle("Et Bin");
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetYaxis()->SetTitle(" Bias");
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph31004102410341044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph31004102410341044);
   
   gre->Draw("pxl ");
   
   Double_t Graph4_fx1045[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t Graph4_fy1045[9] = {
   0.6689351,
   -0.1235413,
   -0.1266253,
   -0.1188975,
   -0.2187118,
   -0.2437214,
   -0.1848766,
   -0.1564014,
   -0.1574681};
   Double_t Graph4_fex1045[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1045[9] = {
   0.904384,
   0.5597084,
   0.5375257,
   0.422173,
   0.3125013,
   0.3456472,
   0.1600497,
   0.1046854,
   0.1531045};
   gre = new TGraphErrors(9,Graph4_fx1045,Graph4_fy1045,Graph4_fex1045,Graph4_fey1045);
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
   
   TH1F *Graph_Graph_Graph_Graph_Graph41005102510351045 = new TH1F("Graph_Graph_Graph_Graph_Graph41005102510351045","PU 30 S2 per strip TP-eRec vs Eta Ring in EE",100,0.2,9.8);
   Graph_Graph_Graph_Graph_Graph41005102510351045->SetMinimum(-0.9089065);
   Graph_Graph_Graph_Graph_Graph41005102510351045->SetMaximum(1.798976);
   Graph_Graph_Graph_Graph_Graph41005102510351045->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph41005102510351045->SetStats(0);
   Graph_Graph_Graph_Graph_Graph41005102510351045->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph41005102510351045->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetXaxis()->SetTitle("Et Bin");
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetYaxis()->SetTitle(" Bias");
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph41005102510351045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph41005102510351045);
   
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
   TText *pt_LaTex = pt->AddText("Run 320059");
   pt_LaTex = pt->AddText("PU=50");
   pt_LaTex = pt->AddText("2.3<|#eta|<3.0");
   pt_LaTex = pt->AddText("LHC filling ");
   pt_LaTex = pt->AddText("schema: 48b7e");
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
   c5->Modified();
   c5->cd();
   c5->SetSelected(c5);
}
