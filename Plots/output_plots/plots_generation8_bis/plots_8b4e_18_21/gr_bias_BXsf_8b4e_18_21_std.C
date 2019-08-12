void gr_bias_BXsf_8b4e_18_21_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:04:44 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.4927711,-0.1311257,7.459036,0.8775335);
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
   
   Double_t curr_8b4e_gr_bias_BXsf_std_fx26[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t curr_8b4e_gr_bias_BXsf_std_fy26[7] = {
   0.7877419,
   0.1370725,
   0.08014901,
   0.05082007,
   0.03239033,
   0.02190694,
   0.01424669};
   TGraph *graph = new TGraph(7,curr_8b4e_gr_bias_BXsf_std_fx26,curr_8b4e_gr_bias_BXsf_std_fy26);
   graph->SetName("curr_8b4e_gr_bias_BXsf_std");
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
   
   TH1F *Graph_curr_8b4e_gr_bias_BXsf_std26 = new TH1F("Graph_curr_8b4e_gr_bias_BXsf_std26","Graph",100,0.4,7.6);
   Graph_curr_8b4e_gr_bias_BXsf_std26->SetMinimum(0.01282202);
   Graph_curr_8b4e_gr_bias_BXsf_std26->SetMaximum(0.8650914);
   Graph_curr_8b4e_gr_bias_BXsf_std26->SetDirectory(0);
   Graph_curr_8b4e_gr_bias_BXsf_std26->SetStats(0);
   Graph_curr_8b4e_gr_bias_BXsf_std26->SetLineStyle(0);
   Graph_curr_8b4e_gr_bias_BXsf_std26->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_bias_BXsf_std26->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_bias_BXsf_std26);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_bias_BXsf_std_fx27[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_8b4e_gr_bias_BXsf_std_fy27[7] = {
   0.7882524,
   0.1364026,
   0.07948164,
   0.05000151,
   0.03116805,
   0.02002644,
   0.01128883};
   graph = new TGraph(7,pu0_8b4e_gr_bias_BXsf_std_fx27,pu0_8b4e_gr_bias_BXsf_std_fy27);
   graph->SetName("pu0_8b4e_gr_bias_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_bias_BXsf_std27 = new TH1F("Graph_pu0_8b4e_gr_bias_BXsf_std27","Graph",100,0.4,7.6);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->SetMinimum(0.01015994);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->SetMaximum(0.8659487);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->SetDirectory(0);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->SetStats(0);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->SetLineStyle(0);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_bias_BXsf_std27->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_bias_BXsf_std27);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_bias_BXsf_std_fx28[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu0_newavg_8b4e_gr_bias_BXsf_std_fy28[7] = {
   0.7688711,
   0.1338106,
   0.07814196,
   0.04945172,
   0.03112899,
   0.02019112,
   0.01241552};
   graph = new TGraph(7,pu0_newavg_8b4e_gr_bias_BXsf_std_fx28,pu0_newavg_8b4e_gr_bias_BXsf_std_fy28);
   graph->SetName("pu0_newavg_8b4e_gr_bias_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28 = new TH1F("Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28","Graph",100,0.4,7.6);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->SetMinimum(0.01117397);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->SetMaximum(0.8445167);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_bias_BXsf_std28);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_bias_BXsf_std_fx29[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s2_8b4e_gr_bias_BXsf_std_fy29[7] = {
   0.7759151,
   0.1351444,
   0.07897384,
   0.05013111,
   0.03187357,
   0.02144229,
   0.01376589};
   graph = new TGraph(7,pu50s2_8b4e_gr_bias_BXsf_std_fx29,pu50s2_8b4e_gr_bias_BXsf_std_fy29);
   graph->SetName("pu50s2_8b4e_gr_bias_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_bias_BXsf_std29 = new TH1F("Graph_pu50s2_8b4e_gr_bias_BXsf_std29","Graph",100,0.4,7.6);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->SetMinimum(0.0123893);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->SetMaximum(0.8521301);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->SetStats(0);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_bias_BXsf_std29->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_bias_BXsf_std29);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_bias_BXsf_std_fx30[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t pu50s30_8b4e_gr_bias_BXsf_std_fy30[7] = {
   0.7872817,
   0.1363399,
   0.07945895,
   0.04999272,
   0.03119991,
   0.02010692,
   0.0114277};
   graph = new TGraph(7,pu50s30_8b4e_gr_bias_BXsf_std_fx30,pu50s30_8b4e_gr_bias_BXsf_std_fy30);
   graph->SetName("pu50s30_8b4e_gr_bias_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_bias_BXsf_std30 = new TH1F("Graph_pu50s30_8b4e_gr_bias_BXsf_std30","Graph",100,0.4,7.6);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->SetMinimum(0.01028493);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->SetMaximum(0.8648671);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->SetStats(0);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_bias_BXsf_std30->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_bias_BXsf_std30);
   
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
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
