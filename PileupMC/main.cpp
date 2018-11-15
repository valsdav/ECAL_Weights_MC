#include "PileupMC.h"
#include "Pulse.h"
#include <TGraph.h>
#include <TCanvas.h>
#include <TApplication.h>

#include <iostream>

using namespace std;

int main(int argc, char** argv){
    TApplication app("app", &argc, argv);

    Pulse * p = new Pulse(1., 125., 1.17, 40.);

    PileupMC * mc = new PileupMC(100, 70, 3, "Pileup.root", 10);

    TFile* file = new TFile("output.root", "recreate");
    TTree* tree = mc->simulatePileup(p, 10, 1000, 40, true);
    tree->Write();
    file->Close();

    TCanvas c;
    TGraph g; 
    for(int i = 0; i < p->GetNSamples(); i++){
        g.SetPoint(i, 25*i, p->sample(i));
        cout << p->sample(i) << endl;
    }
    g.Draw("A*");
    c.Draw();
    app.Run();

}