void gr_bias_nonzero_Asf_48b7e_26_28_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:46:37 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.9903614,-0.6335501,9.612048,1.981436);
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
   
   Double_t curr_48b7e_gr_bias_nonzero_Asf_mean_fx51[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t curr_48b7e_gr_bias_nonzero_Asf_mean_fy51[9] = {
   0.5608141,
   -0.1603346,
   -0.1071564,
   -0.06336342,
   -0.0282213,
   -0.005310608,
   0.01136196,
   0.02259172,
   0.02844287};
   TGraph *graph = new TGraph(9,curr_48b7e_gr_bias_nonzero_Asf_mean_fx51,curr_48b7e_gr_bias_nonzero_Asf_mean_fy51);
   graph->SetName("curr_48b7e_gr_bias_nonzero_Asf_mean");
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
   
   TH1F *Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51 = new TH1F("Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51","Graph",100,0.2,9.8);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->SetMinimum(-0.2324495);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->SetMaximum(0.6329289);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->SetDirectory(0);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->SetStats(0);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->SetLineStyle(0);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_bias_nonzero_Asf_mean51);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_bias_nonzero_Asf_mean_fx52[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_48b7e_gr_bias_nonzero_Asf_mean_fy52[9] = {
   0.4504123,
   -0.1936019,
   -0.1388778,
   -0.09485897,
   -0.05987129,
   -0.03728434,
   -0.02103177,
   -0.01012001,
   -0.004258765};
   graph = new TGraph(9,pu0_48b7e_gr_bias_nonzero_Asf_mean_fx52,pu0_48b7e_gr_bias_nonzero_Asf_mean_fy52);
   graph->SetName("pu0_48b7e_gr_bias_nonzero_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52 = new TH1F("Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52","Graph",100,0.2,9.8);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->SetMinimum(-0.2580033);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->SetMaximum(0.5148138);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->SetDirectory(0);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->SetStats(0);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->SetLineStyle(0);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_bias_nonzero_Asf_mean52);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean_fx53[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean_fy53[9] = {
   0.5365861,
   -0.1566481,
   -0.09323419,
   -0.04485414,
   -0.007041543,
   0.01683286,
   0.03396554,
   0.0454547,
   0.05104204};
   graph = new TGraph(9,pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean_fx53,pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean_fy53);
   graph->SetName("pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53 = new TH1F("Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53","Graph",100,0.2,9.8);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->SetMinimum(-0.2259715);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->SetMaximum(0.6059095);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean53);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_bias_nonzero_Asf_mean_fx54[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s2_48b7e_gr_bias_nonzero_Asf_mean_fy54[9] = {
   0.3657989,
   -0.109861,
   -0.02290303,
   0.03407669,
   0.07735961,
   0.1040464,
   0.123094,
   0.1358518,
   0.1383606};
   graph = new TGraph(9,pu50s2_48b7e_gr_bias_nonzero_Asf_mean_fx54,pu50s2_48b7e_gr_bias_nonzero_Asf_mean_fy54);
   graph->SetName("pu50s2_48b7e_gr_bias_nonzero_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54 = new TH1F("Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54","Graph",100,0.2,9.8);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->SetMinimum(-0.157427);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->SetMaximum(0.4133649);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->SetStats(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_bias_nonzero_Asf_mean54);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_bias_nonzero_Asf_mean_fx55[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s30_48b7e_gr_bias_nonzero_Asf_mean_fy55[9] = {
   0.4616612,
   -0.1834094,
   -0.1267532,
   -0.08184151,
   -0.04610497,
   -0.02316529,
   -0.006652109,
   0.004444291,
   0.01037944};
   graph = new TGraph(9,pu50s30_48b7e_gr_bias_nonzero_Asf_mean_fx55,pu50s30_48b7e_gr_bias_nonzero_Asf_mean_fy55);
   graph->SetName("pu50s30_48b7e_gr_bias_nonzero_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55 = new TH1F("Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55","Graph",100,0.2,9.8);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->SetMinimum(-0.2479164);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->SetMaximum(0.5261683);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->SetStats(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_bias_nonzero_Asf_mean55);
   
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
   
   TLegend *leg = new TLegend(0.67,0.54,0.95,0.92,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("curr_48b7e_gr_bias_nonzero_Asf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_48b7e_gr_bias_nonzero_Asf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_48b7e_gr_bias_nonzero_Asf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_48b7e_gr_bias_nonzero_Asf_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_48b7e_gr_bias_nonzero_Asf_mean","PU optimized","lp");

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
