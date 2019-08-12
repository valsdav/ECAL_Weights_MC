void gr_bias_totsf_48b7e_26_28_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:46:33 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.9903614,-0.3254671,9.612048,0.4967898);
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
   
   Double_t curr_48b7e_gr_bias_totsf_mean_fx31[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t curr_48b7e_gr_bias_totsf_mean_fy31[9] = {
   0.01668574,
   -0.08499018,
   -0.04323802,
   -0.01278116,
   -0.01410464,
   -0.00328169,
   0.01093155,
   0.02293553,
   0.0281592};
   TGraph *graph = new TGraph(9,curr_48b7e_gr_bias_totsf_mean_fx31,curr_48b7e_gr_bias_totsf_mean_fy31);
   graph->SetName("curr_48b7e_gr_bias_totsf_mean");
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
   
   TH1F *Graph_curr_48b7e_gr_bias_totsf_mean31 = new TH1F("Graph_curr_48b7e_gr_bias_totsf_mean31","Graph",100,0.2,9.8);
   Graph_curr_48b7e_gr_bias_totsf_mean31->SetMinimum(-0.09630512);
   Graph_curr_48b7e_gr_bias_totsf_mean31->SetMaximum(0.03947414);
   Graph_curr_48b7e_gr_bias_totsf_mean31->SetDirectory(0);
   Graph_curr_48b7e_gr_bias_totsf_mean31->SetStats(0);
   Graph_curr_48b7e_gr_bias_totsf_mean31->SetLineStyle(0);
   Graph_curr_48b7e_gr_bias_totsf_mean31->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_totsf_mean31->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_bias_totsf_mean31);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_bias_totsf_mean_fx32[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_48b7e_gr_bias_totsf_mean_fy32[9] = {
   -0.0447742,
   -0.1185737,
   -0.07582995,
   -0.0457096,
   -0.04618089,
   -0.03532385,
   -0.02144187,
   -0.009796351,
   -0.004529743};
   graph = new TGraph(9,pu0_48b7e_gr_bias_totsf_mean_fx32,pu0_48b7e_gr_bias_totsf_mean_fy32);
   graph->SetName("pu0_48b7e_gr_bias_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_bias_totsf_mean32 = new TH1F("Graph_pu0_48b7e_gr_bias_totsf_mean32","Graph",100,0.2,9.8);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->SetMinimum(-0.1299781);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->SetMaximum(0.006874654);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->SetDirectory(0);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->SetStats(0);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->SetLineStyle(0);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_totsf_mean32->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_bias_totsf_mean32);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_bias_totsf_mean_fx33[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_newavg_48b7e_gr_bias_totsf_mean_fy33[9] = {
   0.006651106,
   -0.06895514,
   -0.02385998,
   0.007954173,
   0.00765072,
   0.01891764,
   0.03352294,
   0.04578621,
   0.05076708};
   graph = new TGraph(9,pu0_newavg_48b7e_gr_bias_totsf_mean_fx33,pu0_newavg_48b7e_gr_bias_totsf_mean_fy33);
   graph->SetName("pu0_newavg_48b7e_gr_bias_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33 = new TH1F("Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33","Graph",100,0.2,9.8);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->SetMinimum(-0.08092736);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->SetMaximum(0.0627393);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_bias_totsf_mean33);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_bias_totsf_mean_fx34[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s2_48b7e_gr_bias_totsf_mean_fy34[9] = {
   -0.02214677,
   -0.009613099,
   0.05062564,
   0.08830691,
   0.09214624,
   0.1060856,
   0.122643,
   0.1361823,
   0.1380839};
   graph = new TGraph(9,pu50s2_48b7e_gr_bias_totsf_mean_fx34,pu50s2_48b7e_gr_bias_totsf_mean_fy34);
   graph->SetName("pu50s2_48b7e_gr_bias_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_bias_totsf_mean34 = new TH1F("Graph_pu50s2_48b7e_gr_bias_totsf_mean34","Graph",100,0.2,9.8);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->SetMinimum(-0.03816984);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->SetMaximum(0.154107);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->SetStats(0);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_totsf_mean34->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_bias_totsf_mean34);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_bias_totsf_mean_fx35[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s30_48b7e_gr_bias_totsf_mean_fy35[9] = {
   -0.02988814,
   -0.1058648,
   -0.06238469,
   -0.03175993,
   -0.03215107,
   -0.02117065,
   -0.007064934,
   0.004775275,
   0.0101022};
   graph = new TGraph(9,pu50s30_48b7e_gr_bias_totsf_mean_fx35,pu50s30_48b7e_gr_bias_totsf_mean_fy35);
   graph->SetName("pu50s30_48b7e_gr_bias_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_bias_totsf_mean35 = new TH1F("Graph_pu50s30_48b7e_gr_bias_totsf_mean35","Graph",100,0.2,9.8);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->SetMinimum(-0.1174615);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->SetMaximum(0.02169889);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->SetStats(0);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_totsf_mean35->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_bias_totsf_mean35);
   
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
   TLegendEntry *entry=leg->AddEntry("curr_48b7e_gr_bias_totsf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_48b7e_gr_bias_totsf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_48b7e_gr_bias_totsf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_48b7e_gr_bias_totsf_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_48b7e_gr_bias_totsf_mean","PU optimized","lp");

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
