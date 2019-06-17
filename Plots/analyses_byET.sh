#!/bin/sh -x

g++ -o bias_analysis_byET_trains.x  bias_analysis_byET_trains.cpp `root-config --cflags --libs` -w

# ./bias_analysis_byET_trains.x conditions/BXSF_48b7e.root conditions/trueA_SF_48b7e.root \
#         /eos/project/e/ecaltrg/Valsecchi/generation8_48b7e 48b7e 26_28 output_trains_byET/output_48b7e_26_28_newstd.root 

# ./bias_analysis_byET_trains.x conditions/BXSF_8b4e.root conditions/trueA_SF_8b4e.root \
#         /eos/user/r/rdfexp/ecal/generation8_bis/bias_8b4e 8b4e 26_28 output_trains_byET/generation8_bis/output_8b4e_26_28.root 

# ./bias_analysis_byET_trains.x conditions/BXSF_8b4e.root conditions/trueA_SF_8b4e.root \
#         /eos/user/r/rdfexp/ecal/generation8_bis/bias_8b4e 8b4e 22_25 output_trains_byET/generation8_bis/output_8b4e_22_25.root 


# ./bias_analysis_byET_trains.x conditions/BXSF_8b4e.root conditions/trueA_SF_8b4e.root \
#         /eos/user/r/rdfexp/ecal/generation8_bis/bias_8b4e 8b4e 18-21 output_trains_byET/generation8_bis/output_8b4e_18-21.root 

./bias_analysis_byET_trains.x conditions/BXSF_48b7e.root conditions/trueA_SF_48b7e.root \
        /eos/user/r/rdfexp/ecal/generation8_bis/bias_48b7e 48b7e 26_28 output_trains_byET/generation8_bis/output_48b7e_26_28.root 

./bias_analysis_byET_trains.x conditions/BXSF_48b7e.root conditions/trueA_SF_48b7e.root \
        /eos/user/r/rdfexp/ecal/generation8_bis/bias_48b7e 48b7e 22_25 output_trains_byET/generation8_bis/output_48b7e_22_25.root 


./bias_analysis_byET_trains.x conditions/BXSF_48b7e.root conditions/trueA_SF_48b7e.root \
        /eos/user/r/rdfexp/ecal/generation8_bis/bias_48b7e 48b7e 18-21 output_trains_byET/generation8_bis/output_48b7e_18-21.root 

