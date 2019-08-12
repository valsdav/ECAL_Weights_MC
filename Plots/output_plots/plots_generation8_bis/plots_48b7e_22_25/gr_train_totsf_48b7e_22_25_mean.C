void gr_train_totsf_48b7e_22_25_mean()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul  3 00:08:40 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-10.69337,-0.4105779,51.59578,0.9558952);
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
   
   Double_t curr_48b7e_gr_train_totsf_mean_fx111[48] = {
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
   Double_t curr_48b7e_gr_train_totsf_mean_fy111[48] = {
   0.3047726,
   0.8133892,
   0.6730739,
   0.4953268,
   0.3416952,
   0.240818,
   0.1719104,
   0.1240952,
   0.08960798,
   0.06824476,
   0.05942389,
   0.05452153,
   0.05330409,
   0.04872741,
   0.04756795,
   0.05073146,
   0.04642428,
   0.04819016,
   0.03717957,
   0.05248899,
   0.04960847,
   0.04961094,
   0.04178588,
   0.04543601,
   0.03966347,
   0.04754659,
   0.04566074,
   0.04408238,
   0.04634656,
   0.04863667,
   0.04441334,
   0.04053324,
   0.04434752,
   0.03774073,
   0.04353235,
   0.04543094,
   0.04666093,
   0.04166907,
   0.04849377,
   0.05015512,
   0.04537196,
   0.04849549,
   0.04963634,
   0.04715821,
   0.04718883,
   0.06720481,
   0.01744721,
   -0.1626641};
   TGraph *graph = new TGraph(48,curr_48b7e_gr_train_totsf_mean_fx111,curr_48b7e_gr_train_totsf_mean_fy111);
   graph->SetName("curr_48b7e_gr_train_totsf_mean");
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
   
   TH1F *Graph_curr_48b7e_gr_train_totsf_mean111 = new TH1F("Graph_curr_48b7e_gr_train_totsf_mean111","Graph",100,0,52.7);
   Graph_curr_48b7e_gr_train_totsf_mean111->SetMinimum(-0.2602694);
   Graph_curr_48b7e_gr_train_totsf_mean111->SetMaximum(0.9109945);
   Graph_curr_48b7e_gr_train_totsf_mean111->SetDirectory(0);
   Graph_curr_48b7e_gr_train_totsf_mean111->SetStats(0);
   Graph_curr_48b7e_gr_train_totsf_mean111->SetLineStyle(0);
   Graph_curr_48b7e_gr_train_totsf_mean111->SetMarkerStyle(20);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetXaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetXaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetXaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetXaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetXaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetXaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetYaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetYaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetYaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetYaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetYaxis()->SetTitleOffset(1.1);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetYaxis()->SetTitleFont(42);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetZaxis()->SetLabelFont(42);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetZaxis()->SetLabelOffset(0.007);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetZaxis()->SetLabelSize(0.05);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetZaxis()->SetTitleSize(0.06);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetZaxis()->SetTitleOffset(1);
   Graph_curr_48b7e_gr_train_totsf_mean111->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_curr_48b7e_gr_train_totsf_mean111);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_48b7e_gr_train_totsf_mean_fx112[48] = {
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
   Double_t pu0_48b7e_gr_train_totsf_mean_fy112[48] = {
   0.2748596,
   0.7549009,
   0.6099474,
   0.4409854,
   0.2981886,
   0.2043349,
   0.136961,
   0.09243759,
   0.06105683,
   0.03926444,
   0.03242481,
   0.02760442,
   0.02554881,
   0.02146018,
   0.02112728,
   0.02326184,
   0.01828511,
   0.02095986,
   0.01156638,
   0.02336284,
   0.02129166,
   0.02241946,
   0.01714573,
   0.01771493,
   0.01338772,
   0.02061202,
   0.01835489,
   0.01814908,
   0.01948469,
   0.02243623,
   0.01617007,
   0.01387386,
   0.01804442,
   0.01150955,
   0.01649575,
   0.01888665,
   0.01959074,
   0.01517809,
   0.02101971,
   0.02390343,
   0.01860321,
   0.01953092,
   0.0224187,
   0.01990472,
   0.02082182,
   0.03787735,
   -0.01275708,
   -0.1820042};
   graph = new TGraph(48,pu0_48b7e_gr_train_totsf_mean_fx112,pu0_48b7e_gr_train_totsf_mean_fy112);
   graph->SetName("pu0_48b7e_gr_train_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_48b7e_gr_train_totsf_mean112 = new TH1F("Graph_pu0_48b7e_gr_train_totsf_mean112","Graph",100,0,52.7);
   Graph_pu0_48b7e_gr_train_totsf_mean112->SetMinimum(-0.2756947);
   Graph_pu0_48b7e_gr_train_totsf_mean112->SetMaximum(0.8485914);
   Graph_pu0_48b7e_gr_train_totsf_mean112->SetDirectory(0);
   Graph_pu0_48b7e_gr_train_totsf_mean112->SetStats(0);
   Graph_pu0_48b7e_gr_train_totsf_mean112->SetLineStyle(0);
   Graph_pu0_48b7e_gr_train_totsf_mean112->SetMarkerStyle(20);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetXaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetXaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetYaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetYaxis()->SetTitleFont(42);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetZaxis()->SetLabelFont(42);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_48b7e_gr_train_totsf_mean112->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_48b7e_gr_train_totsf_mean112);
   
   multigraph->Add(graph,"");
   
   Double_t pu0_newavg_48b7e_gr_train_totsf_mean_fx113[48] = {
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
   Double_t pu0_newavg_48b7e_gr_train_totsf_mean_fy113[48] = {
   0.2679556,
   0.8260154,
   0.6558126,
   0.4636786,
   0.31816,
   0.2287054,
   0.1619582,
   0.1184086,
   0.08858797,
   0.06876705,
   0.06142981,
   0.05553427,
   0.05331703,
   0.04798439,
   0.04702964,
   0.0512009,
   0.04629444,
   0.04740556,
   0.04069667,
   0.05293898,
   0.0484831,
   0.04855996,
   0.04512237,
   0.04496477,
   0.04194158,
   0.04833959,
   0.04625241,
   0.04748454,
   0.04638119,
   0.05119026,
   0.04417102,
   0.04165785,
   0.04550011,
   0.04128179,
   0.04241619,
   0.04675793,
   0.04689814,
   0.04190348,
   0.04851018,
   0.04991601,
   0.04554438,
   0.04651257,
   0.04995768,
   0.04699703,
   0.04922462,
   0.06226356,
   0.01372174,
   -0.1419705};
   graph = new TGraph(48,pu0_newavg_48b7e_gr_train_totsf_mean_fx113,pu0_newavg_48b7e_gr_train_totsf_mean_fy113);
   graph->SetName("pu0_newavg_48b7e_gr_train_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu0_newavg_48b7e_gr_train_totsf_mean113 = new TH1F("Graph_pu0_newavg_48b7e_gr_train_totsf_mean113","Graph",100,0,52.7);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->SetMinimum(-0.2387691);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->SetMaximum(0.922814);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->SetDirectory(0);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->SetStats(0);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->SetLineStyle(0);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->SetMarkerStyle(20);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetXaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetXaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetXaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetXaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetXaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetYaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetYaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetYaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetYaxis()->SetTitleFont(42);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetZaxis()->SetLabelFont(42);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetZaxis()->SetLabelSize(0.05);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetZaxis()->SetTitleSize(0.06);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetZaxis()->SetTitleOffset(1);
   Graph_pu0_newavg_48b7e_gr_train_totsf_mean113->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu0_newavg_48b7e_gr_train_totsf_mean113);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s2_48b7e_gr_train_totsf_mean_fx114[48] = {
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
   Double_t pu50s2_48b7e_gr_train_totsf_mean_fy114[48] = {
   0.3260541,
   0.8366394,
   0.6799962,
   0.495659,
   0.3438435,
   0.2493724,
   0.1834174,
   0.1383194,
   0.1073691,
   0.08884938,
   0.08312632,
   0.07485273,
   0.07278106,
   0.0685667,
   0.06801326,
   0.07192055,
   0.0667427,
   0.06737169,
   0.06046768,
   0.07080144,
   0.06800774,
   0.06793888,
   0.06449727,
   0.06450502,
   0.06253118,
   0.06868517,
   0.06582237,
   0.06715504,
   0.0675977,
   0.06955508,
   0.06398322,
   0.06272425,
   0.06600031,
   0.06038359,
   0.06385317,
   0.06626199,
   0.06481199,
   0.05994998,
   0.06812052,
   0.06842482,
   0.06511644,
   0.06792408,
   0.06883807,
   0.06857619,
   0.06795749,
   0.08331218,
   0.03757866,
   -0.1286904};
   graph = new TGraph(48,pu50s2_48b7e_gr_train_totsf_mean_fx114,pu50s2_48b7e_gr_train_totsf_mean_fy114);
   graph->SetName("pu50s2_48b7e_gr_train_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s2_48b7e_gr_train_totsf_mean114 = new TH1F("Graph_pu50s2_48b7e_gr_train_totsf_mean114","Graph",100,0,52.7);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->SetMinimum(-0.2252234);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->SetMaximum(0.9331724);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->SetDirectory(0);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->SetStats(0);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->SetLineStyle(0);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->SetMarkerStyle(20);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetXaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetXaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetYaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetYaxis()->SetTitleFont(42);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetZaxis()->SetLabelFont(42);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s2_48b7e_gr_train_totsf_mean114->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s2_48b7e_gr_train_totsf_mean114);
   
   multigraph->Add(graph,"");
   
   Double_t pu50s30_48b7e_gr_train_totsf_mean_fx115[48] = {
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
   Double_t pu50s30_48b7e_gr_train_totsf_mean_fy115[48] = {
   0.2785958,
   0.7620866,
   0.6162469,
   0.4462404,
   0.3027803,
   0.2087161,
   0.1415488,
   0.0967607,
   0.06525289,
   0.04303087,
   0.03634509,
   0.03096574,
   0.02900304,
   0.02474486,
   0.02483704,
   0.02674085,
   0.02179367,
   0.02458971,
   0.01514695,
   0.02734354,
   0.02453848,
   0.02638953,
   0.02035961,
   0.02111607,
   0.0171868,
   0.02450978,
   0.02211797,
   0.02168705,
   0.02332296,
   0.02633239,
   0.0201737,
   0.0176769,
   0.02156682,
   0.01558261,
   0.02037866,
   0.02309767,
   0.02273136,
   0.01858022,
   0.02476428,
   0.02744673,
   0.02176739,
   0.02336019,
   0.02609745,
   0.0240008,
   0.02461261,
   0.04148627,
   -0.0090176,
   -0.178607};
   graph = new TGraph(48,pu50s30_48b7e_gr_train_totsf_mean_fx115,pu50s30_48b7e_gr_train_totsf_mean_fy115);
   graph->SetName("pu50s30_48b7e_gr_train_totsf_mean");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_pu50s30_48b7e_gr_train_totsf_mean115 = new TH1F("Graph_pu50s30_48b7e_gr_train_totsf_mean115","Graph",100,0,52.7);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->SetMinimum(-0.2726763);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->SetMaximum(0.856156);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->SetDirectory(0);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->SetStats(0);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->SetLineStyle(0);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->SetMarkerStyle(20);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetXaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetXaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetXaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetXaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetXaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetXaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetYaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetYaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetYaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetYaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetYaxis()->SetTitleOffset(1.1);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetYaxis()->SetTitleFont(42);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetZaxis()->SetLabelFont(42);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetZaxis()->SetLabelOffset(0.007);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetZaxis()->SetLabelSize(0.05);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetZaxis()->SetTitleSize(0.06);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetZaxis()->SetTitleOffset(1);
   Graph_pu50s30_48b7e_gr_train_totsf_mean115->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_pu50s30_48b7e_gr_train_totsf_mean115);
   
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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
