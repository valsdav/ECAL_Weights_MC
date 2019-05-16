#!/bin/sh -x

#./bias_analysis_byET_train.x BXSF_48b7e.root /eos/project/e/ecaltrg/Valsecchi/generation7_48b7e \
#        48b7e 26_28 output_trains_byET/output_48b7e_26_28.root

# ./bias_analysis_byET_trains.x BXSF_48b7e.root /eos/project/e/ecaltrg/Valsecchi/generation7_48b7e \
#         48b7e 18_21 output_trains_byET/output_48b7e_18_21.root

# ./bias_analysis_byET_trains.x BXSF_48b7e.root /eos/project/e/ecaltrg/Valsecchi/generation7_48b7e \
#         48b7e 22_25 output_trains_byET/output_48b7e_22_25.root

#./bi   gcc -o bias_analysis_byET_trains.x bias_analysis_byET_trains.cpp `root-config --cflags --glibs` -w

./bias_analysis_byET_trains.x conditions/BXSF_8b4e.root conditions/trueA_SF_8b4e.root /eos/project/e/ecaltrg/Valsecchi/generation8_8b4e \
        8b4e 26_28 output_trains_byET/output_8b4e_26_28_PU30S2.root
        
./bias_analysis_byET_trains.x conditions/BXSF_8b4e.root conditions/trueA_SF_8b4e.root /eos/project/e/ecaltrg/Valsecchi/generation8_8b4e \
        8b4e 18_21 output_trains_byET/output_8b4e_18_21_PU30S2.root

./bias_analysis_byET_trains.x conditions/BXSF_8b4e.root conditions/trueA_SF_8b4e.root /eos/project/e/ecaltrg/Valsecchi/generation8_8b4e \
        8b4e 22_25 output_trains_byET/output_8b4e_22_25_PU30S2.root

