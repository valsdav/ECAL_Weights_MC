void gr_train_BXsf_48b7e_18_21_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:04:03 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-10.69337,-0.2018127,51.59578,0.3354101);
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
   0.04605583,
   0.06955428,
   0.05891554,
   0.04499314,
   0.03121297,
   0.02309872,
   0.01320637,
   0.008203547,
   0.00550457,
   0.003512808,
   0.002857436,
   0.00253016,
   0.001057018,
   0.00182562,
   0.00248602,
   0.00178937,
   -9.258226e-05,
   0.0007637164,
   0.001875792,
   0.001510018,
   0.001345161,
   0.002572341,
   0.001074212,
   0.001585982,
   0.001533988,
   -3.510699e-05,
   0.0005966251,
   0.001811683,
   0.001981439,
   0.0007836822,
   0.001544133,
   0.0008817983,
   0.0004338296,
   0.00188041,
   0.0009870317,
   0.002934785,
   0.0008689206,
   0.001450302,
   0.001839582,
   0.0005388164,
   0.001610354,
   0.001351838,
   0.0002524762,
   0.002356436,
   0.001532054,
   0.002000387,
   -0.00569636,
   -0.01987455};
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
   Graph_curr_48b7e_gr_train_BXsf_mean101->SetMinimum(-0.02881743);
   Graph_curr_48b7e_gr_train_BXsf_mean101->SetMaximum(0.07849717);
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
   0.03194499,
   0.05553485,
   0.0454276,
   0.03154074,
   0.01796326,
   0.009956504,
   0.0002690776,
   -0.004755069,
   -0.007379785,
   -0.009321417,
   -0.00999119,
   -0.01025124,
   -0.01179319,
   -0.01099631,
   -0.01040082,
   -0.0109735,
   -0.01300458,
   -0.01201969,
   -0.01099326,
   -0.01132712,
   -0.01151057,
   -0.01019964,
   -0.01178403,
   -0.01126494,
   -0.01124932,
   -0.01280402,
   -0.01217399,
   -0.01098627,
   -0.010795,
   -0.01195807,
   -0.01127448,
   -0.01192785,
   -0.01241452,
   -0.01094534,
   -0.01179446,
   -0.009900044,
   -0.01195856,
   -0.01133403,
   -0.01093266,
   -0.01237292,
   -0.01122025,
   -0.0114726,
   -0.01250668,
   -0.01039844,
   -0.01127729,
   -0.01075794,
   -0.01817485,
   -0.03197372};
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
   Graph_pu0_48b7e_gr_train_BXsf_mean102->SetMinimum(-0.04072458);
   Graph_pu0_48b7e_gr_train_BXsf_mean102->SetMaximum(0.0642857);
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
   0.06610082,
   0.09349968,
   0.08420599,
   0.07004604,
   0.05562923,
   0.04728083,
   0.03696107,
   0.03212612,
   0.02885923,
   0.02702076,
   0.02627067,
   0.026228,
   0.02443665,
   0.02535297,
   0.02606029,
   0.02530186,
   0.0233347,
   0.02408992,
   0.02553973,
   0.02489453,
   0.02468734,
   0.02634696,
   0.02465945,
   0.02524329,
   0.0251765,
   0.02361019,
   0.02411324,
   0.02543059,
   0.02555142,
   0.02419838,
   0.02519129,
   0.02460601,
   0.02368353,
   0.02550537,
   0.02462097,
   0.02644251,
   0.02449682,
   0.02525677,
   0.02537363,
   0.02371799,
   0.02521136,
   0.02479419,
   0.02382425,
   0.02617134,
   0.02503266,
   0.02586314,
   0.01896606,
   0.005565767};
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
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->SetMinimum(0.00500919);
   Graph_pu0_newavg_48b7e_gr_train_BXsf_mean103->SetMaximum(0.1022931);
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
   0.06149697,
   0.08606195,
   0.07574832,
   0.06161615,
   0.04759166,
   0.03946435,
   0.02940964,
   0.02450174,
   0.02149294,
   0.01959173,
   0.01891691,
   0.01877754,
   0.01709641,
   0.01801197,
   0.01861746,
   0.0179938,
   0.01604476,
   0.01683573,
   0.01809377,
   0.0176198,
   0.01740082,
   0.01888527,
   0.01726301,
   0.01783359,
   0.01776619,
   0.01611901,
   0.01677,
   0.01803318,
   0.01818255,
   0.01687931,
   0.01781388,
   0.01715798,
   0.01639805,
   0.0180898,
   0.01720408,
   0.01908243,
   0.01705982,
   0.01771562,
   0.0180088,
   0.01649892,
   0.01778448,
   0.01745786,
   0.01645734,
   0.01868719,
   0.01766522,
   0.01835475,
   0.01093356,
   -0.003059498};
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
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->SetMinimum(-0.01197164);
   Graph_pu50s2_48b7e_gr_train_BXsf_mean104->SetMaximum(0.09497409);
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
   0.03435019,
   0.0580383,
   0.04791982,
   0.03404646,
   0.02039672,
   0.01238418,
   0.002628972,
   -0.002367835,
   -0.005010605,
   -0.006962545,
   -0.007632877,
   -0.007906326,
   -0.009464747,
   -0.008638579,
   -0.008030688,
   -0.008623928,
   -0.01061486,
   -0.009664051,
   -0.008614892,
   -0.00895876,
   -0.009136355,
   -0.007864399,
   -0.009423533,
   -0.008886855,
   -0.008884331,
   -0.01043234,
   -0.009844797,
   -0.008634117,
   -0.008435891,
   -0.009618664,
   -0.0089084,
   -0.009565275,
   -0.01006599,
   -0.00857212,
   -0.009426608,
   -0.007539217,
   -0.009617579,
   -0.008944836,
   -0.008574647,
   -0.009998915,
   -0.008850536,
   -0.009133412,
   -0.01015325,
   -0.008027957,
   -0.008939932,
   -0.008400821,
   -0.01582089,
   -0.02966283};
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
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->SetMinimum(-0.03843294);
   Graph_pu50s30_48b7e_gr_train_BXsf_mean105->SetMaximum(0.06680841);
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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
