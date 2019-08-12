void gr_bias_nonzero_totsf_48b7e_18_21_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:04:00 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.9903614,-0.07101663,9.612048,0.4752651);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetGridy();
   c2->SetTickx(1);
   c2->SetTicky(1);
   c2->SetLeftMargin(0.15);
   c2->SetRightMargin(0.02);
   c2->SetTopMargin(0.05);
   c2->SetBottomMargin(0.13);
   c2->SetFrameFillStyle(0);
   c2->SetFrameBorderMode(0);
   c2->SetFrameFillStyle(0);
   c2->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle(";ET (GeV);Fractional spread");
   
   Double_t curr_48b7e_gr_bias_nonzero_totsf_std_fx76[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t curr_48b7e_gr_bias_nonzero_totsf_std_fy76[9] = {
   0.426897,
   0.1513202,
   0.08181819,
   0.05496167,
   0.03450073,
   0.02295403,
   0.01565001,
   0.01173529,
   0.01033483};
   TGraph *graph = new TGraph(9,curr_48b7e_gr_bias_nonzero_totsf_std_fx76,curr_48b7e_gr_bias_nonzero_totsf_std_fy76);
   graph->SetName("curr_48b7e_gr_bias_nonzero_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9933");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_curr_48b7e_gr_bias_nonzero_totsf_std76 = new TH1F("Graph_curr_48b7e_gr_bias_nonzero_totsf_std76","Graph",100,0.2,9.8);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->SetMinimum(0.009301351);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->SetMaximum(0.4685532);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->SetDirectory(0);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->SetStats(0);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->SetLineStyle(0);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_nonzero_totsf_std76->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_bias_nonzero_totsf_std76);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_bias_nonzero_totsf_std_fx77[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_48b7e_gr_bias_nonzero_totsf_std_fy77[9] = {
   0.4167248,
   0.1510568,
   0.08138686,
   0.0543317,
   0.03347092,
   0.02131243,
   0.01316929,
   0.008094423,
   0.005816014};
   graph = new TGraph(9,pu0_48b7e_gr_bias_nonzero_totsf_std_fx77,pu0_48b7e_gr_bias_nonzero_totsf_std_fy77);
   graph->SetName("pu0_48b7e_gr_bias_nonzero_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77 = new TH1F("Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77","Graph",100,0.2,9.8);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->SetMinimum(0.005234412);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->SetMaximum(0.4578156);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->SetDirectory(0);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->SetStats(0);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->SetLineStyle(0);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_bias_nonzero_totsf_std77);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_bias_nonzero_totsf_std_fx78[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_newavg_48b7e_gr_bias_nonzero_totsf_std_fy78[9] = {
   0.4015465,
   0.1485256,
   0.08029518,
   0.05375508,
   0.03341497,
   0.02143061,
   0.01391767,
   0.009685422,
   0.008134143};
   graph = new TGraph(9,pu0_newavg_48b7e_gr_bias_nonzero_totsf_std_fx78,pu0_newavg_48b7e_gr_bias_nonzero_totsf_std_fy78);
   graph->SetName("pu0_newavg_48b7e_gr_bias_nonzero_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78 = new TH1F("Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78","Graph",100,0.2,9.8);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->SetMinimum(0.007320729);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->SetMaximum(0.4408877);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_bias_nonzero_totsf_std78);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_bias_nonzero_totsf_std_fx79[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s2_48b7e_gr_bias_nonzero_totsf_std_fy79[9] = {
   0.4127045,
   0.149368,
   0.08064052,
   0.05404595,
   0.03380108,
   0.02212486,
   0.01493392,
   0.01114538,
   0.009809544};
   graph = new TGraph(9,pu50s2_48b7e_gr_bias_nonzero_totsf_std_fx79,pu50s2_48b7e_gr_bias_nonzero_totsf_std_fy79);
   graph->SetName("pu50s2_48b7e_gr_bias_nonzero_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79 = new TH1F("Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79","Graph",100,0.2,9.8);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->SetMinimum(0.00882859);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->SetMaximum(0.452994);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->SetStats(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_bias_nonzero_totsf_std79);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_bias_nonzero_totsf_std_fx80[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s30_48b7e_gr_bias_nonzero_totsf_std_fy80[9] = {
   0.4167251,
   0.1509603,
   0.08135622,
   0.05432121,
   0.0334845,
   0.02140798,
   0.01327145,
   0.008276761,
   0.00607313};
   graph = new TGraph(9,pu50s30_48b7e_gr_bias_nonzero_totsf_std_fx80,pu50s30_48b7e_gr_bias_nonzero_totsf_std_fy80);
   graph->SetName("pu50s30_48b7e_gr_bias_nonzero_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80 = new TH1F("Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80","Graph",100,0.2,9.8);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->SetMinimum(0.005465817);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->SetMaximum(0.4577903);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->SetStats(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_bias_nonzero_totsf_std80);
   
   multigraph->Add(graph,"");
   multigraph->Draw("APL");
   multigraph->GetXaxis()->SetTitle("ET (GeV)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.007);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Fractional spread");
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
   entry=leg->AddEntry("pu50s2_48b7e_gr_bias_nonzero_totsf_mean","#splitline{PU optimized}{(PU=50, ET=2GeV)}","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_48b7e_gr_bias_nonzero_totsf_mean","#splitline{PU optimized}{(PU=50, ET=30GeV)}","lp");

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
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
