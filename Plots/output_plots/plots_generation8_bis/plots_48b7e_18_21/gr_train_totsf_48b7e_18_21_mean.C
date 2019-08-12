void gr_train_totsf_48b7e_18_21_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:04:04 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-10.69337,-0.4126326,51.59578,1.756388);
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
   0.3555923,
   0.4911414,
   0.4627031,
   0.387759,
   0.3098674,
   0.2656998,
   0.2189409,
   0.1929306,
   0.1813304,
   0.1694154,
   0.1667729,
   0.1596688,
   0.1596526,
   0.1543032,
   0.1598616,
   0.1552746,
   0.1530384,
   0.1567726,
   0.1555027,
   0.1576316,
   0.1574814,
   0.1564219,
   0.1551204,
   0.1530362,
   0.1536821,
   0.1449213,
   0.1490591,
   0.1543696,
   0.1600393,
   0.1570118,
   0.149154,
   0.1494455,
   0.1534036,
   0.1540022,
   0.1478415,
   0.1622638,
   0.1486345,
   0.1444244,
   0.1538702,
   0.1574058,
   0.1520416,
   0.1532607,
   0.1520455,
   0.1469115,
   0.1567617,
   0.1543954,
   0.1151739,
   -0.02333468};
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
   Graph_curr_48b7e_gr_train_totsf_mean111->SetMinimum(-0.07478229);
   Graph_curr_48b7e_gr_train_totsf_mean111->SetMaximum(0.542589);
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
   0.3362108,
   0.4704594,
   0.4411764,
   0.3657328,
   0.2908608,
   0.2484486,
   0.2030502,
   0.1771212,
   0.1671791,
   0.1544237,
   0.1513782,
   0.1453733,
   0.1443643,
   0.1407097,
   0.1445366,
   0.1410846,
   0.1382816,
   0.1424943,
   0.1395884,
   0.1428735,
   0.1433267,
   0.1418723,
   0.1402006,
   0.1378869,
   0.1388657,
   0.1306465,
   0.1355314,
   0.1398254,
   0.1460136,
   0.1427998,
   0.1344806,
   0.1352253,
   0.138896,
   0.139223,
   0.1337418,
   0.1468032,
   0.1341701,
   0.1294584,
   0.1393227,
   0.1427301,
   0.136502,
   0.138461,
   0.1379915,
   0.1327039,
   0.1422875,
   0.1392347,
   0.1014946,
   -0.0306599};
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
   Graph_pu0_48b7e_gr_train_totsf_mean112->SetMinimum(-0.08077183);
   Graph_pu0_48b7e_gr_train_totsf_mean112->SetMaximum(0.5205713);
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
   0.3402786,
   0.4993748,
   0.4660868,
   0.3893582,
   0.3126273,
   0.2696212,
   0.2239337,
   0.2007698,
   0.1892287,
   0.1767532,
   0.1739606,
   0.1687931,
   0.167822,
   0.1629699,
   0.1673402,
   0.1623472,
   0.1617855,
   0.1634551,
   0.1635381,
   0.1668839,
   0.1660601,
   0.1650724,
   0.1644881,
   0.1620264,
   0.16053,
   0.1554282,
   0.1584437,
   0.1625218,
   0.1687667,
   0.1662975,
   0.1572082,
   0.1596369,
   0.1612988,
   0.162679,
   0.1581419,
   0.1698878,
   0.1591487,
   0.1547867,
   0.1627914,
   0.1654907,
   0.1606719,
   0.1608068,
   0.1610209,
   0.1562021,
   0.1648714,
   0.1632536,
   0.1314353,
   0.01156694};
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
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->SetMinimum(0.01041024);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->SetMaximum(0.5481556);
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
   0.3579016,
   0.4984652,
   0.4658915,
   0.3898737,
   0.3140265,
   0.2710031,
   0.2244125,
   0.1997139,
   0.1881499,
   0.1756316,
   0.1732047,
   0.1673708,
   0.1667997,
   0.1625349,
   0.1661233,
   0.1623463,
   0.160696,
   0.1642393,
   0.1629909,
   0.1650353,
   0.1650875,
   0.1639605,
   0.163323,
   0.1611737,
   0.1608041,
   0.1534223,
   0.157539,
   0.1622365,
   0.1679473,
   0.1645151,
   0.1572773,
   0.1585128,
   0.1606859,
   0.1616053,
   0.1563375,
   0.1691788,
   0.1568717,
   0.1519978,
   0.1608113,
   0.1643852,
   0.1592822,
   0.1605123,
   0.1602304,
   0.1547702,
   0.1643509,
   0.1620595,
   0.1259264,
   -0.004289256};
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
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->SetMinimum(-0.0545647);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->SetMaximum(0.5487406);
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
   0.3379907,
   0.4729919,
   0.4436297,
   0.3683558,
   0.2928045,
   0.2504991,
   0.2048913,
   0.1792347,
   0.1690581,
   0.1565318,
   0.1532002,
   0.1469348,
   0.146401,
   0.142536,
   0.146468,
   0.143006,
   0.1404966,
   0.1445919,
   0.1417965,
   0.1449619,
   0.145332,
   0.1435796,
   0.1422186,
   0.1398543,
   0.1407327,
   0.1330458,
   0.1373377,
   0.1416674,
   0.147905,
   0.1446334,
   0.1364564,
   0.1372921,
   0.1410234,
   0.1413307,
   0.1354958,
   0.1487642,
   0.1360773,
   0.1313988,
   0.1415255,
   0.1448192,
   0.1387512,
   0.1402655,
   0.1401889,
   0.1348892,
   0.1441767,
   0.1410134,
   0.1034307,
   -0.02865538};
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
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->SetMinimum(-0.07882012);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->SetMaximum(0.5231567);
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
   
   TLegend *leg = new TLegend(0.67,0.5,0.95,0.93,NULL,"brNDC");
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
   entry=leg->AddEntry("pu50s2_48b7e_gr_train_totsf_mean","#splitline{PU optimized}{(PU=50, ET=2GeV)}","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_48b7e_gr_train_totsf_mean","#splitline{PU optimized}{(PU=50, ET=30GeV)}","lp");

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
