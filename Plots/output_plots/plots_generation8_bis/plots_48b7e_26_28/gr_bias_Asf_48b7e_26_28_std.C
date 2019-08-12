void gr_bias_Asf_48b7e_26_28_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:46:32 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.9903614,-0.4331175,9.612048,2.898555);
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
   
   Double_t curr_48b7e_gr_bias_Asf_std_fx16[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t curr_48b7e_gr_bias_Asf_std_fy16[9] = {
   2.580961,
   0.5371558,
   0.2637986,
   0.1663702,
   0.0992795,
   0.06145886,
   0.03670354,
   0.0203563,
   0.01335257};
   TGraph *graph = new TGraph(9,curr_48b7e_gr_bias_Asf_std_fx16,curr_48b7e_gr_bias_Asf_std_fy16);
   graph->SetName("curr_48b7e_gr_bias_Asf_std");
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
   
   TH1F *Graph_curr_48b7e_gr_bias_Asf_std16 = new TH1F("Graph_curr_48b7e_gr_bias_Asf_std16","Graph",100,0.2,9.8);
   Graph_curr_48b7e_gr_bias_Asf_std16->SetMinimum(0.01201731);
   Graph_curr_48b7e_gr_bias_Asf_std16->SetMaximum(2.837721);
   Graph_curr_48b7e_gr_bias_Asf_std16->SetDirectory(0);
   Graph_curr_48b7e_gr_bias_Asf_std16->SetStats(0);
   Graph_curr_48b7e_gr_bias_Asf_std16->SetLineStyle(0);
   Graph_curr_48b7e_gr_bias_Asf_std16->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_Asf_std16->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_bias_Asf_std16);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_bias_Asf_std_fx17[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_48b7e_gr_bias_Asf_std_fy17[9] = {
   2.602366,
   0.5310379,
   0.2595251,
   0.1633639,
   0.09716113,
   0.05974998,
   0.03504197,
   0.01814649,
   0.01025863};
   graph = new TGraph(9,pu0_48b7e_gr_bias_Asf_std_fx17,pu0_48b7e_gr_bias_Asf_std_fy17);
   graph->SetName("pu0_48b7e_gr_bias_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_bias_Asf_std17 = new TH1F("Graph_pu0_48b7e_gr_bias_Asf_std17","Graph",100,0.2,9.8);
   Graph_pu0_48b7e_gr_bias_Asf_std17->SetMinimum(0.009232769);
   Graph_pu0_48b7e_gr_bias_Asf_std17->SetMaximum(2.861577);
   Graph_pu0_48b7e_gr_bias_Asf_std17->SetDirectory(0);
   Graph_pu0_48b7e_gr_bias_Asf_std17->SetStats(0);
   Graph_pu0_48b7e_gr_bias_Asf_std17->SetLineStyle(0);
   Graph_pu0_48b7e_gr_bias_Asf_std17->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_Asf_std17->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_bias_Asf_std17);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_bias_Asf_std_fx18[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_newavg_48b7e_gr_bias_Asf_std_fy18[9] = {
   2.564854,
   0.5241931,
   0.2562674,
   0.1615482,
   0.09613085,
   0.05932337,
   0.03507397,
   0.01873427,
   0.01186215};
   graph = new TGraph(9,pu0_newavg_48b7e_gr_bias_Asf_std_fx18,pu0_newavg_48b7e_gr_bias_Asf_std_fy18);
   graph->SetName("pu0_newavg_48b7e_gr_bias_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_bias_Asf_std18 = new TH1F("Graph_pu0_newavg_48b7e_gr_bias_Asf_std18","Graph",100,0.2,9.8);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->SetMinimum(0.01067593);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->SetMaximum(2.820154);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_Asf_std18->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_bias_Asf_std18);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_bias_Asf_std_fx19[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s2_48b7e_gr_bias_Asf_std_fy19[9] = {
   2.547869,
   0.4918897,
   0.2360875,
   0.1482306,
   0.08806531,
   0.05458015,
   0.03324646,
   0.01998571,
   0.02245509};
   graph = new TGraph(9,pu50s2_48b7e_gr_bias_Asf_std_fx19,pu50s2_48b7e_gr_bias_Asf_std_fy19);
   graph->SetName("pu50s2_48b7e_gr_bias_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_bias_Asf_std19 = new TH1F("Graph_pu50s2_48b7e_gr_bias_Asf_std19","Graph",100,0.2,9.8);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->SetMinimum(0.01798714);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->SetMaximum(2.800658);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->SetStats(0);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_Asf_std19->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_bias_Asf_std19);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_bias_Asf_std_fx20[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s30_48b7e_gr_bias_Asf_std_fy20[9] = {
   2.59983,
   0.5304292,
   0.2587872,
   0.1626811,
   0.09643127,
   0.05907252,
   0.03450593,
   0.01794538,
   0.01064343};
   graph = new TGraph(9,pu50s30_48b7e_gr_bias_Asf_std_fx20,pu50s30_48b7e_gr_bias_Asf_std_fy20);
   graph->SetName("pu50s30_48b7e_gr_bias_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_bias_Asf_std20 = new TH1F("Graph_pu50s30_48b7e_gr_bias_Asf_std20","Graph",100,0.2,9.8);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->SetMinimum(0.009579091);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->SetMaximum(2.858749);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->SetStats(0);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_Asf_std20->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_bias_Asf_std20);
   
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
   TLegendEntry *entry=leg->AddEntry("curr_48b7e_gr_bias_Asf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_48b7e_gr_bias_Asf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_48b7e_gr_bias_Asf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_48b7e_gr_bias_Asf_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_48b7e_gr_bias_Asf_mean","PU optimized","lp");

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
