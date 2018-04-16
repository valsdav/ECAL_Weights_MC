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


  //cout << "parsing file: " << file;

  // Want to read from compilation 
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

  // time of 
  double tMax = 4;

  // Create instance of object ComputeWeights
  //   ComputeWeights(int verbosity, bool doFitBaseline, bool doFitTime, int nPulseSamples, int nPrePulseSamples);
  ComputeWeights A(verbosity, true, false, nSamples,3);

  cout << "Reading from the file" << endl; 

  std::vector<std::vector<double> > rows;
  std::string line;

  std::chrono::system_clock::time_point tp = std::chrono::system_clock::now();
  std::chrono::system_clock::duration dtn = tp.time_since_epoch();
  std::stringstream ss;

  ss << "python/" << "output-" << dtn.count() << ".txt"; // Path of output file with current time since epoch 
  std::ofstream output_file(ss.str());

  int count = 0;
  while(std::getline(inFile, line)) {
    count = count +1;
    if (count == -1) {
      // if want whole file checkvariable set to < 0 
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

    // There are 14 numbers on each line, should check this with all data files 
    if(s >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14) {
      std::vector<double> pulseShape;
      // Make sure to be setting the ones to zero that we want to
      // set to zero and taking the data points that we want to be taking 
      pulseShape.push_back(0);
      pulseShape.push_back(0);
      pulseShape.push_back(0);
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

      A.compute(pulseShape,pulseShapeDerivative,tMax);

      if (verbosity > 0) {
        cout << "verbosity_ = " << A.GetVerbosity() << endl;
        cout << "doFitBaseline_ = " << A.GetDoFitBaseline() << endl;
        cout << "doFitTime_ = " << A.GetDoFitTime() << endl;
        cout << "nPulseSamples_ = " << A.GetnPulseSamples() << endl;
        cout << "nPrePulseSamples_ = " << A.GetnPrePulseSamples() << endl;

        cout << "A.getAmpWeight(5) returns: " << A.getAmpWeight(5) << endl;
        cout << "A.getChi2Matrix(5,5) returns: " << A.getChi2Matrix(5,5) << endl;
      }

      // someFunction(row)
      rows.push_back(pulseShape);
   
      //saving pulseshape and the weights to output file
      //file format:
      //[pulsenumber samplept1 samplept2 samplept3 ......samplept10 weightpt1 weightpt2 ...... weightpt10]

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

      // pulseShape.insert(pulseShape.begin(), d2);

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
