# taken from
# https://matplotlib.org/3.3.3/tutorials/introductory/usage.html#sphx-glr-tutorials-introductory-usage-py
import matplotlib.pyplot as plt
import numpy as np

# Create a figure containing a single axes.
fig, ax = plt.subplots() 
x = [1,2,3,4]
y = [1,4,2,3]

ax.plot(x,y)

