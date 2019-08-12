void gr_train_48b7e_22_25_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:08:38 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-10.69337,-0.2615048,51.59578,0.9808398);
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
   
   Double_t curr_48b7e_gr_train_std_fx86[48] = {
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
   Double_t curr_48b7e_gr_train_std_fy86[48] = {
   0.11996,
   0.2784008,
   0.2229168,
   0.1716058,
   0.1397047,
   0.1289451,
   0.1277865,
   0.1239036,
   0.1228308,
   0.1269669,
   0.1253447,
   0.1226334,
   0.1231203,
   0.1228654,
   0.1228885,
   0.1248471,
   0.1225449,
   0.1230465,
   0.1193293,
   0.1242512,
   0.1231892,
   0.1248988,
   0.1219603,
   0.1253029,
   0.1223801,
   0.126679,
   0.1222773,
   0.1232532,
   0.1213294,
   0.1242172,
   0.1406129,
   0.1235694,
   0.1234803,
   0.1225231,
   0.1237576,
   0.1238708,
   0.1233042,
   0.1213762,
   0.1235511,
   0.1228075,
   0.121738,
   0.1239612,
   0.1251235,
   0.123887,
   0.1226961,
   0.1300388,
   0.1335626,
   0.1167585};
   TGraph *graph = new TGraph(48,curr_48b7e_gr_train_std_fx86,curr_48b7e_gr_train_std_fy86);
   graph->SetName("curr_48b7e_gr_train_std");
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
   
   TH1F *Graph_curr_48b7e_gr_train_std86 = new TH1F("Graph_curr_48b7e_gr_train_std86","Graph",100,0,52.7);
   Graph_curr_48b7e_gr_train_std86->SetMinimum(0.1005943);
   Graph_curr_48b7e_gr_train_std86->SetMaximum(0.294565);
   Graph_curr_48b7e_gr_train_std86->SetDirectory(0);
   Graph_curr_48b7e_gr_train_std86->SetStats(0);
   Graph_curr_48b7e_gr_train_std86->SetLineStyle(0);
   Graph_curr_48b7e_gr_train_std86->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_train_std86->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_std86->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_std86->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_std86->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_std86->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_std86->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_std86->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_std86->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_std86->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_std86->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_std86->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_train_std86->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_std86->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_std86->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_std86->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_std86->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_std86->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_std86->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_train_std86);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_train_std_fx87[48] = {
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
   Double_t pu0_48b7e_gr_train_std_fy87[48] = {
   0.1178663,
   0.2737098,
   0.2157125,
   0.1651811,
   0.137136,
   0.1275119,
   0.1242364,
   0.1214995,
   0.1217566,
   0.1248187,
   0.1233027,
   0.121018,
   0.1211064,
   0.1208878,
   0.1222309,
   0.1225748,
   0.1204423,
   0.1216333,
   0.1187475,
   0.1213556,
   0.1207201,
   0.1233944,
   0.1214027,
   0.1233097,
   0.120566,
   0.1260171,
   0.1208699,
   0.1223746,
   0.1196617,
   0.1231848,
   0.138915,
   0.1222162,
   0.122297,
   0.1213431,
   0.1222028,
   0.1229027,
   0.1215837,
   0.1205476,
   0.1213441,
   0.1221666,
   0.1204023,
   0.1214137,
   0.123266,
   0.1225687,
   0.1212435,
   0.127556,
   0.1304944,
   0.1182089};
   graph = new TGraph(48,pu0_48b7e_gr_train_std_fx87,pu0_48b7e_gr_train_std_fy87);
   graph->SetName("pu0_48b7e_gr_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_train_std87 = new TH1F("Graph_pu0_48b7e_gr_train_std87","Graph",100,0,52.7);
   Graph_pu0_48b7e_gr_train_std87->SetMinimum(0.102282);
   Graph_pu0_48b7e_gr_train_std87->SetMaximum(0.2892942);
   Graph_pu0_48b7e_gr_train_std87->SetDirectory(0);
   Graph_pu0_48b7e_gr_train_std87->SetStats(0);
   Graph_pu0_48b7e_gr_train_std87->SetLineStyle(0);
   Graph_pu0_48b7e_gr_train_std87->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_train_std87->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_std87->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_std87->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_std87->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_std87->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_std87->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_std87->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_std87->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_std87->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_std87->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_std87->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_train_std87->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_std87->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_std87->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_std87->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_std87->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_std87->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_std87->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_train_std87);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_train_std_fx88[48] = {
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
   Double_t pu0_newavg_48b7e_gr_train_std_fy88[48] = {
   0.1019965,
   0.273661,
   0.2120298,
   0.1578325,
   0.1307114,
   0.1242499,
   0.1199679,
   0.1187055,
   0.1215178,
   0.1212437,
   0.1223316,
   0.1190075,
   0.1190544,
   0.1186744,
   0.1187659,
   0.1205708,
   0.1180792,
   0.1189278,
   0.1175944,
   0.1207614,
   0.1193136,
   0.1203046,
   0.1198497,
   0.1210886,
   0.1191771,
   0.1218255,
   0.1190136,
   0.1203761,
   0.1173865,
   0.1214315,
   0.1352572,
   0.1192143,
   0.1198689,
   0.1192585,
   0.1183521,
   0.1205481,
   0.1190059,
   0.1174256,
   0.1188864,
   0.1207402,
   0.1176511,
   0.1188948,
   0.1209089,
   0.1190071,
   0.1197454,
   0.1246536,
   0.1267075,
   0.1206544};
   graph = new TGraph(48,pu0_newavg_48b7e_gr_train_std_fx88,pu0_newavg_48b7e_gr_train_std_fy88);
   graph->SetName("pu0_newavg_48b7e_gr_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_train_std88 = new TH1F("Graph_pu0_newavg_48b7e_gr_train_std88","Graph",100,0,52.7);
   Graph_pu0_newavg_48b7e_gr_train_std88->SetMinimum(0.08483);
   Graph_pu0_newavg_48b7e_gr_train_std88->SetMaximum(0.2908274);
   Graph_pu0_newavg_48b7e_gr_train_std88->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_train_std88->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_train_std88->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_train_std88->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_std88->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_train_std88);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_train_std_fx89[48] = {
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
   Double_t pu50s2_48b7e_gr_train_std_fy89[48] = {
   0.1138382,
   0.2608835,
   0.2049781,
   0.1572272,
   0.1304467,
   0.1219788,
   0.1192766,
   0.1171568,
   0.1177454,
   0.1205509,
   0.1216972,
   0.1179696,
   0.1182215,
   0.118111,
   0.1186671,
   0.1192584,
   0.1178614,
   0.1179698,
   0.1166711,
   0.1189737,
   0.1180953,
   0.1186228,
   0.1178977,
   0.119293,
   0.1185457,
   0.1208981,
   0.117114,
   0.119375,
   0.1173015,
   0.1196155,
   0.1338314,
   0.1185059,
   0.1190608,
   0.1181824,
   0.1185111,
   0.1195343,
   0.1173747,
   0.1159841,
   0.1180874,
   0.1184883,
   0.1166569,
   0.1186856,
   0.1201994,
   0.1194963,
   0.118269,
   0.1231382,
   0.1271066,
   0.1190025};
   graph = new TGraph(48,pu50s2_48b7e_gr_train_std_fx89,pu50s2_48b7e_gr_train_std_fy89);
   graph->SetName("pu50s2_48b7e_gr_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_train_std89 = new TH1F("Graph_pu50s2_48b7e_gr_train_std89","Graph",100,0,52.7);
   Graph_pu50s2_48b7e_gr_train_std89->SetMinimum(0.09913367);
   Graph_pu50s2_48b7e_gr_train_std89->SetMaximum(0.275588);
   Graph_pu50s2_48b7e_gr_train_std89->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_train_std89->SetStats(0);
   Graph_pu50s2_48b7e_gr_train_std89->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_train_std89->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_train_std89->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_std89->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_std89->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_std89->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_std89->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_std89->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_std89->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_std89->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_std89->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_std89->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_std89->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_train_std89->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_std89->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_std89->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_std89->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_std89->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_std89->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_std89->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_train_std89);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_train_std_fx90[48] = {
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
   Double_t pu50s30_48b7e_gr_train_std_fy90[48] = {
   0.1176553,
   0.2730675,
   0.2152694,
   0.1646932,
   0.1369214,
   0.1273144,
   0.1244322,
   0.1213994,
   0.1218106,
   0.1245843,
   0.1239613,
   0.1207389,
   0.1209427,
   0.1206304,
   0.1219265,
   0.1223113,
   0.12028,
   0.1213785,
   0.1184946,
   0.121362,
   0.1204699,
   0.1231199,
   0.1209803,
   0.1230443,
   0.1206637,
   0.1258395,
   0.1206605,
   0.1221781,
   0.119768,
   0.1229093,
   0.138692,
   0.1219902,
   0.1219828,
   0.1211495,
   0.1224566,
   0.1229746,
   0.1213408,
   0.1203632,
   0.1210965,
   0.1218211,
   0.1200137,
   0.1213036,
   0.1230307,
   0.1225305,
   0.1212083,
   0.1272527,
   0.1302738,
   0.118145};
   graph = new TGraph(48,pu50s30_48b7e_gr_train_std_fx90,pu50s30_48b7e_gr_train_std_fy90);
   graph->SetName("pu50s30_48b7e_gr_train_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_train_std90 = new TH1F("Graph_pu50s30_48b7e_gr_train_std90","Graph",100,0,52.7);
   Graph_pu50s30_48b7e_gr_train_std90->SetMinimum(0.1021141);
   Graph_pu50s30_48b7e_gr_train_std90->SetMaximum(0.2886087);
   Graph_pu50s30_48b7e_gr_train_std90->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_train_std90->SetStats(0);
   Graph_pu50s30_48b7e_gr_train_std90->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_train_std90->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_train_std90->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_std90->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_std90->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_std90->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_std90->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_std90->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_std90->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_std90->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_std90->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_std90->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_std90->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_train_std90->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_std90->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_std90->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_std90->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_std90->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_std90->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_std90->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_train_std90);
   
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
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
