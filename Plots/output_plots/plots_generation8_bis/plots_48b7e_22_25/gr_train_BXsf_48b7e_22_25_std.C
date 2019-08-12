void gr_train_BXsf_48b7e_22_25_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:08:39 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-10.69337,-0.3106399,51.59578,1.309667);
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
   
   Double_t curr_48b7e_gr_train_BXsf_std_fx106[48] = {
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
   Double_t curr_48b7e_gr_train_BXsf_std_fy106[48] = {
   0.1430258,
   0.3723187,
   0.27456,
   0.1999925,
   0.1668923,
   0.1459882,
   0.1301838,
   0.1288086,
   0.1249672,
   0.1158134,
   0.1176808,
   0.1226137,
   0.1265906,
   0.1189345,
   0.1258005,
   0.1242079,
   0.1274727,
   0.1267675,
   0.1153065,
   0.1198793,
   0.1145923,
   0.1158851,
   0.108645,
   0.1258087,
   0.1098481,
   0.1193805,
   0.1122324,
   0.1177977,
   0.1217404,
   0.1216487,
   0.1340256,
   0.1098329,
   0.1192835,
   0.1136068,
   0.1084662,
   0.111186,
   0.1191254,
   0.1263629,
   0.1172896,
   0.1178621,
   0.1159435,
   0.1208868,
   0.1306467,
   0.115499,
   0.1122882,
   0.1217162,
   0.1133633,
   0.09544705};
   TGraph *graph = new TGraph(48,curr_48b7e_gr_train_BXsf_std_fx106,curr_48b7e_gr_train_BXsf_std_fy106);
   graph->SetName("curr_48b7e_gr_train_BXsf_std");
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
   
   TH1F *Graph_curr_48b7e_gr_train_BXsf_std106 = new TH1F("Graph_curr_48b7e_gr_train_BXsf_std106","Graph",100,0,52.7);
   Graph_curr_48b7e_gr_train_BXsf_std106->SetMinimum(0.06775988);
   Graph_curr_48b7e_gr_train_BXsf_std106->SetMaximum(0.4000059);
   Graph_curr_48b7e_gr_train_BXsf_std106->SetDirectory(0);
   Graph_curr_48b7e_gr_train_BXsf_std106->SetStats(0);
   Graph_curr_48b7e_gr_train_BXsf_std106->SetLineStyle(0);
   Graph_curr_48b7e_gr_train_BXsf_std106->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_BXsf_std106->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_train_BXsf_std106);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_train_BXsf_std_fx107[48] = {
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
   Double_t pu0_48b7e_gr_train_BXsf_std_fy107[48] = {
   0.1407656,
   0.3666095,
   0.2654699,
   0.192243,
   0.1637746,
   0.1443526,
   0.1264893,
   0.1262418,
   0.1238637,
   0.1140297,
   0.1159079,
   0.1210389,
   0.124497,
   0.1170372,
   0.1251578,
   0.1219823,
   0.1253461,
   0.1254053,
   0.1147797,
   0.1170952,
   0.1122644,
   0.1144991,
   0.1081546,
   0.1239978,
   0.1083257,
   0.1187616,
   0.1109707,
   0.1170027,
   0.1200376,
   0.1206405,
   0.1324561,
   0.1087628,
   0.118209,
   0.1126145,
   0.1071272,
   0.1103251,
   0.1174383,
   0.1255356,
   0.1151799,
   0.1172225,
   0.114679,
   0.1184537,
   0.128742,
   0.1142832,
   0.1109928,
   0.1194268,
   0.1110383,
   0.09652312};
   graph = new TGraph(48,pu0_48b7e_gr_train_BXsf_std_fx107,pu0_48b7e_gr_train_BXsf_std_fy107);
   graph->SetName("pu0_48b7e_gr_train_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_train_BXsf_std107 = new TH1F("Graph_pu0_48b7e_gr_train_BXsf_std107","Graph",100,0,52.7);
   Graph_pu0_48b7e_gr_train_BXsf_std107->SetMinimum(0.06951448);
   Graph_pu0_48b7e_gr_train_BXsf_std107->SetMaximum(0.3936182);
   Graph_pu0_48b7e_gr_train_BXsf_std107->SetDirectory(0);
   Graph_pu0_48b7e_gr_train_BXsf_std107->SetStats(0);
   Graph_pu0_48b7e_gr_train_BXsf_std107->SetLineStyle(0);
   Graph_pu0_48b7e_gr_train_BXsf_std107->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_BXsf_std107->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_train_BXsf_std107);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_train_BXsf_std_fx108[48] = {
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
   Double_t pu0_newavg_48b7e_gr_train_BXsf_std_fy108[48] = {
   0.1216317,
   0.3672208,
   0.260123,
   0.1831148,
   0.1555602,
   0.1403886,
   0.1220737,
   0.1232402,
   0.1236261,
   0.1110166,
   0.1150533,
   0.1190288,
   0.1223193,
   0.1149188,
   0.1216019,
   0.1200151,
   0.1228277,
   0.1225799,
   0.1136649,
   0.1165534,
   0.1110668,
   0.1117248,
   0.1068896,
   0.1217662,
   0.1071482,
   0.1149044,
   0.1093015,
   0.1151452,
   0.1177482,
   0.1189216,
   0.1290771,
   0.1063691,
   0.1159283,
   0.1108142,
   0.1039709,
   0.1083075,
   0.1149754,
   0.1222854,
   0.1128945,
   0.1159198,
   0.112137,
   0.1160203,
   0.1262231,
   0.1110786,
   0.10971,
   0.1168254,
   0.1081542,
   0.09717628};
   graph = new TGraph(48,pu0_newavg_48b7e_gr_train_BXsf_std_fx108,pu0_newavg_48b7e_gr_train_BXsf_std_fy108);
   graph->SetName("pu0_newavg_48b7e_gr_train_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_train_BXsf_std108 = new TH1F("Graph_pu0_newavg_48b7e_gr_train_BXsf_std108","Graph",100,0,52.7);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->SetMinimum(0.07017182);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->SetMaximum(0.3942252);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_train_BXsf_std108);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_train_BXsf_std_fx109[48] = {
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
   Double_t pu50s2_48b7e_gr_train_BXsf_std_fy109[48] = {
   0.135099,
   0.3488006,
   0.2511592,
   0.1821975,
   0.1549074,
   0.1374222,
   0.1213197,
   0.1214952,
   0.119713,
   0.1104975,
   0.1145933,
   0.1179874,
   0.1213471,
   0.1144106,
   0.1213847,
   0.1187207,
   0.1224265,
   0.1214368,
   0.1128108,
   0.1149189,
   0.1101626,
   0.1102995,
   0.105466,
   0.1198875,
   0.1067324,
   0.1140513,
   0.1076704,
   0.1142059,
   0.1176859,
   0.1171464,
   0.1277974,
   0.105911,
   0.1151912,
   0.1099614,
   0.1042727,
   0.1075145,
   0.1134612,
   0.1207153,
   0.112239,
   0.1138894,
   0.1112782,
   0.1157922,
   0.1253559,
   0.111631,
   0.1085573,
   0.1155654,
   0.1084579,
   0.09572127};
   graph = new TGraph(48,pu50s2_48b7e_gr_train_BXsf_std_fx109,pu50s2_48b7e_gr_train_BXsf_std_fy109);
   graph->SetName("pu50s2_48b7e_gr_train_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_train_BXsf_std109 = new TH1F("Graph_pu50s2_48b7e_gr_train_BXsf_std109","Graph",100,0,52.7);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->SetMinimum(0.07041333);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->SetMaximum(0.3741086);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->SetStats(0);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_train_BXsf_std109);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_train_BXsf_std_fx110[48] = {
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
   Double_t pu50s30_48b7e_gr_train_BXsf_std_fy110[48] = {
   0.1404644,
   0.3656596,
   0.2648808,
   0.1916368,
   0.1635071,
   0.1441185,
   0.1266971,
   0.1261367,
   0.1239219,
   0.1138191,
   0.1164676,
   0.1207606,
   0.1243254,
   0.1167889,
   0.1248462,
   0.1217226,
   0.1251708,
   0.1251378,
   0.1145412,
   0.1171008,
   0.1120374,
   0.1142463,
   0.1077963,
   0.1237347,
   0.1083886,
   0.1185888,
   0.1107716,
   0.1168075,
   0.1201506,
   0.120369,
   0.132245,
   0.1085593,
   0.1179128,
   0.1124446,
   0.1073278,
   0.1103697,
   0.1172047,
   0.1253434,
   0.1149461,
   0.116895,
   0.1143171,
   0.1183444,
   0.1284913,
   0.1142461,
   0.1109565,
   0.1191482,
   0.1108444,
   0.09636142};
   graph = new TGraph(48,pu50s30_48b7e_gr_train_BXsf_std_fx110,pu50s30_48b7e_gr_train_BXsf_std_fy110);
   graph->SetName("pu50s30_48b7e_gr_train_BXsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_train_BXsf_std110 = new TH1F("Graph_pu50s30_48b7e_gr_train_BXsf_std110","Graph",100,0,52.7);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->SetMinimum(0.0694316);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->SetMaximum(0.3925894);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->SetStats(0);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_train_BXsf_std110);
   
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
   TLegendEntry *entry=leg->AddEntry("curr_48b7e_gr_train_BXsf_mean","Current","lp");

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_newavg_48b7e_gr_train_BXsf_mean","New (avg)","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu0_48b7e_gr_train_BXsf_mean","Per strip (PU=0)","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s2_48b7e_gr_train_BXsf_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_48b7e_gr_train_BXsf_mean","PU optimized","lp");

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
