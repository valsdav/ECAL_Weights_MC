void gr_train_totsf_48b7e_18_21_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:04:04 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-10.69337,-0.3725485,51.59578,1.723979);
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
   0.3736735,
   0.4865809,
   0.4906522,
   0.470613,
   0.4410836,
   0.4224733,
   0.4075251,
   0.384939,
   0.3894876,
   0.3873051,
   0.3870836,
   0.3720248,
   0.3689538,
   0.365874,
   0.3678238,
   0.3771772,
   0.3731951,
   0.3872313,
   0.3778806,
   0.3731616,
   0.3672226,
   0.3874762,
   0.3791286,
   0.3688802,
   0.3866714,
   0.3706491,
   0.3763508,
   0.3771547,
   0.37813,
   0.3756074,
   0.3729494,
   0.3730066,
   0.3749035,
   0.3804189,
   0.367171,
   0.3890814,
   0.3697382,
   0.3757727,
   0.3729285,
   0.373353,
   0.3823347,
   0.3741313,
   0.377675,
   0.3592944,
   0.3733256,
   0.3882485,
   0.3918889,
   0.2234316};
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
   Graph_curr_48b7e_gr_train_totsf_std116->SetMinimum(0.1967096);
   Graph_curr_48b7e_gr_train_totsf_std116->SetMaximum(0.5173742);
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
   0.3631597,
   0.4761134,
   0.4806098,
   0.4587324,
   0.4318586,
   0.4129041,
   0.3971847,
   0.3763329,
   0.3828703,
   0.377277,
   0.3768316,
   0.3658428,
   0.3589506,
   0.3623995,
   0.3600141,
   0.3696369,
   0.3658254,
   0.3840335,
   0.3626349,
   0.3655705,
   0.3605848,
   0.37869,
   0.3721502,
   0.356457,
   0.3735887,
   0.3625295,
   0.3703348,
   0.3677075,
   0.371529,
   0.367697,
   0.3653828,
   0.3679072,
   0.3673441,
   0.373465,
   0.3581178,
   0.378933,
   0.3584595,
   0.3597813,
   0.3651454,
   0.3654923,
   0.3688686,
   0.366021,
   0.3693016,
   0.3520279,
   0.3660173,
   0.377468,
   0.3809023,
   0.2277812};
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
   Graph_pu0_48b7e_gr_train_totsf_std117->SetMinimum(0.2024983);
   Graph_pu0_48b7e_gr_train_totsf_std117->SetMaximum(0.5058927);
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
   0.3445245,
   0.4766476,
   0.4698892,
   0.4433263,
   0.4110065,
   0.3939299,
   0.3749519,
   0.3591672,
   0.3638934,
   0.3582758,
   0.3579384,
   0.3498876,
   0.3453715,
   0.3439164,
   0.3443173,
   0.3499135,
   0.3481683,
   0.3583763,
   0.342357,
   0.3487006,
   0.3427193,
   0.3636243,
   0.357352,
   0.3437078,
   0.3455326,
   0.3485733,
   0.3487062,
   0.3482575,
   0.3521864,
   0.3529635,
   0.3428075,
   0.3474293,
   0.3499699,
   0.3574502,
   0.3454149,
   0.3524327,
   0.3445422,
   0.3444107,
   0.3476177,
   0.3474956,
   0.3562048,
   0.3462304,
   0.3518002,
   0.3349195,
   0.3486768,
   0.3592558,
   0.3604632,
   0.2269696};
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
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->SetMinimum(0.2020018);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->SetMaximum(0.5016154);
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
   0.361751,
   0.4797212,
   0.4785305,
   0.4556032,
   0.4279167,
   0.4081419,
   0.3911638,
   0.369528,
   0.3750697,
   0.3661853,
   0.3689429,
   0.3576114,
   0.3528959,
   0.3553095,
   0.3525117,
   0.3610372,
   0.3588969,
   0.3742659,
   0.3637965,
   0.3571605,
   0.3547465,
   0.3727011,
   0.3665774,
   0.3522811,
   0.3650655,
   0.3572621,
   0.359955,
   0.3629445,
   0.3632547,
   0.362009,
   0.3597794,
   0.3634188,
   0.3605556,
   0.3664235,
   0.3524383,
   0.3728316,
   0.3533032,
   0.3525471,
   0.3554437,
   0.3579521,
   0.3668962,
   0.3604195,
   0.3631862,
   0.3448482,
   0.3606535,
   0.3702179,
   0.37335,
   0.2229339};
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
   Graph_pu50s2_48b7e_gr_train_totsf_std119->SetMinimum(0.1972552);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->SetMaximum(0.5053999);
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
   0.3629535,
   0.4762779,
   0.4808382,
   0.4590897,
   0.4311202,
   0.4129771,
   0.396589,
   0.376543,
   0.3818361,
   0.3780073,
   0.3758112,
   0.3649115,
   0.3592508,
   0.3614306,
   0.3597347,
   0.3691808,
   0.366679,
   0.3835158,
   0.362726,
   0.3653572,
   0.3608219,
   0.3779735,
   0.3715822,
   0.3557036,
   0.3726172,
   0.3639968,
   0.3697847,
   0.3672968,
   0.3710891,
   0.3674729,
   0.3652929,
   0.3679487,
   0.3683727,
   0.3737764,
   0.3574736,
   0.3785253,
   0.3580903,
   0.3592714,
   0.3648951,
   0.3652143,
   0.3728088,
   0.3657636,
   0.3693321,
   0.3521222,
   0.3659647,
   0.3764999,
   0.3804196,
   0.2273503};
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
   Graph_pu50s30_48b7e_gr_train_totsf_std120->SetMinimum(0.2020015);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->SetMaximum(0.506187);
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
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
