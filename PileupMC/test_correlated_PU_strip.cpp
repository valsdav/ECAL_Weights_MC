#include <iostream>
#include <cmath>
#include "TFile.h"
#include "TH1F.h"
#include "TCanvas.h"
#include "TApplication.h"
#include "TRatioPlot.h"
#include <TRandom3.h>

using namespace std;

int main(int argc, char** argv){

    TRandom3 * rnd = new TRandom3();
    gRandom = rnd;

    TFile in ("PileupPDF.root");
    TH1D* hpu = (TH1D*) in.Get("h125");

    TCanvas * c = new TCanvas("c1");
    c->SetLogy();
    TH1D* E1 = new TH1D("EPU1", "", 100, 0, 30);
    TH1D* E2 = new TH1D("EPU2", "", 100, 0, 30);

    int PU = 50;
    int Nsim = 1000000;

    for (int i = 0; i< Nsim; i++){
        // uncorrelated
        double epu = 0.;
        for (int j = 0; j<5; j++){
            int npu = gRandom->Poisson(PU);
            for (int p =0; p < npu; p++){
                epu+= pow(10., hpu->GetRandom());
            }
        }
        E1->Fill(epu);
    }

    for (int i = 0; i< Nsim; i++){
        // correlated
        double epu = 0.;
        int npu = gRandom->Poisson(PU);
        for (int j = 0; j<5; j++){
            for (int p=0 ;p < npu; p++){
                epu+= pow(10., hpu->GetRandom());
            }
        }
        E2->Fill(epu);
    }

    E1->DrawClone();
    E2->Draw("same");
    E2->SetLineColor(kRed);
    c->SaveAs("~/test.png");
}