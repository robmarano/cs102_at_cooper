import pandas as pd
import numpy as np

import matplotlib.pyplot as plt

air_quality = pd.read_csv('./air_quality_no2.csv',
        index_col=0, parse_dates=True)
print(air_quality.head())

#air_quality.plot()
#air_quality["station_paris"].plot()
#air_quality.plot.scatter(x="station_london",
#        y="station_paris",
#        alpha=0.5)
#air_quality.plot.box()
#axs = air_quality.plot.area(figsize=(12, 4), subplots=True)
#plt.show()

plot_method_names = [method_name for method_name in dir(air_quality.plot) if not method_name.startswith("_")]
#print(plot_method_names)

fig, axs = plt.subplots(figsize=(12, 4));
air_quality.plot.area(ax=axs);
axs.set_ylabel("NO$_2$ concentration");
fig.savefig("no2_concentrations.png")

plt.show()
