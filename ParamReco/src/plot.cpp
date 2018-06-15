// Abe Tishelman-Charny
// 24 May 2018
//
// The purpose of this function is to plot histograms

//#include "fill_histograms.cpp" 

void plot(double zmin, double zmax)
{
/*
	  gStyle->SetOptStat(0); // no stats box

	  TCanvas *c1 = new TCanvas("c1","c1",800,600);

	  c1->cd();
	  EB->Draw();
	  c1->Update();
	  EB->GetZaxis()->SetRangeUser(zmin,zmax);
	  EB->GetXaxis()->SetTitle("iEta");
	  EB->GetXaxis()->SetTitleOffset(1.1);
	  EB->GetYaxis()->SetTitle("iPhi");
	  EB->GetYaxis()->SetTitleOffset(1.2);
	  //c1->SetBatch(kFALSE);

	  EB->Draw("COLZ");


	  TCanvas *c2 = new TCanvas("c2","c2",800,600);

	  c2->cd();
	  EE1->Draw();
	  c2->Update();
	  EE1->GetZaxis()->SetRangeUser(zmin,zmax);
	  EE1->GetXaxis()->SetTitle("ix");
	  EE1->GetXaxis()->SetTitleOffset(1.1);
	  EE1->GetYaxis()->SetTitle("iy");
	  EE1->GetYaxis()->SetTitleOffset(1.2);
	  //c1->SetBatch(kFALSE);

	  EE1->Draw("COLZ");


	  TCanvas *c3 = new TCanvas("c3","c3",800,600);
	  c3->cd();
	  EE2->Draw();
	  c3->Update();
	  EE2->GetZaxis()->SetRangeUser(zmin,zmax);
	  //c1->SetBatch(kFALSE);

	  EE2->Draw("COLZ");

*/
	  // */

	  //c2->SetBatch(kFALSE);

	  // Save plot as png and root files.
	  // I'm sure there's a way to add two canvases to single root file, for now saving separately.

	   /*

	  int ts = -7;

	  ostringstream oss1, oss2, oss3, oss4;
	  oss1 << "bin/Canvas1_" << result << "ts_" << ts << ".pdf";
	  oss2 << "bin/Canvas1_" << result << "ts_" << ts << ".root"; 
	  oss3 << "bin/Canvas2_" << result << "ts_" << ts << ".pdf";
	  oss4 << "bin/Canvas2_" << result << "ts_" << ts << ".root"; 

	  TString plot_title1 = oss1.str();
	  TString plot_title2 = oss2.str();
	  TString plot_title3 = oss3.str();
	  TString plot_title4 = oss4.str();

	  c1->SaveAs(plot_title1);
	  c1->SaveAs(plot_title2);
	  c2->SaveAs(plot_title3);
	  c2->SaveAs(plot_title4);

   */

}
