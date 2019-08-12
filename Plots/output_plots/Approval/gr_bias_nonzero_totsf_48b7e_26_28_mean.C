void gr_bias_nonzero_totsf_48b7e_26_28_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:46:38 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.9903614,-0.2982175,9.612048,1.081446);
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
   
   Double_t curr_48b7e_gr_bias_nonzero_totsf_mean_fx71[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t curr_48b7e_gr_bias_nonzero_totsf_mean_fy71[9] = {
   0.9610393,
   -0.01575502,
   -0.0322013,
   -0.00943689,
   -0.01347928,
   -0.003188109,
   0.01094202,
   0.02293769,
   0.02815913};
   TGraph *graph = new TGraph(9,curr_48b7e_gr_bias_nonzero_totsf_mean_fx71,curr_48b7e_gr_bias_nonzero_totsf_mean_fy71);
   graph->SetName("curr_48b7e_gr_bias_nonzero_totsf_mean");
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
   
   TH1F *Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71 = new TH1F("Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71","Graph",100,0.2,9.8);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->SetMinimum(-0.1315254);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->SetMaximum(1.060363);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->SetDirectory(0);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->SetStats(0);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->SetLineStyle(0);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_bias_nonzero_totsf_mean71);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_bias_nonzero_totsf_mean_fx72[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_48b7e_gr_bias_nonzero_totsf_mean_fy72[9] = {
   0.8129507,
   -0.05658819,
   -0.06743734,
   -0.04344986,
   -0.04582683,
   -0.03527519,
   -0.02143683,
   -0.009794671,
   -0.004529697};
   graph = new TGraph(9,pu0_48b7e_gr_bias_nonzero_totsf_mean_fx72,pu0_48b7e_gr_bias_nonzero_totsf_mean_fy72);
   graph->SetName("pu0_48b7e_gr_bias_nonzero_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72 = new TH1F("Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72","Graph",100,0.2,9.8);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->SetMinimum(-0.1554762);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->SetMaximum(0.9009895);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->SetDirectory(0);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->SetStats(0);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->SetLineStyle(0);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_bias_nonzero_totsf_mean72);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean_fx73[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean_fy73[9] = {
   0.9471502,
   -0.01267266,
   -0.01787461,
   0.009455675,
   0.007883755,
   0.0189472,
   0.03352663,
   0.04578737,
   0.05076708};
   graph = new TGraph(9,pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean_fx73,pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean_fy73);
   graph->SetName("pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73 = new TH1F("Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73","Graph",100,0.2,9.8);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->SetMinimum(-0.1143771);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->SetMaximum(1.043653);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean73);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_bias_nonzero_totsf_mean_fx74[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s2_48b7e_gr_bias_nonzero_totsf_mean_fy74[9] = {
   0.7024212,
   0.03603731,
   0.05342994,
   0.08875995,
   0.09219271,
   0.1060901,
   0.1226447,
   0.1361828,
   0.1380839};
   graph = new TGraph(9,pu50s2_48b7e_gr_bias_nonzero_totsf_mean_fx74,pu50s2_48b7e_gr_bias_nonzero_totsf_mean_fy74);
   graph->SetName("pu50s2_48b7e_gr_bias_nonzero_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74 = new TH1F("Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74","Graph",100,0.2,9.8);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->SetMinimum(0.03243358);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->SetMaximum(0.7690596);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->SetStats(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_mean74);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_bias_nonzero_totsf_mean_fx75[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s30_48b7e_gr_bias_nonzero_totsf_mean_fy75[9] = {
   0.8300499,
   -0.04428491,
   -0.05421496,
   -0.0296195,
   -0.03182622,
   -0.02112532,
   -0.007060162,
   0.004776928,
   0.0101022};
   graph = new TGraph(9,pu50s30_48b7e_gr_bias_nonzero_totsf_mean_fx75,pu50s30_48b7e_gr_bias_nonzero_totsf_mean_fy75);
   graph->SetName("pu50s30_48b7e_gr_bias_nonzero_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75 = new TH1F("Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75","Graph",100,0.2,9.8);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->SetMinimum(-0.1426415);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->SetMaximum(0.9184764);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->SetStats(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_mean75);
   
   multigraph->Add(graph,"");
   multigraph->Draw("APL");
   multigraph->GetXaxis()->SetTitle("ET (GeV)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.007);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Fractional bias");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.007);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleOffset(1.1);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.67,0.54,0.95,0.92,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("curr_48b7e_gr_bias_nonzero_totsf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_48b7e_gr_bias_nonzero_totsf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_48b7e_gr_bias_nonzero_totsf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_48b7e_gr_bias_nonzero_totsf_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_48b7e_gr_bias_nonzero_totsf_mean","PU optimized","lp");

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
   TText *pt_LaTex = pt->AddText("PU=50");
   pt_LaTex = pt->AddText("2.3<|#eta|<3.0");
   pt_LaTex = pt->AddText("LHC filling ");
   pt_LaTex = pt->AddText("schema: 48b7e");
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
