void gr_train_totsf_48b7e_26_28_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:46:41 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-10.69337,-0.6039574,51.59578,3.272638);
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
   
   Double_t curr_48b7e_gr_train_totsf_std_fx116[48] = {
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
   Double_t curr_48b7e_gr_train_totsf_std_fy116[48] = {
   0.1572055,
   0.8745452,
   0.8678362,
   0.7925889,
   0.7572477,
   0.5734648,
   0.6602809,
   0.6311998,
   0.6421504,
   0.5506775,
   0.5909508,
   0.5291634,
   0.5329261,
   0.5445153,
   0.5424758,
   0.626565,
   0.5544717,
   0.5302645,
   0.5450347,
   0.4971713,
   0.526421,
   0.7221223,
   0.5740178,
   0.4837892,
   0.5575265,
   0.6671116,
   0.5865232,
   0.5778403,
   0.5360152,
   0.548257,
   0.6913832,
   0.6390871,
   0.568234,
   0.5318751,
   0.589603,
   0.6204274,
   0.5917045,
   0.5765525,
   0.7056846,
   0.5185922,
   0.6072652,
   0.6066002,
   0.5028352,
   0.5387229,
   0.5902624,
   0.7402655,
   0.9329721,
   0.2710856};
   TGraph *graph = new TGraph(48,curr_48b7e_gr_train_totsf_std_fx116,curr_48b7e_gr_train_totsf_std_fy116);
   graph->SetName("curr_48b7e_gr_train_totsf_std");
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
   
   TH1F *Graph_curr_48b7e_gr_train_totsf_std116 = new TH1F("Graph_curr_48b7e_gr_train_totsf_std116","Graph",100,0,52.7);
   Graph_curr_48b7e_gr_train_totsf_std116->SetMinimum(0.0796288);
   Graph_curr_48b7e_gr_train_totsf_std116->SetMaximum(1.010549);
   Graph_curr_48b7e_gr_train_totsf_std116->SetDirectory(0);
   Graph_curr_48b7e_gr_train_totsf_std116->SetStats(0);
   Graph_curr_48b7e_gr_train_totsf_std116->SetLineStyle(0);
   Graph_curr_48b7e_gr_train_totsf_std116->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_train_totsf_std116->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_totsf_std116->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_totsf_std116->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_totsf_std116->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_totsf_std116->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_totsf_std116->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_totsf_std116->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_totsf_std116->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_totsf_std116->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_totsf_std116->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_totsf_std116->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_train_totsf_std116->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_totsf_std116->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_totsf_std116->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_totsf_std116->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_totsf_std116->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_totsf_std116->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_totsf_std116->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_train_totsf_std116);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_train_totsf_std_fx117[48] = {
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
   Double_t pu0_48b7e_gr_train_totsf_std_fy117[48] = {
   0.1559751,
   0.8494805,
   0.7734573,
   0.7165474,
   0.66043,
   0.5190963,
   0.6383355,
   0.5517456,
   0.5629601,
   0.4999817,
   0.5667611,
   0.4535354,
   0.5141928,
   0.5208582,
   0.5041525,
   0.5331262,
   0.5245483,
   0.4784735,
   0.4336996,
   0.4972205,
   0.4923276,
   0.5841469,
   0.4413933,
   0.4700446,
   0.540673,
   0.5245129,
   0.4982243,
   0.5444668,
   0.4896845,
   0.5222191,
   0.684225,
   0.5550096,
   0.5396092,
   0.4950369,
   0.5703234,
   0.4714809,
   0.5727394,
   0.5286345,
   0.6623008,
   0.4774702,
   0.5894741,
   0.599167,
   0.4886122,
   0.5305394,
   0.5604332,
   0.6030827,
   0.7895455,
   0.2750531};
   graph = new TGraph(48,pu0_48b7e_gr_train_totsf_std_fx117,pu0_48b7e_gr_train_totsf_std_fy117);
   graph->SetName("pu0_48b7e_gr_train_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_train_totsf_std117 = new TH1F("Graph_pu0_48b7e_gr_train_totsf_std117","Graph",100,0,52.7);
   Graph_pu0_48b7e_gr_train_totsf_std117->SetMinimum(0.08662455);
   Graph_pu0_48b7e_gr_train_totsf_std117->SetMaximum(0.918831);
   Graph_pu0_48b7e_gr_train_totsf_std117->SetDirectory(0);
   Graph_pu0_48b7e_gr_train_totsf_std117->SetStats(0);
   Graph_pu0_48b7e_gr_train_totsf_std117->SetLineStyle(0);
   Graph_pu0_48b7e_gr_train_totsf_std117->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_totsf_std117->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_train_totsf_std117);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_train_totsf_std_fx118[48] = {
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
   Double_t pu0_newavg_48b7e_gr_train_totsf_std_fy118[48] = {
   0.1315287,
   0.882657,
   0.7878436,
   0.6968315,
   0.5901012,
   0.5119613,
   0.6107399,
   0.5742275,
   0.5495453,
   0.5109154,
   0.5615912,
   0.4438528,
   0.5111704,
   0.5309135,
   0.5137528,
   0.5750777,
   0.5127875,
   0.5007322,
   0.4634387,
   0.4819031,
   0.4997033,
   0.5565339,
   0.5403851,
   0.4660795,
   0.5499849,
   0.5341416,
   0.5471172,
   0.5727177,
   0.5643857,
   0.5053602,
   0.6773901,
   0.5977727,
   0.5467632,
   0.5075206,
   0.5790006,
   0.5517613,
   0.5920355,
   0.5348935,
   0.6829805,
   0.5313564,
   0.563777,
   0.5893757,
   0.5028957,
   0.5217619,
   0.559145,
   0.5793308,
   0.7730002,
   0.2876527};
   graph = new TGraph(48,pu0_newavg_48b7e_gr_train_totsf_std_fx118,pu0_newavg_48b7e_gr_train_totsf_std_fy118);
   graph->SetName("pu0_newavg_48b7e_gr_train_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_train_totsf_std118 = new TH1F("Graph_pu0_newavg_48b7e_gr_train_totsf_std118","Graph",100,0,52.7);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->SetMinimum(0.05641588);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->SetMaximum(0.9577698);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_train_totsf_std118);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_train_totsf_std_fx119[48] = {
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
   Double_t pu50s2_48b7e_gr_train_totsf_std_fy119[48] = {
   0.1407572,
   0.7023158,
   0.5222324,
   0.5221503,
   0.3895218,
   0.3637596,
   0.4870102,
   0.4351728,
   0.4088733,
   0.3514057,
   0.3827837,
   0.356588,
   0.3712594,
   0.3590362,
   0.4067177,
   0.3767986,
   0.4253697,
   0.4409507,
   0.3682324,
   0.3656817,
   0.4151693,
   0.4415534,
   0.3581946,
   0.3621477,
   0.4100876,
   0.4160481,
   0.4179332,
   0.4158056,
   0.3743564,
   0.3858653,
   0.5611146,
   0.4509877,
   0.4328052,
   0.3857142,
   0.3528113,
   0.3724064,
   0.4690747,
   0.3747842,
   0.357286,
   0.4158694,
   0.3944753,
   0.4415794,
   0.4002849,
   0.3634394,
   0.3941935,
   0.4422764,
   0.6679608,
   0.2913899};
   graph = new TGraph(48,pu50s2_48b7e_gr_train_totsf_std_fx119,pu50s2_48b7e_gr_train_totsf_std_fy119);
   graph->SetName("pu50s2_48b7e_gr_train_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_train_totsf_std119 = new TH1F("Graph_pu50s2_48b7e_gr_train_totsf_std119","Graph",100,0,52.7);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->SetMinimum(0.08460138);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->SetMaximum(0.7584717);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->SetStats(0);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_train_totsf_std119);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_train_totsf_std_fx120[48] = {
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
   Double_t pu50s30_48b7e_gr_train_totsf_std_fy120[48] = {
   0.1551971,
   0.8487036,
   0.7786705,
   0.7199867,
   0.6620126,
   0.5164682,
   0.6373682,
   0.5685019,
   0.5265566,
   0.4749464,
   0.5619501,
   0.4480037,
   0.5124223,
   0.5162976,
   0.4972484,
   0.5286826,
   0.5216024,
   0.4759298,
   0.4216651,
   0.493033,
   0.4939982,
   0.6124793,
   0.4386452,
   0.4659653,
   0.5358486,
   0.519981,
   0.5111594,
   0.5499223,
   0.4869021,
   0.5212601,
   0.6770108,
   0.5809115,
   0.5375937,
   0.4916706,
   0.5653117,
   0.4709854,
   0.5671014,
   0.5236519,
   0.6813905,
   0.4897052,
   0.5863485,
   0.5935273,
   0.4769248,
   0.5256973,
   0.5752914,
   0.6015913,
   0.7911345,
   0.2751358};
   graph = new TGraph(48,pu50s30_48b7e_gr_train_totsf_std_fx120,pu50s30_48b7e_gr_train_totsf_std_fy120);
   graph->SetName("pu50s30_48b7e_gr_train_totsf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_train_totsf_std120 = new TH1F("Graph_pu50s30_48b7e_gr_train_totsf_std120","Graph",100,0,52.7);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->SetMinimum(0.0858465);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->SetMaximum(0.9180543);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->SetStats(0);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_train_totsf_std120);
   
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
   entry=leg->AddEntry("pu50s2_48b7e_gr_train_totsf_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_48b7e_gr_train_totsf_mean","PU optimized","lp");

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
