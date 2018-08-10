#!/usr/bin/python
import csv
import numpy as np
import matplotlib.pyplot as plt

W0 = np.array([-0.296466,-0.296466,-0.275102,-0.0679634,0.313481,0.49094,0.353004,0.098751,-0.103479,-0.216698])
W1 = np.array([-0.301729,-0.300097,-0.2223,0.100681,0.43879,0.463322,0.242276,-0.00396702,-0.167433,-0.249544])
W2 = np.array([-0.300619,-0.299827,-0.240761,0.0559744,0.413255,0.475975,0.271194,0.0203324,-0.153089,-0.242435])
W3 = np.array([-0.299382,-0.299034,-0.25552,0.0125141,0.383599,0.484986,0.299504,0.0456219,-0.137665,-0.234624])
W4 = np.array([-0.298006,-0.297871,-0.266853,-0.0290097,0.350188,0.490061,0.326888,0.0718022,-0.121135,-0.226064])



dW1 = (W1 - W0)/W0
dW2 = (W2 - W0)/W0
dW3 = (W3 - W0)/W0
dW4 = (W4 - W0)/W0

print(W1-W0)
print(dW1, dW2, dW3, dW4)
# W02 = np.array([0.211623,0.211623,0.203579,0.125589,-0.0180286,-0.0848438,-0.0329094,0.0628193,0.138961,0.181589])
# W12 = np.array([0.214246,0.213629,0.184172,0.0618782,-0.0661432,-0.0754319,0.00826462,0.101502,0.163397,0.194487])
# W22 = np.array([0.213694,0.213394,0.191056,0.0788306,-0.0562925,-0.0800131,-0.0025653,0.0923103,0.157898,0.191689])
# W32 = np.array([0.213077,0.212946,0.19651,0.0952734,-0.0448856,-0.0831798,-0.013123,0.0827686,0.151996,0.188618])
# W42 = np.array([0.212391,0.21234,0.200642,0.110941,-0.0320706,-0.0848226,-0.0232833,0.0729203,0.145685,0.185258])


xdata = np.array([0,1,2,3,4,5,6,7,8,9])

# Plot average amplitude

weights0 = plt.scatter(xdata,W0, color = 'b')
weights1 = plt.scatter(xdata,W1, color = 'r') 
weights2 = plt.scatter(xdata,W2, color = 'g') 
weights3 = plt.scatter(xdata,W3, color = 'c') 
weights4 = plt.scatter(xdata,W4, color = 'k') 
plt.plot(xdata,W0)
plt.plot(xdata,W1)
plt.plot(xdata,W2)
plt.plot(xdata,W3)
plt.plot(xdata,W4)
plt.xlabel('Sample Number')
plt.legend((weights0, weights1, weights2, weights3, weights4), ('Original Weights', 'weights:-10ch' , 'weights:-20ch' , 'weights:-30ch' , 'weights:-40ch'))
plt.ylabel('Normalized Pulse')
plt.title('Samples and Weights')

#plt.show()

plt.savefig('TimeShiftedWeights.png')



# Plot average amplitude
plt.figure(0) # new figure
dweights0 = plt.scatter(xdata,W0, color = 'b')
dweights1 = plt.scatter(xdata,dW1, color = 'r') 
dweights2 = plt.scatter(xdata,dW2, color = 'g') 
dweights3 = plt.scatter(xdata,dW3, color = 'c') 
dweights4 = plt.scatter(xdata,dW4, color = 'k') 
plt.plot(xdata,W0)
plt.plot(xdata,dW1)
plt.plot(xdata,dW2)
plt.plot(xdata,dW3)
plt.plot(xdata,dW4)
plt.xlabel('Sample Number')
plt.legend((dweights0, dweights1, dweights2, dweights3, dweights4), ('Original Weights', 'Normalized weights:-10ch' , 'Normalized weights:-20ch' , 'Normalized weights:-30ch' , 'Normalized weights:-40ch'))
plt.ylabel('Normalized Pulse')
plt.title('Samples and Weights')

#plt.show()

plt.savefig('NormalizedTimeShiftedWeights.png')

