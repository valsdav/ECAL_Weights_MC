void gr_train_48b7e_22_25_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:08:38 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-10.69337,-0.2980596,51.59578,0.6309648);
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
   
   Double_t curr_48b7e_gr_train_mean_fx81[48] = {
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
   Double_t curr_48b7e_gr_train_mean_fy81[48] = {
   0.06999873,
   0.1270795,
   0.102619,
   0.07190686,
   0.04738456,
   0.02781644,
   0.01406564,
   0.004355498,
   -0.002095032,
   -0.005537509,
   -0.008206178,
   -0.009449983,
   -0.0103914,
   -0.01111236,
   -0.01093258,
   -0.01110001,
   -0.01149617,
   -0.01167416,
   -0.01159837,
   -0.01122824,
   -0.01155765,
   -0.01130874,
   -0.01152705,
   -0.01115936,
   -0.01175318,
   -0.0117517,
   -0.01150213,
   -0.01099805,
   -0.01157344,
   -0.01168816,
   -0.01185946,
   -0.0113341,
   -0.0112872,
   -0.01171987,
   -0.01212575,
   -0.01173659,
   -0.01182426,
   -0.01224404,
   -0.01125423,
   -0.01135498,
   -0.01159161,
   -0.01158415,
   -0.01131907,
   -0.01192828,
   -0.01151084,
   -0.01218231,
   -0.02499665,
   -0.05369686};
   TGraph *graph = new TGraph(48,curr_48b7e_gr_train_mean_fx81,curr_48b7e_gr_train_mean_fy81);
   graph->SetName("curr_48b7e_gr_train_mean");
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
   
   TH1F *Graph_curr_48b7e_gr_train_mean81 = new TH1F("Graph_curr_48b7e_gr_train_mean81","Graph",100,0,52.7);
   Graph_curr_48b7e_gr_train_mean81->SetMinimum(-0.07177449);
   Graph_curr_48b7e_gr_train_mean81->SetMaximum(0.1451571);
   Graph_curr_48b7e_gr_train_mean81->SetDirectory(0);
   Graph_curr_48b7e_gr_train_mean81->SetStats(0);
   Graph_curr_48b7e_gr_train_mean81->SetLineStyle(0);
   Graph_curr_48b7e_gr_train_mean81->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_train_mean81->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_mean81->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_mean81->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_mean81->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_mean81->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_mean81->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_mean81->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_mean81->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_mean81->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_mean81->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_mean81->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_train_mean81->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_mean81->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_mean81->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_mean81->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_mean81->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_mean81->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_mean81->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_train_mean81);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_train_mean_fx82[48] = {
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
   Double_t pu0_48b7e_gr_train_mean_fy82[48] = {
   0.04229257,
   0.0970498,
   0.07398478,
   0.04444979,
   0.0205909,
   0.001645727,
   -0.01179126,
   -0.0211005,
   -0.02720797,
   -0.03046995,
   -0.03303586,
   -0.03425358,
   -0.035215,
   -0.03585344,
   -0.03563432,
   -0.03581912,
   -0.03618408,
   -0.03631496,
   -0.03620718,
   -0.035902,
   -0.03622057,
   -0.03600675,
   -0.03620442,
   -0.03587481,
   -0.03646405,
   -0.03641627,
   -0.03619568,
   -0.03568229,
   -0.03632217,
   -0.03640943,
   -0.03653936,
   -0.03602257,
   -0.03603196,
   -0.03639207,
   -0.03686363,
   -0.0364289,
   -0.03651963,
   -0.0369669,
   -0.03599171,
   -0.03608301,
   -0.03630059,
   -0.03637944,
   -0.03598803,
   -0.03654211,
   -0.03615551,
   -0.03688497,
   -0.04914583,
   -0.07728644};
   graph = new TGraph(48,pu0_48b7e_gr_train_mean_fx82,pu0_48b7e_gr_train_mean_fy82);
   graph->SetName("pu0_48b7e_gr_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_train_mean82 = new TH1F("Graph_pu0_48b7e_gr_train_mean82","Graph",100,0,52.7);
   Graph_pu0_48b7e_gr_train_mean82->SetMinimum(-0.09472007);
   Graph_pu0_48b7e_gr_train_mean82->SetMaximum(0.1144834);
   Graph_pu0_48b7e_gr_train_mean82->SetDirectory(0);
   Graph_pu0_48b7e_gr_train_mean82->SetStats(0);
   Graph_pu0_48b7e_gr_train_mean82->SetLineStyle(0);
   Graph_pu0_48b7e_gr_train_mean82->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_train_mean82->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_mean82->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_mean82->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_mean82->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_mean82->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_mean82->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_mean82->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_mean82->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_mean82->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_mean82->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_mean82->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_train_mean82->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_mean82->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_mean82->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_mean82->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_mean82->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_mean82->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_mean82->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_train_mean82);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_train_mean_fx83[48] = {
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
   Double_t pu0_newavg_48b7e_gr_train_mean_fy83[48] = {
   0.08478107,
   0.1488744,
   0.1272525,
   0.0957343,
   0.06998122,
   0.04968965,
   0.03522838,
   0.02533768,
   0.01883966,
   0.01533356,
   0.01258952,
   0.01135139,
   0.01029651,
   0.009566816,
   0.009725867,
   0.009613913,
   0.009122272,
   0.008914824,
   0.009146021,
   0.009484103,
   0.009136455,
   0.00931857,
   0.009191087,
   0.009483563,
   0.008917154,
   0.009042463,
   0.009120328,
   0.009775795,
   0.009075555,
   0.00906876,
   0.00882074,
   0.009320951,
   0.00937297,
   0.009042204,
   0.008541395,
   0.008873246,
   0.008889555,
   0.008428555,
   0.009457137,
   0.009273067,
   0.009082722,
   0.009046244,
   0.009377914,
   0.008780176,
   0.009153279,
   0.008425875,
   -0.00359819,
   -0.03267053};
   graph = new TGraph(48,pu0_newavg_48b7e_gr_train_mean_fx83,pu0_newavg_48b7e_gr_train_mean_fy83);
   graph->SetName("pu0_newavg_48b7e_gr_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_train_mean83 = new TH1F("Graph_pu0_newavg_48b7e_gr_train_mean83","Graph",100,0,52.7);
   Graph_pu0_newavg_48b7e_gr_train_mean83->SetMinimum(-0.05082503);
   Graph_pu0_newavg_48b7e_gr_train_mean83->SetMaximum(0.1670289);
   Graph_pu0_newavg_48b7e_gr_train_mean83->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_train_mean83->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_train_mean83->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_train_mean83->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_train_mean83);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_train_mean_fx84[48] = {
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
   Double_t pu50s2_48b7e_gr_train_mean_fy84[48] = {
   0.1187896,
   0.1771253,
   0.153666,
   0.1222304,
   0.09630346,
   0.07592546,
   0.06160773,
   0.05181272,
   0.04511416,
   0.04169245,
   0.03900234,
   0.03760818,
   0.03659659,
   0.03594986,
   0.0361083,
   0.03602888,
   0.03552162,
   0.0353081,
   0.03545051,
   0.03573341,
   0.03552617,
   0.03571794,
   0.03554834,
   0.03582255,
   0.03537312,
   0.03541747,
   0.0354166,
   0.03612518,
   0.03550022,
   0.03544005,
   0.0352537,
   0.03568497,
   0.03584858,
   0.03534561,
   0.03493614,
   0.03519773,
   0.03516822,
   0.03474069,
   0.03584094,
   0.03552036,
   0.03544312,
   0.03542329,
   0.03569101,
   0.03518807,
   0.03549998,
   0.03480162,
   0.02227263,
   -0.008201138};
   graph = new TGraph(48,pu50s2_48b7e_gr_train_mean_fx84,pu50s2_48b7e_gr_train_mean_fy84);
   graph->SetName("pu50s2_48b7e_gr_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_train_mean84 = new TH1F("Graph_pu50s2_48b7e_gr_train_mean84","Graph",100,0,52.7);
   Graph_pu50s2_48b7e_gr_train_mean84->SetMinimum(-0.02673379);
   Graph_pu50s2_48b7e_gr_train_mean84->SetMaximum(0.195658);
   Graph_pu50s2_48b7e_gr_train_mean84->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_train_mean84->SetStats(0);
   Graph_pu50s2_48b7e_gr_train_mean84->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_train_mean84->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_train_mean84->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_mean84->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_mean84->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_mean84->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_mean84->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_mean84->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_mean84->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_mean84->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_mean84->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_mean84->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_mean84->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_train_mean84->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_mean84->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_mean84->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_mean84->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_mean84->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_mean84->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_mean84->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_train_mean84);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_train_mean_fx85[48] = {
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
   Double_t pu50s30_48b7e_gr_train_mean_fy85[48] = {
   0.04750076,
   0.1025434,
   0.07937323,
   0.0496888,
   0.02565818,
   0.006639296,
   -0.006847705,
   -0.01624565,
   -0.02236329,
   -0.0256957,
   -0.0282552,
   -0.02946774,
   -0.03041615,
   -0.03110307,
   -0.03082898,
   -0.0310726,
   -0.03143708,
   -0.03153212,
   -0.0314859,
   -0.03111836,
   -0.03145619,
   -0.03121025,
   -0.03148226,
   -0.03111111,
   -0.03167392,
   -0.03161831,
   -0.03142921,
   -0.03091224,
   -0.03153369,
   -0.03160578,
   -0.03173248,
   -0.03126144,
   -0.03124188,
   -0.03160713,
   -0.03207937,
   -0.03163775,
   -0.03177735,
   -0.03223323,
   -0.03121938,
   -0.03131361,
   -0.03157397,
   -0.03159212,
   -0.03119838,
   -0.03177776,
   -0.03141236,
   -0.03212429,
   -0.04449721,
   -0.07275927};
   graph = new TGraph(48,pu50s30_48b7e_gr_train_mean_fx85,pu50s30_48b7e_gr_train_mean_fy85);
   graph->SetName("pu50s30_48b7e_gr_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_train_mean85 = new TH1F("Graph_pu50s30_48b7e_gr_train_mean85","Graph",100,0,52.7);
   Graph_pu50s30_48b7e_gr_train_mean85->SetMinimum(-0.09028954);
   Graph_pu50s30_48b7e_gr_train_mean85->SetMaximum(0.1200737);
   Graph_pu50s30_48b7e_gr_train_mean85->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_train_mean85->SetStats(0);
   Graph_pu50s30_48b7e_gr_train_mean85->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_train_mean85->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_train_mean85->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_mean85->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_mean85->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_mean85->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_mean85->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_mean85->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_mean85->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_mean85->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_mean85->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_mean85->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_mean85->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_train_mean85->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_mean85->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_mean85->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_mean85->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_mean85->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_mean85->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_mean85->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_train_mean85);
   
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
   TLegendEntry *entry=leg->AddEntry("curr_48b7e_gr_train_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_48b7e_gr_train_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_48b7e_gr_train_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_48b7e_gr_train_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_48b7e_gr_train_mean","PU optimized","lp");

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
