#ifndef BD_PLOT
#define BD_PLOT

// Abe Tishleman-Charny
// 14 October 2018
// BD Plotter

int BD_Plotter(TH2F *DOF_h, TH1F *bias_dist, bool plot_EB, bool plot_EE_minus, bool plot_EE_plus)
{

    cout << "In BD_Plotter\n";

    double avg = bias_dist->GetMean();
    double stddev = bias_dist->GetRMS();

    TCanvas *c1 = new TCanvas("c1", "c1", 800, 600);

    if(plot_EB){

        cout << "Plotting EB\n";
        DOF_h->GetXaxis()->SetTitle("ieta");
        DOF_h->GetYaxis()->SetTitle("iphi");
	//DOF_h->GetZaxis()->SetLabelOffset(1);
	DOF_h->GetZaxis()->SetLabelSize(0.9);
	DOF_h->GetZaxis()->SetRangeUser(avg-2*stddev,avg+4*stddev);
        DOF_h->Draw("COLZ1");
        DOF_h->SaveAs("BD_EB_plot.root");
        bias_dist->SaveAs("EB_bias_dist.root");
        c1->SaveAs("BD_EB_plot.pdf");
	return 0;

    }

    else if( (plot_EE_minus) || (plot_EE_plus) )  {

        cout << "Plotting EE\n";
        DOF_h->GetXaxis()->SetTitle("ix");
        DOF_h->GetYaxis()->SetTitle("iy");
	//DOF_h->GetZaxis()->SetLabelOffset(1);
	DOF_h->GetZaxis()->SetLabelSize(0.9);
	DOF_h->GetZaxis()->SetRangeUser(avg-2*stddev,avg+4*stddev);
        DOF_h->Draw("COLZ1");
        DOF_h->SaveAs("BD_EB_plot.root");
        bias_dist->SaveAs("EE_bias_dist.root");
        c1->SaveAs("BD_EB_plot.pdf");
	return 0;

    }

    else{

        cout << "No plotting option found\n";
        cout << "Exiting\n";
        exit(1);

    }

}

#endif
