void gr_train_BXsf_8b4e_18_21_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:04:52 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.7415662,-0.2077013,8.535542,0.2838975);
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
   multigraph->SetTitle(";BX of signal;Fractional bias");
   
   Double_t curr_8b4e_gr_train_BXsf_mean_fx101[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t curr_8b4e_gr_train_BXsf_mean_fy101[8] = {
   0.02445703,
   0.05593237,
   0.04635054,
   0.03226252,
   0.02519998,
   0.01733515,
   -0.003798937,
   -0.03200676};
   TGraph *graph = new TGraph(8,curr_8b4e_gr_train_BXsf_mean_fx101,curr_8b4e_gr_train_BXsf_mean_fy101);
   graph->SetName("curr_8b4e_gr_train_BXsf_mean");
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
   
   TH1F *Graph_curr_8b4e_gr_train_BXsf_mean101 = new TH1F("Graph_curr_8b4e_gr_train_BXsf_mean101","Graph",100,0.3,8.7);
   Graph_curr_8b4e_gr_train_BXsf_mean101->SetMinimum(-0.04080067);
   Graph_curr_8b4e_gr_train_BXsf_mean101->SetMaximum(0.06472628);
   Graph_curr_8b4e_gr_train_BXsf_mean101->SetDirectory(0);
   Graph_curr_8b4e_gr_train_BXsf_mean101->SetStats(0);
   Graph_curr_8b4e_gr_train_BXsf_mean101->SetLineStyle(0);
   Graph_curr_8b4e_gr_train_BXsf_mean101->SetMarkerStyle(20);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetXaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetXaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetXaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetYaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetYaxis()->SetTitleFont(42);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetZaxis()->SetLabelFont(42);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetZaxis()->SetTitleOffset(1);
   Graph_curr_8b4e_gr_train_BXsf_mean101->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_8b4e_gr_train_BXsf_mean101);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_8b4e_gr_train_BXsf_mean_fx102[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu0_8b4e_gr_train_BXsf_mean_fy102[8] = {
   0.01049308,
   0.04196729,
   0.03286594,
   0.01902702,
   0.01199635,
   0.004273755,
   -0.01625281,
   -0.04379346};
   graph = new TGraph(8,pu0_8b4e_gr_train_BXsf_mean_fx102,pu0_8b4e_gr_train_BXsf_mean_fy102);
   graph->SetName("pu0_8b4e_gr_train_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_8b4e_gr_train_BXsf_mean102 = new TH1F("Graph_pu0_8b4e_gr_train_BXsf_mean102","Graph",100,0.3,8.7);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->SetMinimum(-0.05236953);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->SetMaximum(0.05054337);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->SetDirectory(0);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->SetStats(0);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->SetLineStyle(0);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->SetMarkerStyle(20);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetXaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetXaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetYaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetYaxis()->SetTitleFont(42);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetZaxis()->SetLabelFont(42);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_8b4e_gr_train_BXsf_mean102->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_8b4e_gr_train_BXsf_mean102);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_8b4e_gr_train_BXsf_mean_fx103[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu0_newavg_8b4e_gr_train_BXsf_mean_fy103[8] = {
   0.04242851,
   0.07858108,
   0.07105231,
   0.05702668,
   0.04961547,
   0.04161958,
   0.02135141,
   -0.005963915};
   graph = new TGraph(8,pu0_newavg_8b4e_gr_train_BXsf_mean_fx103,pu0_newavg_8b4e_gr_train_BXsf_mean_fy103);
   graph->SetName("pu0_newavg_8b4e_gr_train_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103 = new TH1F("Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103","Graph",100,0.3,8.7);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->SetMinimum(-0.01441841);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->SetMaximum(0.08703558);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->SetDirectory(0);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->SetStats(0);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->SetLineStyle(0);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->SetMarkerStyle(20);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_8b4e_gr_train_BXsf_mean103);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_8b4e_gr_train_BXsf_mean_fx104[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu50s2_8b4e_gr_train_BXsf_mean_fy104[8] = {
   0.03918448,
   0.07195481,
   0.0630495,
   0.04890339,
   0.04165865,
   0.03372115,
   0.01271822,
   -0.01531564};
   graph = new TGraph(8,pu50s2_8b4e_gr_train_BXsf_mean_fx104,pu50s2_8b4e_gr_train_BXsf_mean_fy104);
   graph->SetName("pu50s2_8b4e_gr_train_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_8b4e_gr_train_BXsf_mean104 = new TH1F("Graph_pu50s2_8b4e_gr_train_BXsf_mean104","Graph",100,0.3,8.7);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->SetMinimum(-0.02404269);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->SetMaximum(0.08068185);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->SetDirectory(0);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->SetStats(0);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->SetLineStyle(0);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->SetMarkerStyle(20);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_8b4e_gr_train_BXsf_mean104->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_8b4e_gr_train_BXsf_mean104);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_8b4e_gr_train_BXsf_mean_fx105[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t pu50s30_8b4e_gr_train_BXsf_mean_fy105[8] = {
   0.0128729,
   0.044423,
   0.03531279,
   0.02146119,
   0.0144017,
   0.006671556,
   -0.01390313,
   -0.04150692};
   graph = new TGraph(8,pu50s30_8b4e_gr_train_BXsf_mean_fx105,pu50s30_8b4e_gr_train_BXsf_mean_fy105);
   graph->SetName("pu50s30_8b4e_gr_train_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_8b4e_gr_train_BXsf_mean105 = new TH1F("Graph_pu50s30_8b4e_gr_train_BXsf_mean105","Graph",100,0.3,8.7);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->SetMinimum(-0.05009991);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->SetMaximum(0.05301599);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->SetDirectory(0);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->SetStats(0);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->SetLineStyle(0);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->SetMarkerStyle(20);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_8b4e_gr_train_BXsf_mean105->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_8b4e_gr_train_BXsf_mean105);
   
   multigraph->Add(graph,"");
   multigraph->Draw("APL");
   multigraph->GetXaxis()->SetTitle("BX of signal");
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
   
   TLegend *leg = new TLegend(0.67,0.5,0.95,0.93,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("curr_8b4e_gr_train_BXsf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_8b4e_gr_train_BXsf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_8b4e_gr_train_BXsf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_8b4e_gr_train_BXsf_mean","#splitline{PU optimized}{(PU=50, ET=2GeV)}","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_8b4e_gr_train_BXsf_mean","#splitline{PU optimized}{(PU=50, ET=30GeV)}","lp");

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
