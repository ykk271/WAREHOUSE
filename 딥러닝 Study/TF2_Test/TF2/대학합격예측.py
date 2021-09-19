import tensorflow as tf
import pandas as pd
import numpy as np

DATA = pd.read_csv('gpascore.csv')
DATA.describe()
DATA.info()

# 결측치 제거
DATA.isnull().sum()
DATA = DATA.dropna()
#DATA = DATA.fillna(100)
DATA.admit 
DATA.isnull().sum()

# 유용한 pd 기능
print(DATA['gpa'].min())
print(DATA['gpa'].count())

# 데이터 전처리
y데이터 = DATA['admit'].values
x데이터 = []

for i, rows in DATA.iterrows():
    x데이터.append([rows['gre'], rows['gpa'], rows['rank']])


#print(x데이터)

#exit()

model = tf.keras.models.Sequential([
    tf.keras.layers.Dense(64, activation= 'tanh'),
    tf.keras.layers.Dense(128, activation= 'tanh'),
    tf.keras.layers.Dense(1, activation= 'sigmoid'),     
    ])

model.compile(optimizer='adam', loss='binary_crossentropy', metrics=['accuracy'])
# binary_crossentropy 0/1 확률 분류 문제

# 리스트 -> numpy array
model.fit(np.array(x데이터), np.array(y데이터), epochs = 100)

#예측
GRE = 800
GPA = 3.6
RANK = 5

model.predict([[GRE, GPA, RANK]])
