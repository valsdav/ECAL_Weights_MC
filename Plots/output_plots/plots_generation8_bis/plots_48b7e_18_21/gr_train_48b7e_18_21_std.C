void gr_train_48b7e_18_21_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:04:01 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-10.69337,-0.218429,51.59578,0.6925635);
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
   0.1470782,
   0.1960648,
   0.1799079,
   0.1587449,
   0.1424938,
   0.1325758,
   0.1274334,
   0.1214986,
   0.1208974,
   0.1201152,
   0.1193556,
   0.1172251,
   0.1158759,
   0.1157965,
   0.1159398,
   0.117501,
   0.1172524,
   0.1189042,
   0.1179674,
   0.1163341,
   0.1153902,
   0.120191,
   0.1180436,
   0.1166924,
   0.1198804,
   0.1166727,
   0.1172232,
   0.1177066,
   0.117655,
   0.117587,
   0.117014,
   0.1170463,
   0.1173453,
   0.1183818,
   0.1159296,
   0.1194307,
   0.1159499,
   0.117487,
   0.1168465,
   0.1166952,
   0.1187622,
   0.1167729,
   0.1179378,
   0.1153506,
   0.1169702,
   0.1202639,
   0.1164049,
   0.08862001};
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
   Graph_curr_48b7e_gr_train_std86->SetMinimum(0.07787554);
   Graph_curr_48b7e_gr_train_std86->SetMaximum(0.2068093);
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
   0.1436955,
   0.1930815,
   0.1782085,
   0.157025,
   0.1415286,
   0.1316769,
   0.1261587,
   0.1204632,
   0.1202804,
   0.1188174,
   0.1179913,
   0.1165411,
   0.114537,
   0.1155508,
   0.1147786,
   0.1164726,
   0.1162192,
   0.1186577,
   0.1155607,
   0.1153739,
   0.1145962,
   0.1189023,
   0.1170555,
   0.1148238,
   0.1179092,
   0.1156118,
   0.116578,
   0.1164688,
   0.1168979,
   0.116546,
   0.1160081,
   0.116461,
   0.1163611,
   0.1175188,
   0.1146879,
   0.1179176,
   0.1144906,
   0.1152129,
   0.1158487,
   0.1157214,
   0.116681,
   0.1157527,
   0.1169115,
   0.1144521,
   0.1160819,
   0.1186931,
   0.1153639,
   0.08979874};
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
   Graph_pu0_48b7e_gr_train_std87->SetMinimum(0.07947047);
   Graph_pu0_48b7e_gr_train_std87->SetMaximum(0.2034098);
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
   0.1318677,
   0.1899472,
   0.1743595,
   0.1533959,
   0.1367826,
   0.127485,
   0.121314,
   0.1168438,
   0.1162794,
   0.1147956,
   0.1140143,
   0.1131018,
   0.1116131,
   0.1116872,
   0.1114022,
   0.1123821,
   0.1125622,
   0.1134982,
   0.1116326,
   0.1119584,
   0.1109171,
   0.1155199,
   0.1139218,
   0.1119105,
   0.1124751,
   0.1127692,
   0.1122431,
   0.1123689,
   0.1129906,
   0.113359,
   0.111486,
   0.1124588,
   0.1125982,
   0.1141015,
   0.1119008,
   0.1128941,
   0.1115959,
   0.1120551,
   0.1122555,
   0.1119886,
   0.1138366,
   0.1117371,
   0.1131768,
   0.1108404,
   0.1124514,
   0.1150537,
   0.1128324,
   0.09092136};
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
   Graph_pu0_newavg_48b7e_gr_train_std88->SetMinimum(0.08101877);
   Graph_pu0_newavg_48b7e_gr_train_std88->SetMaximum(0.1998498);
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
   0.1412069,
   0.1922588,
   0.1760912,
   0.1552582,
   0.1397499,
   0.1299265,
   0.1241683,
   0.118503,
   0.1181339,
   0.1161385,
   0.1158687,
   0.1144673,
   0.1129011,
   0.1136713,
   0.1127978,
   0.1143673,
   0.1144012,
   0.1163285,
   0.1151493,
   0.1133084,
   0.1129607,
   0.1172321,
   0.115572,
   0.1135606,
   0.1158005,
   0.1141827,
   0.114285,
   0.1149597,
   0.114914,
   0.1148821,
   0.1144316,
   0.1151226,
   0.1145007,
   0.1157015,
   0.1130936,
   0.1162226,
   0.1130197,
   0.1132989,
   0.1135718,
   0.113723,
   0.1157026,
   0.1141728,
   0.1152122,
   0.1125495,
   0.1144982,
   0.1168522,
   0.113926,
   0.08915258};
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
   Graph_pu50s2_48b7e_gr_train_std89->SetMinimum(0.07884196);
   Graph_pu50s2_48b7e_gr_train_std89->SetMaximum(0.2025694);
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
   0.1434644,
   0.1930204,
   0.1781307,
   0.1570258,
   0.1412482,
   0.131601,
   0.1259539,
   0.1204064,
   0.1200359,
   0.1188858,
   0.1177491,
   0.1162885,
   0.1145508,
   0.115362,
   0.1146816,
   0.1163528,
   0.1163279,
   0.1185496,
   0.1155461,
   0.1153088,
   0.1145596,
   0.1186842,
   0.116914,
   0.1146384,
   0.1176772,
   0.1158342,
   0.1164219,
   0.1163359,
   0.116765,
   0.1164435,
   0.1159296,
   0.1164309,
   0.1164804,
   0.1175243,
   0.1144964,
   0.117774,
   0.1143898,
   0.1150591,
   0.1157847,
   0.115614,
   0.1172754,
   0.1156704,
   0.1168937,
   0.1144274,
   0.1159857,
   0.1184717,
   0.1152245,
   0.08972425};
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
   Graph_pu50s30_48b7e_gr_train_std90->SetMinimum(0.07939464);
   Graph_pu50s30_48b7e_gr_train_std90->SetMaximum(0.20335);
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
   entry=leg->AddEntry("pu50s2_48b7e_gr_train_mean","#splitline{PU optimized}{(PU=50, ET=2GeV)}","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_48b7e_gr_train_mean","#splitline{PU optimized}{(PU=50, ET=30GeV)}","lp");

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
