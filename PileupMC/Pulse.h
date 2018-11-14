#ifndef Pulse_h
#define Pulse_h

#include <TMath.h>
#include <TFile.h>
#include <TTree.h>
#include <TGraph.h>
#include <TF1.h>
#include <TString.h>

#include <iostream>

// #include "PulseParameters.h"

class Pulse{

    std::vector <double> _samples;
    double _A;
    double _t0;
    double _alpha;
    double _beta;
    double _dt = 25.;
    double _xmin= 0.; 
    double _xmax = 500.;
    TF1* _pulseShape;
    void calculateSamples();

public:
    Pulse(double A, double t_0, double alpha, double beta);
    ~Pulse();

    
    double sample(double t);

    void setSamplingInterval(double dt)
    {
        _dt = dt;
        calculateSamples();
    }
    
    void setAmplitude(double A)
    {
        _A = A;
        _pulseShape->SetParameter(0, _A);
        calculateSamples();
    }

};


#endif
