void gr_train_Asf_48b7e_26_28_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:46:40 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-10.69337,-0.5982099,51.59578,3.234174);
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
   
   Double_t curr_48b7e_gr_train_Asf_std_fx96[48] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25,
   26,
   27,
   28,
   29,
   30,
   31,
   32,
   33,
   34,
   35,
   36,
   37,
   38,
   39,
   40,
   41,
   42,
   43,
   44,
   45,
   46,
   47,
   48};
   Double_t curr_48b7e_gr_train_Asf_std_fy96[48] = {
   0.1585781,
   0.8661777,
   0.876722,
   0.8083974,
   0.7776939,
   0.5739213,
   0.6680665,
   0.6226965,
   0.6088733,
   0.5442749,
   0.5818193,
   0.521723,
   0.5391557,
   0.5361205,
   0.5501172,
   0.6198215,
   0.5528167,
   0.5369663,
   0.5455348,
   0.4943669,
   0.5051481,
   0.7229501,
   0.5716076,
   0.4872245,
   0.547097,
   0.6599996,
   0.573629,
   0.5655308,
   0.5306677,
   0.5521735,
   0.6672732,
   0.6245139,
   0.5581348,
   0.5122747,
   0.5811404,
   0.6023555,
   0.5819513,
   0.5597578,
   0.6907915,
   0.5107856,
   0.6024215,
   0.5940914,
   0.4947775,
   0.527404,
   0.5704862,
   0.7210076,
   0.9219864,
   0.2954328};
   TGraph *graph = new TGraph(48,curr_48b7e_gr_train_Asf_std_fx96,curr_48b7e_gr_train_Asf_std_fy96);
   graph->SetName("curr_48b7e_gr_train_Asf_std");
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
   
   TH1F *Graph_curr_48b7e_gr_train_Asf_std96 = new TH1F("Graph_curr_48b7e_gr_train_Asf_std96","Graph",100,0,52.7);
   Graph_curr_48b7e_gr_train_Asf_std96->SetMinimum(0.08223725);
   Graph_curr_48b7e_gr_train_Asf_std96->SetMaximum(0.9983272);
   Graph_curr_48b7e_gr_train_Asf_std96->SetDirectory(0);
   Graph_curr_48b7e_gr_train_Asf_std96->SetStats(0);
   Graph_curr_48b7e_gr_train_Asf_std96->SetLineStyle(0);
   Graph_curr_48b7e_gr_train_Asf_std96->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_train_Asf_std96->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_Asf_std96->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_Asf_std96->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_Asf_std96->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_Asf_std96->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_Asf_std96->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_Asf_std96->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_Asf_std96->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_Asf_std96->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_Asf_std96->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_Asf_std96->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_train_Asf_std96->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_Asf_std96->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_Asf_std96->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_Asf_std96->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_Asf_std96->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_Asf_std96->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_Asf_std96->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_train_Asf_std96);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_train_Asf_std_fx97[48] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25,
   26,
   27,
   28,
   29,
   30,
   31,
   32,
   33,
   34,
   35,
   36,
   37,
   38,
   39,
   40,
   41,
   42,
   43,
   44,
   45,
   46,
   47,
   48};
   Double_t pu0_48b7e_gr_train_Asf_std_fy97[48] = {
   0.1572468,
   0.8439655,
   0.7847528,
   0.7333981,
   0.6797981,
   0.5194887,
   0.646259,
   0.544143,
   0.5341434,
   0.4943863,
   0.5578654,
   0.4480368,
   0.5203003,
   0.5128441,
   0.5113445,
   0.5284083,
   0.5230933,
   0.4849298,
   0.4354187,
   0.4941489,
   0.4727677,
   0.5850201,
   0.4408916,
   0.4734309,
   0.530243,
   0.5200788,
   0.4882705,
   0.5327976,
   0.4849337,
   0.5261394,
   0.659228,
   0.5428307,
   0.5299538,
   0.4771206,
   0.5618776,
   0.4605232,
   0.5629746,
   0.5138416,
   0.6480438,
   0.4709594,
   0.584639,
   0.5862901,
   0.4807197,
   0.5189647,
   0.5414615,
   0.5875263,
   0.7797394,
   0.2973238};
   graph = new TGraph(48,pu0_48b7e_gr_train_Asf_std_fx97,pu0_48b7e_gr_train_Asf_std_fy97);
   graph->SetName("pu0_48b7e_gr_train_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_train_Asf_std97 = new TH1F("Graph_pu0_48b7e_gr_train_Asf_std97","Graph",100,0,52.7);
   Graph_pu0_48b7e_gr_train_Asf_std97->SetMinimum(0.08857497);
   Graph_pu0_48b7e_gr_train_Asf_std97->SetMaximum(0.9126374);
   Graph_pu0_48b7e_gr_train_Asf_std97->SetDirectory(0);
   Graph_pu0_48b7e_gr_train_Asf_std97->SetStats(0);
   Graph_pu0_48b7e_gr_train_Asf_std97->SetLineStyle(0);
   Graph_pu0_48b7e_gr_train_Asf_std97->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_train_Asf_std97);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_train_Asf_std_fx98[48] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25,
   26,
   27,
   28,
   29,
   30,
   31,
   32,
   33,
   34,
   35,
   36,
   37,
   38,
   39,
   40,
   41,
   42,
   43,
   44,
   45,
   46,
   47,
   48};
   Double_t pu0_newavg_48b7e_gr_train_Asf_std_fy98[48] = {
   0.1318063,
   0.8719498,
   0.7997419,
   0.7156417,
   0.6089157,
   0.5124803,
   0.618554,
   0.566,
   0.521216,
   0.5049632,
   0.5526451,
   0.4384587,
   0.5171888,
   0.5224078,
   0.5209385,
   0.5689977,
   0.5113704,
   0.5071783,
   0.4646148,
   0.4788626,
   0.4793572,
   0.5573403,
   0.5380856,
   0.4692969,
   0.5390905,
   0.5292894,
   0.5347642,
   0.5597075,
   0.5578619,
   0.5092609,
   0.6529132,
   0.5837975,
   0.5364197,
   0.4885111,
   0.5701928,
   0.53612,
   0.581691,
   0.5195429,
   0.6680694,
   0.5223243,
   0.5592765,
   0.5765223,
   0.4938989,
   0.5103505,
   0.5395582,
   0.5637754,
   0.7609529,
   0.3089494};
   graph = new TGraph(48,pu0_newavg_48b7e_gr_train_Asf_std_fx98,pu0_newavg_48b7e_gr_train_Asf_std_fy98);
   graph->SetName("pu0_newavg_48b7e_gr_train_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_train_Asf_std98 = new TH1F("Graph_pu0_newavg_48b7e_gr_train_Asf_std98","Graph",100,0,52.7);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->SetMinimum(0.05779198);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->SetMaximum(0.9459641);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_train_Asf_std98);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_train_Asf_std_fx99[48] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25,
   26,
   27,
   28,
   29,
   30,
   31,
   32,
   33,
   34,
   35,
   36,
   37,
   38,
   39,
   40,
   41,
   42,
   43,
   44,
   45,
   46,
   47,
   48};
   Double_t pu50s2_48b7e_gr_train_Asf_std_fy99[48] = {
   0.1421266,
   0.7037621,
   0.5358937,
   0.5383487,
   0.4017757,
   0.3638629,
   0.4933757,
   0.4286927,
   0.389833,
   0.3491435,
   0.3793022,
   0.3533773,
   0.3761683,
   0.3554524,
   0.4123208,
   0.3761843,
   0.4246056,
   0.4469012,
   0.3702347,
   0.3645304,
   0.3993289,
   0.442139,
   0.3587735,
   0.3658606,
   0.4032463,
   0.4127948,
   0.4101752,
   0.4079331,
   0.3715606,
   0.3901172,
   0.540384,
   0.4413247,
   0.4260246,
   0.3737272,
   0.350402,
   0.3660429,
   0.4605982,
   0.3677005,
   0.3517347,
   0.4106952,
   0.3920298,
   0.4328734,
   0.3945171,
   0.3590488,
   0.3829686,
   0.431373,
   0.6561653,
   0.3110103};
   graph = new TGraph(48,pu50s2_48b7e_gr_train_Asf_std_fx99,pu50s2_48b7e_gr_train_Asf_std_fy99);
   graph->SetName("pu50s2_48b7e_gr_train_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_train_Asf_std99 = new TH1F("Graph_pu50s2_48b7e_gr_train_Asf_std99","Graph",100,0,52.7);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->SetMinimum(0.08596309);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->SetMaximum(0.7599256);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->SetStats(0);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_train_Asf_std99);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_train_Asf_std_fx100[48] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25,
   26,
   27,
   28,
   29,
   30,
   31,
   32,
   33,
   34,
   35,
   36,
   37,
   38,
   39,
   40,
   41,
   42,
   43,
   44,
   45,
   46,
   47,
   48};
   Double_t pu50s30_48b7e_gr_train_Asf_std_fy100[48] = {
   0.1563659,
   0.8432702,
   0.7900411,
   0.7369212,
   0.6815633,
   0.5168524,
   0.6452762,
   0.5605553,
   0.5003623,
   0.4699284,
   0.5531303,
   0.4426015,
   0.5185355,
   0.5083479,
   0.5043713,
   0.5240397,
   0.5201749,
   0.4823588,
   0.4235411,
   0.4900112,
   0.474184,
   0.613273,
   0.4382046,
   0.4693663,
   0.5255414,
   0.5155782,
   0.5005673,
   0.5379302,
   0.4821725,
   0.525177,
   0.652239,
   0.567682,
   0.527962,
   0.4738268,
   0.5569469,
   0.4599867,
   0.5574163,
   0.5090119,
   0.6665261,
   0.4825717,
   0.5815395,
   0.5807676,
   0.469441,
   0.5142238,
   0.5554035,
   0.5860524,
   0.7813017,
   0.2970583};
   graph = new TGraph(48,pu50s30_48b7e_gr_train_Asf_std_fx100,pu50s30_48b7e_gr_train_Asf_std_fy100);
   graph->SetName("pu50s30_48b7e_gr_train_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_train_Asf_std100 = new TH1F("Graph_pu50s30_48b7e_gr_train_Asf_std100","Graph",100,0,52.7);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->SetMinimum(0.08767543);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->SetMaximum(0.9119607);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->SetStats(0);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_train_Asf_std100);
   
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
   TLegendEntry *entry=leg->AddEntry("curr_48b7e_gr_train_Asf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_48b7e_gr_train_Asf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_48b7e_gr_train_Asf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_48b7e_gr_train_Asf_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_48b7e_gr_train_Asf_mean","PU optimized","lp");

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
