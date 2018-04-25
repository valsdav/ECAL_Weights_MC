// Abe Tishelman-Charny 
// March 26th, 2018 
// 
// The purpose of this Macro is to produce random values to reconstruct amplitude of with weights algorithm.

void TestPlot() { 

  using namespace std;

  #include <string>  

  int bins = 170;
  int min = -85;
  int max = 85;

  TH1F *h1 = new TH1F("h1","test1",bins,min,max);

  TString File("XTAL_Info.txt");

  ifstream inFile; // Input File stream class 
  inFile.open(File);

  string line;

  int max_lines = 1005;

int count = -1;
  while(getline(inFile, line)) { // std::getline
    count = count +1; // start on zeroeth line 
    if (count == -1) {
      // if want whole file checkvariable set to < 0 
      break;
    }

      if (count%1000 == 0)
        cout << " Reading line " << count << endl;

      if (count >= max_lines){
	cout << "Maximum desired lines reached." << endl;
        break;
	}

    std::stringstream s(line);
    double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15;
/*
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
*/

// Can put custom pedestal here if desired. Pull from Master.

    // There are 14 numbers on each line, should check this with all data files. 
    // Can also set this to read number of elements per line in data files. Maybe. 
    if(s >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14 >> d15) {


      cout << "d1 = " << d1 << "\n" << endl;


}


}



  inFile.close();


  h1->Draw();

}
