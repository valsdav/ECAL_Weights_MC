void gr_bias_BXsf_48b7e_22_25_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:08:36 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.9903614,-0.1892515,9.612048,1.26653);
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
   
   Double_t curr_48b7e_gr_bias_BXsf_std_fx26[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t curr_48b7e_gr_bias_BXsf_std_fy26[9] = {
   1.136533,
   0.217567,
   0.1226717,
   0.07582145,
   0.04654967,
   0.03096402,
   0.01976289,
   0.01414442,
   0.01228121};
   TGraph *graph = new TGraph(9,curr_48b7e_gr_bias_BXsf_std_fx26,curr_48b7e_gr_bias_BXsf_std_fy26);
   graph->SetName("curr_48b7e_gr_bias_BXsf_std");
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
   
   TH1F *Graph_curr_48b7e_gr_bias_BXsf_std26 = new TH1F("Graph_curr_48b7e_gr_bias_BXsf_std26","Graph",100,0.2,9.8);
   Graph_curr_48b7e_gr_bias_BXsf_std26->SetMinimum(0.01105309);
   Graph_curr_48b7e_gr_bias_BXsf_std26->SetMaximum(1.248959);
   Graph_curr_48b7e_gr_bias_BXsf_std26->SetDirectory(0);
   Graph_curr_48b7e_gr_bias_BXsf_std26->SetStats(0);
   Graph_curr_48b7e_gr_bias_BXsf_std26->SetLineStyle(0);
   Graph_curr_48b7e_gr_bias_BXsf_std26->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_BXsf_std26->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_bias_BXsf_std26);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_bias_BXsf_std_fx27[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_48b7e_gr_bias_BXsf_std_fy27[9] = {
   1.13718,
   0.2159133,
   0.1216221,
   0.075028,
   0.04550862,
   0.02938538,
   0.01700171,
   0.009593253,
   0.005974876};
   graph = new TGraph(9,pu0_48b7e_gr_bias_BXsf_std_fx27,pu0_48b7e_gr_bias_BXsf_std_fy27);
   graph->SetName("pu0_48b7e_gr_bias_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_bias_BXsf_std27 = new TH1F("Graph_pu0_48b7e_gr_bias_BXsf_std27","Graph",100,0.2,9.8);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->SetMinimum(0.005377389);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->SetMaximum(1.250301);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->SetDirectory(0);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->SetStats(0);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->SetLineStyle(0);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_BXsf_std27->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_bias_BXsf_std27);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_bias_BXsf_std_fx28[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_newavg_48b7e_gr_bias_BXsf_std_fy28[9] = {
   1.110744,
   0.2119121,
   0.1194103,
   0.07361989,
   0.04489329,
   0.02931678,
   0.01788094,
   0.01177502,
   0.01143413};
   graph = new TGraph(9,pu0_newavg_48b7e_gr_bias_BXsf_std_fx28,pu0_newavg_48b7e_gr_bias_BXsf_std_fy28);
   graph->SetName("pu0_newavg_48b7e_gr_bias_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28 = new TH1F("Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28","Graph",100,0.2,9.8);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->SetMinimum(0.01029071);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->SetMaximum(1.220675);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_bias_BXsf_std28);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_bias_BXsf_std_fx29[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s2_48b7e_gr_bias_BXsf_std_fy29[9] = {
   1.099852,
   0.2088671,
   0.1175939,
   0.07322398,
   0.04616081,
   0.03278784,
   0.02483223,
   0.02184418,
   0.0239492};
   graph = new TGraph(9,pu50s2_48b7e_gr_bias_BXsf_std_fx29,pu50s2_48b7e_gr_bias_BXsf_std_fy29);
   graph->SetName("pu50s2_48b7e_gr_bias_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_bias_BXsf_std29 = new TH1F("Graph_pu50s2_48b7e_gr_bias_BXsf_std29","Graph",100,0.2,9.8);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->SetMinimum(0.01965976);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->SetMaximum(1.207653);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->SetStats(0);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_BXsf_std29->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_bias_BXsf_std29);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_bias_BXsf_std_fx30[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s30_48b7e_gr_bias_BXsf_std_fy30[9] = {
   1.135359,
   0.2156691,
   0.1214392,
   0.07486071,
   0.04539456,
   0.02934612,
   0.0170793,
   0.009897289,
   0.006583331};
   graph = new TGraph(9,pu50s30_48b7e_gr_bias_BXsf_std_fx30,pu50s30_48b7e_gr_bias_BXsf_std_fy30);
   graph->SetName("pu50s30_48b7e_gr_bias_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_bias_BXsf_std30 = new TH1F("Graph_pu50s30_48b7e_gr_bias_BXsf_std30","Graph",100,0.2,9.8);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->SetMinimum(0.005924998);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->SetMaximum(1.248236);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->SetStats(0);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_BXsf_std30->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_bias_BXsf_std30);
   
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
   TLegendEntry *entry=leg->AddEntry("curr_48b7e_gr_bias_BXsf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_48b7e_gr_bias_BXsf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_48b7e_gr_bias_BXsf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_48b7e_gr_bias_BXsf_mean","PU optimized","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("NULL","PU=50, ET=2GeV","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_48b7e_gr_bias_BXsf_mean","PU optimized","lp");

   ci = TColor::GetColor("#0000cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("NULL","PU=50, ET=30GeV","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.35,0.68,0.65,0.88,"NB NDC");
   pt->SetFillColor(0);
   TText *pt_LaTex = pt->AddText("PU=50");
   pt_LaTex = pt->AddText("1.8<|#eta|<2.3");
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
