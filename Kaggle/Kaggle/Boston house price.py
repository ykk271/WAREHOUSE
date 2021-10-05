# https://www.kaggle.com/vikrishnan/boston-house-prices

# 라이브러리
import numpy as np 
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import missingno as msno

import tensorflow as tf

dataPath = 'D:/GIT/kaggle data/'
dataName = 'housing.csv'

df = pd.read_csv(dataPath+dataName, header = None, delim_whitespace=True)
df
df.columns = ['CRIM','ZN','INDUS','CHAS','NOX','RM','AGE','DIS','RAD','TAX','PTRATIO','B', 'LSTAT','MEDV']
df.head()
df.shape
df.info()

df_x = df[['CRIM','ZN','INDUS','CHAS','NOX','RM','AGE','DIS','RAD','TAX','PTRATIO','B', 'LSTAT']]
df_y = df[['MEDV']]
df_x.shape
df_y.shape

model_x = tf.keras.layers.Input(shape=[13])
model_y = tf.keras.layers.Dense(1)(model_x)
model = tf.keras.models.Model(model_x, model_y)
model.compile(loss='mse')

model.fit(df_x, df_y, epochs=500)

model.predict(df_x[0:5])
df_y[0:5]

model.get_weights()

