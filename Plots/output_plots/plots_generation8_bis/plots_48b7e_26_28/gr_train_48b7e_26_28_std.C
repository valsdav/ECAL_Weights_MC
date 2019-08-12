void gr_train_48b7e_26_28_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:46:39 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-10.69337,-0.3722814,51.59578,1.722191);
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
   0.1043855,
   0.483195,
   0.3413942,
   0.2192708,
   0.1728375,
   0.1397142,
   0.1504652,
   0.1534091,
   0.1584446,
   0.159077,
   0.1631136,
   0.1619462,
   0.1639504,
   0.1648714,
   0.1654928,
   0.1699952,
   0.1662828,
   0.1657453,
   0.1658142,
   0.1637297,
   0.1645653,
   0.1761454,
   0.1679187,
   0.1632818,
   0.1658726,
   0.1725044,
   0.1685566,
   0.1669895,
   0.1650168,
   0.1671556,
   0.1730236,
   0.1701202,
   0.1667558,
   0.1648663,
   0.1677877,
   0.1691889,
   0.1683857,
   0.1665948,
   0.1736225,
   0.1645859,
   0.1690723,
   0.1683198,
   0.1639761,
   0.1656688,
   0.1686566,
   0.1837878,
   0.1983786,
   0.1741949};
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
   Graph_curr_48b7e_gr_train_std86->SetMinimum(0.0665046);
   Graph_curr_48b7e_gr_train_std86->SetMaximum(0.5210759);
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
   0.102277,
   0.4560122,
   0.3030351,
   0.200198,
   0.1576173,
   0.1330077,
   0.1476291,
   0.1479833,
   0.1538133,
   0.1563837,
   0.1616447,
   0.1586741,
   0.1630494,
   0.1636177,
   0.1634254,
   0.1648606,
   0.1645548,
   0.1634119,
   0.1611386,
   0.1636731,
   0.1625046,
   0.1679308,
   0.1617271,
   0.1626389,
   0.1648774,
   0.1652846,
   0.1638266,
   0.1648362,
   0.1625532,
   0.1652968,
   0.1721125,
   0.1653296,
   0.1648372,
   0.1629467,
   0.1666429,
   0.1625215,
   0.1672491,
   0.1642016,
   0.1707417,
   0.1628027,
   0.167707,
   0.1677471,
   0.163159,
   0.1645824,
   0.1668064,
   0.1737879,
   0.1889688,
   0.1796176};
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
   Graph_pu0_48b7e_gr_train_std87->SetMinimum(0.06690351);
   Graph_pu0_48b7e_gr_train_std87->SetMaximum(0.4913857);
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
   0.08353189,
   0.4901415,
   0.3090211,
   0.1937112,
   0.1470169,
   0.1309682,
   0.1452467,
   0.1493404,
   0.1537921,
   0.1572326,
   0.1622484,
   0.1589832,
   0.1638782,
   0.1646886,
   0.1646066,
   0.1675918,
   0.1647034,
   0.1650535,
   0.1631656,
   0.1635051,
   0.1636382,
   0.1674946,
   0.1668442,
   0.1633028,
   0.1661126,
   0.1663882,
   0.1663857,
   0.1669879,
   0.1667415,
   0.1655356,
   0.1725248,
   0.1683166,
   0.1660947,
   0.1640696,
   0.1679869,
   0.166333,
   0.1690457,
   0.165208,
   0.1727324,
   0.1658335,
   0.1672906,
   0.1679678,
   0.1641991,
   0.1650322,
   0.1673709,
   0.1735253,
   0.1911246,
   0.1903708};
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
   Graph_pu0_newavg_48b7e_gr_train_std88->SetMinimum(0.04287092);
   Graph_pu0_newavg_48b7e_gr_train_std88->SetMaximum(0.5308025);
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
   0.08832353,
   0.3520762,
   0.2175458,
   0.1567602,
   0.120082,
   0.1172175,
   0.1349982,
   0.1413532,
   0.1477842,
   0.1516074,
   0.1557206,
   0.1566912,
   0.1587144,
   0.159543,
   0.1605881,
   0.1601355,
   0.1616032,
   0.1628415,
   0.1604994,
   0.1600013,
   0.1609032,
   0.162791,
   0.1606242,
   0.160592,
   0.1610346,
   0.1623656,
   0.1617059,
   0.161007,
   0.1599615,
   0.1612172,
   0.1668166,
   0.1625044,
   0.1619617,
   0.1604897,
   0.1601805,
   0.1602426,
   0.1638803,
   0.1603339,
   0.1592268,
   0.162133,
   0.1610895,
   0.1624351,
   0.1610363,
   0.1600519,
   0.1613922,
   0.1660399,
   0.1849032,
   0.1942474};
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
   Graph_pu50s2_48b7e_gr_train_std89->SetMinimum(0.06194827);
   Graph_pu50s2_48b7e_gr_train_std89->SetMaximum(0.3784515);
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
   0.1024182,
   0.4554079,
   0.3046968,
   0.2008596,
   0.1577471,
   0.1328216,
   0.1474213,
   0.14872,
   0.1518328,
   0.1549107,
   0.1612865,
   0.1582384,
   0.1627835,
   0.1632316,
   0.1629433,
   0.1646028,
   0.1643458,
   0.1629372,
   0.1605359,
   0.1633811,
   0.1623605,
   0.169133,
   0.1614709,
   0.1622891,
   0.1644479,
   0.164865,
   0.1642612,
   0.1649648,
   0.1622167,
   0.1651961,
   0.171551,
   0.1664109,
   0.164747,
   0.1625953,
   0.1663474,
   0.1622109,
   0.1667684,
   0.163782,
   0.1716555,
   0.1631744,
   0.1674418,
   0.167365,
   0.1623457,
   0.1641773,
   0.1673809,
   0.1736581,
   0.188958,
   0.1797034};
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
   Graph_pu50s30_48b7e_gr_train_std90->SetMinimum(0.06711925);
   Graph_pu50s30_48b7e_gr_train_std90->SetMaximum(0.4907069);
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
   
   TLegend *leg = new TLegend(0.67,0.54,0.95,0.92,NULL,"brNDC");
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
   entry=leg->AddEntry("NULL","PU=50, ET=2GeV","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry->SetTextSize(0.026);
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
