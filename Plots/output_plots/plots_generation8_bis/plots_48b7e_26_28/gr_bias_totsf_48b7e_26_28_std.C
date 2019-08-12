void gr_bias_totsf_48b7e_26_28_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:46:33 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.9903614,-0.3544512,9.612048,2.372097);
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
   
   Double_t curr_48b7e_gr_bias_totsf_std_fx36[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t curr_48b7e_gr_bias_totsf_std_fy36[9] = {
   2.117671,
   0.5148978,
   0.2739884,
   0.1766928,
   0.1023526,
   0.06121655,
   0.03606865,
   0.02040331,
   0.01320616};
   TGraph *graph = new TGraph(9,curr_48b7e_gr_bias_totsf_std_fx36,curr_48b7e_gr_bias_totsf_std_fy36);
   graph->SetName("curr_48b7e_gr_bias_totsf_std");
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
   
   TH1F *Graph_curr_48b7e_gr_bias_totsf_std36 = new TH1F("Graph_curr_48b7e_gr_bias_totsf_std36","Graph",100,0.2,9.8);
   Graph_curr_48b7e_gr_bias_totsf_std36->SetMinimum(0.01188554);
   Graph_curr_48b7e_gr_bias_totsf_std36->SetMaximum(2.328117);
   Graph_curr_48b7e_gr_bias_totsf_std36->SetDirectory(0);
   Graph_curr_48b7e_gr_bias_totsf_std36->SetStats(0);
   Graph_curr_48b7e_gr_bias_totsf_std36->SetLineStyle(0);
   Graph_curr_48b7e_gr_bias_totsf_std36->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_totsf_std36->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_bias_totsf_std36);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_bias_totsf_std_fx37[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_48b7e_gr_bias_totsf_std_fy37[9] = {
   2.129784,
   0.5095401,
   0.2699871,
   0.1738062,
   0.1002959,
   0.0595389,
   0.03439665,
   0.01821221,
   0.01006656};
   graph = new TGraph(9,pu0_48b7e_gr_bias_totsf_std_fx37,pu0_48b7e_gr_bias_totsf_std_fy37);
   graph->SetName("pu0_48b7e_gr_bias_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_bias_totsf_std37 = new TH1F("Graph_pu0_48b7e_gr_bias_totsf_std37","Graph",100,0.2,9.8);
   Graph_pu0_48b7e_gr_bias_totsf_std37->SetMinimum(0.009059906);
   Graph_pu0_48b7e_gr_bias_totsf_std37->SetMaximum(2.341755);
   Graph_pu0_48b7e_gr_bias_totsf_std37->SetDirectory(0);
   Graph_pu0_48b7e_gr_bias_totsf_std37->SetStats(0);
   Graph_pu0_48b7e_gr_bias_totsf_std37->SetLineStyle(0);
   Graph_pu0_48b7e_gr_bias_totsf_std37->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_totsf_std37->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_bias_totsf_std37);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_bias_totsf_std_fx38[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_newavg_48b7e_gr_bias_totsf_std_fy38[9] = {
   2.10399,
   0.5045022,
   0.2672597,
   0.1722566,
   0.09953597,
   0.05925671,
   0.03443026,
   0.01879867,
   0.0117062};
   graph = new TGraph(9,pu0_newavg_48b7e_gr_bias_totsf_std_fx38,pu0_newavg_48b7e_gr_bias_totsf_std_fy38);
   graph->SetName("pu0_newavg_48b7e_gr_bias_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_bias_totsf_std38 = new TH1F("Graph_pu0_newavg_48b7e_gr_bias_totsf_std38","Graph",100,0.2,9.8);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->SetMinimum(0.01053558);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->SetMaximum(2.313218);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_totsf_std38->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_bias_totsf_std38);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_bias_totsf_std_fx39[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s2_48b7e_gr_bias_totsf_std_fy39[9] = {
   2.085482,
   0.476852,
   0.2483667,
   0.1594431,
   0.09158809,
   0.05459897,
   0.03265987,
   0.02007212,
   0.02233575};
   graph = new TGraph(9,pu50s2_48b7e_gr_bias_totsf_std_fx39,pu50s2_48b7e_gr_bias_totsf_std_fy39);
   graph->SetName("pu50s2_48b7e_gr_bias_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_bias_totsf_std39 = new TH1F("Graph_pu50s2_48b7e_gr_bias_totsf_std39","Graph",100,0.2,9.8);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->SetMinimum(0.01806491);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->SetMaximum(2.292023);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->SetStats(0);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_totsf_std39->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_bias_totsf_std39);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_bias_totsf_std_fx40[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s30_48b7e_gr_bias_totsf_std_fy40[9] = {
   2.129181,
   0.5096945,
   0.2698373,
   0.1736868,
   0.09982412,
   0.05890938,
   0.03383425,
   0.01803688,
   0.0104226};
   graph = new TGraph(9,pu50s30_48b7e_gr_bias_totsf_std_fx40,pu50s30_48b7e_gr_bias_totsf_std_fy40);
   graph->SetName("pu50s30_48b7e_gr_bias_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_bias_totsf_std40 = new TH1F("Graph_pu50s30_48b7e_gr_bias_totsf_std40","Graph",100,0.2,9.8);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->SetMinimum(0.009380336);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->SetMaximum(2.341057);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->SetStats(0);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_totsf_std40->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_bias_totsf_std40);
   
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
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
