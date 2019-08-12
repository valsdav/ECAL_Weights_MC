void gr_train_Asf_48b7e_22_25_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:08:38 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-10.69337,-0.439262,51.59578,0.9112779);
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
   
   Double_t curr_48b7e_gr_train_Asf_mean_fx91[48] = {
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
   Double_t curr_48b7e_gr_train_Asf_mean_fy91[48] = {
   0.2924295,
   0.7680751,
   0.6425764,
   0.4707335,
   0.3296364,
   0.2320371,
   0.168429,
   0.1207703,
   0.08857677,
   0.07794231,
   0.06625322,
   0.05614541,
   0.0525349,
   0.0490871,
   0.04954137,
   0.05203049,
   0.04852721,
   0.05144278,
   0.04186638,
   0.05263786,
   0.04889414,
   0.05123707,
   0.0464603,
   0.0523593,
   0.04440927,
   0.04967713,
   0.0480541,
   0.04855589,
   0.04529084,
   0.04942133,
   0.04719508,
   0.04927303,
   0.04808804,
   0.04493574,
   0.04586345,
   0.04785937,
   0.04584901,
   0.04367084,
   0.04826646,
   0.04894255,
   0.04623728,
   0.04967476,
   0.05098207,
   0.04835341,
   0.05017026,
   0.06910718,
   0.02351741,
   -0.1972371};
   TGraph *graph = new TGraph(48,curr_48b7e_gr_train_Asf_mean_fx91,curr_48b7e_gr_train_Asf_mean_fy91);
   graph->SetName("curr_48b7e_gr_train_Asf_mean");
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
   
   TH1F *Graph_curr_48b7e_gr_train_Asf_mean91 = new TH1F("Graph_curr_48b7e_gr_train_Asf_mean91","Graph",100,0,52.7);
   Graph_curr_48b7e_gr_train_Asf_mean91->SetMinimum(-0.2937683);
   Graph_curr_48b7e_gr_train_Asf_mean91->SetMaximum(0.8646063);
   Graph_curr_48b7e_gr_train_Asf_mean91->SetDirectory(0);
   Graph_curr_48b7e_gr_train_Asf_mean91->SetStats(0);
   Graph_curr_48b7e_gr_train_Asf_mean91->SetLineStyle(0);
   Graph_curr_48b7e_gr_train_Asf_mean91->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_Asf_mean91->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_train_Asf_mean91);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_train_Asf_mean_fx92[48] = {
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
   Double_t pu0_48b7e_gr_train_Asf_mean_fy92[48] = {
   0.2625116,
   0.7113451,
   0.5816612,
   0.4184561,
   0.2872319,
   0.1961028,
   0.1336654,
   0.08927251,
   0.06006334,
   0.04858811,
   0.03910797,
   0.02919487,
   0.02480277,
   0.02178381,
   0.02307752,
   0.02452535,
   0.02033097,
   0.02413633,
   0.01616538,
   0.02348295,
   0.02056796,
   0.02396896,
   0.02181811,
   0.02444316,
   0.01802002,
   0.02265864,
   0.02062215,
   0.02254829,
   0.01844789,
   0.02319176,
   0.01885192,
   0.02239281,
   0.02170513,
   0.01858358,
   0.01871493,
   0.02120792,
   0.01878476,
   0.01716697,
   0.02077542,
   0.02270408,
   0.01942058,
   0.02062657,
   0.02374717,
   0.02104129,
   0.02374414,
   0.03967864,
   -0.007396559,
   -0.2133535};
   graph = new TGraph(48,pu0_48b7e_gr_train_Asf_mean_fx92,pu0_48b7e_gr_train_Asf_mean_fy92);
   graph->SetName("pu0_48b7e_gr_train_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_train_Asf_mean92 = new TH1F("Graph_pu0_48b7e_gr_train_Asf_mean92","Graph",100,0,52.7);
   Graph_pu0_48b7e_gr_train_Asf_mean92->SetMinimum(-0.3058234);
   Graph_pu0_48b7e_gr_train_Asf_mean92->SetMaximum(0.803815);
   Graph_pu0_48b7e_gr_train_Asf_mean92->SetDirectory(0);
   Graph_pu0_48b7e_gr_train_Asf_mean92->SetStats(0);
   Graph_pu0_48b7e_gr_train_Asf_mean92->SetLineStyle(0);
   Graph_pu0_48b7e_gr_train_Asf_mean92->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_Asf_mean92->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_train_Asf_mean92);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_train_Asf_mean_fx93[48] = {
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
   Double_t pu0_newavg_48b7e_gr_train_Asf_mean_fy93[48] = {
   0.2574273,
   0.7811681,
   0.6292511,
   0.4440211,
   0.3090286,
   0.2217513,
   0.1591509,
   0.1157729,
   0.08777639,
   0.07657254,
   0.06713244,
   0.05689655,
   0.05271278,
   0.04808503,
   0.04879556,
   0.05226236,
   0.04814111,
   0.0501717,
   0.04455857,
   0.05293381,
   0.04764703,
   0.04953004,
   0.04877063,
   0.05066349,
   0.04548897,
   0.04977029,
   0.04769213,
   0.05108585,
   0.04550567,
   0.05167566,
   0.04637536,
   0.04845943,
   0.04843618,
   0.04722265,
   0.04370496,
   0.04819185,
   0.04606605,
   0.04376735,
   0.04814195,
   0.0488336,
   0.04599945,
   0.04726538,
   0.05116227,
   0.04774948,
   0.05152053,
   0.06356252,
   0.01700808,
   -0.1717507};
   graph = new TGraph(48,pu0_newavg_48b7e_gr_train_Asf_mean_fx93,pu0_newavg_48b7e_gr_train_Asf_mean_fy93);
   graph->SetName("pu0_newavg_48b7e_gr_train_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_train_Asf_mean93 = new TH1F("Graph_pu0_newavg_48b7e_gr_train_Asf_mean93","Graph",100,0,52.7);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->SetMinimum(-0.2670425);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->SetMaximum(0.87646);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_train_Asf_mean93);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_train_Asf_mean_fx94[48] = {
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
   Double_t pu50s2_48b7e_gr_train_Asf_mean_fy94[48] = {
   0.3153354,
   0.7934126,
   0.6529101,
   0.4752223,
   0.3345551,
   0.242557,
   0.1806851,
   0.1358163,
   0.1066171,
   0.09612034,
   0.08853836,
   0.07612573,
   0.07223257,
   0.06860945,
   0.06972142,
   0.07291187,
   0.06850875,
   0.06999778,
   0.06403463,
   0.07073793,
   0.06713446,
   0.06869956,
   0.06772581,
   0.0698035,
   0.06569696,
   0.0699104,
   0.06695392,
   0.07043871,
   0.06676871,
   0.06992409,
   0.06598687,
   0.06901146,
   0.06869612,
   0.06578165,
   0.06490831,
   0.06736584,
   0.06397915,
   0.06174943,
   0.06770451,
   0.06739175,
   0.06544627,
   0.06858958,
   0.06998435,
   0.06922562,
   0.06996442,
   0.08448417,
   0.04074947,
   -0.1653487};
   graph = new TGraph(48,pu50s2_48b7e_gr_train_Asf_mean_fx94,pu50s2_48b7e_gr_train_Asf_mean_fy94);
   graph->SetName("pu50s2_48b7e_gr_train_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_train_Asf_mean94 = new TH1F("Graph_pu50s2_48b7e_gr_train_Asf_mean94","Graph",100,0,52.7);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->SetMinimum(-0.2612248);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->SetMaximum(0.8892887);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->SetStats(0);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_train_Asf_mean94);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_train_Asf_mean_fx95[48] = {
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
   Double_t pu50s30_48b7e_gr_train_Asf_mean_fy95[48] = {
   0.2663474,
   0.7184477,
   0.587941,
   0.4237336,
   0.2918504,
   0.200516,
   0.1382634,
   0.09360717,
   0.06426602,
   0.05226661,
   0.0429805,
   0.03253843,
   0.0282687,
   0.02505258,
   0.02677491,
   0.02798988,
   0.02382563,
   0.02773963,
   0.01969586,
   0.02745637,
   0.0238048,
   0.02791208,
   0.02493916,
   0.02776463,
   0.02175781,
   0.02652533,
   0.02433917,
   0.02602661,
   0.0222945,
   0.0270718,
   0.02282825,
   0.02609255,
   0.02517852,
   0.02260677,
   0.0225511,
   0.02538712,
   0.02192354,
   0.0205637,
   0.0245141,
   0.02625593,
   0.02255573,
   0.02443861,
   0.02741529,
   0.02512192,
   0.0275023,
   0.04325762,
   -0.003745638,
   -0.2104341};
   graph = new TGraph(48,pu50s30_48b7e_gr_train_Asf_mean_fx95,pu50s30_48b7e_gr_train_Asf_mean_fy95);
   graph->SetName("pu50s30_48b7e_gr_train_Asf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_train_Asf_mean95 = new TH1F("Graph_pu50s30_48b7e_gr_train_Asf_mean95","Graph",100,0,52.7);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->SetMinimum(-0.3033223);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->SetMaximum(0.8113359);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->SetStats(0);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_train_Asf_mean95);
   
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
   entry=leg->AddEntry("NULL","PU=50, ET=2GeV","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
