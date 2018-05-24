// Abe Tishelman-Charny
// 24 May 2018
//
// The purpose of this function is to plot histograms

void plot(double zmin, double zmax)
{

	  //gStyle->SetOptStat(0); // no stats box

	  TCanvas *c1 = new TCanvas("c1","c1",800,600);

	  c1->cd();
	  EB->Draw();
	  c1->Update();
	  EB->GetZaxis()->SetRangeUser(zmin,zmax);
	  //c1->SetBatch(kFALSE);

	  EB->Draw("COLZ");

/*

	  //amps1->Draw("COLZ");
	  //amps1->GetZaxis()->SetLabelSize(0.02);
	  //gPad->Update();
	  //c1->Update();
	  //TPaveStats *st = (TPaveStats*)amps1->FindObject("stats");
	  //st->SetX1NDC(3);
	  //st->SetX2NDC(3);	
	  //st->SetY1NDC(3);
	  //st->SetY2NDC(3);
	  //amps1->SetStats(0);
	  //c1->Modified();

	  //cout << "min = " << min << "\n" << endl;
	  //cout << "max = " << max << "\n" << endl;

	  //----
*/

/*
	  TCanvas *c2 = new TCanvas("c2","c2",800,600);

	  c2->cd();
	  EB->Draw();
	  c2->Update();
	  EB->GetZaxis()->SetRangeUser(zmin,zmax);
	  //c1->SetBatch(kFALSE);

	  EB->Draw("COLZ");
*/

/*
	  TCanvas *c3 = new TCanvas("c3","c3",800,600);
	  c3->cd();
	  EE2->Draw();
	  c3->Update();
	  EE2->GetZaxis()->SetRangeUser(zmin,zmax);
	  //c1->SetBatch(kFALSE);

	  EE2->Draw("COLZ");
*/

	  //c2->cd();
	  //ratios2->Draw();
	  //c2->Update();

	  //ratios2->GetZaxis()->SetRangeUser(lower,upper);
	 
	  //ratios2->Draw("COLZ");
	  //amps2->GetZaxis()->SetLabelSize(0.02);
	  //c2->Modified();

	  // */

	  //c2->SetBatch(kFALSE);

	  // Save plot as png and root files.
	  // I'm sure there's a way to add two canvases to single root file, for now saving separately.

	   /*

	  int time_shift_ = -7;

	  ostringstream oss1, oss2, oss3, oss4;
	  oss1 << "bin/Canvas1_" << result << "ts_" << time_shift_ << ".pdf";
	  oss2 << "bin/Canvas1_" << result << "ts_" << time_shift_ << ".root"; 
	  oss3 << "bin/Canvas2_" << result << "ts_" << time_shift_ << ".pdf";
	  oss4 << "bin/Canvas2_" << result << "ts_" << time_shift_ << ".root"; 

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
