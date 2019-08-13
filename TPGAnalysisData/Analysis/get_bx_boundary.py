import ROOT as R
import sys

'''
The BX trains boundaries are extracted looking at the events in the root file

'''

f = R.TFile(sys.argv[1])
t = f.Get("EcalTPGAnalysis")

bxs = {}
for i in range(3563):
    bxs[i] = 0

for event in t:
    bxs[event.bxNb] += 1

boundaries = []
intrain = False

for bx in range(3563):
    if intrain == False and bxs[bx] > 0:
        if len(boundaries)>0 and (bx - boundaries[-1]) < 4:
            print("collapsing")
            boundaries.pop(-1)
        else:
            boundaries.append(bx)
        intrain = True 
    if intrain == True and bxs[bx] == 0 :
        boundaries.append(bx-1)
        intrain = False

output = []

for i in range(round(len(boundaries) / 2)):
    output.append("{"+"{0},{1}".format(boundaries[i*2], boundaries[i*2+1]) +"}")
    if (boundaries[i*2]-  boundaries[i*2-1]) < 4:
        print("problem! ", (boundaries[i*2-1],  boundaries[i*2]))
    if (boundaries[i*2+1]-  boundaries[i*2]) != 7:
        print("problem! not train of 8 bx", (boundaries[i*2],boundaries[i*2+1]))

print( ",".join(output))