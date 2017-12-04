/* 
November 18, 2017
Abe Tishelman-Charny
Test file for extracting weights from sample waveform.
*/
using namespace std; 

#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iterator>
#include <string>
#include <chrono>


#include "ComputeWeights.h"

int main() {

  double chi2 = 0;
  int max = 10; // max number of rows to read

  double tau_min = 0.1;
  double tau_max = 10;
  double tau_int = 0.1; // tau interval

  cout << "tau_min = ";
  cin >> tau_min;
  cout << "tau_min = " << tau_min << endl;

  cout << "tau_max = ";
  cin >> tau_max;
  cout << "tau_max = " << tau_max << endl;

  cout << "tau_int = ";
  cin >> tau_int;
  cout << "tau_int = " << tau_int << endl;

  cout << "Enter number of pulses to read per file: ";
  cin >> max;
  cout << "max pulses = "<< max << endl;  

  for (double k = tau_min; k < tau_max; k += tau_int){

  int verbosity = 0;

  //cout << "Enter 1 or 0 for verbosity: ";
  //cin >> verbosity;
  //cout << "Verbosity = " << verbosity << endl;

  // Import data
  cout << "Enter File Name: ";  
  std::string file = "Data/template_histograms_ECAL_Run2017_runs_304209_304292.txt" ;

  // comment this out for no file input

/*  

  std::string input;
  std::cin >> input;
  cin.ignore(100, '\n');
  getline(cin, input);
  if ( !input.empty() ) {
      std::istringstream istr( input );
      istr >> file;
  }

*/
  
  // stop commentting out here

  // Want to read from compilation 
  // ifstream inFile(argv[1]);


  ifstream inFile;
  inFile.open(file);

  if (!inFile) {
        cout << "Unable to open file ";
        exit(1);  // terminate with error
  }


  // calculate derivative with some method here precisely. 

  vector <double> pulseShapeDerivative;
  pulseShapeDerivative.push_back(0.0);
  pulseShapeDerivative.push_back(0.0);
  pulseShapeDerivative.push_back(0.05);
  pulseShapeDerivative.push_back(0.1);
  pulseShapeDerivative.push_back(0.35);
  pulseShapeDerivative.push_back(0.25);
  pulseShapeDerivative.push_back(-0.25);
  pulseShapeDerivative.push_back(-0.25);
  pulseShapeDerivative.push_back(-0.25);
  pulseShapeDerivative.push_back(0.0);

  int nPulseSamples = 10;  // set to 10 if treating all samples as pulse samples

  // time of peak
  double tMax = 6;  // when nPulseSamples = 10, tMax = 6 with current data

  //double tau = 0.5; // Time constant for correlation matrix simulations

  // Create instance of object ComputeWeights
  // ComputeWeights::ComputeWeights(int verbosity, bool doFitBaseline, bool doFitTime, int nPulseSamples, int nPrePulseSamples) 
  ComputeWeights A(verbosity, false, false, nPulseSamples, 0, k);

  cout << "Reading from the file" << endl; 

  std::vector<std::vector<double> > rows;
  std::string line;

  std::chrono::system_clock::time_point tp = std::chrono::system_clock::now();
  std::chrono::system_clock::duration dtn = tp.time_since_epoch(); // seconds since start of clock to avoid overwriting data.
  std::stringstream ss;

  // Output Path
  ss << "python/" << "data-tau_" << k << "-"<< dtn.count() << ".txt";
  std::ofstream output_file(ss.str());

  int count = 0;
  while(std::getline(inFile, line)) {
    count = count +1;
    if (count == -1) {
      // if want whole file checkvariable set to < 0 
      break;
    }

      if (count%1000 == 0)
        cout << " Reading line " << count << endl;

      if (count > max){
	cout << "Maximum desired lines reached." << endl;
        break;
	}

    std::stringstream s(line);
    double d1;
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

    // There are 14 numbers on each line, should check this with all data files. 
    // Can also set this to read number of elements per line in data files. Maybe. 
    if(s >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14) {
      std::vector<double> pulseShape;

      // 10 Samples from each line

      pulseShape.push_back(0.0);
      pulseShape.push_back(0.0); // Simulating a pedestal of 0.0
      pulseShape.push_back(0.0);
      //pulseShape.push_back(d1);
      //pulseShape.push_back(d2)
      pulseShape.push_back(d3);
      pulseShape.push_back(d4);
      pulseShape.push_back(d5);
      pulseShape.push_back(d6);
      pulseShape.push_back(d7);
      pulseShape.push_back(d8);
      pulseShape.push_back(d9);
      //pulseShape.push_back(d10);
      //pulseShape.push_back(d11);
      //pulseShape.push_back(d12);
      //pulseShape.push_back(d13);
      //pulseShape.push_back(d14);


      // Calculate derivatives with precise method here.

      // Dummy derivative
      vector <double> pulseShapeDerivative;
      pulseShapeDerivative.push_back(0.0);
      pulseShapeDerivative.push_back(0.0);
      pulseShapeDerivative.push_back(0.05);
      pulseShapeDerivative.push_back(0.1);
      pulseShapeDerivative.push_back(0.35);
      pulseShapeDerivative.push_back(0.25);
      pulseShapeDerivative.push_back(-0.25);
      pulseShapeDerivative.push_back(-0.25);
      pulseShapeDerivative.push_back(-0.25);
      pulseShapeDerivative.push_back(0.0);

      // Compute Weights
      A.compute(pulseShape,pulseShapeDerivative,tMax);

      if (verbosity) {
        cout << "verbosity_ = " << A.GetVerbosity() << endl;
        cout << "doFitBaseline_ = " << A.GetDoFitBaseline() << endl;
        cout << "doFitTime_ = " << A.GetDoFitTime() << endl;
        cout << "nPulseSamples_ = " << A.GetnPulseSamples() << endl;
        cout << "nPrePulseSamples_ = " << A.GetnPrePulseSamples() << endl;

        cout << "A.getAmpWeight(5) returns: " << A.getAmpWeight(5) << endl;
        cout << "A.getChi2Matrix(5,5) returns: " << A.getChi2Matrix(5,5) << endl;
      }

      chi2 = 0;

      for (int i = 0; i < (pulseShape.size() / 2); i++){
	for (int j = 0; j < (pulseShape.size()/2); j++){
	  {
          chi2 += A.getChi2Matrix(i,j);
	  }
	}
      }

      cout << "chi2 = " << chi2 << endl;

      // someFunction(row)
      //rows.push_back(pulseShape);
   
      //saving pulseshape and the weights to output file
      //file format:
      //[pulsenumber samplept1 samplept2 samplept3 ......samplept10 weightpt1 weightpt2 ...... weightpt10] by choice of extracting 10 samples from data lines

      // output_file << d2 << "\t"; // pulsenumber. Might be cut off by numerical precision.

      output_file << k << "\t"; // time constant for correlation matrix simulation

      // Samples
      for(int i = 0; i < pulseShape.size(); i ++){

        output_file << pulseShape[i] << "\t";
	
      }

      // Weights
      for(int i = 0; i < pulseShape.size(); i ++){
	if (i == (pulseShape.size() - 1)){
	  output_file << A.getAmpWeight(i); // Make line end with value, not tab
	}
	else{
        output_file << A.getAmpWeight(i) << "\t";
	}
      }

      output_file << "\n"; 

    } // Extracting samples and weights from row

      
  } // Loop while still lines left and desired maximum hasn't been reached
    
  inFile.close();

  } // tau loop

}
