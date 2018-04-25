import matplotlib.pyplot as plt
import numpy as np

x = np.random.rand(2)
y = np.random.rand(2)
t = np.arange(2)

np.array

x[0] = 0
x[1] = 1

y[0] = 0
y[1] = 1

print 'x = ',x
print 'y = ',y
print 't = ',t

plt.scatter(x, y, c=t)
plt.show()

# x = (0, 1, 2) y = (2, 3, 4), z = (1, 5 ,6)
