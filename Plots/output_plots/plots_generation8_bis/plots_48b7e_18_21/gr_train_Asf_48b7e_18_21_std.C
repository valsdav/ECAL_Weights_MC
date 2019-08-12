void gr_train_Asf_48b7e_18_21_std()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Jul  3 00:04:02 2019) by ROOT version 6.16/00
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(-10.69337,-0.3715685,51.59578,1.71742);
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
   0.3728931,
   0.4858338,
   0.488779,
   0.4686154,
   0.4405553,
   0.4194473,
   0.4078596,
   0.3854655,
   0.3881052,
   0.3877649,
   0.3855384,
   0.3722404,
   0.367332,
   0.3664147,
   0.3665789,
   0.3769075,
   0.3746647,
   0.3865606,
   0.3790024,
   0.3710822,
   0.3650661,
   0.3902096,
   0.3795407,
   0.3705028,
   0.3890497,
   0.3742935,
   0.3776781,
   0.3776459,
   0.3770379,
   0.3754666,
   0.375798,
   0.3754312,
   0.3751062,
   0.382189,
   0.36945,
   0.3872207,
   0.3707578,
   0.3803589,
   0.3740825,
   0.3719288,
   0.3844399,
   0.3740028,
   0.38019,
   0.3639041,
   0.3729452,
   0.3912255,
   0.3980031,
   0.2482571};
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
   Graph_curr_48b7e_gr_train_Asf_std96->SetMinimum(0.2242049);
   Graph_curr_48b7e_gr_train_Asf_std96->SetMaximum(0.5128312);
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
   0.3625361,
   0.4755196,
   0.4789285,
   0.4569044,
   0.431363,
   0.4100924,
   0.3974915,
   0.3768415,
   0.3815467,
   0.3776998,
   0.3753638,
   0.3660538,
   0.3574068,
   0.3629218,
   0.358836,
   0.3693756,
   0.3672202,
   0.3833773,
   0.3636995,
   0.3635814,
   0.3585373,
   0.3812968,
   0.3725473,
   0.357954,
   0.3758221,
   0.3659749,
   0.3715909,
   0.3681645,
   0.3704982,
   0.3675542,
   0.3681134,
   0.3702326,
   0.3674978,
   0.3751688,
   0.3602593,
   0.3771817,
   0.3594067,
   0.3639654,
   0.3662381,
   0.364121,
   0.3708211,
   0.3658954,
   0.3716758,
   0.3564402,
   0.3656569,
   0.3802849,
   0.3866341,
   0.2520691};
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
   Graph_pu0_48b7e_gr_train_Asf_std97->SetMinimum(0.2293832);
   Graph_pu0_48b7e_gr_train_Asf_std97->SetMaximum(0.5016145);
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
   0.3434353,
   0.4755632,
   0.4677557,
   0.4413151,
   0.4104968,
   0.391055,
   0.3752589,
   0.359663,
   0.3625963,
   0.358699,
   0.3564975,
   0.3500912,
   0.3438338,
   0.344433,
   0.3431229,
   0.3496535,
   0.349556,
   0.3577438,
   0.3433868,
   0.3467482,
   0.3406938,
   0.3662235,
   0.3577461,
   0.3452327,
   0.3476458,
   0.3520157,
   0.3499322,
   0.3487088,
   0.3511686,
   0.3528314,
   0.3454419,
   0.3496828,
   0.3501593,
   0.3591342,
   0.3475802,
   0.3507945,
   0.3454873,
   0.348552,
   0.3487021,
   0.3461538,
   0.3581748,
   0.3461097,
   0.3541618,
   0.3392698,
   0.3483206,
   0.3620068,
   0.365741,
   0.2487344};
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
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->SetMinimum(0.2260515);
   Graph_pu0_newavg_48b7e_gr_train_Asf_std98->SetMaximum(0.498246);
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
   0.3608432,
   0.4787775,
   0.4764403,
   0.4535364,
   0.4273783,
   0.4051588,
   0.3914916,
   0.3700388,
   0.3737269,
   0.3666136,
   0.3674596,
   0.35782,
   0.3513341,
   0.3558422,
   0.351299,
   0.3607736,
   0.3603283,
   0.3736117,
   0.36489,
   0.3551598,
   0.3526385,
   0.3753518,
   0.3669801,
   0.3538274,
   0.3673119,
   0.3607883,
   0.361219,
   0.3634218,
   0.3622038,
   0.3618745,
   0.3625502,
   0.3658187,
   0.3607544,
   0.3681423,
   0.3546329,
   0.3710389,
   0.3542745,
   0.3568001,
   0.3565508,
   0.3565729,
   0.3689283,
   0.3602955,
   0.3656204,
   0.3493158,
   0.3602839,
   0.3730596,
   0.379029,
   0.2462083};
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
   Graph_pu50s2_48b7e_gr_train_Asf_std99->SetMinimum(0.2229514);
   Graph_pu50s2_48b7e_gr_train_Asf_std99->SetMaximum(0.5020344);
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
   0.3623083,
   0.4756629,
   0.4791236,
   0.4572412,
   0.4306222,
   0.4101438,
   0.396897,
   0.3770531,
   0.380513,
   0.378435,
   0.3743436,
   0.3651223,
   0.3577014,
   0.3619525,
   0.3585518,
   0.3689195,
   0.368086,
   0.3828593,
   0.3637918,
   0.3633648,
   0.3587615,
   0.3805836,
   0.3719794,
   0.3572007,
   0.3748496,
   0.3674777,
   0.3710449,
   0.3677557,
   0.3700555,
   0.3673308,
   0.3680315,
   0.3702824,
   0.3685372,
   0.3754866,
   0.3596205,
   0.3767688,
   0.3590393,
   0.3634644,
   0.3659891,
   0.3638422,
   0.374811,
   0.365638,
   0.3717133,
   0.3565449,
   0.3656023,
   0.3793162,
   0.3861572,
   0.2515839};
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
   Graph_pu50s30_48b7e_gr_train_Asf_std100->SetMinimum(0.2288299);
   Graph_pu50s30_48b7e_gr_train_Asf_std100->SetMaximum(0.5018776);
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
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
