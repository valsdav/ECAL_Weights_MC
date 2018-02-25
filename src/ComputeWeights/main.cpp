/* 

 The purpose of this file is to run computeweights and produce desired outcomes
 Abe Tishelman-Charny 
 2/24/18

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

  // Choose data file
  cout << "Enter File Name: ";  
  std::string file = "Data/template_histograms_ECAL_Run2017_runs_304209_304292.txt" ;

  // template_histograms_ECAL_Run2017_runs_304209_304292.txt has row format:
  // (1) (ID Number) (sample 1) (sample 2) ... 

  // For manual file input

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

  // For reading file from command line
  // ifstream inFile(argv[1]);

  ifstream inFile;
  inFile.open(file);

  if (!inFile) {
        cout << "Unable to open file ";
        exit(1);  // terminate with error
  }

  int verbosity = 0;

  cout << "Enter 1 or 0 for verbosity: ";
  cin >> verbosity;
  cout << "Verbosity = " << verbosity << endl;

  // dummy pulse shape derivative
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

  int nSamples = 10; 

  int max = 0; // max number of rows to read

  cout << "Enter number of pulses to read per file: ";
  cin >> max;
  cout << "max pulses = "<< max << endl;

  // time of peak
  double tMax = 4;

  // Create instance of object ComputeWeights

  // (int verbosity, bool doFitBaseline, bool doFitTime, int nPulseSamples, int nPrePulseSamples)
  // ComputeWeights A(verbosity, true, false, nSamples,3);
  ComputeWeights A(verbosity, false, false, nSamples,3);

  cout << "Reading from the file" << endl; 

  std::vector<std::vector<double> > rows;
  std::string line;

  std::chrono::system_clock::time_point tp = std::chrono::system_clock::now();
  std::chrono::system_clock::duration dtn = tp.time_since_epoch();
  std::stringstream ss;

  ss << "python/" << "output-" << dtn.count() << ".txt"; // Path of output file with current time since epoch 
  std::ofstream output_file(ss.str());

  int count = 1;
  while(std::getline(inFile, line)) {
    count = count +1;
    if (count == -1) {
      // if want whole file checkvariable set to < 0 
      break;
    }

    std::stringstream s(line);
    double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14;


    // Too add custom pedestal for closure tests

    double a = 0, b = 0, c = 0;

// /*

  cout << "First pedestal value: ";
  cin >> a;
  cout << "First pedestal = "<< a << endl;

  cout << "Second pedestal value: ";
  cin >> b;
  cout << "Second pedestal = "<< b << endl;

  cout << "Third pedestal value: ";
  cin >> c;
  cout << "Third pedestal = "<< c << endl;

// */


    // There are 14 numbers on each line, should check this with all data files 
    if(s >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14) {
      std::vector<double> pulseShape;
      // Make sure to be setting the ones to zero that we want to
      // set to zero and taking the data points that we want to be taking 
      pulseShape.push_back(a);
      pulseShape.push_back(b);
      pulseShape.push_back(c);
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
      // pulseShape.push_back(d11);
      // pulseShape.push_back(d12);
      // pulseShape.push_back(d13);
      // pulseShape.push_back(d14);

      A.compute(pulseShape,pulseShapeDerivative,tMax); // Run member function

      if (verbosity > 0) {
        cout << "verbosity_ = " << A.GetVerbosity() << endl;
        cout << "doFitBaseline_ = " << A.GetDoFitBaseline() << endl;
        cout << "doFitTime_ = " << A.GetDoFitTime() << endl;
        cout << "nPulseSamples_ = " << A.GetnPulseSamples() << endl;
        cout << "nPrePulseSamples_ = " << A.GetnPrePulseSamples() << endl;

        cout << "A.getAmpWeight(5) returns: " << A.getAmpWeight(5) << endl;
        cout << "A.getChi2Matrix(5,5) returns: " << A.getChi2Matrix(5,5) << endl;
      }

      // Calculating ampltiude

      double amplitude = 0;
      for ( int i = 0; i < 10; i++) {
	cout << "A.getAmpWeight(" << i << ") = " << A.getAmpWeight(i) << endl; 
	cout << "pulseShape[" << i << "] = " << pulseShape[i] << endl; 
	amplitude += A.getAmpWeight(i)*pulseShape[i];
	}
      cout << "Ampltiude = " << amplitude << endl; 

      double factor = 0;

      cout << "Choose factor to multiply sample vector by:" ;
      cin >> factor;
      cout << "factor = "<< factor << endl;

      amplitude = 0;

      for ( int i = 0; i < 10; i++) {
	cout << "pulseShape[" << i << "] = " << pulseShape[i] << endl; 
	pulseShape[i] *= factor;
	cout << "pulseShape[" << i << "] = " << pulseShape[i] << endl; 
	}

      for ( int i = 0; i < 10; i++) {
	cout << "A.getAmpWeight(" << i << ") = " << A.getAmpWeight(i) << endl; 
	cout << "pulseShape[" << i << "] = " << pulseShape[i] << endl; 
	amplitude += A.getAmpWeight(i)*pulseShape[i];
	}

      cout << "Ampltiude after scaling by " << factor << " = " << amplitude << endl; 

      // Saving data 

      rows.push_back(pulseShape);
  
      output_file << d2 << "\t";

      for(int i = 0; i < pulseShape.size(); i ++){

        output_file << pulseShape[i] << "\t";
	
      }
      for(int i = 0; i < pulseShape.size(); i ++){
	if (i == (pulseShape.size() - 1)){
	  output_file << A.getAmpWeight(i);
	}
	else{
        output_file << A.getAmpWeight(i) << "\t";
	}
      }

      output_file << "\n";

      if (count%1000 ==0)
        cout << " Line = " << count << endl;

      if (count > max){
	cout << "All lines read." << endl;
        break;
	}

    } // Looking at Row

      
  } // While still rows left
    
  inFile.close();

}
