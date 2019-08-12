void gr_train_Asf_48b7e_22_25_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:08:39 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-10.69337,-0.43191,51.59578,2.121244);
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
   
   Double_t curr_48b7e_gr_train_Asf_std_fx96[48] = {
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
   Double_t curr_48b7e_gr_train_Asf_std_fy96[48] = {
   0.2953608,
   0.5997577,
   0.5801132,
   0.5471525,
   0.4712871,
   0.4504609,
   0.4546168,
   0.4325336,
   0.4227753,
   0.4545522,
   0.4378336,
   0.412197,
   0.4158168,
   0.4142162,
   0.4158684,
   0.4327478,
   0.4096897,
   0.4106665,
   0.3830965,
   0.425821,
   0.4146222,
   0.4331068,
   0.4083581,
   0.43562,
   0.4093375,
   0.4487167,
   0.4042223,
   0.4212301,
   0.3978373,
   0.4240983,
   0.5733348,
   0.4179414,
   0.4218769,
   0.4116262,
   0.4189449,
   0.4241135,
   0.4178384,
   0.3982246,
   0.4186819,
   0.4121721,
   0.4035682,
   0.4245504,
   0.4313035,
   0.4253376,
   0.4052281,
   0.4545496,
   0.5177077,
   0.2444678};
   TGraph *graph = new TGraph(48,curr_48b7e_gr_train_Asf_std_fx96,curr_48b7e_gr_train_Asf_std_fy96);
   graph->SetName("curr_48b7e_gr_train_Asf_std");
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
   
   TH1F *Graph_curr_48b7e_gr_train_Asf_std96 = new TH1F("Graph_curr_48b7e_gr_train_Asf_std96","Graph",100,0,52.7);
   Graph_curr_48b7e_gr_train_Asf_std96->SetMinimum(0.2089388);
   Graph_curr_48b7e_gr_train_Asf_std96->SetMaximum(0.6352867);
   Graph_curr_48b7e_gr_train_Asf_std96->SetDirectory(0);
   Graph_curr_48b7e_gr_train_Asf_std96->SetStats(0);
   Graph_curr_48b7e_gr_train_Asf_std96->SetLineStyle(0);
   Graph_curr_48b7e_gr_train_Asf_std96->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_train_Asf_std96->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_Asf_std96->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_Asf_std96->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_Asf_std96->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_Asf_std96->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_Asf_std96->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_Asf_std96->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_Asf_std96->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_Asf_std96->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_Asf_std96->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_Asf_std96->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_train_Asf_std96->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_Asf_std96->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_Asf_std96->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_Asf_std96->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_Asf_std96->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_Asf_std96->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_Asf_std96->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_train_Asf_std96);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_train_Asf_std_fx97[48] = {
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
   Double_t pu0_48b7e_gr_train_Asf_std_fy97[48] = {
   0.2885689,
   0.5933989,
   0.5585856,
   0.5157771,
   0.4558459,
   0.4385238,
   0.4274219,
   0.4138114,
   0.4129198,
   0.4381619,
   0.420554,
   0.397296,
   0.3978286,
   0.396633,
   0.4106203,
   0.4134549,
   0.3929636,
   0.3971733,
   0.3784833,
   0.4002741,
   0.3921272,
   0.4203675,
   0.4025756,
   0.4192333,
   0.3925371,
   0.4438303,
   0.3927279,
   0.4142677,
   0.3846748,
   0.4169199,
   0.561312,
   0.4072496,
   0.4102732,
   0.4010673,
   0.4065805,
   0.4158359,
   0.4021628,
   0.3916166,
   0.3990172,
   0.407032,
   0.3926105,
   0.4021924,
   0.4160007,
   0.4140165,
   0.393338,
   0.4350338,
   0.4860068,
   0.2449482};
   graph = new TGraph(48,pu0_48b7e_gr_train_Asf_std_fx97,pu0_48b7e_gr_train_Asf_std_fy97);
   graph->SetName("pu0_48b7e_gr_train_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_train_Asf_std97 = new TH1F("Graph_pu0_48b7e_gr_train_Asf_std97","Graph",100,0,52.7);
   Graph_pu0_48b7e_gr_train_Asf_std97->SetMinimum(0.2101031);
   Graph_pu0_48b7e_gr_train_Asf_std97->SetMaximum(0.6282439);
   Graph_pu0_48b7e_gr_train_Asf_std97->SetDirectory(0);
   Graph_pu0_48b7e_gr_train_Asf_std97->SetStats(0);
   Graph_pu0_48b7e_gr_train_Asf_std97->SetLineStyle(0);
   Graph_pu0_48b7e_gr_train_Asf_std97->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_Asf_std97->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_train_Asf_std97);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_train_Asf_std_fx98[48] = {
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
   Double_t pu0_newavg_48b7e_gr_train_Asf_std_fy98[48] = {
   0.2641997,
   0.604117,
   0.5470421,
   0.4863212,
   0.427451,
   0.4254521,
   0.4060704,
   0.3976429,
   0.4175609,
   0.4135237,
   0.417865,
   0.3853973,
   0.3850688,
   0.3812028,
   0.3837773,
   0.3982682,
   0.3746189,
   0.3779682,
   0.3719495,
   0.3996496,
   0.3854948,
   0.3975726,
   0.3947615,
   0.4046597,
   0.3835956,
   0.4085654,
   0.3832911,
   0.3995676,
   0.3671199,
   0.4038411,
   0.5362452,
   0.3848291,
   0.3931689,
   0.3865044,
   0.3730686,
   0.3990807,
   0.3825356,
   0.3657798,
   0.3804688,
   0.3986713,
   0.3703094,
   0.3830958,
   0.3987374,
   0.3832391,
   0.3851277,
   0.4172053,
   0.4401024,
   0.2532246};
   graph = new TGraph(48,pu0_newavg_48b7e_gr_train_Asf_std_fx98,pu0_newavg_48b7e_gr_train_Asf_std_fy98);
   graph->SetName("pu0_newavg_48b7e_gr_train_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_train_Asf_std98 = new TH1F("Graph_pu0_newavg_48b7e_gr_train_Asf_std98","Graph",100,0,52.7);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->SetMinimum(0.2181354);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->SetMaximum(0.6392062);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_train_Asf_std98);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_train_Asf_std_fx99[48] = {
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
   Double_t pu50s2_48b7e_gr_train_Asf_std_fy99[48] = {
   0.2818909,
   0.5734042,
   0.5311594,
   0.4872798,
   0.4278797,
   0.4109439,
   0.4000317,
   0.3842033,
   0.3855366,
   0.4073651,
   0.4114828,
   0.3749197,
   0.3766789,
   0.3767087,
   0.3826389,
   0.3859801,
   0.37186,
   0.3690146,
   0.3614264,
   0.3822007,
   0.3737491,
   0.381493,
   0.3758462,
   0.3885124,
   0.3781669,
   0.4018408,
   0.3635744,
   0.3907913,
   0.367069,
   0.3866384,
   0.5261272,
   0.3769948,
   0.3865673,
   0.3759282,
   0.3758382,
   0.3907981,
   0.3676696,
   0.3517809,
   0.3738801,
   0.3789495,
   0.3624131,
   0.3818402,
   0.3922392,
   0.3893797,
   0.3707503,
   0.4062627,
   0.4518034,
   0.2485988};
   graph = new TGraph(48,pu50s2_48b7e_gr_train_Asf_std_fx99,pu50s2_48b7e_gr_train_Asf_std_fy99);
   graph->SetName("pu50s2_48b7e_gr_train_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_train_Asf_std99 = new TH1F("Graph_pu50s2_48b7e_gr_train_Asf_std99","Graph",100,0,52.7);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->SetMinimum(0.2161183);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->SetMaximum(0.6058847);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->SetStats(0);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_train_Asf_std99);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_train_Asf_std_fx100[48] = {
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
   Double_t pu50s30_48b7e_gr_train_Asf_std_fy100[48] = {
   0.2882342,
   0.5917082,
   0.5574207,
   0.5140334,
   0.4556237,
   0.4377618,
   0.4296827,
   0.41372,
   0.4135852,
   0.4370977,
   0.4273333,
   0.395725,
   0.3973848,
   0.3950859,
   0.4082417,
   0.4114934,
   0.3923334,
   0.3955642,
   0.3767176,
   0.4011963,
   0.3907136,
   0.419001,
   0.3995017,
   0.4175408,
   0.3944817,
   0.4425969,
   0.3918678,
   0.4134052,
   0.3861516,
   0.4148487,
   0.5598137,
   0.4060139,
   0.4082415,
   0.3996032,
   0.4091809,
   0.4168159,
   0.4009971,
   0.39055,
   0.3975507,
   0.4047021,
   0.3897701,
   0.4014074,
   0.4149593,
   0.4137369,
   0.3929881,
   0.4331196,
   0.4843944,
   0.2452424};
   graph = new TGraph(48,pu50s30_48b7e_gr_train_Asf_std_fx100,pu50s30_48b7e_gr_train_Asf_std_fy100);
   graph->SetName("pu50s30_48b7e_gr_train_Asf_std");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_train_Asf_std100 = new TH1F("Graph_pu50s30_48b7e_gr_train_Asf_std100","Graph",100,0,52.7);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->SetMinimum(0.2105958);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->SetMaximum(0.6263548);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->SetStats(0);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_train_Asf_std100);
   
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
   entry=leg->AddEntry("pu50s2_48b7e_gr_train_Asf_mean","PU optimized","lp");

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
   entry=leg->AddEntry("pu50s30_48b7e_gr_train_Asf_mean","PU optimized","lp");

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
