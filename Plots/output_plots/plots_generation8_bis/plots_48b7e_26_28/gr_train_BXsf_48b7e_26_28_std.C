void gr_train_BXsf_48b7e_26_28_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:46:41 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-10.69337,-0.3691843,51.59578,1.701464);
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
   0.1175847,
   0.4762679,
   0.3577057,
   0.2430359,
   0.1864247,
   0.150868,
   0.163584,
   0.1578851,
   0.1617934,
   0.1572637,
   0.1565044,
   0.1580836,
   0.151925,
   0.1635663,
   0.148134,
   0.152161,
   0.1616305,
   0.155916,
   0.1516286,
   0.1461884,
   0.1582479,
   0.1601992,
   0.1593399,
   0.1458685,
   0.1491926,
   0.1505126,
   0.1541124,
   0.1489133,
   0.1516705,
   0.154025,
   0.161529,
   0.1643344,
   0.1441622,
   0.1560117,
   0.151346,
   0.163329,
   0.156065,
   0.1613311,
   0.1739285,
   0.1525452,
   0.1704815,
   0.1558374,
   0.1483949,
   0.1583722,
   0.166562,
   0.187264,
   0.1700762,
   0.1173998};
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
   Graph_curr_48b7e_gr_train_BXsf_std106->SetMinimum(0.08151295);
   Graph_curr_48b7e_gr_train_BXsf_std106->SetMaximum(0.5121547);
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
   0.1155922,
   0.4503775,
   0.3173945,
   0.221765,
   0.1705222,
   0.143596,
   0.1604495,
   0.1520262,
   0.1560656,
   0.1544525,
   0.1549441,
   0.1546752,
   0.1511445,
   0.1622058,
   0.1464452,
   0.1474798,
   0.1599334,
   0.1537234,
   0.1473936,
   0.1462216,
   0.1559515,
   0.1529024,
   0.1533942,
   0.1453172,
   0.1483025,
   0.1442053,
   0.1494847,
   0.1469131,
   0.1493918,
   0.1523757,
   0.1605469,
   0.1593507,
   0.1425918,
   0.1540071,
   0.1503393,
   0.1561927,
   0.1550964,
   0.1587949,
   0.1709123,
   0.1508096,
   0.1690969,
   0.1553047,
   0.1475842,
   0.1572296,
   0.1645345,
   0.1758262,
   0.1619838,
   0.1209128};
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
   Graph_pu0_48b7e_gr_train_BXsf_std107->SetMinimum(0.08211364);
   Graph_pu0_48b7e_gr_train_BXsf_std107->SetMaximum(0.483856);
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
   0.09518693,
   0.4842218,
   0.3211882,
   0.2128675,
   0.1588657,
   0.1411652,
   0.1576555,
   0.1533984,
   0.155918,
   0.1553598,
   0.1556104,
   0.155011,
   0.152011,
   0.1633227,
   0.1476282,
   0.1501882,
   0.160109,
   0.1553199,
   0.1494036,
   0.1462431,
   0.1572438,
   0.1526813,
   0.158401,
   0.1460455,
   0.1496285,
   0.1453607,
   0.1521852,
   0.1491141,
   0.1535198,
   0.1527067,
   0.1609305,
   0.1624906,
   0.1439329,
   0.1553293,
   0.151766,
   0.1603185,
   0.1570202,
   0.1598735,
   0.1730127,
   0.1538943,
   0.168621,
   0.1555999,
   0.1487546,
   0.1577145,
   0.1652066,
   0.1753567,
   0.164186,
   0.127559};
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
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->SetMinimum(0.05628345);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_std108->SetMaximum(0.5231253);
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
   0.09867334,
   0.3494198,
   0.2268959,
   0.1723597,
   0.1307297,
   0.1261174,
   0.146325,
   0.1448011,
   0.1486229,
   0.1495536,
   0.1489254,
   0.1527118,
   0.147405,
   0.1578494,
   0.1445151,
   0.1436291,
   0.1570145,
   0.1530683,
   0.1471713,
   0.143526,
   0.1546824,
   0.1489272,
   0.1524604,
   0.1437636,
   0.1453262,
   0.1423907,
   0.1479453,
   0.1439193,
   0.1475752,
   0.1487257,
   0.1547343,
   0.1566601,
   0.140938,
   0.1520696,
   0.1449606,
   0.1539116,
   0.1529614,
   0.1547862,
   0.1589941,
   0.1503448,
   0.1621495,
   0.1504877,
   0.146,
   0.1526216,
   0.1590525,
   0.1668911,
   0.1592265,
   0.1291837};
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
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->SetMinimum(0.0735987);
   Graph_pu50s2_48b7e_gr_train_BXsf_std109->SetMaximum(0.3744944);
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
   0.1156797,
   0.4499301,
   0.3191951,
   0.22251,
   0.1706662,
   0.1433904,
   0.1602128,
   0.1528252,
   0.1537198,
   0.1529429,
   0.1545699,
   0.1542395,
   0.1508752,
   0.1618069,
   0.146011,
   0.1472526,
   0.1597164,
   0.1532458,
   0.1468293,
   0.145963,
   0.1558439,
   0.1539827,
   0.1531373,
   0.1449812,
   0.1479142,
   0.1438389,
   0.1499237,
   0.1470506,
   0.149077,
   0.1522608,
   0.1599369,
   0.1604892,
   0.142538,
   0.1537145,
   0.1500748,
   0.1559104,
   0.1546956,
   0.1583881,
   0.1719041,
   0.1511842,
   0.1688405,
   0.1549473,
   0.1468086,
   0.1568319,
   0.1652089,
   0.1756971,
   0.1619871,
   0.1207618};
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
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->SetMinimum(0.0822547);
   Graph_pu50s30_48b7e_gr_train_BXsf_std110->SetMaximum(0.4833552);
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
   
   TLegend *leg = new TLegend(0.67,0.54,0.95,0.92,NULL,"brNDC");
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
   entry=leg->AddEntry("NULL","PU=50, ET=2GeV","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry->SetTextSize(0.026);
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
