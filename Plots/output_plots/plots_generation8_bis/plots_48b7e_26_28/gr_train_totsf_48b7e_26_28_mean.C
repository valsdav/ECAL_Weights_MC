void gr_train_totsf_48b7e_26_28_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:46:41 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-10.69337,-0.697818,51.59578,1.83112);
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
   
   Double_t curr_48b7e_gr_train_totsf_mean_fx111[48] = {
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
   Double_t curr_48b7e_gr_train_totsf_mean_fy111[48] = {
   0.2354654,
   1.534038,
   1.115056,
   0.6799697,
   0.3844204,
   0.1987356,
   0.08069523,
   0.01791363,
   -0.01238528,
   -0.05718477,
   -0.07298818,
   -0.09320636,
   -0.09679293,
   -0.1019529,
   -0.09804588,
   -0.08921242,
   -0.1017488,
   -0.09918495,
   -0.103525,
   -0.1013686,
   -0.1016454,
   -0.09413055,
   -0.09512065,
   -0.103537,
   -0.09392264,
   -0.09489639,
   -0.0837695,
   -0.08400499,
   -0.1002775,
   -0.08903541,
   -0.07777131,
   -0.08711191,
   -0.08936349,
   -0.09353592,
   -0.1044773,
   -0.087821,
   -0.1011575,
   -0.1040114,
   -0.08790932,
   -0.09925959,
   -0.09413493,
   -0.09551831,
   -0.09390638,
   -0.09465659,
   -0.08510221,
   -0.03323846,
   -0.03936549,
   -0.2428694};
   TGraph *graph = new TGraph(48,curr_48b7e_gr_train_totsf_mean_fx111,curr_48b7e_gr_train_totsf_mean_fy111);
   graph->SetName("curr_48b7e_gr_train_totsf_mean");
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
   
   TH1F *Graph_curr_48b7e_gr_train_totsf_mean111 = new TH1F("Graph_curr_48b7e_gr_train_totsf_mean111","Graph",100,0,52.7);
   Graph_curr_48b7e_gr_train_totsf_mean111->SetMinimum(-0.4205601);
   Graph_curr_48b7e_gr_train_totsf_mean111->SetMaximum(1.711729);
   Graph_curr_48b7e_gr_train_totsf_mean111->SetDirectory(0);
   Graph_curr_48b7e_gr_train_totsf_mean111->SetStats(0);
   Graph_curr_48b7e_gr_train_totsf_mean111->SetLineStyle(0);
   Graph_curr_48b7e_gr_train_totsf_mean111->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_train_totsf_mean111);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_train_totsf_mean_fx112[48] = {
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
   Double_t pu0_48b7e_gr_train_totsf_mean_fy112[48] = {
   0.1902097,
   1.358884,
   0.9319785,
   0.5426697,
   0.2857195,
   0.1259867,
   0.02422279,
   -0.03733421,
   -0.06497526,
   -0.106018,
   -0.1154818,
   -0.1341171,
   -0.1362248,
   -0.1406588,
   -0.1397641,
   -0.1359076,
   -0.1407215,
   -0.1412994,
   -0.1489866,
   -0.1375485,
   -0.141466,
   -0.1397787,
   -0.1446134,
   -0.1424778,
   -0.1350942,
   -0.1386066,
   -0.1344765,
   -0.1265659,
   -0.1442281,
   -0.1296892,
   -0.1196401,
   -0.1333477,
   -0.1313419,
   -0.1346061,
   -0.1457922,
   -0.1378382,
   -0.1421179,
   -0.1417932,
   -0.1308315,
   -0.13947,
   -0.1373812,
   -0.1359531,
   -0.1319772,
   -0.1342931,
   -0.1264216,
   -0.09771927,
   -0.1019462,
   -0.2747958};
   graph = new TGraph(48,pu0_48b7e_gr_train_totsf_mean_fx112,pu0_48b7e_gr_train_totsf_mean_fy112);
   graph->SetName("pu0_48b7e_gr_train_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_train_totsf_mean112 = new TH1F("Graph_pu0_48b7e_gr_train_totsf_mean112","Graph",100,0,52.7);
   Graph_pu0_48b7e_gr_train_totsf_mean112->SetMinimum(-0.4381638);
   Graph_pu0_48b7e_gr_train_totsf_mean112->SetMaximum(1.522252);
   Graph_pu0_48b7e_gr_train_totsf_mean112->SetDirectory(0);
   Graph_pu0_48b7e_gr_train_totsf_mean112->SetStats(0);
   Graph_pu0_48b7e_gr_train_totsf_mean112->SetLineStyle(0);
   Graph_pu0_48b7e_gr_train_totsf_mean112->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_train_totsf_mean112);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_train_totsf_mean_fx113[48] = {
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
   Double_t pu0_newavg_48b7e_gr_train_totsf_mean_fy113[48] = {
   0.2064545,
   1.610412,
   1.041404,
   0.581542,
   0.3211254,
   0.1657476,
   0.0672082,
   0.004365576,
   -0.02343794,
   -0.06055316,
   -0.07469874,
   -0.09452233,
   -0.09528741,
   -0.1002088,
   -0.09593235,
   -0.09106386,
   -0.1011263,
   -0.09971152,
   -0.1042278,
   -0.09850892,
   -0.09947864,
   -0.09848536,
   -0.09774888,
   -0.1002348,
   -0.08939362,
   -0.09503581,
   -0.08728381,
   -0.08048639,
   -0.0972787,
   -0.0895721,
   -0.07479504,
   -0.08979948,
   -0.09224963,
   -0.09147028,
   -0.1014754,
   -0.09032047,
   -0.09930184,
   -0.100956,
   -0.08697298,
   -0.09496178,
   -0.09614849,
   -0.09590118,
   -0.09057312,
   -0.09404837,
   -0.0916903,
   -0.07029673,
   -0.08538921,
   -0.2480211};
   graph = new TGraph(48,pu0_newavg_48b7e_gr_train_totsf_mean_fx113,pu0_newavg_48b7e_gr_train_totsf_mean_fy113);
   graph->SetName("pu0_newavg_48b7e_gr_train_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_train_totsf_mean113 = new TH1F("Graph_pu0_newavg_48b7e_gr_train_totsf_mean113","Graph",100,0,52.7);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->SetMinimum(-0.4338645);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->SetMaximum(1.796256);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_train_totsf_mean113);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_train_totsf_mean_fx114[48] = {
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
   Double_t pu50s2_48b7e_gr_train_totsf_mean_fy114[48] = {
   0.3154275,
   1.354044,
   0.8999888,
   0.5714886,
   0.3279763,
   0.1808304,
   0.07989843,
   0.02071254,
   -0.01513039,
   -0.04902396,
   -0.05565561,
   -0.07229271,
   -0.0737765,
   -0.07898602,
   -0.075408,
   -0.0739908,
   -0.07678632,
   -0.0705188,
   -0.08072443,
   -0.07730845,
   -0.07820453,
   -0.07358025,
   -0.08083865,
   -0.07632031,
   -0.07597055,
   -0.07813016,
   -0.07034452,
   -0.06878798,
   -0.076795,
   -0.06972353,
   -0.05937029,
   -0.07675311,
   -0.06688807,
   -0.07765001,
   -0.08464088,
   -0.07617772,
   -0.08093373,
   -0.08146717,
   -0.08097867,
   -0.07514907,
   -0.08328231,
   -0.07429843,
   -0.07174984,
   -0.07777505,
   -0.07379475,
   -0.06306223,
   -0.06041179,
   -0.1986971};
   graph = new TGraph(48,pu50s2_48b7e_gr_train_totsf_mean_fx114,pu50s2_48b7e_gr_train_totsf_mean_fy114);
   graph->SetName("pu50s2_48b7e_gr_train_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_train_totsf_mean114 = new TH1F("Graph_pu50s2_48b7e_gr_train_totsf_mean114","Graph",100,0,52.7);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->SetMinimum(-0.3539712);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->SetMaximum(1.509318);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->SetStats(0);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_train_totsf_mean114);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_train_totsf_mean_fx115[48] = {
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
   Double_t pu50s30_48b7e_gr_train_totsf_mean_fy115[48] = {
   0.2048603,
   1.390511,
   0.961325,
   0.5638948,
   0.3010275,
   0.1399854,
   0.03760966,
   -0.02570547,
   -0.0589303,
   -0.0974362,
   -0.1066409,
   -0.1253804,
   -0.1262072,
   -0.1315157,
   -0.1311307,
   -0.1265027,
   -0.131524,
   -0.1312539,
   -0.1402821,
   -0.1276187,
   -0.1317876,
   -0.1307038,
   -0.134391,
   -0.1327683,
   -0.1252277,
   -0.1291053,
   -0.1227129,
   -0.1160684,
   -0.1342943,
   -0.1211424,
   -0.1111516,
   -0.1216629,
   -0.121595,
   -0.1255592,
   -0.1360833,
   -0.1272809,
   -0.1325066,
   -0.1327,
   -0.1205232,
   -0.1298824,
   -0.1275087,
   -0.1263947,
   -0.1236533,
   -0.1254328,
   -0.1161642,
   -0.08718115,
   -0.09033452,
   -0.2660672};
   graph = new TGraph(48,pu50s30_48b7e_gr_train_totsf_mean_fx115,pu50s30_48b7e_gr_train_totsf_mean_fy115);
   graph->SetName("pu50s30_48b7e_gr_train_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_train_totsf_mean115 = new TH1F("Graph_pu50s30_48b7e_gr_train_totsf_mean115","Graph",100,0,52.7);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->SetMinimum(-0.4317251);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->SetMaximum(1.556169);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->SetStats(0);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_train_totsf_mean115);
   
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
   
   TLegend *leg = new TLegend(0.67,0.54,0.95,0.92,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("curr_48b7e_gr_train_totsf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_48b7e_gr_train_totsf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_48b7e_gr_train_totsf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_48b7e_gr_train_totsf_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_48b7e_gr_train_totsf_mean","PU optimized","lp");

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
