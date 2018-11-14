#include "Pulse.h"
#include <math.h>
#include <iostream>

Pulse::Pulse(double A, double t_0, double alpha, double beta):
    _A(A),_t0(t_0),_alpha(alpha),_beta(beta)
{
    // alpha-beta function
    _pulseShape = new TF1("pulse", 
        "( (1 + (x-[1]) / ([2]*[3]) ) > 0.0)*([0] * pow( 1 + (x-[1]) / ([2]*[3]) , [2] ) * exp ( - (x-[1]) / [3])) + ((1 + (x-[1]) / ([2]*[3]) <= 0.0 ))*(0)",
        _xmin, _xmax);
    _pulseShape->SetParameter(0, _A);
    _pulseShape->SetParameter(1, _t0);
    _pulseShape->SetParameter(2, _alpha);
    _pulseShape->SetParameter(3, _beta);

    calculateSamples();
}

Pulse::~Pulse(){
    delete _pulseShape;
    _samples.clear();
}


// Sample the pulseShape at fixed intervals
void Pulse::calculateSamples()
{   
    int s = 0;
    for(double i= 0.; i<= _xmax; i+=_dt){
        if (i<=(_t0 - _alpha*_beta)) 
            _samples.at(s) = (0);
        else 
            _samples.at(s) = _pulseShape->Eval(i);
        s+=1;
    }
}






