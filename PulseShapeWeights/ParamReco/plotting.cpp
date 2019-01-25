// Plotting code that was previously in main.cpp

void plot()
{
	// Should make plotting function eventually

	gStyle->SetOptStat(0); // no stats box

	TCanvas *c1 = new TCanvas("c1","c1",800,600);

	if (plot_BC){

		c1->cd();
		tsr->Draw("HIST");
		c1->Update();
		//EB->GetZaxis()->SetRangeUser(zmin,zmax); // for DOF plot
		//tsr->GetZaxis()->SetLabelSize(0.02); // for DOF plot
		tsr->GetXaxis()->SetTitle("Time Shift (ns)");
		tsr->GetXaxis()->SetTitleOffset(1.2);
		//tsr->GetYaxis()->SetTitle("Total Error"); // Write in latex? 
		//tsr->GetYaxis()->SetTitle("#sum_{XTALS}^{}Error");
		tsr->GetYaxis()->SetTitle("bias");
		tsr->GetYaxis()->SetTitleOffset(1.4);
		tsr->Draw("HIST");
		ostringstream error_plot_root, error_plot_pdf;
		error_plot_root << "bin/BC_";
		error_plot_pdf <<  "bin/BC_"; 
	
		if (plot_EB){	
		  error_plot_root << "EB_";
		  error_plot_pdf  << "EB_";
		}

		if (plot_EE_minus){
			error_plot_root << "EE-_";	
			error_plot_pdf  << "EE-_";	
		  }

		if (plot_EE_plus){
			error_plot_root << "EE+_";	
			error_plot_pdf  << "EE+_";	
		  }

		if (ideal_weights){
			//error_plot_root << "idealweights"  << ts_min << "_" << ts_max << "_" << note << current_time << ".root";
			//error_plot_pdf  << "idealweights"  << ts_min << "_" << ts_max << "_" <<  note << current_time << ".pdf";
			error_plot_root << weights_type << "_" << PY << "_" << ts_min << "_" << ts_max << note << ".root";
			error_plot_pdf  << weights_type << "_" << PY << "_" << ts_min << "_" << ts_max << note << ".pdf";
		  }

		if (!ideal_weights){ 
			//error_plot_root << "online" << "_" << ts_min << "_" << ts_max << "_" << PY << "_" << note << current_time << ".root";
			//error_plot_pdf  << "online" << "_" << ts_min << "_" << ts_max << "_" << PY << "_" << note << current_time << ".pdf";
			error_plot_root << "online" << "_" << PY << "_" << ts_min << "_" << ts_max << note << ".root";
			error_plot_pdf  << "online" << "_" << PY << "_" << ts_min << "_" << ts_max << note << ".pdf";
		  }

		TString rooterrortitle = error_plot_root.str();
		TString pdferrortitle = error_plot_pdf.str();

		c1->SaveAs(pdferrortitle); // Canvas screenshot
		tsr->SaveAs(rooterrortitle); // Editable histogram

	}

	avg_bias = total_error_ / count;

	if (plot_BD){

		c1->cd();
		//sts->Draw();
		c1->Update();
		//EB->GetZaxis()->SetRangeUser(zmin,zmax); // for DOF plot
		//tsr->GetZaxis()->SetLabelSize(0.02); // for DOF plot
		if (plot_EB){
			sts->GetXaxis()->SetTitle("iEta");
			sts->GetYaxis()->SetTitle("iPhi");	
			}
		if (plot_EE_minus || plot_EE_plus){
			sts->GetXaxis()->SetTitle("ix");
			sts->GetYaxis()->SetTitle("iy");
			}
		sts->GetXaxis()->SetTitleOffset(1.1);
		sts->GetYaxis()->SetTitleOffset(1.2);
		sts->GetZaxis()->SetLabelSize(0.02);
		gStyle->SetOptStat(0);
		if(plot_EB) sts->GetZaxis()->SetRangeUser(-0.002,0.015); // Arbitrary EB range 
		if(plot_EE_minus || plot_EE_plus) sts->GetZaxis()->SetRangeUser(-0.08,0.16); // Arbitrary EE range 
		sts->Draw("COLZ1"); // COLZ1 to not color zeros
		
		ostringstream plot_title;
		//plot_title << "";

		ostringstream error_plot_root, error_plot_pdf;
		error_plot_root << "bin/BD_";
		error_plot_pdf << "bin/BD_"; 
	
		if (plot_EB){	
		  error_plot_root << "EB_";
		  error_plot_pdf << "EB_";
		  plot_title << "EB, ";
		}

		//if (plot_EE){
		  //error_plot_root << "EE";
		  //error_plot_pdf << "EE";
		  //plot_title << "EE";

		  if (plot_EE_minus){
			error_plot_root << "EE-_";	
			error_plot_pdf << "EE-_";	
			plot_title << "EE-, ";
		    }


	  	   if (plot_EE_plus){
		  	error_plot_root << "EE+_";	
			error_plot_pdf << "EE+_";	
			plot_title << "EE+, ";
	    		}

		  //}

		if (ideal_weights){
			//error_plot_root << "ideal" << note << current_time << ".root";
			//error_plot_pdf  << "ideal" << note << current_time << ".pdf";
			error_plot_root << "ideal" << "_" << PY << "_" << "ts" << ts << note << ".root";
			error_plot_pdf  << "ideal" << "_" << PY << "_" << "ts" << ts << note << ".pdf";
			plot_title << "Ideal Weights, ";
		  }

		if (!ideal_weights){ 
			//error_plot_root << "Online" << "_" << PY << "_" << "ts" << ts << "_" << note << current_time << ".root";
			//error_plot_pdf  << "Online" << "_" << PY << "_" << "ts" << ts << "_" << note << current_time << ".pdf";
			error_plot_root << "Online" << "_" << PY << "_" << "ts" << ts << note << ".root";
			error_plot_pdf  << "Online" << "_" << PY << "_" << "ts" << ts << note << ".pdf";
			plot_title << "Online Weights, ";
		  }
	
		plot_title << " " << string(PY) << " Parameters, ";	
		plot_title << "ts = " << ts; // ",  Avg Bias = " << avg_bias;

		TString plottitle = plot_title.str();
		sts->SetTitle(plottitle);
		TString rooterrortitle = error_plot_root.str();
		TString pdferrortitle = error_plot_pdf.str();

		cout << "max bias = " << max_bias << endl;
		cout << "total error = " << total_error_ << endl;
		cout << "avg bias = " << avg_bias << endl;	
		cout << "min bias = " << min_bias << endl;

		// Want to figure out how to write color drawn histogram into TFile 
		TFile *f = new TFile(rooterrortitle,"RECREATE");
		//sts->Draw("COLZ1");
		gDirectory->WriteObject(sts,"Distribution");
		gDirectory->WriteObject(values,"Bias_Values");

		//gDirectory->GetObject("Distribution",sts)->Draw("COLZ1");
		//TH2F *dist = (TH2F*)f->Get("Distribution");
		//dist->Draw("COLZ1");
		//gDirectory->WriteObject(dist,"DistributionColor");
		//gDirectory->Draw("COLZ1");
		//TTree *Tree = new TTree("Tmax","max");		

                //TBranch *blah = new TBranch(*Tmax); 
                //blah->Fill(max_bias);
                //end fill

		TH1F *maxb = new TH1F("max_bias","max_bias",10,-1,1);
		maxb->Fill(max_bias);
		maxb->SetStats(1);
		maxb->Write();

		TH1F *tot_e = new TH1F("total_error","total_error",10,total_error_ - 1,total_error_ + 1);
		tot_e->Fill(total_error_);
		tot_e->SetStats(1);
		tot_e->Write();

		TH1F *ab = new TH1F("average_bias","average_bias",10,-1,1);
		ab->Fill(avg_bias);
		ab->SetStats(1);
		ab->Write();

		TH1F *minb = new TH1F("min_bias","min_bias",10,-1,1);
		minb->Fill(min_bias);
		minb->SetStats(1);
		minb->Write();
		
		//values->Write();
		//sts->Write();
		//f->Write();

		//sts->Write();
		//values->Write();
		
		//f->Write();
		//f->Write();
		//sts->Draw("COLZ1");
				
	
		c1->SaveAs(pdferrortitle); // Canvas screenshot
		//sts->SaveAs(rooterrortitle); // Editable Histogram
		//sts->SaveAs("EEPlot.root");
	}

	cout.precision(4);
	time_t final_time = time(0);
	time_t total_time = (final_time - initial_time);
	cout << "Total time: " << total_time / 60. << " minutes\n";

}
