void gr_train_Asf_48b7e_18_21_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:04:02 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-10.69337,-0.3886507,51.59578,1.698306);
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
   0.3450623,
   0.473807,
   0.4398543,
   0.3736395,
   0.3074374,
   0.255023,
   0.2201539,
   0.1934758,
   0.1792313,
   0.170919,
   0.1642842,
   0.1597135,
   0.1572425,
   0.1553948,
   0.1562375,
   0.1549127,
   0.1566572,
   0.1561843,
   0.1567591,
   0.1541793,
   0.1529027,
   0.1608388,
   0.1558175,
   0.1568029,
   0.1573749,
   0.1523442,
   0.1523934,
   0.1555632,
   0.1571514,
   0.1573321,
   0.15363,
   0.1549479,
   0.1558961,
   0.1566957,
   0.1524731,
   0.1581205,
   0.1506454,
   0.1528067,
   0.1564173,
   0.1556634,
   0.1562566,
   0.1531875,
   0.1572414,
   0.1540857,
   0.1559648,
   0.1595083,
   0.1241368,
   -0.01106948};
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
   Graph_curr_48b7e_gr_train_Asf_mean91->SetMinimum(-0.05955714);
   Graph_curr_48b7e_gr_train_Asf_mean91->SetMaximum(0.5222947);
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
   0.3257502,
   0.4534111,
   0.4190513,
   0.3521848,
   0.2885513,
   0.238122,
   0.2042419,
   0.1776312,
   0.1651293,
   0.1559065,
   0.1489567,
   0.1454116,
   0.1420174,
   0.1417892,
   0.140976,
   0.1407363,
   0.1418505,
   0.1419231,
   0.1408,
   0.1394916,
   0.1388071,
   0.146204,
   0.1408827,
   0.1415904,
   0.1424808,
   0.1379582,
   0.1388396,
   0.1410042,
   0.1431552,
   0.1431215,
   0.1388683,
   0.1406623,
   0.1413895,
   0.141859,
   0.1383098,
   0.1427356,
   0.1361501,
   0.1376855,
   0.141831,
   0.1410351,
   0.1406311,
   0.1383929,
   0.1431135,
   0.1397478,
   0.1415006,
   0.1442368,
   0.1102336,
   -0.01734636};
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
   Graph_pu0_48b7e_gr_train_Asf_mean92->SetMinimum(-0.06442211);
   Graph_pu0_48b7e_gr_train_Asf_mean92->SetMaximum(0.5004869);
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
   0.3307242,
   0.4830176,
   0.44566,
   0.3771093,
   0.3105939,
   0.26048,
   0.225002,
   0.2011854,
   0.1874656,
   0.1781001,
   0.1718436,
   0.1688082,
   0.1657756,
   0.1639257,
   0.1641222,
   0.1620535,
   0.1650006,
   0.1629938,
   0.1645684,
   0.1638936,
   0.1620329,
   0.1688944,
   0.165092,
   0.1653645,
   0.1636701,
   0.1620142,
   0.1614194,
   0.1635812,
   0.166184,
   0.1666154,
   0.1610427,
   0.164539,
   0.1636164,
   0.1649937,
   0.1622355,
   0.1662255,
   0.1609296,
   0.1621625,
   0.165034,
   0.1640422,
   0.164389,
   0.1607544,
   0.1655965,
   0.1623617,
   0.164169,
   0.1676843,
   0.1392591,
   0.02523965};
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
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->SetMinimum(0.02271568);
   Graph_pu0_newavg_48b7e_gr_train_Asf_mean93->SetMaximum(0.5287954);
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
   0.3478148,
   0.4817095,
   0.4444107,
   0.3767886,
   0.311821,
   0.2611697,
   0.2255461,
   0.200179,
   0.1862492,
   0.1770439,
   0.1709392,
   0.1673965,
   0.1646065,
   0.1635505,
   0.1627398,
   0.162023,
   0.1640806,
   0.1637241,
   0.1641152,
   0.1618665,
   0.1608316,
   0.168027,
   0.163967,
   0.1646976,
   0.1641852,
   0.1603582,
   0.1606705,
   0.1633535,
   0.1652344,
   0.1648342,
   0.161399,
   0.1636881,
   0.1630838,
   0.1640761,
   0.1606538,
   0.1653116,
   0.1587446,
   0.159753,
   0.1631723,
   0.1628196,
   0.1632024,
   0.1604507,
   0.1650747,
   0.1613442,
   0.1636059,
   0.1667788,
   0.1341975,
   0.008043245};
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
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->SetMinimum(0.007238921);
   Graph_pu50s2_48b7e_gr_train_Asf_mean94->SetMaximum(0.5290761);
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
   0.32756,
   0.4559577,
   0.4215225,
   0.3548098,
   0.2905006,
   0.2402,
   0.2060792,
   0.1797425,
   0.1670174,
   0.1580115,
   0.1507895,
   0.1469723,
   0.1440622,
   0.1436112,
   0.1429182,
   0.1426584,
   0.1440589,
   0.1440239,
   0.1430046,
   0.1415895,
   0.1408267,
   0.1478907,
   0.1428984,
   0.1435451,
   0.1443318,
   0.1403511,
   0.140633,
   0.1428419,
   0.1450546,
   0.1449548,
   0.1408271,
   0.1427159,
   0.1435136,
   0.1439593,
   0.1400423,
   0.1447099,
   0.1380497,
   0.1395941,
   0.1440286,
   0.1431293,
   0.1428729,
   0.1401977,
   0.1452996,
   0.1419146,
   0.1433931,
   0.1459937,
   0.1121367,
   -0.01543405};
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
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->SetMinimum(-0.06257322);
   Graph_pu50s30_48b7e_gr_train_Asf_mean95->SetMaximum(0.5030968);
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
   entry=leg->AddEntry("pu50s2_48b7e_gr_train_Asf_mean","#splitline{PU optimized}{(PU=50, ET=2GeV)}","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_48b7e_gr_train_Asf_mean","#splitline{PU optimized}{(PU=50, ET=30GeV)}","lp");

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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
