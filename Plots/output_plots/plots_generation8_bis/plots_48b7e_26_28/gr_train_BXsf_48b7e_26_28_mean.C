void gr_train_BXsf_48b7e_26_28_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:46:40 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-10.69337,-0.2078254,51.59578,0.5091398);
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
   0.1415599,
   0.3673924,
   0.2676432,
   0.1586571,
   0.08414915,
   0.0356655,
   -0.0001016563,
   -0.01788396,
   -0.02932813,
   -0.03696576,
   -0.04087714,
   -0.04530296,
   -0.04266988,
   -0.05099935,
   -0.03930752,
   -0.03755881,
   -0.04917255,
   -0.0481807,
   -0.04200444,
   -0.03859523,
   -0.04723249,
   -0.04072431,
   -0.04624328,
   -0.04063041,
   -0.03928215,
   -0.03632368,
   -0.04117226,
   -0.03792857,
   -0.04254523,
   -0.0434943,
   -0.04501288,
   -0.04768969,
   -0.03240989,
   -0.04275582,
   -0.04084657,
   -0.04676085,
   -0.04109927,
   -0.04793276,
   -0.0501801,
   -0.04226761,
   -0.05231454,
   -0.04392919,
   -0.04095218,
   -0.04680295,
   -0.04938434,
   -0.05568819,
   -0.04860308,
   -0.05003764};
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
   Graph_curr_48b7e_gr_train_BXsf_mean101->SetMinimum(-0.09799626);
   Graph_curr_48b7e_gr_train_BXsf_mean101->SetMaximum(0.4097005);
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
   0.1012632,
   0.3109205,
   0.2178871,
   0.1161245,
   0.04512817,
   -0.001363726,
   -0.03535742,
   -0.05206189,
   -0.06258906,
   -0.069855,
   -0.07329292,
   -0.07738272,
   -0.07473821,
   -0.0829659,
   -0.07135034,
   -0.06963807,
   -0.08105095,
   -0.07999432,
   -0.07408562,
   -0.07048461,
   -0.07918061,
   -0.07282672,
   -0.07822374,
   -0.07273897,
   -0.07134682,
   -0.06841396,
   -0.07337371,
   -0.07004932,
   -0.07464764,
   -0.07529587,
   -0.07688317,
   -0.07966168,
   -0.06454588,
   -0.07465764,
   -0.07282766,
   -0.07882699,
   -0.07316545,
   -0.07973825,
   -0.08211339,
   -0.07418047,
   -0.08420885,
   -0.07594864,
   -0.07293291,
   -0.07877184,
   -0.08132724,
   -0.08789666,
   -0.08054464,
   -0.08193331};
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
   Graph_pu0_48b7e_gr_train_BXsf_mean102->SetMinimum(-0.1277784);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->SetMaximum(0.3508022);
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
   0.1408587,
   0.3866945,
   0.291496,
   0.1810154,
   0.103902,
   0.05346972,
   0.0167428,
   -0.001161785,
   -0.01251771,
   -0.01986292,
   -0.02342154,
   -0.02796081,
   -0.02497506,
   -0.03378445,
   -0.02122926,
   -0.01970638,
   -0.03181488,
   -0.03068288,
   -0.02426579,
   -0.02047443,
   -0.02970936,
   -0.02301373,
   -0.02893978,
   -0.02272415,
   -0.02120667,
   -0.01821359,
   -0.02335732,
   -0.01979931,
   -0.02470099,
   -0.02584614,
   -0.0272171,
   -0.03020199,
   -0.01425468,
   -0.02507978,
   -0.02292164,
   -0.0293798,
   -0.0233627,
   -0.03048532,
   -0.03295767,
   -0.02449172,
   -0.03545555,
   -0.02630924,
   -0.02290187,
   -0.0293054,
   -0.03229829,
   -0.0398522,
   -0.03180292,
   -0.03282559};
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
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->SetMinimum(-0.08250687);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->SetMaximum(0.4293491);
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
   0.2380333,
   0.4465683,
   0.360968,
   0.2585269,
   0.180944,
   0.12922,
   0.091064,
   0.074104,
   0.06270348,
   0.05616938,
   0.05341962,
   0.04828489,
   0.05233962,
   0.04186816,
   0.05624092,
   0.05816782,
   0.04423329,
   0.04640592,
   0.05307584,
   0.05674969,
   0.04725451,
   0.05469827,
   0.04742406,
   0.05505481,
   0.0563339,
   0.05905908,
   0.05451829,
   0.05801536,
   0.05321885,
   0.05083403,
   0.04983322,
   0.04642222,
   0.06348597,
   0.05163521,
   0.05476233,
   0.04667349,
   0.05432719,
   0.04556182,
   0.04251829,
   0.05233745,
   0.03892029,
   0.05053944,
   0.05503267,
   0.0473459,
   0.0443632,
   0.03630664,
   0.04717259,
   0.04785665};
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
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->SetMinimum(0.03267597);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->SetMaximum(0.4875945);
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
   0.1170076,
   0.329951,
   0.2357699,
   0.1321799,
   0.06023354,
   0.01299771,
   -0.02159599,
   -0.03858646,
   -0.049261,
   -0.05665244,
   -0.06014133,
   -0.06422299,
   -0.06146954,
   -0.06992927,
   -0.05809774,
   -0.05634145,
   -0.06802794,
   -0.06684095,
   -0.06083023,
   -0.05717423,
   -0.06604077,
   -0.05957662,
   -0.06508606,
   -0.05945305,
   -0.05803566,
   -0.05499712,
   -0.06010942,
   -0.05672977,
   -0.06140259,
   -0.06212707,
   -0.06374601,
   -0.06654099,
   -0.05115404,
   -0.06150777,
   -0.05959368,
   -0.06568544,
   -0.05990267,
   -0.06660559,
   -0.069068,
   -0.06100368,
   -0.07119142,
   -0.06273467,
   -0.0597197,
   -0.0656855,
   -0.06831538,
   -0.07491378,
   -0.06741074,
   -0.06875332};
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
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->SetMinimum(-0.1154003);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->SetMaximum(0.3704374);
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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
