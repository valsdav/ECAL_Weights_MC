void bias_vs_etbin_48b7e_std()
{
//=========Macro generated from canvas: c10/c5
//=========  (Wed Jul  3 11:07:24 2019) by ROOT version 6.16/00
   TCanvas *c10 = new TCanvas("c10", "c5",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c10->SetHighLightColor(2);
   c10->Range(-1.53494,-0.3378049,10.03133,1.491463);
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
   
   Double_t Graph0_fx1046[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t Graph0_fy1046[9] = {
   0.9043133,
   0.5444951,
   0.5352986,
   0.4218013,
   0.3201423,
   0.3483424,
   0.1615037,
   0.1051493,
   0.146681};
   Double_t Graph0_fex1046[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1046[9] = {
   0.9043133,
   0.5444951,
   0.5352986,
   0.4218013,
   0.3201423,
   0.3483424,
   0.1615037,
   0.1051493,
   0.146681};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1046,Graph0_fy1046,Graph0_fex1046,Graph0_fey1046);
   gre->SetName("Graph0");
   gre->SetTitle(";Energy [GeV];Fractional spread");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1190;
   color = new TColor(ci, 0, 0, 0, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph_Graph0102610361046 = new TH1F("Graph_Graph_Graph_Graph0102610361046","",100,0.2,9.8);
   Graph_Graph_Graph_Graph0102610361046->SetMinimum(-0.1);
   Graph_Graph_Graph_Graph0102610361046->SetMaximum(1.4);
   Graph_Graph_Graph_Graph0102610361046->SetDirectory(0);
   Graph_Graph_Graph_Graph0102610361046->SetStats(0);
   Graph_Graph_Graph_Graph0102610361046->SetLineStyle(0);
   Graph_Graph_Graph_Graph0102610361046->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0102610361046->GetXaxis()->SetTitle("Energy [GeV]");
   Graph_Graph_Graph_Graph0102610361046->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0102610361046->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0102610361046->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0102610361046->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0102610361046->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0102610361046->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph0102610361046->GetYaxis()->SetTitle("Fractional spread");
   Graph_Graph_Graph_Graph0102610361046->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0102610361046->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0102610361046->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0102610361046->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0102610361046->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph0102610361046->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph0102610361046->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0102610361046->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0102610361046->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0102610361046->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0102610361046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0102610361046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph0102610361046);
   
   gre->Draw("aplx");
   
   Double_t Graph1_fx1047[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t Graph1_fy1047[9] = {
   0.7728047,
   0.5636351,
   0.5176836,
   0.4294782,
   0.3224571,
   0.3556464,
   0.1637891,
   0.1143611,
   0.1977938};
   Double_t Graph1_fex1047[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1047[9] = {
   0.7728047,
   0.5636351,
   0.5176836,
   0.4294782,
   0.3224571,
   0.3556464,
   0.1637891,
   0.1143611,
   0.1977938};
   gre = new TGraphErrors(9,Graph1_fx1047,Graph1_fy1047,Graph1_fex1047,Graph1_fey1047);
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
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047","Current TP-eRec vs Eta Ring in EE",100,0.2,9.8);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->SetMinimum(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->SetMaximum(1.70017);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetXaxis()->SetTitle("Eta Ring");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetYaxis()->SetTitle(" TP - eRec [GeV]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph1100710121017102710371047);
   
   gre->Draw("pxl ");
   
   Double_t Graph2_fx1048[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t Graph2_fy1048[9] = {
   0.9059185,
   0.5565405,
   0.5366969,
   0.4203029,
   0.3140588,
   0.3467477,
   0.1590146,
   0.1042437,
   0.150203};
   Double_t Graph2_fex1048[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1048[9] = {
   0.9059185,
   0.5565405,
   0.5366969,
   0.4203029,
   0.3140588,
   0.3467477,
   0.1590146,
   0.1042437,
   0.150203};
   gre = new TGraphErrors(9,Graph2_fx1048,Graph2_fy1048,Graph2_fex1048,Graph2_fey1048);
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
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048","Per Strip TP-eRec vs Eta Ring in EE",100,0.2,9.8);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->SetMinimum(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->SetMaximum(1.993021);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetXaxis()->SetTitle("Eta Ring");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetYaxis()->SetTitle(" TP - eRec [GeV]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph2100810131018102810381048);
   
   gre->Draw("pxl ");
   
   Double_t Graph3_fx1049[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t Graph3_fy1049[9] = {
   0.8523453,
   0.4924019,
   0.4707227,
   0.3955372,
   0.2902634,
   0.3213205,
   0.1429154,
   0.1042651,
   0.1677957};
   Double_t Graph3_fex1049[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1049[9] = {
   0.8523453,
   0.4924019,
   0.4707227,
   0.3955372,
   0.2902634,
   0.3213205,
   0.1429154,
   0.1042651,
   0.1677957};
   gre = new TGraphErrors(9,Graph3_fx1049,Graph3_fy1049,Graph3_fex1049,Graph3_fey1049);
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
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049","PU 30 S2 per strip TP-eRec vs Eta Ring in EE",100,0.2,9.8);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->SetMinimum(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->SetMaximum(1.87516);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetXaxis()->SetTitle("Eta Ring");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetYaxis()->SetTitle(" TP - eRec [GeV]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph3100910141019102910391049);
   
   gre->Draw("pxl ");
   
   Double_t Graph4_fx1050[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t Graph4_fy1050[9] = {
   0.904384,
   0.5597084,
   0.5375257,
   0.422173,
   0.3125013,
   0.3456472,
   0.1600497,
   0.1046854,
   0.1531045};
   Double_t Graph4_fex1050[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1050[9] = {
   0.904384,
   0.5597084,
   0.5375257,
   0.422173,
   0.3125013,
   0.3456472,
   0.1600497,
   0.1046854,
   0.1531045};
   gre = new TGraphErrors(9,Graph4_fx1050,Graph4_fy1050,Graph4_fex1050,Graph4_fey1050);
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
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050","PU 30 S2 per strip TP-eRec vs Eta Ring in EE",100,0.2,9.8);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->SetMinimum(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->SetMaximum(1.989645);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetXaxis()->SetTitle("Eta Ring");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetYaxis()->SetTitle(" TP - eRec [GeV]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph4101010151020103010401050);
   
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
