void plot_alphabeta()
{

	  /*

	  // Make a function for this....
	  // For plotting function and samples:

	  double xtimes[7], ysamples[7];

	  for (int k = 3; k < 10; k++){

	    ysamples[k-3] = samples[k+1];
	    cout << "ysamples[ " << k-3 << " ] = " << ysamples[k-3] << "\n" << endl;
	    }

	  xtimes[0] = 75.;

	  for (int k = 4; k < 10; k++){

		xtimes[k-3] = xtimes[k-4] + 25;
		cout << "xtimes[ " << k-3 << " ] = " << xtimes[k-3] << "\n" << endl;
	 	}
	    
	  TCanvas *cc = new TCanvas("cc","cc",800,600);
	  //cc->Update();
	  TGraph *g1 = new TGraph(8,xtimes,ysamples);
 	  g1->GetXaxis()->SetTitle("Time (ns)");
  	  g1->GetYaxis()->SetTitle("ADC");
	  g1->GetYaxis()->SetTitleOffset(1.3);
	  g1->GetXaxis()->SetRangeUser(67,250.);
  	  g1->SetTitle("Alpha Beta Waveform and Samples");
	  g1->SetMarkerColor(2);
  	  g1->SetMarkerStyle(8);
  	  g1->SetMarkerSize(2);
	  //cc->Modified();
	  g1->Draw("AP");
	  cc->Update();

	  TLine *vertline = new TLine(t_0 + time_shift,0,t_0 + time_shift,A); // xmin, ymin, xmax, ymax 
  	  vertline->SetLineColor(2);
  	  vertline->SetLineStyle(9);
  	  vertline->Draw();
	  function_alphabeta->SetLineColor(1);
	  function_alphabeta->Draw("SAME");

	  cc->SaveAs("Waveform.pdf");

	  */  



}
