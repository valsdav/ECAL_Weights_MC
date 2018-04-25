// 
// Abe Tishelman-Charny 
// 13 April 2018
//
// The purpose of this macro is to plot reconstructed amplitudes of 
// ECAL XTAL's using alpha beta function.
//

void setrange(){
 
  double minxval1 = 1000., minxval2 = 1000.;
  double maxxval1 = 0.0, maxxval2 = 0.0;

  // EB

  for (int k = 0; k < bins; k++){
    if( ( ( min + k*(max - min)/(bins) ) < minxval1) && (h1->GetBinContent(k) > 2.) ){ // >2 to avoid outliers setting range
      //cout << " h1->GetBinContent( " << k << " ) = " << h1->GetBinContent(k) << "\n" << endl;
      minxval1 = min + k*(max - min)/(bins);
      //cout << "Current min = " << minxval1 << "\n" << endl;
    }

    if( ( (min + (k + 1)*(max - min)/(bins)) > maxxval1 ) && (h1->GetBinContent(k) > 2) ){
      maxxval1 = min + (k + 1)*(max - min)/(bins);
      //cout << "Current max = " << maxxval1 << "\n" << endl;
    }

  }

  // EE

  for (int j = 0; j < bins; j++){

    if( ( (min + j*(max - min)/(bins) ) < minxval2) && (h2->GetBinContent(j) > 2) ){
      minxval2 = min + j*(max - min)/(bins);
    }

    if( ( (min + (j + 1)*(max - min)/(bins)) > maxxval2 ) && (h1->GetBinContent(k) > 2 ) ){
      maxxval2 = min + (j + 1)*(max - min)/(bins);
    }

  }

  //cout << "minxval1 = " << minxval1 << "\n" << endl;
  //cout << "maxxval1 = " << maxxval1 << "\n" << endl;

  //cout << "minxval2 = " << minxval2 << "\n" << endl;
  //cout << "maxxval2 = " << maxxval2 << "\n" << endl;

  //h1->GetXaxis()->SetRangeUser(0.75,1.3);
  //h2->GetXaxis()->SetRangeUser(0.9,1.05);

}
