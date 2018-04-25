// Abe Tishelman-Charny 
// 9 April 2018

using namespace std;

#include <string>  
#include <iterator>

void Histo_Plot() {  // Same as file name

  // Create Histogram
  int bins = 170;
  int min = 0;
  int max = 2;

  TH1F *h1 = new TH1F("h1","Alpha",bins,min,max);

  // Open File
  //TString File("XTAL_Info.txt");
  TString File("crystal_parameters.txt");

  ifstream inFile; // Input File stream class 
  inFile.open(File);

  if (!inFile) {
    cout << "Unable to open file ";
    exit(1); // terminate with error
  }

  ifstream inFile; // Input File stream class 
  inFile.open(File);
  
  int max_rows = 5;
  string line;

  int count = -1;
    while(getline(inFile, line)) { // do while there's a line to read
      count = count +1; // start on zeroeth line 
      if (count == -1) {
      // if want whole file checkvariable set to < 0 
      break;
    }

      cout << " Reading line " << count << endl;

      //bool a = getline(inFile, line);
      //cout << "getline(inFile, line) = " << a << "\n" << endl;

      if (count >= max_rows){
	cout << "Maximum desired lines reached." << endl;
        break;
	}

    stringstream s(line); // stringstream 's' operates on string 'line'
    double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15;

    // '>>' is an extraction operator, apply to input stream 

    //bool a = s >> d1 >> d2 >> d3 >> d4 >> d5 >> d6; // I think adding things like this messes up stream reading
    //cout << "s >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 = " << a << "\n" << endl;

    // if 's' extracts separate objects d1, d2, ... All double type!!! This is very powerful. Basically, if the line is composed of certain type variables. 
    // This wasn't working at first because if statement was only if all extracted objects were doubles, when in fact the 7th is not a double.

    if(s >> d1 >> d2 >> d3 >> d4 >> d5){ //>> d7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14 >> d15) {

      /*
      cout << "d1 = " << d1 << endl;
      cout << "d2 = " << d2 << endl;
      cout << "d3 = " << d3 << endl;
      cout << "d4 = " << d4 << endl;
      cout << "d5 = " << d5 << endl;
      cout << "d6 = " << d6 << endl;
      */
 
    cout << "d4 = " << d4 << endl;
    h1->Fill(d4);

    } 

      
  } // Loop while still lines left and desired maximum hasn't been reached

  inFile.close();

  //double maxval = 0;

  /*for (int i = 0; i < bins; i++){
    if(h1->GetBinContent(i) > maxval){
      maxval = h1->GetBinContent(i);
    }
  }
  

  // Normalize and Plot
  double param = 1 / maxval;
  h1->Scale(param);
  
  */  

  h1->Draw();

}
