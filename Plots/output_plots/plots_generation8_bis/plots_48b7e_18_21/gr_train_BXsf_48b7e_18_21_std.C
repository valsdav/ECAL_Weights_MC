void gr_train_BXsf_48b7e_18_21_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:04:03 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-10.69337,-0.2315509,51.59578,0.7803788);
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
   0.1588245,
   0.2211462,
   0.2022496,
   0.1748543,
   0.1522274,
   0.1527385,
   0.1270381,
   0.1208824,
   0.1359949,
   0.1242599,
   0.127177,
   0.1139722,
   0.1269307,
   0.1139908,
   0.1161372,
   0.1164815,
   0.1217118,
   0.1265065,
   0.1115112,
   0.1242589,
   0.1221242,
   0.109024,
   0.1178669,
   0.1126682,
   0.1122062,
   0.1136903,
   0.1179587,
   0.114918,
   0.1182664,
   0.1235773,
   0.1071147,
   0.1129857,
   0.1260886,
   0.110184,
   0.1099561,
   0.1181183,
   0.1151109,
   0.1046149,
   0.1125663,
   0.1296416,
   0.1123874,
   0.1165536,
   0.117356,
   0.09675138,
   0.1178221,
   0.1067692,
   0.1049319,
   0.07238041};
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
   Graph_curr_48b7e_gr_train_BXsf_std106->SetMinimum(0.05750383);
   Graph_curr_48b7e_gr_train_BXsf_std106->SetMaximum(0.2360227);
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
   0.1551439,
   0.217771,
   0.2002977,
   0.1729108,
   0.1511912,
   0.1516725,
   0.1257723,
   0.1198527,
   0.1353236,
   0.1229407,
   0.1257273,
   0.1132977,
   0.1254748,
   0.1137434,
   0.1149509,
   0.1154585,
   0.1206766,
   0.1262637,
   0.1092282,
   0.1232369,
   0.1212815,
   0.1078375,
   0.1168838,
   0.1108911,
   0.1103739,
   0.1126943,
   0.1173285,
   0.1137094,
   0.1174925,
   0.1225032,
   0.1061821,
   0.1124298,
   0.1250831,
   0.109363,
   0.1087906,
   0.1165828,
   0.1136787,
   0.1026585,
   0.1116065,
   0.1285861,
   0.1104392,
   0.1155351,
   0.1163611,
   0.09595514,
   0.1169236,
   0.105364,
   0.1040236,
   0.07293848};
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
   Graph_pu0_48b7e_gr_train_BXsf_std107->SetMinimum(0.05845523);
   Graph_pu0_48b7e_gr_train_BXsf_std107->SetMaximum(0.2322542);
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
   0.1421728,
   0.2142255,
   0.1958256,
   0.1687453,
   0.1460417,
   0.1465963,
   0.1209754,
   0.1162398,
   0.1307045,
   0.1187789,
   0.1214101,
   0.1099697,
   0.1221939,
   0.1099684,
   0.1115212,
   0.1113864,
   0.116902,
   0.1207192,
   0.1055596,
   0.1195234,
   0.1172884,
   0.1048609,
   0.1137574,
   0.1081204,
   0.1054086,
   0.110002,
   0.1130171,
   0.1097369,
   0.1135142,
   0.1191278,
   0.1021646,
   0.1086641,
   0.1210244,
   0.1062527,
   0.1062277,
   0.111557,
   0.1108181,
   0.09999359,
   0.108225,
   0.1243262,
   0.1078012,
   0.1115296,
   0.1127165,
   0.09311072,
   0.1132521,
   0.1022579,
   0.1018804,
   0.07345708};
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
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->SetMinimum(0.05938024);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->SetMaximum(0.2283024);
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
   0.1523696,
   0.2168021,
   0.1978251,
   0.1708762,
   0.1492527,
   0.1495357,
   0.1238019,
   0.117892,
   0.1328332,
   0.12016,
   0.1234192,
   0.1112941,
   0.1236287,
   0.1119077,
   0.1129489,
   0.1133674,
   0.1187772,
   0.1237473,
   0.1088591,
   0.1209909,
   0.1195132,
   0.1063878,
   0.1153981,
   0.1096865,
   0.1084502,
   0.1113242,
   0.1150379,
   0.1122495,
   0.1154786,
   0.1207276,
   0.1047897,
   0.1111528,
   0.1230529,
   0.1077174,
   0.1073238,
   0.1149211,
   0.1122187,
   0.1010463,
   0.1094673,
   0.1262897,
   0.1095346,
   0.113961,
   0.1146801,
   0.09447986,
   0.1153249,
   0.1038117,
   0.1027835,
   0.07232256};
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
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->SetMinimum(0.05787461);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->SetMaximum(0.2312501);
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
   0.1548886,
   0.2177006,
   0.2002093,
   0.1729099,
   0.150889,
   0.1515825,
   0.1255695,
   0.1197956,
   0.1350445,
   0.1230095,
   0.1254646,
   0.1130528,
   0.1254882,
   0.1135594,
   0.114852,
   0.1153385,
   0.1207827,
   0.1261472,
   0.1092153,
   0.1231658,
   0.1212431,
   0.1076448,
   0.1167429,
   0.1107154,
   0.1101627,
   0.1128986,
   0.1171719,
   0.1135791,
   0.1173577,
   0.1223953,
   0.1061123,
   0.1124002,
   0.1252048,
   0.109369,
   0.1086136,
   0.1164422,
   0.113579,
   0.102527,
   0.1115465,
   0.128462,
   0.1109861,
   0.115453,
   0.1163386,
   0.09593761,
   0.1168266,
   0.105175,
   0.1039025,
   0.07287511};
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
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->SetMinimum(0.05839257);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->SetMaximum(0.2321831);
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
   entry=leg->AddEntry("pu50s2_48b7e_gr_train_BXsf_mean","#splitline{PU optimized}{(PU=50, ET=2GeV)}","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_48b7e_gr_train_BXsf_mean","#splitline{PU optimized}{(PU=50, ET=30GeV)}","lp");

   ci = TColor::GetColor("#0000cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.35,0.68,0.65,0.88,"NB NDC");
   pt->SetFillColor(0);
   TText *pt_LaTex = pt->AddText("PU=50");
   pt_LaTex = pt->AddText("1.5<|#eta|<1.8");
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
