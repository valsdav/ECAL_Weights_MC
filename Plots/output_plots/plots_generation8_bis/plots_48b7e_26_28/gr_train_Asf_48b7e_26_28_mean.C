void gr_train_Asf_48b7e_26_28_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:46:39 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-10.69337,-0.8117662,51.59578,2.04091);
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
   0.2295311,
   1.706055,
   1.21508,
   0.711504,
   0.4051692,
   0.1992432,
   0.08626804,
   0.01475749,
   -0.03044085,
   -0.06206939,
   -0.08079725,
   -0.09807105,
   -0.1001777,
   -0.1062998,
   -0.1012106,
   -0.09937695,
   -0.1049801,
   -0.103658,
   -0.1095601,
   -0.1079909,
   -0.1119108,
   -0.09752815,
   -0.1006197,
   -0.1110626,
   -0.103174,
   -0.1025653,
   -0.09487259,
   -0.09518991,
   -0.1056386,
   -0.09490437,
   -0.09569288,
   -0.09490021,
   -0.1002731,
   -0.1043341,
   -0.1118254,
   -0.09850185,
   -0.1050353,
   -0.11272,
   -0.0917615,
   -0.1090293,
   -0.09574828,
   -0.1033573,
   -0.1049939,
   -0.1043992,
   -0.09405079,
   -0.04831139,
   -0.06198145,
   -0.3058306};
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
   Graph_curr_48b7e_gr_train_Asf_mean91->SetMinimum(-0.5070191);
   Graph_curr_48b7e_gr_train_Asf_mean91->SetMaximum(1.907244);
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
   0.1849291,
   1.514084,
   1.016699,
   0.5683174,
   0.3023903,
   0.1265352,
   0.02916603,
   -0.03974777,
   -0.08020311,
   -0.1102416,
   -0.1226339,
   -0.1384409,
   -0.1396981,
   -0.1445851,
   -0.1431113,
   -0.1451205,
   -0.1437857,
   -0.1458863,
   -0.1546886,
   -0.1438838,
   -0.1504806,
   -0.143008,
   -0.1495046,
   -0.1499096,
   -0.1435142,
   -0.145603,
   -0.1438552,
   -0.136718,
   -0.1489868,
   -0.1354837,
   -0.1361795,
   -0.1399694,
   -0.1413493,
   -0.1440569,
   -0.1524805,
   -0.1465729,
   -0.1454425,
   -0.1497743,
   -0.1339835,
   -0.1485134,
   -0.1387036,
   -0.1430611,
   -0.1424289,
   -0.1432821,
   -0.1342653,
   -0.1097558,
   -0.1219293,
   -0.3345914};
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
   Graph_pu0_48b7e_gr_train_Asf_mean92->SetMinimum(-0.5194589);
   Graph_pu0_48b7e_gr_train_Asf_mean92->SetMaximum(1.698951);
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
   0.2013044,
   1.791949,
   1.131602,
   0.6060041,
   0.3362788,
   0.1663431,
   0.07211746,
   0.002169199,
   -0.03844173,
   -0.06502437,
   -0.08203558,
   -0.09885247,
   -0.09908171,
   -0.1041266,
   -0.09954268,
   -0.1009225,
   -0.104298,
   -0.1046671,
   -0.1102797,
   -0.1049675,
   -0.1087151,
   -0.1018854,
   -0.1031,
   -0.1081048,
   -0.09837401,
   -0.1024178,
   -0.09745742,
   -0.09131289,
   -0.1024095,
   -0.09575752,
   -0.09225315,
   -0.09669866,
   -0.1024118,
   -0.101322,
   -0.1085714,
   -0.09985793,
   -0.1026929,
   -0.1090659,
   -0.09019507,
   -0.1045598,
   -0.09747844,
   -0.1030807,
   -0.1013757,
   -0.1031985,
   -0.09890639,
   -0.08141942,
   -0.1040356,
   -0.3090223};
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
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->SetMinimum(-0.5191195);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->SetMaximum(2.002046);
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
   0.3105887,
   1.490601,
   0.9634488,
   0.5901074,
   0.3381518,
   0.1814931,
   0.08327353,
   0.02041853,
   -0.02237113,
   -0.05163972,
   -0.06118616,
   -0.07494827,
   -0.07883319,
   -0.08105281,
   -0.08043897,
   -0.08233359,
   -0.07964043,
   -0.07673726,
   -0.08683244,
   -0.08269542,
   -0.08243954,
   -0.07701359,
   -0.08550504,
   -0.0846229,
   -0.08192019,
   -0.08396073,
   -0.07733925,
   -0.07604515,
   -0.08048364,
   -0.07665832,
   -0.07241302,
   -0.08047882,
   -0.07507703,
   -0.08196363,
   -0.08966777,
   -0.08179817,
   -0.08210239,
   -0.08599,
   -0.08098398,
   -0.08258449,
   -0.08352721,
   -0.07892562,
   -0.07981584,
   -0.08380525,
   -0.07663152,
   -0.06939179,
   -0.07697781,
   -0.2680082};
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
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->SetMinimum(-0.4438691);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->SetMaximum(1.666462);
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
   0.1994323,
   1.547765,
   1.04748,
   0.5899401,
   0.3176975,
   0.1405458,
   0.04260001,
   -0.02808687,
   -0.07326204,
   -0.1015531,
   -0.113749,
   -0.1296051,
   -0.1297843,
   -0.1353614,
   -0.1346101,
   -0.1357421,
   -0.1346139,
   -0.1359343,
   -0.146013,
   -0.1339755,
   -0.1406737,
   -0.1339766,
   -0.1393369,
   -0.1402959,
   -0.133637,
   -0.1360953,
   -0.1322248,
   -0.126256,
   -0.1390472,
   -0.1270141,
   -0.1275664,
   -0.1283684,
   -0.1315981,
   -0.1348309,
   -0.1427788,
   -0.1360302,
   -0.1357632,
   -0.140527,
   -0.123624,
   -0.138946,
   -0.1288094,
   -0.1334525,
   -0.1339768,
   -0.1343156,
   -0.1239522,
   -0.09920688,
   -0.1105707,
   -0.3271629};
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
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->SetMinimum(-0.5146556);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->SetMaximum(1.735257);
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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
