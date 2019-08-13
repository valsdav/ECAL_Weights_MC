import ROOT as R
import sys

'''
This script prints out useful debug information for the emulator output

'''

f = R.TFile(sys.argv[1])
t = f.Get("EcalTPGAnalysis")

for event in t:
    tps = [i for i in event.emulTP]
    flag = None
    if tps[2] != 0 and tps[1] == 0 and tps[3]== 0:
        flag = "Ok"
    if (tps[2]!=0 and tps[1]!=0 and tps[3] == 0) or  (tps[2]!=0 and tps[3]!=0 and tps[1] == 0):
        flag = "========== ERROR"
    if (tps[2] == 0 and sum(tps)!=0):
        flag = "Zeroed"

    print(*tps, flag)    