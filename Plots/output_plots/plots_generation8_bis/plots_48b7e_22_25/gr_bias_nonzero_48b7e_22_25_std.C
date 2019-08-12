void gr_bias_nonzero_48b7e_22_25_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:08:37 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.9903614,-0.07801027,9.612048,0.5220688);
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
   
   Double_t curr_48b7e_gr_bias_nonzero_std_fx46[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t curr_48b7e_gr_bias_nonzero_std_fy46[9] = {
   0.4689163,
   0.2002485,
   0.1174621,
   0.07440378,
   0.04615521,
   0.0309492,
   0.01975337,
   0.01414485,
   0.01224388};
   TGraph *graph = new TGraph(9,curr_48b7e_gr_bias_nonzero_std_fx46,curr_48b7e_gr_bias_nonzero_std_fy46);
   graph->SetName("curr_48b7e_gr_bias_nonzero_std");
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
   
   TH1F *Graph_curr_48b7e_gr_bias_nonzero_std46 = new TH1F("Graph_curr_48b7e_gr_bias_nonzero_std46","Graph",100,0.2,9.8);
   Graph_curr_48b7e_gr_bias_nonzero_std46->SetMinimum(0.0110195);
   Graph_curr_48b7e_gr_bias_nonzero_std46->SetMaximum(0.5145835);
   Graph_curr_48b7e_gr_bias_nonzero_std46->SetDirectory(0);
   Graph_curr_48b7e_gr_bias_nonzero_std46->SetStats(0);
   Graph_curr_48b7e_gr_bias_nonzero_std46->SetLineStyle(0);
   Graph_curr_48b7e_gr_bias_nonzero_std46->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_bias_nonzero_std46->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_bias_nonzero_std46);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_bias_nonzero_std_fx47[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_48b7e_gr_bias_nonzero_std_fy47[9] = {
   0.4558614,
   0.1996166,
   0.1169251,
   0.07382938,
   0.04517041,
   0.02937751,
   0.01700245,
   0.00959931,
   0.005945974};
   graph = new TGraph(9,pu0_48b7e_gr_bias_nonzero_std_fx47,pu0_48b7e_gr_bias_nonzero_std_fy47);
   graph->SetName("pu0_48b7e_gr_bias_nonzero_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_bias_nonzero_std47 = new TH1F("Graph_pu0_48b7e_gr_bias_nonzero_std47","Graph",100,0.2,9.8);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->SetMinimum(0.005351377);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->SetMaximum(0.5008529);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->SetDirectory(0);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->SetStats(0);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->SetLineStyle(0);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_bias_nonzero_std47->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_bias_nonzero_std47);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_bias_nonzero_std_fx48[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu0_newavg_48b7e_gr_bias_nonzero_std_fy48[9] = {
   0.4446762,
   0.1956579,
   0.1148143,
   0.07253749,
   0.0446087,
   0.0293253,
   0.01787229,
   0.01177474,
   0.01138066};
   graph = new TGraph(9,pu0_newavg_48b7e_gr_bias_nonzero_std_fx48,pu0_newavg_48b7e_gr_bias_nonzero_std_fy48);
   graph->SetName("pu0_newavg_48b7e_gr_bias_nonzero_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48 = new TH1F("Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48","Graph",100,0.2,9.8);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->SetMinimum(0.0102426);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->SetMaximum(0.4880057);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_bias_nonzero_std48);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_bias_nonzero_std_fx49[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s2_48b7e_gr_bias_nonzero_std_fy49[9] = {
   0.4370935,
   0.1931239,
   0.1128881,
   0.07205575,
   0.04588011,
   0.03279793,
   0.0248194,
   0.02183497,
   0.02387849};
   graph = new TGraph(9,pu50s2_48b7e_gr_bias_nonzero_std_fx49,pu50s2_48b7e_gr_bias_nonzero_std_fy49);
   graph->SetName("pu50s2_48b7e_gr_bias_nonzero_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_bias_nonzero_std49 = new TH1F("Graph_pu50s2_48b7e_gr_bias_nonzero_std49","Graph",100,0.2,9.8);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->SetMinimum(0.01965148);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->SetMaximum(0.4786193);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->SetStats(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_bias_nonzero_std49->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_bias_nonzero_std49);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_bias_nonzero_std_fx50[9] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t pu50s30_48b7e_gr_bias_nonzero_std_fy50[9] = {
   0.4554127,
   0.1993356,
   0.1167104,
   0.07365031,
   0.04505534,
   0.02933705,
   0.01708022,
   0.009902089,
   0.006547898};
   graph = new TGraph(9,pu50s30_48b7e_gr_bias_nonzero_std_fx50,pu50s30_48b7e_gr_bias_nonzero_std_fy50);
   graph->SetName("pu50s30_48b7e_gr_bias_nonzero_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_bias_nonzero_std50 = new TH1F("Graph_pu50s30_48b7e_gr_bias_nonzero_std50","Graph",100,0.2,9.8);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->SetMinimum(0.005893108);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->SetMaximum(0.5002992);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->SetStats(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_bias_nonzero_std50->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_bias_nonzero_std50);
   
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
   TLegendEntry *entry=leg->AddEntry("curr_48b7e_gr_bias_nonzero_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_48b7e_gr_bias_nonzero_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_48b7e_gr_bias_nonzero_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_48b7e_gr_bias_nonzero_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_48b7e_gr_bias_nonzero_mean","PU optimized","lp");

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
