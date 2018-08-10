#!/usr/bin/python
import csv
import numpy as np
import matplotlib.pyplot as plt

W0 = np.array([-0.296123,-0.295887,-0.275901,-0.0683567,0.313834,0.49164,0.353434,0.0986839,-0.103941,-0.217383])
W1 = np.array([0.211591,0.211502,0.203971,0.12576,-0.0182651,-0.0852697,-0.0331881,0.062812,0.139169,0.181918])



xdata = np.array([0,1,2,3,4,5,6,7,8,9])

# Plot average amplitude

weights0 = plt.scatter(xdata,W0, color = 'b')
weights1 = plt.scatter(xdata,W1, color = 'r') 

plt.plot(xdata,W0)
plt.plot(xdata,W1)

plt.xlabel('Sample Number')
plt.legend((weights0, weights1), ('Original Weights', 'weights:-10ch' ))
plt.ylabel('Normalized Pulse')
plt.title('Samples and Weights')

#plt.show()

plt.savefig('comparison_addedbaseline.png')



