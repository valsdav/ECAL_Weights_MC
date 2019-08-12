void gr_bias_BXsf_8b4e_18_21_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:04:44 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.4927711,-0.2186741,7.459036,0.1470149);
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
   
   Double_t curr_8b4e_gr_bias_BXsf_mean_fx21[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t curr_8b4e_gr_bias_BXsf_mean_fy21[7] = {
   -0.05333845,
   0.001018271,
   0.00444176,
   0.009944379,
   0.01035879,
   0.01404371,
   0.01268391};
   TGraph *graph = new TGraph(7,curr_8b4e_gr_bias_BXsf_mean_fx21,curr_8b4e_gr_bias_BXsf_mean_fy21);
   graph->SetName("curr_8b4e_gr_bias_BXsf_mean");
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
   
   TH1F *Graph_curr_8b4e_gr_bias_BXsf_mean21 = new TH1F("Graph_curr_8b4e_gr_bias_BXsf_mean21","Graph",100,0.4,7.6);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->SetMinimum(-0.06007667);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->SetMaximum(0.02078193);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->SetDirectory(0);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->SetStats(0);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->SetLineStyle(0);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_BXsf_mean21->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_bias_BXsf_mean21);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_bias_BXsf_mean_fx22[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_8b4e_gr_bias_BXsf_mean_fy22[7] = {
   -0.07113457,
   -0.01207836,
   -0.008392933,
   -0.00295484,
   -0.002461182,
   0.001101659,
   -0.0001597117};
   graph = new TGraph(7,pu0_8b4e_gr_bias_BXsf_mean_fx22,pu0_8b4e_gr_bias_BXsf_mean_fy22);
   graph->SetName("pu0_8b4e_gr_bias_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_bias_BXsf_mean22 = new TH1F("Graph_pu0_8b4e_gr_bias_BXsf_mean22","Graph",100,0.4,7.6);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->SetMinimum(-0.07835819);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->SetMaximum(0.008325282);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->SetDirectory(0);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->SetStats(0);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->SetLineStyle(0);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_BXsf_mean22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_bias_BXsf_mean22);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_bias_BXsf_mean_fx23[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_newavg_8b4e_gr_bias_BXsf_mean_fy23[7] = {
   -0.03779142,
   0.02365678,
   0.02819262,
   0.03401798,
   0.03523722,
   0.03900922,
   0.03766441};
   graph = new TGraph(7,pu0_newavg_8b4e_gr_bias_BXsf_mean_fx23,pu0_newavg_8b4e_gr_bias_BXsf_mean_fy23);
   graph->SetName("pu0_newavg_8b4e_gr_bias_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23 = new TH1F("Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23","Graph",100,0.4,7.6);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->SetMinimum(-0.04547148);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->SetMaximum(0.04668928);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_bias_BXsf_mean23);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_bias_BXsf_mean_fx24[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s2_8b4e_gr_bias_BXsf_mean_fy24[7] = {
   -0.0404297,
   0.016902,
   0.0208531,
   0.02653905,
   0.02731414,
   0.03109514,
   0.02970549};
   graph = new TGraph(7,pu50s2_8b4e_gr_bias_BXsf_mean_fx24,pu50s2_8b4e_gr_bias_BXsf_mean_fy24);
   graph->SetName("pu50s2_8b4e_gr_bias_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_bias_BXsf_mean24 = new TH1F("Graph_pu50s2_8b4e_gr_bias_BXsf_mean24","Graph",100,0.4,7.6);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->SetMinimum(-0.04758218);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->SetMaximum(0.03824763);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->SetStats(0);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_BXsf_mean24->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_bias_BXsf_mean24);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_bias_BXsf_mean_fx25[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s30_8b4e_gr_bias_BXsf_mean_fy25[7] = {
   -0.06847519,
   -0.009699372,
   -0.005998637,
   -0.0005561035,
   -6.751926e-05,
   0.00349968,
   0.002246883};
   graph = new TGraph(7,pu50s30_8b4e_gr_bias_BXsf_mean_fx25,pu50s30_8b4e_gr_bias_BXsf_mean_fy25);
   graph->SetName("pu50s30_8b4e_gr_bias_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_bias_BXsf_mean25 = new TH1F("Graph_pu50s30_8b4e_gr_bias_BXsf_mean25","Graph",100,0.4,7.6);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->SetMinimum(-0.07567267);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->SetMaximum(0.01069717);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->SetStats(0);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_BXsf_mean25->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_bias_BXsf_mean25);
   
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
   TLegendEntry *entry=leg->AddEntry("curr_8b4e_gr_bias_BXsf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_8b4e_gr_bias_BXsf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_8b4e_gr_bias_BXsf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_8b4e_gr_bias_BXsf_mean","#splitline{PU optimized}{(PU=50, ET=2GeV)}","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_8b4e_gr_bias_BXsf_mean","#splitline{PU optimized}{(PU=50, ET=30GeV)}","lp");

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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
