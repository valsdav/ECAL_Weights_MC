void gr_train_48b7e_18_21_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:04:01 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-10.69337,-0.2011463,51.59578,0.3037305);
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
   0.0425716,
   0.06028251,
   0.05264707,
   0.04040771,
   0.02891816,
   0.01970224,
   0.01328388,
   0.008665154,
   0.005857639,
   0.00418975,
   0.002976058,
   0.002253449,
   0.00183763,
   0.00175027,
   0.001722994,
   0.001499766,
   0.001579891,
   0.001430724,
   0.001638565,
   0.001435125,
   0.001316336,
   0.001798554,
   0.001457302,
   0.001693355,
   0.001514956,
   0.001253162,
   0.001214845,
   0.001599294,
   0.00152747,
   0.001571547,
   0.001217135,
   0.001466275,
   0.001568272,
   0.001380912,
   0.001068752,
   0.001500028,
   0.001187643,
   0.001114625,
   0.001572985,
   0.001595436,
   0.001413757,
   0.001207796,
   0.001575311,
   0.001256286,
   0.001416781,
   0.0009531452,
   -0.006377846,
   -0.02344853};
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
   Graph_curr_48b7e_gr_train_mean81->SetMinimum(-0.03182164);
   Graph_curr_48b7e_gr_train_mean81->SetMaximum(0.06865561);
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
   0.02855585,
   0.04643629,
   0.03920416,
   0.02702308,
   0.01573022,
   0.006647867,
   0.0003458032,
   -0.004294593,
   -0.006990949,
   -0.00864395,
   -0.009854741,
   -0.01053247,
   -0.01099657,
   -0.01107706,
   -0.01115385,
   -0.01124537,
   -0.01131878,
   -0.01134667,
   -0.01125643,
   -0.01139132,
   -0.01151755,
   -0.01098687,
   -0.01140444,
   -0.01115614,
   -0.01129003,
   -0.01152093,
   -0.01155757,
   -0.01120212,
   -0.01124376,
   -0.0111688,
   -0.01162738,
   -0.01134517,
   -0.01125315,
   -0.01146704,
   -0.01173693,
   -0.01134714,
   -0.01163627,
   -0.01170186,
   -0.0112168,
   -0.01126963,
   -0.01142987,
   -0.01161031,
   -0.01118016,
   -0.01154023,
   -0.01138959,
   -0.01182908,
   -0.01885649,
   -0.03551235};
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
   Graph_pu0_48b7e_gr_train_mean82->SetMinimum(-0.04370721);
   Graph_pu0_48b7e_gr_train_mean82->SetMaximum(0.05463115);
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
   0.06308142,
   0.0843899,
   0.07791705,
   0.06545124,
   0.05342127,
   0.04403243,
   0.03706807,
   0.03251861,
   0.02948208,
   0.02777786,
   0.02654337,
   0.0258872,
   0.02547511,
   0.0252586,
   0.02530387,
   0.02496814,
   0.02508488,
   0.02492377,
   0.02514644,
   0.02505178,
   0.02481469,
   0.02534547,
   0.02501804,
   0.02522882,
   0.02500813,
   0.02481468,
   0.02474561,
   0.0251862,
   0.02508353,
   0.02513427,
   0.02468126,
   0.02508561,
   0.02505378,
   0.02489868,
   0.02465678,
   0.0250473,
   0.02477591,
   0.02474902,
   0.02512671,
   0.0250067,
   0.02488683,
   0.02465031,
   0.02509611,
   0.02480105,
   0.02491123,
   0.02460539,
   0.01820581,
   0.001790975};
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
   Graph_pu0_newavg_48b7e_gr_train_mean83->SetMinimum(0.001611878);
   Graph_pu0_newavg_48b7e_gr_train_mean83->SetMaximum(0.0926498);
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
   0.05814727,
   0.07687058,
   0.06951726,
   0.05707159,
   0.04538156,
   0.03617803,
   0.02950352,
   0.02492914,
   0.02201471,
   0.02032383,
   0.01913194,
   0.01846037,
   0.01803118,
   0.01792364,
   0.017852,
   0.01767458,
   0.01776658,
   0.01759803,
   0.01776375,
   0.01767907,
   0.01746113,
   0.01797777,
   0.01763569,
   0.01788081,
   0.01765542,
   0.01736759,
   0.0173976,
   0.01779742,
   0.017713,
   0.01775504,
   0.01738839,
   0.01769539,
   0.01767378,
   0.01752568,
   0.01725988,
   0.01766256,
   0.01735614,
   0.01726583,
   0.01774922,
   0.01769217,
   0.01750843,
   0.01731,
   0.01775199,
   0.01742502,
   0.01753876,
   0.01718358,
   0.01018506,
   -0.006865326};
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
   Graph_pu50s2_48b7e_gr_train_mean84->SetMinimum(-0.01523892);
   Graph_pu50s2_48b7e_gr_train_mean84->SetMaximum(0.08524417);
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
   0.03096544,
   0.04892577,
   0.04169019,
   0.02951656,
   0.0181612,
   0.009075138,
   0.002706115,
   -0.001909059,
   -0.004615197,
   -0.006284239,
   -0.007490248,
   -0.008188983,
   -0.008660363,
   -0.008720635,
   -0.008783049,
   -0.008898501,
   -0.008925825,
   -0.00898404,
   -0.008878221,
   -0.009021989,
   -0.009142842,
   -0.008659838,
   -0.009042588,
   -0.008782181,
   -0.008928162,
   -0.009149802,
   -0.009227262,
   -0.008852908,
   -0.008885335,
   -0.008823563,
   -0.009264653,
   -0.00898062,
   -0.008899841,
   -0.009093744,
   -0.009371453,
   -0.008988213,
   -0.009295225,
   -0.009317199,
   -0.008860257,
   -0.008895051,
   -0.009064266,
   -0.009272769,
   -0.008828829,
   -0.009174472,
   -0.009050195,
   -0.009481489,
   -0.01651104,
   -0.03321224};
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
   Graph_pu50s30_48b7e_gr_train_mean85->SetMinimum(-0.04142604);
   Graph_pu50s30_48b7e_gr_train_mean85->SetMaximum(0.05713957);
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
   
   TLegend *leg = new TLegend(0.67,0.5,0.95,0.93,NULL,"brNDC");
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
   entry=leg->AddEntry("pu50s2_48b7e_gr_train_mean","#splitline{PU optimized}{(PU=50, ET=2GeV)}","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pu50s30_48b7e_gr_train_mean","#splitline{PU optimized}{(PU=50, ET=30GeV)}","lp");

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
