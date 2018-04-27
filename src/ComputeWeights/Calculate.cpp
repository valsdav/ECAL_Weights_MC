/* 
November 18, 2017
Abe Tishelman-Charny
Megan Stark

File for extracting weights for reconstruction of pulse from 10 data points .
Reads text file wtih 14 tab delineated data points.
Will prompt user for file name.
Other files required: ComputeWeights.cpp, ComputeWeights.h and CLHEP dir. 
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
#include <stdlib.h> 
#include <cmath>    

#include "ComputeWeights.h" 

int main() {

  //user prompt for file name
  cout << "Enter File Name: ";  
  std::string file = "/Users/meganstark/Computation*/PHYS7321_Project/output/new14.csv" ;
 /*
   comment this out for no file input and will run file listed adove
 
  std::string input;
  std::cin >> input;
  cin.ignore(100, '\n');
  getline(cin, input);
  if ( !input.empty() ) {
      std::istringstream istr( input );
      istr >> file;
  }
  
   stop commentting out here
*/
  cout << "parsing file: " << file;

  ifstream inFile;
  inFile.open(file);

  if (!inFile) {
        cout << "Unable to open file ";
        exit(1);  // terminate with error
  }

  int verbosity = 0;
  // verbosity == 0 does not print outputs
  // verbosity == 1 prints all outputs from this file and ComputeWeights.cpp
  cout << "Enter 1 or 0 for verbosity: ";
  cin >> verbosity;
  cout << "Verbosity = " << verbosity << endl;

  int nSamples = 10; 
  int nPrePulseSamples = 3; 
  double tMax = 4;


  // Create instance of object ComputeWeights
  // ComputeWeights(verbosity,doFitBaseline, doFitTime, nPulseSamples, nPrePulseSamples)
  ComputeWeights A(verbosity, true, false, nSamples-nPrePulseSamples,nPrePulseSamples);


  cout << "Reading from the file" << endl; 

  std::vector<std::vector<double> > rows;
  std::string line;

  std::chrono::system_clock::time_point tp = std::chrono::system_clock::now();
  std::chrono::system_clock::duration dtn = tp.time_since_epoch();
  std::stringstream ss;
  //output file name 
  ss << "output/" << "need_2305814_305814" << ".txt";
  //ss << "output/" << "norm_template_histograms_ECAL_Run2016_runs_271983_272818" << dtn.count() << ".txt";
  std::ofstream output_file(ss.str());

  int count = 0;
  while(std::getline(inFile, line)) {
    count = count +1;
    //cout << count << endl;
    if (count == 2) {
      // if want whole file checkvariable set to < 0 
      // i.e. if want 10 lines read set line 79 to "if(count == 10){"
      break;
    }



    //reading the 14 columns from the data files
    std::stringstream s(line);
    double d1; // always 1
    double d2; //pulse number 
    double d3; //start of pulse shape data points
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

    // There are 14 numbers on each line
    if(s >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10 >> d11 >> d12 >> d13 >> d14) {
      std::vector<double> pulseShape;
      // setting first three data points to zero since this is the pedastal counts 
      // want a total of 10 counts so taking next 7 counts 
      //pulseShape.push_back(0);
      //pulseShape.push_back(0);
      //pulseShape.push_back(0.0);
    pulseShape.push_back(0.0015);
   pulseShape.push_back(0.0018);
   pulseShape.push_back(0.0271319 );
   pulseShape.push_back(0.290197 );
   pulseShape.push_back(0.774628 );
   pulseShape.push_back(1.00000 ); 
pulseShape.push_back(0.824822 );
   pulseShape.push_back(0.501923 );
   pulseShape.push_back(0.245093 );
   pulseShape.push_back(0.101305);




      //pulseShape.push_back(d11);
      // pulseShape.push_back(d12);
      // pulseShape.push_back(d13);
      // pulseShape.push_back(d14);

    // determining pulse shape derivative
      vector <double> pulseShapeDerivative;
        
      pulseShapeDerivative.push_back(0.0);
      pulseShapeDerivative.push_back(0.0);
      pulseShapeDerivative.push_back(0.0);
      pulseShapeDerivative.push_back(0.0);
      pulseShapeDerivative.push_back(0.0);
      pulseShapeDerivative.push_back(0.0);
      pulseShapeDerivative.push_back(0.0);
      pulseShapeDerivative.push_back(0.0);
      pulseShapeDerivative.push_back(0.0);
      pulseShapeDerivative.push_back(0.0);
      
      //finding dertivative by taking the changes in the y dividing by the changine in x. 
      // right now just plotting vs. data pt number so no change in x 
      // divide by 25 ns is converting to seconds 
      pulseShapeDerivative[0];
      for(int i = 1; i < pulseShape.size() ; i ++){
        //cout << pulseShapeDerivative[i] << endl;
        //cout << pulseShape[i] << endl;
        pulseShapeDerivative[i] =  (pulseShape[i-1] - pulseShape[i]);
        //cout << pulseShapeDerivative[i] << endl;

      
        // cout << " pulseShapeDerivative = " << pulseShapeDerivative[i] << endl;
        }
      for(int i = 0; i < pulseShape.size() ; i ++){
         cout << " pulseShape = " << pulseShape[i] << endl;
        }

      A.compute(pulseShape,pulseShapeDerivative,tMax);

      //pulseShape.insert(pulseShape.begin(), d2);
      
      if (verbosity > 0) {
        cout << "verbosity_ = " << A.GetVerbosity() << endl;
        cout << "doFitBaseline_ = " << A.GetDoFitBaseline() << endl;
        cout << "doFitTime_ = " << A.GetDoFitTime() << endl;
        cout << "nPulseSamples_ = " << A.GetnPulseSamples() << endl;
        cout << "nPrePulseSamples_ = " << A.GetnPrePulseSamples() << endl;

        cout << "A.getAmpWeight(5) returns: " << A.getAmpWeight(5) << endl;
        cout << "A.getChi2Matrix(5,5) returns: " << A.getChi2Matrix(5,5) << endl;
        for(int i = 0; i < pulseShape.size() ; i ++){
          cout << "A.getAmpWeight(i) returns: " << A.getAmpWeight(i) << endl;
          cout << "A.getTimeWeight(i) returns: " << A.getAmpWeight(i) << endl;
        }
      }

      // someFunction(row)
      rows.push_back(pulseShape);

      
      //saving pulseshape and the weights to output file
      //file format:
      //[pulsenumber samplept1 samplept2 samplept3 ......samplept10 weightpt1 weightpt2 ...... weightpt10]
      output_file << d2 << "\t"; // saving pulse number to output file

      for(int i = 0; i < pulseShape.size(); i ++){
        output_file << pulseShape[i] << "\t"; //saving pulseshapes to output file 
      }

      for(int i = 0; i < pulseShape.size(); i ++){
        output_file << A.getTimeWeight(i) << "\t"; // saving weights to output file 
      }
      
      for(int i = 0; i < pulseShape.size(); i ++){
        if (i == (pulseShape.size() - 1)) {
          output_file << A.getAmpWeight(i) << "\t"; // saving weights to output file 
        } else {
          output_file << A.getAmpWeight(i) << "\t";
        }
      }

      output_file << "\n";

      if (count%1000 ==0) {
        cout << " Line = " << count << endl; //printing line number every 1000 lines 
      }
    }
      
  }
    inFile.close();
}
