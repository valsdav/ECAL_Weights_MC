// Abe Tishleman-Charny

using namespace std;

#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iterator>
#include <string>
#include <chrono>
#include <cmath>
#include <tuple>

int main()
{
	int initial_skip = 0; // Used for testing

  	// Open XTAL_Params and Weights files

	stringstream eta_ss;
	eta_ss << "data/Eta_Ordered_DOF.txt";
	string eta_path = eta_ss.str();
	ifstream inEtaFile;
	inEtaFile.open(eta_path);

  	if (!inEtaFile) {
  	  cout << "Unable to open Eta file\n";
  	  exit(1); // terminate with error
 	 }

	string eta_line;

	// Read XTAL_Params, weights lines 

	bool in_EE = true;
	bool in_EB = false;

	while(getline(inEtaFile, eta_line)){

		stringstream se(eta_line);

		double d1, d2, d3, d4, d5, d6; // d6 is absolute difference between current and last 

		if (se >> d1 >> d2 >> d3 >> d4 >> d5 >> d6){

			/*if (d6 > 0.015){
				cout.precision(17);
				cout << "d1 = " << d1 << endl;	
				cout.precision(5);
				cout << "d5 = " << d5 << endl;	
				cout << "d6 = " << d6 << endl;
			}*/
	
			if ( (d1 < 870000000) && (in_EB == false) ){
			
				in_EE = false;
				in_EB = true;
				cout.precision(17);
				cout << "First EB ID: " << d1 << endl;
				cout.precision(5);
				cout << "eta: " << d5 << endl;

			}

			if ( (d1 > 870000000) && (in_EB == true) ){
			
				in_EE = true;
				in_EB = false;
				cout.precision(17);
				cout << "First EE after EB ID: " << d1 << endl;
				cout.precision(5);
				cout << "eta: " << d5 << endl;

			}


		}

	}
	  
      inEtaFile.close();
}
