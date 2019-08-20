void bias_train_8b4e_22_25_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Tue Aug 20 10:22:21 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.7415662,-0.5880914,8.535542,3.166458);
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
   multigraph->SetTitle(";BX of signal;Fractional spread");
   
   Double_t gr_curr_8b4e_22_25_bias_train_std_fx36[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_curr_8b4e_22_25_bias_train_std_fy36[8] = {
   0.7519614,
   0.8136438,
   0.8088128,
   0.872029,
   0.9608808,
   0.8357267,
   0.8992876,
   0.7139891};
   TGraph *graph = new TGraph(8,gr_curr_8b4e_22_25_bias_train_std_fx36,gr_curr_8b4e_22_25_bias_train_std_fy36);
   graph->SetName("gr_curr_8b4e_22_25_bias_train_std");
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
   
   TH1F *Graph_gr_curr_8b4e_22_25_bias_train_std36 = new TH1F("Graph_gr_curr_8b4e_22_25_bias_train_std36","Graph",100,0.3,8.7);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->SetMinimum(0.6892999);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->SetMaximum(0.98557);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->SetDirectory(0);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->SetStats(0);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->SetLineStyle(0);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->SetMarkerStyle(20);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetXaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetXaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetXaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetYaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetYaxis()->SetTitleFont(42);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetZaxis()->SetLabelFont(42);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetZaxis()->SetTitleOffset(1);
   Graph_gr_curr_8b4e_22_25_bias_train_std36->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_curr_8b4e_22_25_bias_train_std36);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_8b4e_22_25_bias_train_std_fx37[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_8b4e_22_25_bias_train_std_fy37[8] = {
   0.6987796,
   0.7379898,
   0.7386876,
   0.7810501,
   0.7504724,
   0.765852,
   0.8065111,
   0.6069007};
   graph = new TGraph(8,gr_pu0_8b4e_22_25_bias_train_std_fx37,gr_pu0_8b4e_22_25_bias_train_std_fy37);
   graph->SetName("gr_pu0_8b4e_22_25_bias_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_8b4e_22_25_bias_train_std37 = new TH1F("Graph_gr_pu0_8b4e_22_25_bias_train_std37","Graph",100,0.3,8.7);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->SetMinimum(0.5869397);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->SetMaximum(0.8264721);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->SetDirectory(0);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->SetStats(0);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->SetLineStyle(0);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->SetMarkerStyle(20);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_8b4e_22_25_bias_train_std37->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_8b4e_22_25_bias_train_std37);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu0_newavg_8b4e_22_25_bias_train_std_fx38[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu0_newavg_8b4e_22_25_bias_train_std_fy38[8] = {
   0.6980222,
   0.7225742,
   0.7513099,
   0.7717925,
   0.7848277,
   0.7759137,
   0.8907108,
   0.6142863};
   graph = new TGraph(8,gr_pu0_newavg_8b4e_22_25_bias_train_std_fx38,gr_pu0_newavg_8b4e_22_25_bias_train_std_fy38);
   graph->SetName("gr_pu0_newavg_8b4e_22_25_bias_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38 = new TH1F("Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38","Graph",100,0.3,8.7);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->SetMinimum(0.5866439);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->SetMaximum(0.9183532);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->SetDirectory(0);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->SetStats(0);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->SetLineStyle(0);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->SetMarkerStyle(20);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu0_newavg_8b4e_22_25_bias_train_std38);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s2_8b4e_22_25_bias_train_std_fx39[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s2_8b4e_22_25_bias_train_std_fy39[8] = {
   0.6870825,
   0.6894426,
   0.6938679,
   0.7348194,
   0.7242609,
   0.7407681,
   0.7527763,
   0.6131284};
   graph = new TGraph(8,gr_pu50s2_8b4e_22_25_bias_train_std_fx39,gr_pu50s2_8b4e_22_25_bias_train_std_fy39);
   graph->SetName("gr_pu50s2_8b4e_22_25_bias_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s2_8b4e_22_25_bias_train_std39 = new TH1F("Graph_gr_pu50s2_8b4e_22_25_bias_train_std39","Graph",100,0.3,8.7);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->SetMinimum(0.5991636);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->SetMaximum(0.7667411);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->SetDirectory(0);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->SetStats(0);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->SetLineStyle(0);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->SetMarkerStyle(20);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s2_8b4e_22_25_bias_train_std39->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s2_8b4e_22_25_bias_train_std39);
   
   multigraph->Add(graph,"");
   
   Double_t gr_pu50s30_8b4e_22_25_bias_train_std_fx40[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t gr_pu50s30_8b4e_22_25_bias_train_std_fy40[8] = {
   0.68317,
   0.7108129,
   0.7080163,
   0.7592397,
   0.7480214,
   0.7676571,
   0.8006388,
   0.6179523};
   graph = new TGraph(8,gr_pu50s30_8b4e_22_25_bias_train_std_fx40,gr_pu50s30_8b4e_22_25_bias_train_std_fy40);
   graph->SetName("gr_pu50s30_8b4e_22_25_bias_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_gr_pu50s30_8b4e_22_25_bias_train_std40 = new TH1F("Graph_gr_pu50s30_8b4e_22_25_bias_train_std40","Graph",100,0.3,8.7);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->SetMinimum(0.5996836);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->SetMaximum(0.8189074);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->SetDirectory(0);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->SetStats(0);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->SetLineStyle(0);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->SetMarkerStyle(20);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetXaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetXaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetXaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetXaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetXaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetXaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetYaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetYaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetYaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetYaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetYaxis()->SetTitleOffset(1.1);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetYaxis()->SetTitleFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetZaxis()->SetLabelFont(42);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetZaxis()->SetLabelOffset(0.007);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetZaxis()->SetLabelSize(0.05);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetZaxis()->SetTitleSize(0.06);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetZaxis()->SetTitleOffset(1);
   Graph_gr_pu50s30_8b4e_22_25_bias_train_std40->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gr_pu50s30_8b4e_22_25_bias_train_std40);
   
   multigraph->Add(graph,"");
   multigraph->Draw("APL");
   multigraph->GetXaxis()->SetTitle("BX of signal");
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
   TLegendEntry *entry=leg->AddEntry("gr_curr_8b4e_22_25_bias_train_std","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_newavg_8b4e_22_25_bias_train_std","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu0_8b4e_22_25_bias_train_std","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gr_pu50s2_8b4e_22_25_bias_train_std","PU optimized","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

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
   entry=leg->AddEntry("gr_pu50s30_8b4e_22_25_bias_train_std","PU optimized","lp");

   ci = TColor::GetColor("#0000cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

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
   pt_LaTex = pt->AddText("1.8<|#eta|<2.3");
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
