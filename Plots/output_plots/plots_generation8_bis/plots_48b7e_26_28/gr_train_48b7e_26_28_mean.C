void gr_train_48b7e_26_28_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:46:39 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-10.69337,-0.2519905,51.59578,0.4193802);
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
   
   Double_t curr_48b7e_gr_train_mean_fx81[48] = {
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
   Double_t curr_48b7e_gr_train_mean_fy81[48] = {
   0.1131888,
   0.2753538,
   0.198212,
   0.1241095,
   0.07466032,
   0.03512191,
   0.004459639,
   -0.01646097,
   -0.03133842,
   -0.03907423,
   -0.04483486,
   -0.04817283,
   -0.05020929,
   -0.05163028,
   -0.05163173,
   -0.05229806,
   -0.05261846,
   -0.05330927,
   -0.05287851,
   -0.05287743,
   -0.05297782,
   -0.05214278,
   -0.05301907,
   -0.05285237,
   -0.0526229,
   -0.05312933,
   -0.05244751,
   -0.05200433,
   -0.05253298,
   -0.0531437,
   -0.05335077,
   -0.05237399,
   -0.05226522,
   -0.0529641,
   -0.05420064,
   -0.05287762,
   -0.05348178,
   -0.05377026,
   -0.05208229,
   -0.0527023,
   -0.05288463,
   -0.05335668,
   -0.0525554,
   -0.05304214,
   -0.05327554,
   -0.05508434,
   -0.07355265,
   -0.1068787};
   TGraph *graph = new TGraph(48,curr_48b7e_gr_train_mean_fx81,curr_48b7e_gr_train_mean_fy81);
   graph->SetName("curr_48b7e_gr_train_mean");
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
   
   TH1F *Graph_curr_48b7e_gr_train_mean81 = new TH1F("Graph_curr_48b7e_gr_train_mean81","Graph",100,0,52.7);
   Graph_curr_48b7e_gr_train_mean81->SetMinimum(-0.1451019);
   Graph_curr_48b7e_gr_train_mean81->SetMaximum(0.3135771);
   Graph_curr_48b7e_gr_train_mean81->SetDirectory(0);
   Graph_curr_48b7e_gr_train_mean81->SetStats(0);
   Graph_curr_48b7e_gr_train_mean81->SetLineStyle(0);
   Graph_curr_48b7e_gr_train_mean81->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_train_mean81->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_mean81->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_mean81->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_mean81->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_mean81->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_mean81->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_mean81->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_mean81->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_mean81->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_mean81->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_mean81->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_train_mean81->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_mean81->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_mean81->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_mean81->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_mean81->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_mean81->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_mean81->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_train_mean81);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_train_mean_fx82[48] = {
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
   Double_t pu0_48b7e_gr_train_mean_fy82[48] = {
   0.07495487,
   0.2249207,
   0.1538049,
   0.08477447,
   0.03700196,
   -0.001311479,
   -0.03043658,
   -0.05057559,
   -0.06454498,
   -0.07193681,
   -0.07723396,
   -0.08023641,
   -0.08224992,
   -0.0836155,
   -0.0836302,
   -0.08424551,
   -0.084507,
   -0.08515145,
   -0.08490369,
   -0.08467339,
   -0.08487055,
   -0.0841499,
   -0.08496501,
   -0.08496866,
   -0.08459598,
   -0.08514793,
   -0.08455882,
   -0.08403004,
   -0.08454446,
   -0.08490427,
   -0.08521508,
   -0.08430376,
   -0.08426265,
   -0.08470486,
   -0.08605501,
   -0.08488435,
   -0.08536273,
   -0.08552857,
   -0.08394981,
   -0.08454242,
   -0.08479964,
   -0.08535502,
   -0.08445908,
   -0.08496215,
   -0.08510462,
   -0.0872412,
   -0.1053299,
   -0.1396885};
   graph = new TGraph(48,pu0_48b7e_gr_train_mean_fx82,pu0_48b7e_gr_train_mean_fy82);
   graph->SetName("pu0_48b7e_gr_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_train_mean82 = new TH1F("Graph_pu0_48b7e_gr_train_mean82","Graph",100,0,52.7);
   Graph_pu0_48b7e_gr_train_mean82->SetMinimum(-0.1761494);
   Graph_pu0_48b7e_gr_train_mean82->SetMaximum(0.2613816);
   Graph_pu0_48b7e_gr_train_mean82->SetDirectory(0);
   Graph_pu0_48b7e_gr_train_mean82->SetStats(0);
   Graph_pu0_48b7e_gr_train_mean82->SetLineStyle(0);
   Graph_pu0_48b7e_gr_train_mean82->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_train_mean82->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_mean82->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_mean82->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_mean82->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_mean82->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_mean82->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_mean82->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_mean82->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_mean82->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_mean82->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_mean82->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_train_mean82->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_mean82->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_mean82->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_mean82->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_mean82->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_mean82->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_mean82->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_train_mean82);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_train_mean_fx83[48] = {
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
   Double_t pu0_newavg_48b7e_gr_train_mean_fy83[48] = {
   0.1189899,
   0.2962712,
   0.2233098,
   0.1478947,
   0.09536043,
   0.05368578,
   0.02213088,
   0.0004619558,
   -0.01445743,
   -0.02213347,
   -0.02786862,
   -0.03109047,
   -0.03319423,
   -0.034507,
   -0.03445632,
   -0.0354327,
   -0.03549231,
   -0.03637208,
   -0.03592044,
   -0.03566644,
   -0.03592417,
   -0.03530157,
   -0.03618992,
   -0.03597075,
   -0.03548227,
   -0.03614476,
   -0.03549765,
   -0.03490544,
   -0.03551159,
   -0.0361591,
   -0.03622882,
   -0.03529779,
   -0.03530059,
   -0.03583102,
   -0.03719958,
   -0.03584036,
   -0.03653252,
   -0.03661269,
   -0.03489275,
   -0.035579,
   -0.03588115,
   -0.03644,
   -0.03544473,
   -0.03600445,
   -0.03642462,
   -0.03914251,
   -0.05848472,
   -0.09837203};
   graph = new TGraph(48,pu0_newavg_48b7e_gr_train_mean_fx83,pu0_newavg_48b7e_gr_train_mean_fy83);
   graph->SetName("pu0_newavg_48b7e_gr_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_train_mean83 = new TH1F("Graph_pu0_newavg_48b7e_gr_train_mean83","Graph",100,0,52.7);
   Graph_pu0_newavg_48b7e_gr_train_mean83->SetMinimum(-0.1378364);
   Graph_pu0_newavg_48b7e_gr_train_mean83->SetMaximum(0.3357356);
   Graph_pu0_newavg_48b7e_gr_train_mean83->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_train_mean83->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_train_mean83->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_train_mean83->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_mean83->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_train_mean83);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_train_mean_fx84[48] = {
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
   Double_t pu50s2_48b7e_gr_train_mean_fy84[48] = {
   0.2130904,
   0.3607878,
   0.2974649,
   0.2285396,
   0.1743708,
   0.1310194,
   0.09821514,
   0.07618286,
   0.06125309,
   0.05337711,
   0.04746821,
   0.04453367,
   0.04244891,
   0.04095938,
   0.04107375,
   0.04042018,
   0.04030821,
   0.03945869,
   0.03957812,
   0.03986749,
   0.03982724,
   0.04050635,
   0.03929103,
   0.03955664,
   0.03992922,
   0.03921561,
   0.04021284,
   0.04057276,
   0.04016195,
   0.03940978,
   0.03945061,
   0.04016291,
   0.04036582,
   0.03976309,
   0.038483,
   0.03965805,
   0.03913438,
   0.03914478,
   0.04055239,
   0.04008662,
   0.03951122,
   0.03925632,
   0.04017775,
   0.03956524,
   0.03930752,
   0.03702451,
   0.01847579,
   -0.02638344};
   graph = new TGraph(48,pu50s2_48b7e_gr_train_mean_fx84,pu50s2_48b7e_gr_train_mean_fy84);
   graph->SetName("pu50s2_48b7e_gr_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_train_mean84 = new TH1F("Graph_pu50s2_48b7e_gr_train_mean84","Graph",100,0,52.7);
   Graph_pu50s2_48b7e_gr_train_mean84->SetMinimum(-0.06510056);
   Graph_pu50s2_48b7e_gr_train_mean84->SetMaximum(0.399505);
   Graph_pu50s2_48b7e_gr_train_mean84->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_train_mean84->SetStats(0);
   Graph_pu50s2_48b7e_gr_train_mean84->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_train_mean84->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_train_mean84->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_mean84->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_mean84->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_mean84->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_mean84->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_mean84->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_mean84->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_mean84->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_mean84->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_mean84->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_mean84->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_train_mean84->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_mean84->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_mean84->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_mean84->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_mean84->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_mean84->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_mean84->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_train_mean84);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_train_mean_fx85[48] = {
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
   Double_t pu50s30_48b7e_gr_train_mean_fy85[48] = {
   0.09043849,
   0.2427251,
   0.170744,
   0.1004914,
   0.0520366,
   0.01310034,
   -0.01653849,
   -0.03705634,
   -0.05120382,
   -0.05877494,
   -0.06419239,
   -0.06713197,
   -0.06914469,
   -0.07058499,
   -0.07063806,
   -0.07124881,
   -0.07156353,
   -0.07210759,
   -0.07186423,
   -0.07162724,
   -0.07183407,
   -0.07114931,
   -0.07196233,
   -0.07193792,
   -0.07154332,
   -0.07204594,
   -0.07151689,
   -0.0709803,
   -0.07150561,
   -0.0719404,
   -0.07226209,
   -0.07127383,
   -0.07122873,
   -0.07174861,
   -0.07309489,
   -0.07185178,
   -0.07233165,
   -0.07248697,
   -0.07093001,
   -0.07157499,
   -0.07177405,
   -0.07234019,
   -0.07148324,
   -0.07200014,
   -0.07217108,
   -0.07423697,
   -0.09267274,
   -0.1277645};
   graph = new TGraph(48,pu50s30_48b7e_gr_train_mean_fx85,pu50s30_48b7e_gr_train_mean_fy85);
   graph->SetName("pu50s30_48b7e_gr_train_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_train_mean85 = new TH1F("Graph_pu50s30_48b7e_gr_train_mean85","Graph",100,0,52.7);
   Graph_pu50s30_48b7e_gr_train_mean85->SetMinimum(-0.1648135);
   Graph_pu50s30_48b7e_gr_train_mean85->SetMaximum(0.2797741);
   Graph_pu50s30_48b7e_gr_train_mean85->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_train_mean85->SetStats(0);
   Graph_pu50s30_48b7e_gr_train_mean85->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_train_mean85->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_train_mean85->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_mean85->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_mean85->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_mean85->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_mean85->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_mean85->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_mean85->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_mean85->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_mean85->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_mean85->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_mean85->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_train_mean85->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_mean85->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_mean85->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_mean85->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_mean85->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_mean85->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_mean85->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_train_mean85);
   
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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
