void bias_vs_bxposition_8b4e_mean()
{
//=========Macro generated from canvas: c12/c12
//=========  (Wed Jul  3 11:06:13 2019) by ROOT version 6.16/00
   TCanvas *c12 = new TCanvas("c12", "c12",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c12->SetHighLightColor(2);
   c12->Range(-1.218072,-0.9707317,8.90241,3.419512);
   c12->SetFillColor(0);
   c12->SetBorderMode(0);
   c12->SetBorderSize(2);
   c12->SetGridy();
   c12->SetTickx(1);
   c12->SetTicky(1);
   c12->SetLeftMargin(0.15);
   c12->SetRightMargin(0.02);
   c12->SetTopMargin(0.05);
   c12->SetBottomMargin(0.13);
   c12->SetFrameFillStyle(0);
   c12->SetFrameBorderMode(0);
   c12->SetFrameFillStyle(0);
   c12->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1014[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t Graph0_fy1014[8] = {
   1.487533,
   1.559933,
   1.559953,
   1.535838,
   1.406719,
   1.352032,
   1.098268,
   0.3488595};
   Double_t Graph0_fex1014[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1014[8] = {
   0.7692686,
   0.7714899,
   0.7706537,
   0.7860641,
   0.7958494,
   0.7985049,
   0.8138708,
   0.889189};
   TGraphErrors *gre = new TGraphErrors(8,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle(";BX Position;Fraction bias");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9933");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9933");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph_Graph0100110101014 = new TH1F("Graph_Graph_Graph_Graph0100110101014","",100,0.3,8.7);
   Graph_Graph_Graph_Graph0100110101014->SetMinimum(-0.4);
   Graph_Graph_Graph_Graph0100110101014->SetMaximum(3.2);
   Graph_Graph_Graph_Graph0100110101014->SetDirectory(0);
   Graph_Graph_Graph_Graph0100110101014->SetStats(0);
   Graph_Graph_Graph_Graph0100110101014->SetLineStyle(0);
   Graph_Graph_Graph_Graph0100110101014->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0100110101014->GetXaxis()->SetTitle("BX Position");
   Graph_Graph_Graph_Graph0100110101014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100110101014->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0100110101014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0100110101014->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0100110101014->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0100110101014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph0100110101014->GetYaxis()->SetTitle("Fraction bias");
   Graph_Graph_Graph_Graph0100110101014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100110101014->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0100110101014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0100110101014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0100110101014->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph0100110101014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph0100110101014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100110101014->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0100110101014->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0100110101014->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0100110101014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0100110101014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph0100110101014);
   
   gre->Draw("aplx");
   
   Double_t Graph1_fx1015[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t Graph1_fy1015[8] = {
   0.2600554,
   0.3065208,
   0.3018703,
   0.2730148,
   0.2808112,
   0.2113323,
   0.173892,
   -0.1910305};
   Double_t Graph1_fex1015[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1015[8] = {
   0.7489303,
   0.738542,
   0.7906437,
   0.7938409,
   0.8323433,
   0.8072281,
   0.8052195,
   0.9231415};
   gre = new TGraphErrors(8,Graph1_fx1015,Graph1_fy1015,Graph1_fex1015,Graph1_fey1015);
   gre->SetName("Graph1");
   gre->SetTitle("New Avg: TP-eRec vs BXposition in EE for 8b4e;BX position; TP - eRec [GeV]");

   ci = 1180;
   color = new TColor(ci, 0, 0, 0, " ", 0.2);
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph_Graph_Graph1100210111015 = new TH1F("Graph_Graph_Graph_Graph1100210111015","New Avg: TP-eRec vs BXposition in EE for 8b4e",100,0.3,8.7);
   Graph_Graph_Graph_Graph1100210111015->SetMinimum(-1.336905);
   Graph_Graph_Graph_Graph1100210111015->SetMaximum(1.335887);
   Graph_Graph_Graph_Graph1100210111015->SetDirectory(0);
   Graph_Graph_Graph_Graph1100210111015->SetStats(0);
   Graph_Graph_Graph_Graph1100210111015->SetLineStyle(0);
   Graph_Graph_Graph_Graph1100210111015->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1100210111015->GetXaxis()->SetTitle("BX position");
   Graph_Graph_Graph_Graph1100210111015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1100210111015->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1100210111015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph1100210111015->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph1100210111015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1100210111015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1100210111015->GetYaxis()->SetTitle(" TP - eRec [GeV]");
   Graph_Graph_Graph_Graph1100210111015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1100210111015->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1100210111015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph1100210111015->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph1100210111015->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph1100210111015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1100210111015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1100210111015->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1100210111015->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph1100210111015->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph1100210111015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1100210111015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph1100210111015);
   
   gre->Draw("pxl ");
   
   Double_t Graph2_fx1016[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t Graph2_fy1016[8] = {
   0.299262,
   0.4324421,
   0.38646,
   0.3372749,
   0.3089076,
   0.2158835,
   0.1397212,
   -0.1000874};
   Double_t Graph2_fex1016[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1016[8] = {
   0.7691423,
   0.771487,
   0.7931842,
   0.8053277,
   0.8415141,
   0.8128887,
   0.801491,
   0.732428};
   gre = new TGraphErrors(8,Graph2_fx1016,Graph2_fy1016,Graph2_fex1016,Graph2_fey1016);
   gre->SetName("Graph2");
   gre->SetTitle("Per Strip: TP-eRec vs BXposition in EE for 8b4e;BX position; TP - eRec [GeV]");

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
   
   TH1F *Graph_Graph_Graph_Graph2100310121016 = new TH1F("Graph_Graph_Graph_Graph2100310121016","Per Strip: TP-eRec vs BXposition in EE for 8b4e",100,0.3,8.7);
   Graph_Graph_Graph_Graph2100310121016->SetMinimum(-1.03616);
   Graph_Graph_Graph_Graph2100310121016->SetMaximum(1.407574);
   Graph_Graph_Graph_Graph2100310121016->SetDirectory(0);
   Graph_Graph_Graph_Graph2100310121016->SetStats(0);
   Graph_Graph_Graph_Graph2100310121016->SetLineStyle(0);
   Graph_Graph_Graph_Graph2100310121016->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph2100310121016->GetXaxis()->SetTitle("BX position");
   Graph_Graph_Graph_Graph2100310121016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2100310121016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph2100310121016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph2100310121016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph2100310121016->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph2100310121016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph2100310121016->GetYaxis()->SetTitle(" TP - eRec [GeV]");
   Graph_Graph_Graph_Graph2100310121016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2100310121016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph2100310121016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph2100310121016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph2100310121016->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph2100310121016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph2100310121016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2100310121016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph2100310121016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph2100310121016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph2100310121016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph2100310121016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph2100310121016);
   
   gre->Draw("pxl ");
   
   Double_t Graph3_fx1017[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t Graph3_fy1017[8] = {
   0.2810287,
   0.4149401,
   0.3747932,
   0.3183413,
   0.2829248,
   0.2200619,
   0.1555361,
   0.007476056};
   Double_t Graph3_fex1017[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1017[8] = {
   0.7133369,
   0.7208775,
   0.7477192,
   0.7340827,
   0.7614533,
   0.7624045,
   0.7457247,
   0.6284313};
   gre = new TGraphErrors(8,Graph3_fx1017,Graph3_fy1017,Graph3_fex1017,Graph3_fey1017);
   gre->SetName("Graph3");
   gre->SetTitle("Per Strip: TP-eRec vs BXposition in EE for 8b4e;BX position; TP - eRec [GeV]");

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
   
   TH1F *Graph_Graph_Graph_Graph3100410131017 = new TH1F("Graph_Graph_Graph_Graph3100410131017","Per Strip: TP-eRec vs BXposition in EE for 8b4e",100,0.3,8.7);
   Graph_Graph_Graph_Graph3100410131017->SetMinimum(-0.7966325);
   Graph_Graph_Graph_Graph3100410131017->SetMaximum(1.311495);
   Graph_Graph_Graph_Graph3100410131017->SetDirectory(0);
   Graph_Graph_Graph_Graph3100410131017->SetStats(0);
   Graph_Graph_Graph_Graph3100410131017->SetLineStyle(0);
   Graph_Graph_Graph_Graph3100410131017->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph3100410131017->GetXaxis()->SetTitle("BX position");
   Graph_Graph_Graph_Graph3100410131017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph3100410131017->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph3100410131017->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph3100410131017->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph3100410131017->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph3100410131017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph3100410131017->GetYaxis()->SetTitle(" TP - eRec [GeV]");
   Graph_Graph_Graph_Graph3100410131017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph3100410131017->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph3100410131017->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph3100410131017->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph3100410131017->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph3100410131017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph3100410131017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph3100410131017->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph3100410131017->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph3100410131017->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph3100410131017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph3100410131017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph3100410131017);
   
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
   entry=leg->AddEntry("Graph2","PU optimized","lp");

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
   c12->Modified();
   c12->cd();
   c12->SetSelected(c12);
}
