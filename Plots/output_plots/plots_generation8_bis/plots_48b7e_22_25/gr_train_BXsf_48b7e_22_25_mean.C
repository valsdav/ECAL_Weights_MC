void gr_train_BXsf_48b7e_22_25_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:08:39 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-10.69337,-0.1301256,51.59578,0.2774468);
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
   
   Double_t curr_48b7e_gr_train_BXsf_mean_fx101[48] = {
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
   Double_t curr_48b7e_gr_train_BXsf_mean_fy101[48] = {
   0.08289591,
   0.1933218,
   0.1314577,
   0.08143198,
   0.05528224,
   0.02970354,
   0.0143048,
   0.003728119,
   -0.00231977,
   -0.004280177,
   -0.006117992,
   -0.009867891,
   -0.01248998,
   -0.01021256,
   -0.01295941,
   -0.01107692,
   -0.01489305,
   -0.01468877,
   -0.01128394,
   -0.009530363,
   -0.007333634,
   -0.009119553,
   -0.007101821,
   -0.01408526,
   -0.008403605,
   -0.01106783,
   -0.01002376,
   -0.01064541,
   -0.01144166,
   -0.01180373,
   -0.01014452,
   -0.007916503,
   -0.01054348,
   -0.009430374,
   -0.007568186,
   -0.008927635,
   -0.0103933,
   -0.01419319,
   -0.009162139,
   -0.00858007,
   -0.009811343,
   -0.01155114,
   -0.01420464,
   -0.009136292,
   -0.008239537,
   -0.009174452,
   -0.01883532,
   -0.03832191};
   TGraph *graph = new TGraph(48,curr_48b7e_gr_train_BXsf_mean_fx101,curr_48b7e_gr_train_BXsf_mean_fy101);
   graph->SetName("curr_48b7e_gr_train_BXsf_mean");
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
   
   TH1F *Graph_curr_48b7e_gr_train_BXsf_mean101 = new TH1F("Graph_curr_48b7e_gr_train_BXsf_mean101","Graph",100,0,52.7);
   Graph_curr_48b7e_gr_train_BXsf_mean101->SetMinimum(-0.06148628);
   Graph_curr_48b7e_gr_train_BXsf_mean101->SetMaximum(0.2164861);
   Graph_curr_48b7e_gr_train_BXsf_mean101->SetDirectory(0);
   Graph_curr_48b7e_gr_train_BXsf_mean101->SetStats(0);
   Graph_curr_48b7e_gr_train_BXsf_mean101->SetLineStyle(0);
   Graph_curr_48b7e_gr_train_BXsf_mean101->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_BXsf_mean101->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_train_BXsf_mean101);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_train_BXsf_mean_fx102[48] = {
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
   Double_t pu0_48b7e_gr_train_BXsf_mean_fy102[48] = {
   0.05465285,
   0.1602369,
   0.1014984,
   0.05361315,
   0.02794527,
   0.003287504,
   -0.0115661,
   -0.02176465,
   -0.02745894,
   -0.02918715,
   -0.03095081,
   -0.03463969,
   -0.03729957,
   -0.03493756,
   -0.03763209,
   -0.0358111,
   -0.03954458,
   -0.03926167,
   -0.03586159,
   -0.03421154,
   -0.03205297,
   -0.03383842,
   -0.03182178,
   -0.03876184,
   -0.03310704,
   -0.03572761,
   -0.03472665,
   -0.03533118,
   -0.03621449,
   -0.03651261,
   -0.03485416,
   -0.0326214,
   -0.0352781,
   -0.03413405,
   -0.0323069,
   -0.03361944,
   -0.03511598,
   -0.03889778,
   -0.03390327,
   -0.03332793,
   -0.03451947,
   -0.03631395,
   -0.03886766,
   -0.03374869,
   -0.03291164,
   -0.03390766,
   -0.04299063,
   -0.06194989};
   graph = new TGraph(48,pu0_48b7e_gr_train_BXsf_mean_fx102,pu0_48b7e_gr_train_BXsf_mean_fy102);
   graph->SetName("pu0_48b7e_gr_train_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_train_BXsf_mean102 = new TH1F("Graph_pu0_48b7e_gr_train_BXsf_mean102","Graph",100,0,52.7);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->SetMinimum(-0.08416856);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->SetMaximum(0.1824556);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->SetDirectory(0);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->SetStats(0);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->SetLineStyle(0);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_train_BXsf_mean102);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_train_BXsf_mean_fx103[48] = {
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
   Double_t pu0_newavg_48b7e_gr_train_BXsf_mean_fy103[48] = {
   0.09441851,
   0.2139613,
   0.1560788,
   0.1048644,
   0.0771066,
   0.05109116,
   0.03537509,
   0.02456351,
   0.0185554,
   0.01699375,
   0.01490677,
   0.01091614,
   0.008100164,
   0.01060964,
   0.007578758,
   0.009692757,
   0.005567329,
   0.0057297,
   0.00958886,
   0.01132913,
   0.01366223,
   0.01188139,
   0.01407286,
   0.006573157,
   0.01270396,
   0.01007662,
   0.01108019,
   0.01034844,
   0.009236586,
   0.009073945,
   0.01074052,
   0.01324671,
   0.0102485,
   0.01166503,
   0.01365162,
   0.01220116,
   0.01050434,
   0.006245418,
   0.01177129,
   0.01220831,
   0.01109147,
   0.009222121,
   0.006335188,
   0.01183552,
   0.01280536,
   0.01175871,
   0.003320831,
   -0.01546698};
   graph = new TGraph(48,pu0_newavg_48b7e_gr_train_BXsf_mean_fx103,pu0_newavg_48b7e_gr_train_BXsf_mean_fy103);
   graph->SetName("pu0_newavg_48b7e_gr_train_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103 = new TH1F("Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103","Graph",100,0,52.7);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->SetMinimum(-0.03840981);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->SetMaximum(0.2369041);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_train_BXsf_mean_fx104[48] = {
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
   Double_t pu50s2_48b7e_gr_train_BXsf_mean_fy104[48] = {
   0.1304605,
   0.2418769,
   0.1819104,
   0.1309894,
   0.1031174,
   0.07716603,
   0.06169893,
   0.05104589,
   0.04486325,
   0.04353284,
   0.04136399,
   0.0371123,
   0.0343979,
   0.03699324,
   0.03390663,
   0.03619736,
   0.03196945,
   0.03195637,
   0.0358408,
   0.03760852,
   0.04019433,
   0.03849908,
   0.04058063,
   0.0329666,
   0.03925505,
   0.03671519,
   0.0376965,
   0.03680079,
   0.03575964,
   0.03552809,
   0.03730973,
   0.03975529,
   0.03672319,
   0.03815172,
   0.04020156,
   0.03877258,
   0.0369049,
   0.03240953,
   0.03826456,
   0.03847146,
   0.03752306,
   0.0356384,
   0.03269048,
   0.03825694,
   0.03929538,
   0.03830302,
   0.02950039,
   0.009762655};
   graph = new TGraph(48,pu50s2_48b7e_gr_train_BXsf_mean_fx104,pu50s2_48b7e_gr_train_BXsf_mean_fy104);
   graph->SetName("pu50s2_48b7e_gr_train_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_train_BXsf_mean104 = new TH1F("Graph_pu50s2_48b7e_gr_train_BXsf_mean104","Graph",100,0,52.7);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->SetMinimum(0.00878639);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->SetMaximum(0.2650883);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->SetStats(0);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_train_BXsf_mean104);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_train_BXsf_mean_fx105[48] = {
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
   Double_t pu50s30_48b7e_gr_train_BXsf_mean_fy105[48] = {
   0.05986964,
   0.1660073,
   0.1069935,
   0.05887625,
   0.03300811,
   0.008269835,
   -0.006623629,
   -0.01691543,
   -0.02261753,
   -0.02438771,
   -0.02615044,
   -0.02985464,
   -0.03251154,
   -0.03017512,
   -0.03283598,
   -0.03106241,
   -0.03482214,
   -0.03449458,
   -0.03113118,
   -0.02941445,
   -0.0272537,
   -0.02902302,
   -0.02705187,
   -0.03400678,
   -0.02828501,
   -0.0309215,
   -0.02993726,
   -0.03054043,
   -0.03142471,
   -0.03170252,
   -0.03003175,
   -0.0278218,
   -0.03047972,
   -0.02932938,
   -0.02748241,
   -0.02880896,
   -0.03035554,
   -0.03418175,
   -0.02911801,
   -0.02853979,
   -0.02977451,
   -0.03152271,
   -0.03409511,
   -0.02895976,
   -0.0281325,
   -0.02912018,
   -0.03828086,
   -0.05728648};
   graph = new TGraph(48,pu50s30_48b7e_gr_train_BXsf_mean_fx105,pu50s30_48b7e_gr_train_BXsf_mean_fy105);
   graph->SetName("pu50s30_48b7e_gr_train_BXsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_train_BXsf_mean105 = new TH1F("Graph_pu50s30_48b7e_gr_train_BXsf_mean105","Graph",100,0,52.7);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->SetMinimum(-0.07961586);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->SetMaximum(0.1883367);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->SetStats(0);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_train_BXsf_mean105);
   
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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
