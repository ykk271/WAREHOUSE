import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns

mpg.head()
mpg.isnull().sum()
mpg.info()
mpg.describe()
mpg.columns

# horsepower type is object
mpg.horsepower.unique()
mpg.horsepower.replace('?', np.nan, inplace=True)
mpg.dropna(subset=['horsepower'], axis=0, inplace=True)
mpg.horsepower = mpg.horsepower.astype('float')

mpg.info()


# EDA
sns.pairplot(mpg)
plt.show()