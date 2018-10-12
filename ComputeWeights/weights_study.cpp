// Abraham Tishelman-Charny
// 5 October 2018
//
// The purpose of this program is to start with XTAL params (A, t0, alpha, beta) and DOF (DOF1, DOF2, DOF3, eta).
// XTAL params ID is matched with DOF ID, and then weights are computed from analytic waveform.
// Output is a merged data file containing, for each XTAL ID:
// ID, DOF1, DOF2, DOF3, eta, A, t0, alpha, beta, w1->w10. 
//
// The output file can then be read by main.cpp associated functions to produce plots. 
//
// Need CLHEP libraries to compile. With my setup on lxplus, this requires the command:
// g++ -std=c++11 -o run.x Param_Scan.cpp -L"/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/Tools/clhep/install/lib" -lCLHEP-2.4.1.0 -I"/afs/cern.ch/work/a/atishelm/CMSSW_9_0_1/Tools/clhep/install/include" `root-config --ldflags --glibs --cflags`
//
// After installing CLHEP, can check necessary compilation flags with: clhep-config --include, clhep-config --libs

// Should change this to a function that can be used or not with main. Maybe command line option for plotting weight info. 

using namespace std;

// Include root header files
#include "TSpline.h"
#include "TLegend.h"
#include "TString.h"
#include "TGraph.h"
#include "TH1.h"
#include "TH2.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TStyle.h"
#include <vector>
#include "TGraphErrors.h"
//#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iterator>
#include <string>
#include <chrono>
#include <cmath>
#include <vector>

#include "ComputeWeights.cpp"

int main(int argc, char** argv){

	// Print command line arguments 
	cout << "argc = " << argc << endl;
	for (int i = 0; i < argc; i++){
		cout << "argv[" << i << "] = " << argv[i] << endl;
		}
	
	// Grab command line arguments 
	int verbosity = stoi(argv[1]); // 1 for lots of comments 
 	int tMax = stoi(argv[2]); // 5. zero indexed.
  	bool dofitbaseline = stoi(argv[3]); // 0 or 1
	bool dofittime = stoi(argv[4]); // 0 or 1
  	static int nPulseSamples = stoi(argv[5]); // 0 to 10
  	int prepulsesamples = stoi(argv[6]); // 0 to 10 (need to understand correlation to npulsesamples)
  	double P = stod(argv[7]); // Simulated pedestal value 
	string PY = string(argv[8]); // Parameter year. Currently 2017 or 2018. Might change to month/year
	int max_lines = stoi(argv[9]); // Max lines to read from XTAL Params (A, t0, alpha, beta)
	string note = string(argv[10]);  // Note to add to output file name 
	//int testing = stoi(argv[11]); // 1 for testing, 0 for not testing. 

	// Create output File 

//	stringstream a;
//	a << "XTAL_Info_Full_" << PY << "_PedSub" << to_string(prepulsesamples) << "+" << to_string(nPulseSamples) << "_" << note << ".txt";
//	string output_file = a.str();

//	cout << "output file path = " << output_file << endl;

//	ofstream weights_file;
//	weights_file.open(output_file);
//	weights_file << "cmsswid\tietaix\tiphiiy\t0iz\teta\tA\tt_0\talpha\tbeta\tw1\tw2\tw3\tw4\tw5\tw6\tw7\tw8\tw9\tw10\n";

	// Open XTAL Params file (A, t0, alpha, beta)
	stringstream aa;
	aa << "data/XTAL_Params_" << PY << ".txt";
	string params_path = aa.str();
  	ifstream inParamsFile; //, inweightsFile; // Input File stream objects 
  	inParamsFile.open(params_path); // XTAL_Params: inParamsFile stream

  	if (!inParamsFile) {
  	  cout << "Unable to open Param file\n";
  	  exit(1); // terminate with error
 	 }

	// Create histogram for studying weights (or anything you want)
	//TH1F *h1 = new TH1F("h1","h1",100,-1,1); // plot weights 
	//TH1F *h2 = new TH1F("h2","h2",100,-1,1); // plot weights 
	TH1F *weights_h = new TH1F("weights","weights",2000,-1,1);
	TH1F *amps = new TH1F("amps","amps",25,0.9,1.1);
	TH1F *peak_amp = new TH1F("peak_amp","peak_amp",50,0.44,0.52);	

	// Loop Parameters
	int current_line = 0;
	bool manual_exit = false;
	bool skip = false;	

	// Create variables here, update during loop 
//	stringstream cw;
//	cw.precision(17);

	vector<double> pulseShape;
	vector<double> pulseShapeDerivative;
	vector<double> weights;
	Double_t weights_total[10]; 
	int w_count = 0;
	int num_weights[10];

	// Make Histogram for each weight

	TH1F *weight = new TH1F("weight","weight",1000,-1,1);
	TH1F *sample = new TH1F("sample","sample",1000,-1,1);
	
	TH1F *histArray[10];
	TH1F *sampleArray[10];

	for (int i = 0; i < 10; i++){

		sampleArray[i] = (TH1F*)sample->Clone(Form("sample%d",i));
		histArray[i] = (TH1F*)weight->Clone(Form("weight%d",i));
		//histArray[i] = weight->Clone(Form("weight%d",i));
		//cout << (histArray[i])->GetName() << endl;

	}	

//	double sum = std::accumulate(v.begin(), v.end(), 0.0);
//	double mean = sum / v.size();

//	std::vector<double> diff(v.size());
//	std::transform(v.begin(), v.end(), diff.begin(),
//		       std::bind2nd(std::minus<double>(), mean));
//	double sq_sum = std::inner_product(diff.begin(), diff.end(), diff.begin(), 0.0);
//	double stdev = std::sqrt(sq_sum / v.size());

	// for time jitter 
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
	
	// Initialize 
	for (int i = 0; i < 10; i++){
		pulseShape.push_back(0.0);
		weights.push_back(0.0);
		weights_total[i] = 0.0;
		num_weights[i] = 0;
	}

	double A, t_0, alpha, beta, ID, DOF1, DOF2, DOF3, eta;
	double ts = 0.0; // Simulated Time Shift
	bool normalize_A = true;
	bool normalize_t0 = false;

	TString *name = new TString("function_alphabeta");
	TString *formula = new TString("( (1 + (x-[1]) / ([2]*[3]) ) > 0.0)*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + ((1 + (x-[1]) / ([2]*[3]) <= 0.0 ))*(0)");

	// Sampling start, stop, interval
	double xmin = 0.; 
	double xmax = 250.; 
	double dt = 25; 

	TF1 *function_alphabeta = new TF1(*name,*formula,xmin,xmax);
	int firstsample = tMax - 1; // hardcoding for now because this is our method, first AMP sample. 

	double A_hat = 0.0;
	double A_hat_post_P = 0.0;
	double weights_sum = 0.0;
	double Ped_val = 0.0;
	double bias = 0.0;

	int samp_number = 0;
	int num_xtals = 0;

	int count_ = 0;
	int DOFl = 0;
	int extra_lines = 0;
	bool five_params;
	
	bool leave = false;
	int DOF_skip_count = 0; 
	double DOF_ID = 0;

	string line; // string to hold XTAL params line information 

	while((getline(inParamsFile, line)) && (!manual_exit) ) { // get line of XTAL_Params.txt loop
	// why is getline executed just from being in the while condition? 

	   skip = false;
	
	   if (current_line == max_lines){
		cout << "Maximum desired lines reached.\n"; 
		cout << "Exiting.\n";

		break;
		}
	

	   stringstream s(line); // convert 'line' to stream 's'

	   double d1, d2, d3, d4, d5; // d1 = ID, d2 = A, d3 = t_0, d4 = alpha, d5 = beta   

	   if((s >> d1 >> d2 >> d3 >> d4 >> d5)){ // Do if on XTAL_params line with 5 doubles	  

		// If params are zero, skip param line. 

		if (d2 == 0){
			cout << "Param file Amplitude is zero\n";
			leave = true;
		}
	
		else leave = false;

		stringstream ssDOF;
		ssDOF << "data/Compact_DOF.txt";
		string DOF_path = ssDOF.str();

		ifstream inDOFFile; 
		inDOFFile.open(DOF_path); 

		if (!inDOFFile) {
		  cout << "Unable to open Info file\n";
		  exit(1); // terminate with error
		}

		string DOF_line; 

		
		DOF_skip_count = 0;

		//DOF_skip_count += good_line_count;
		DOF_skip_count += extra_lines; // extra_lines updated every line 
		//DOF_skip_count += i;
		DOF_skip_count += DOFl;

		//cout << "skipping " << DOF_skip_count << "lines\n";

		while(DOF_skip_count !=0){
		  //cout << "skipping " << DOF_skip_count << "lines\n";
		  inDOFFile.ignore(1000,'\n'); // count is number of rows read before this one
		  DOF_skip_count -= 1;
		}

		while((getline(inDOFFile, DOF_line)) && (leave == false)) { // read EB/EE_DOF line // DOF while 
		
		//cout << "In DOF while\n";

		five_params = false;

                stringstream ss(DOF_line);

		double d1_, d2_, d3_, d4_, d5_;
	
			if(ss >> d1_ >> d2_ >> d3_ >> d4_ >> d5_){ // If DOF line contains 5 doubles // DOF 5 

				//cout << "DOF line has 5\n";

				DOF_ID = d1_;

				five_params = true; 
	
				cout.precision(17);

				if ((d1_ == d1)){ // All ID's match


					ID = d1_, DOF1 = d2_, DOF2 = d3_, DOF3 = d4_, eta = d5_;
					A = d2;
					t_0 = d3;
					alpha = d4;
					beta = d5;			

					// Compute Weights

					//--------------------------------------------------------------------------------------------------------------------------
			
					// As long as ID has computable weights for PY, compute weights 
					if (!skip){

						num_xtals += 1;

//						cw.precision(17);
//						cw << ID << "\t";
//						cw.precision(9);					

//						cw << DOF1 << "\t" << DOF2 << "\t" << DOF3 << "\t" << eta << "\t" << A << "\t" << t_0 << "\t" << alpha << "\t" << beta << "\t";
//						cw.precision(17);

						if (normalize_t0) t_0 = 125;
						if (normalize_A) A = 1;

						function_alphabeta->SetParameter (0, A);    
						function_alphabeta->SetParameter (1, t_0 + ts); // time shift     
						function_alphabeta->SetParameter (2, alpha);  
						function_alphabeta->SetParameter (3, beta);  

						ComputeWeights A_(verbosity, dofitbaseline, dofittime, nPulseSamples, prepulsesamples);

						// pulse is moved to right by time_shift, so move sampling to right by time_shift.
						count_ = 0;

						// Want samples from non-timeshifted wave to see how time shift affects recon amp 
						// time_shift moves pulse to right by N, so move sampling beginning to right by N 

						for(double i = xmin + ts; i < xmax + ts; i += dt){						
						  if ( i <= (t_0 + ts - alpha*beta) ) pulseShape.at(count_) = 0;	
						  //else pulseShape.push_back( ( function_alphabeta->Eval(i) + P ) / (A) );/// (A + P) ); // divide by A to get weights for S*W = A 
						  //else pulseShape.push_back( ( function_alphabeta->Eval(i) + P ) );/// (A + P) ); // divide by A to get weights for S*W = A 
						  else pulseShape[count_] = function_alphabeta->Eval(i) ;
						  // if (d1 >= 838861947) cout << "pulseShape[" << count_ << "] = " << pulseShape[count_] << endl;
						  //cout << "pulseShape[" << count_ << "] = " << pulseShape.at(count_) << endl;
						  count_ += 1;
						}

						A_.compute(pulseShape,pulseShapeDerivative,tMax); // Run member function

						//cout << "Right after compute\n";

						firstsample = tMax - 1; // make variable?
						A_hat = 0.0;
						weights_sum = 0.0;
						Ped_val = 0.0;
						bias = 0.0;

						w_count = 0;
						for (int i = 0; i < 2; i++){ 
							weights[w_count];
						}

//						cout << "------------------------------\n";
//						cout << "Amp Weights:\n";
//						for ( int i = firstsample; i < firstsample + nPulseSamples + prepulsesamples; i++){

//							cout << "amp weight = " << A_.getAmpWeight(i - firstsample) << endl;
//							//cout << "ped weight = " << A_.getPedWeight(i - firstsample) << endl;

//						}
	
//						cout << "------------------------------\n";
//						cout << "Ped Weights:\n";					

//						for ( int i = firstsample; i < firstsample + nPulseSamples + prepulsesamples; i++){

//							//cout << "amp weight = " << A_.getAmpWeight(i - firstsample) << endl;
//							cout << "ped weight = " << A_.getPedWeight(i - firstsample) << endl;

//						}
	

						// If you introduce prepulsesamples and apply all weights in a row on samples, the sum of the weights will be zero but the ampltiude will not be 1
						// If you just use the sample weights you get amp 1, but the weights won't sum to zero so won't work when pedestal added. 

						for ( int i = firstsample; i < firstsample + nPulseSamples + prepulsesamples; i++) {
							//cout << "Weight = " << A_.getAmpWeight(i - firstsample);
							//cout << "amp weight = " << A_.getAmpWeight(i - firstsample) << endl;
//							cw << A_.getAmpWeight(i - firstsample) << "\t";
							//h1->Fill(A_.getAmpWeight(i - firstsample)); // fill histogram 
							//weights_sum += A_.getAmpWeight(i - firstsample);
							weights[i] = A_.getAmpWeight(i - firstsample);
							weights_h->Fill(weights[i]);
							//Ped_val += A_.getPedWeight(i - firstsample)*pulseShape[i];
							//cout << "ped weight = " << A_.getPedWeight(i - firstsample) << endl;
							//A_hat += A_.getAmpWeight(i - firstsample)*pulseShape[i];
							

						  }
	
						for (int i = 0; i < 10; i++){
							if(verbosity){
								cout << "-----------------------------------------\n";
								cout << "weights[" << i << "] = " << weights[i] << endl;
								cout << "pulseShape[" << i << "] = " << pulseShape[i] << endl;
								cout << "-----------------------------------------\n";
							}						

							if (i == 5) peak_amp->Fill(weights[i]);
							num_weights[i] += 1;
							weights_total[i] += weights[i];
							histArray[i]->Fill(weights[i]);
							sampleArray[i]->Fill(pulseShape[i]);
							weights_sum += weights[i];
							A_hat += weights[i]*pulseShape[i];

						}

						A_hat_post_P = 0;

						for (int i = 0; i < 10; i++){
			
//							cout << "-----------------------------------------\n";
//							cout << "weights[" << i << "] = " << weights[i] << endl;
//							cout << "pulseShape[" << i << "] = " << pulseShape[i] << endl;
//							cout << "-----------------------------------------\n";
													

							//weights_sum += weights[i];
							pulseShape[i] += P;
							A_hat_post_P += weights[i]*pulseShape[i];

						}						


//						for ( int i = firstsample; i < (firstsample + prepulsesamples); i++){
//							//Ped_val += A_.getPedWeight(i - firstsample + nPulseSamples)*pulseShape[i];
//							Ped_val += A_.getPedWeight(i - firstsample)*pulseShape[i];
//							//cout << "ped weight = " << A_.getPedWeight(i - firstsample + nPulseSamples) << endl;
//							cout << "Ped contribution Method 1 = " << A_.getPedWeight(i - firstsample + nPulseSamples)*pulseShape[i] << endl;
//							cout << "Ped contribution Method 2 = " << A_.getPedWeight(i - firstsample)*pulseShape[i] << endl;
//						}

//						cout << "Ped_val = " << Ped_val << endl;
					        if(verbosity){
						cout << "Weights Sum = " << weights_sum << endl;
						cout << "A hat = " << A_hat << endl;
						cout << "A hat post P = " << A_hat_post_P << endl;
						}
						bias = (A_hat / A) - 1;
						//cout << "bias = " << bias << endl;
						//h1->Fill(Ped_val);
						amps->Fill(A_hat);

						//cout << "cw = " << cw.str() << endl;

//						for (int i = 0; i < 3; i++){
//							cw << "0\t";
//						}
	
//						cw << "\n";
//						weights_file << cw.str();
//						cw.str("");				

					} // if(!skip)

					//--------------------------------------------------------------------------------------------------------------------------
					// weights computed 

					leave = true; // Using double equals sign here caused frustration for a bit  
					DOFl += 1; // line used, so skip on next read 

				} // All ID's match

				else{ extra_lines += 1;} // ID's don't match 

			} // If DOF line contains 5 doubles 

			else{ five_params = false;} // doesn't contain 5 doubles

			if (!five_params){	

				extra_lines += 1; 


				if (d1 == d1_){
					leave = true; // if ID's match on less than 5 param line in DOF, need to skip to next param line. 
				}


			} // if (!five_params) 


		} //readEBEEDOFLINE

	} // XTAL_params line with 5 doubles 

	current_line += 1;
	//cout << "current_line = " << current_line << endl;
	if (current_line%5000 == 0) cout << "current_line = " << current_line << endl;
	} // get line of XTAL_Params.txt 
	
	Double_t xvals[10];	

	Int_t n = 10;

	for (int i = 0; i < 10; i++){
		xvals[i] = i;
		if (weights_total[i] != 0){
			weights_total[i] /= num_weights[i];
		}		

	}

	Double_t w_errors[10], xerrors[10], s_errors[10], sample_avg[10];
	

	// Get average weight uncertainties
	for (int i = 0; i < 10; i++){

		xerrors[i] = 0.0;
		w_errors[i] = histArray[i]->GetRMS();
		s_errors[i] = sampleArray[i]->GetRMS();
		sample_avg[i] = sampleArray[i]->GetMean();
			
	}

	//TGraph *wg = new TGraph(n,xvals,weights_total);
	TGraphErrors *wg = new TGraphErrors(n,xvals,weights_total,xerrors,w_errors);
	TGraphErrors *sg = new TGraphErrors(n,xvals,sample_avg,xerrors,s_errors);

	stringstream ab;
	ab << PY << "_PedSub" << to_string(prepulsesamples) << "+" << to_string(nPulseSamples) << " Weights " << note << ".txt";
	TString htitle = ab.str();

	TString file_title = "weights.pdf";

	TCanvas *c1 = new TCanvas("c1","c1",800,600);
	weights_h->SetTitle(htitle);
	weights_h->Draw();
	c1->SaveAs(file_title);

	TString file_title_ = "amps.pdf";

	TCanvas *c2 = new TCanvas("c2","c2",800,600);
	amps->SetTitle(htitle);
	amps->Draw();
	c2->SaveAs(file_title_);

	TCanvas *c3 = new TCanvas("c3","c3",800,600);
	peak_amp->SetTitle("peak amp");
	peak_amp->Draw();	
	c3->SaveAs("peak_amps.pdf");

	TCanvas *c4 = new TCanvas("c4","c4",800,600);

	stringstream abt;
	abt << "Average Weights and Samples with " << num_xtals << " XTALS";
	TString ptitle = abt.str();

	wg->SetTitle(ptitle);
//	wg->Draw("ALP");	
//	sg->Draw("LPSAME");
	wg->GetYaxis()->SetRangeUser(-1,1.1);
	wg->SetMarkerStyle(kFullDotMedium);
	sg->SetMarkerStyle(kFullDotMedium);
	sg->SetMarkerColor(kBlue);
	wg->SetMarkerColor(kRed);

//	TSpline3 *s3 = new TSpline3("s3",wg->GetX(),wg->GetY(),wg->GetN());
//	s3->SetLineColor(kRed);

//	TSpline3 *s4 = new TSpline3("s4",sg->GetX(),sg->GetY(),sg->GetN());
//	s4->SetLineColor(kBlue);

	wg->Draw("ALP");	
	sg->Draw("LPSAME");

	TLegend* legend = new TLegend(0.1,0.75,0.25,0.9);
	legend->SetHeader("Legend","C"); // option "C" allows to center the header
	legend->AddEntry(sg,"Avg Samples","lep");
	legend->AddEntry(wg,"Avg Weights","lep");
	legend->Draw();

	//c4->BuildLegend();

	c4->SaveAs("Avg_Plot.pdf");

} // End of main function 
