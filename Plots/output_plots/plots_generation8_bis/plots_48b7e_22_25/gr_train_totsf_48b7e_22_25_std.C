void gr_train_totsf_48b7e_22_25_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:08:40 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-10.69337,-0.4312522,51.59578,2.116842);
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
   0.2977113,
   0.5977532,
   0.5802751,
   0.5505635,
   0.4742469,
   0.4546739,
   0.4568702,
   0.4353726,
   0.4239556,
   0.4425794,
   0.4302195,
   0.410673,
   0.416904,
   0.4123324,
   0.4150237,
   0.4311942,
   0.4085419,
   0.4083408,
   0.3778853,
   0.4245431,
   0.4132267,
   0.4283672,
   0.4005118,
   0.4281856,
   0.4006763,
   0.4432563,
   0.3974305,
   0.414731,
   0.3988462,
   0.4216742,
   0.5676752,
   0.4053418,
   0.4164062,
   0.4027828,
   0.4117078,
   0.4164458,
   0.4172886,
   0.3980381,
   0.4173146,
   0.4127102,
   0.4006424,
   0.4217918,
   0.4306152,
   0.4221016,
   0.4003621,
   0.4509764,
   0.4992386,
   0.216311};
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
   Graph_curr_48b7e_gr_train_totsf_std116->SetMinimum(0.1781668);
   Graph_curr_48b7e_gr_train_totsf_std116->SetMaximum(0.6358974);
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
   0.2905697,
   0.5915087,
   0.558807,
   0.5188416,
   0.4586674,
   0.4425464,
   0.4294641,
   0.4164761,
   0.4140615,
   0.4267168,
   0.413409,
   0.3958633,
   0.398847,
   0.39482,
   0.4097934,
   0.4120006,
   0.3919062,
   0.3949857,
   0.373379,
   0.3990612,
   0.3907654,
   0.4157884,
   0.3949542,
   0.4121951,
   0.3843641,
   0.4384407,
   0.3861465,
   0.4079271,
   0.3856302,
   0.4145429,
   0.5557595,
   0.3950869,
   0.4050274,
   0.3925882,
   0.3995791,
   0.4083414,
   0.4016086,
   0.3914522,
   0.3976974,
   0.4075563,
   0.3897708,
   0.3995788,
   0.4153709,
   0.4108798,
   0.3886704,
   0.4316232,
   0.4688366,
   0.2177384};
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
   Graph_pu0_48b7e_gr_train_totsf_std117->SetMinimum(0.1803614);
   Graph_pu0_48b7e_gr_train_totsf_std117->SetMaximum(0.6288858);
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
   0.267644,
   0.6028597,
   0.5478671,
   0.4899329,
   0.4305094,
   0.4297595,
   0.4081618,
   0.4003559,
   0.4187865,
   0.4024059,
   0.4103295,
   0.3839236,
   0.3860941,
   0.3794201,
   0.3829633,
   0.3968103,
   0.3735438,
   0.3757524,
   0.3666629,
   0.3984356,
   0.3841971,
   0.3931283,
   0.3869646,
   0.3974923,
   0.3753134,
   0.4035268,
   0.3766823,
   0.3932693,
   0.3680783,
   0.4014925,
   0.5308103,
   0.3730053,
   0.3879514,
   0.3780481,
   0.3665183,
   0.3917352,
   0.3820232,
   0.3656017,
   0.3792112,
   0.3992625,
   0.3675617,
   0.3805314,
   0.3980779,
   0.3802882,
   0.3803841,
   0.4138193,
   0.4249401,
   0.2249875};
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
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->SetMinimum(0.1872003);
   Graph_pu0_newavg_48b7e_gr_train_totsf_std118->SetMaximum(0.640647);
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
   0.284916,
   0.5724333,
   0.5320544,
   0.4910629,
   0.4311666,
   0.4152334,
   0.4021334,
   0.3868641,
   0.3866675,
   0.3962405,
   0.4040128,
   0.3734745,
   0.3776895,
   0.3749389,
   0.3817876,
   0.3845669,
   0.3707548,
   0.366825,
   0.3562705,
   0.3810225,
   0.3724858,
   0.3772024,
   0.3684291,
   0.3816488,
   0.3699223,
   0.39684,
   0.357283,
   0.384564,
   0.3680486,
   0.384364,
   0.5207502,
   0.3653591,
   0.3813812,
   0.3676257,
   0.3691885,
   0.3835322,
   0.3671637,
   0.3516212,
   0.3726396,
   0.3795026,
   0.3597003,
   0.3792693,
   0.3915712,
   0.3863552,
   0.3661552,
   0.4029318,
   0.4358541,
   0.2209743};
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
   Graph_pu50s2_48b7e_gr_train_totsf_std119->SetMinimum(0.1858284);
   Graph_pu50s2_48b7e_gr_train_totsf_std119->SetMaximum(0.6075792);
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
   0.2903122,
   0.5898274,
   0.5576673,
   0.5171172,
   0.4584813,
   0.4418029,
   0.4317551,
   0.4163929,
   0.4147327,
   0.4256507,
   0.4199692,
   0.3942917,
   0.3984075,
   0.3932751,
   0.4074206,
   0.4100446,
   0.3912698,
   0.3933782,
   0.3716303,
   0.3999799,
   0.3893551,
   0.4144333,
   0.3919257,
   0.4105032,
   0.3862233,
   0.4372153,
   0.3852842,
   0.4070519,
   0.3871184,
   0.4124807,
   0.5542716,
   0.3938664,
   0.4030073,
   0.3911568,
   0.4021207,
   0.4093016,
   0.4004456,
   0.3903821,
   0.3962364,
   0.4052249,
   0.3869421,
   0.3987941,
   0.4143251,
   0.4105993,
   0.3883132,
   0.4297191,
   0.4672745,
   0.2179138};
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
   Graph_pu50s30_48b7e_gr_train_totsf_std120->SetMinimum(0.1807225);
   Graph_pu50s30_48b7e_gr_train_totsf_std120->SetMaximum(0.6270187);
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
   entry=leg->AddEntry("NULL","PU=50, ET=2GeV","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
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
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
