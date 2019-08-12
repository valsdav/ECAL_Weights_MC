void gr_bias_nonzero_BXsf_48b7e_26_28_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:46:38 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.9903614,-0.1519384,9.612048,1.016818);
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
   
   Double_t curr_48b7e_gr_bias_nonzero_BXsf_std_fx66[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t curr_48b7e_gr_bias_nonzero_BXsf_std_fy66[9] = {
   0.9131655,
   0.4058714,
   0.2627096,
   0.1651478,
   0.09592655,
   0.05956275,
   0.0339532,
   0.01966801,
   0.01252254};
   TGraph *graph = new TGraph(9,curr_48b7e_gr_bias_nonzero_BXsf_std_fx66,curr_48b7e_gr_bias_nonzero_BXsf_std_fy66);
   graph->SetName("curr_48b7e_gr_bias_nonzero_BXsf_std");
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
   
   TH1F *Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66 = new TH1F("Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66","Graph",100,0.2,9.8);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->SetMinimum(0.01127028);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->SetMaximum(1.00323);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->SetDirectory(0);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->SetStats(0);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->SetLineStyle(0);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_bias_nonzero_BXsf_std66);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_bias_nonzero_BXsf_std_fx67[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_48b7e_gr_bias_nonzero_BXsf_std_fy67[9] = {
   0.861205,
   0.4016154,
   0.2598783,
   0.1629532,
   0.09420919,
   0.05796946,
   0.03226152,
   0.01742208,
   0.00886365};
   graph = new TGraph(9,pu0_48b7e_gr_bias_nonzero_BXsf_std_fx67,pu0_48b7e_gr_bias_nonzero_BXsf_std_fy67);
   graph->SetName("pu0_48b7e_gr_bias_nonzero_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67 = new TH1F("Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67","Graph",100,0.2,9.8);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->SetMinimum(0.007977285);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->SetMaximum(0.9464392);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->SetDirectory(0);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->SetStats(0);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->SetLineStyle(0);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_bias_nonzero_BXsf_std67);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std_fx68[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std_fy68[9] = {
   0.9113001,
   0.3976564,
   0.2576371,
   0.1620428,
   0.09376001,
   0.05775967,
   0.03236424,
   0.01805035,
   0.0126447};
   graph = new TGraph(9,pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std_fx68,pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std_fy68);
   graph->SetName("pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68 = new TH1F("Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68","Graph",100,0.2,9.8);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->SetMinimum(0.01138023);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->SetMaximum(1.001166);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_bias_nonzero_BXsf_std68);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_bias_nonzero_BXsf_std_fx69[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s2_48b7e_gr_bias_nonzero_BXsf_std_fy69[9] = {
   0.7304686,
   0.3846629,
   0.2428775,
   0.1509838,
   0.0864912,
   0.05328323,
   0.03089888,
   0.01953756,
   0.03370551};
   graph = new TGraph(9,pu50s2_48b7e_gr_bias_nonzero_BXsf_std_fx69,pu50s2_48b7e_gr_bias_nonzero_BXsf_std_fy69);
   graph->SetName("pu50s2_48b7e_gr_bias_nonzero_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69 = new TH1F("Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69","Graph",100,0.2,9.8);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->SetMinimum(0.0175838);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->SetMaximum(0.8015617);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->SetStats(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_bias_nonzero_BXsf_std69);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_bias_nonzero_BXsf_std_fx70[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s30_48b7e_gr_bias_nonzero_BXsf_std_fy70[9] = {
   0.8652005,
   0.4025313,
   0.2598214,
   0.1628761,
   0.09374887,
   0.05734487,
   0.03172275,
   0.01728106,
   0.009393059};
   graph = new TGraph(9,pu50s30_48b7e_gr_bias_nonzero_BXsf_std_fx70,pu50s30_48b7e_gr_bias_nonzero_BXsf_std_fy70);
   graph->SetName("pu50s30_48b7e_gr_bias_nonzero_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70 = new TH1F("Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70","Graph",100,0.2,9.8);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->SetMinimum(0.008453753);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->SetMaximum(0.9507813);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->SetStats(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_bias_nonzero_BXsf_std70);
   
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
   
   TLegend *leg = new TLegend(0.67,0.54,0.95,0.92,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("curr_48b7e_gr_bias_nonzero_BXsf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_48b7e_gr_bias_nonzero_BXsf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_48b7e_gr_bias_nonzero_BXsf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_48b7e_gr_bias_nonzero_BXsf_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_48b7e_gr_bias_nonzero_BXsf_mean","PU optimized","lp");

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
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
