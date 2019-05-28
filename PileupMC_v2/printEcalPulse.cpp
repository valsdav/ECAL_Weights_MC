#include "Pulse.h"
#include <vector>
#include <TGraph.h>
#include <TCanvas.h>
#include <iostream>

using namespace std;


void pulseEcal(double t0, double alpha, double beta){

    Pulse * pulse = new Pulse(1., t0, alpha, beta);
    
    std::vector<double> samples = pulse->GetSamples();
    std::vector<double> time; 
    double t =0;
    for (auto & d: samples){
        cout << t << " : " << d<<endl;
        time.push_back(t);
        t+=25;
    }
    TCanvas c;
    TGraph g (30, time.data(), samples.data());
    g.Draw("APL");
    c.Draw();
    c.SaveAs("ecal_pulse.png");
}


int main(){
    //endcap last ring
    //pulseEcal(124.089, 1.38424, 38.5815);

    pulseEcal(124.192,1.188570,40.7786);
}