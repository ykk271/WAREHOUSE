# 라이브러리
import numpy as np 
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import missingno as msno

dataPath = 'D:/GIT/kaggle data/'
dataName = 'london_merged.csv'

df = pd.read_csv(dataPath+dataName, parse_dates=['timestamp'])

'''
"timestamp" - timestamp field for grouping the data
"cnt" - the count of a new bike shares
"t1" - real temperature in C
"t2" - temperature in C "feels like"
"hum" - humidity in percentage
"windspeed" - wind speed in km/h
"weathercode" - category of the weather
"isholiday" - boolean field - 1 holiday / 0 non holiday
"isweekend" - boolean field - 1 if the day is weekend
"season" - category field meteorological seasons: 0-spring ; 1-summer; 2-fall; 3-winter.
'''

df.shape
df.dtypes
df.columns
df.head()
df.describe()
df.info()

# 결측치 확인
df.isna().sum()
msno.matrix(df)
#plt.show()

# 데이터 생성
df['timestamp']
df['year'] = df['timestamp'].dt.year
df['month'] = df['timestamp'].dt.month
df['dayofweek'] = df['timestamp'].dt.dayofweek # 0~6: 요일, 5 6 토 일
df['hour'] = df['timestamp'].dt.hour

# EDA
df['year'].value_counts()
df['month'].value_counts()
df['dayofweek'].value_counts()
df['hour'].value_counts()
df['weather_code'].value_counts()

plt.subplot(2,2,1)
sns.boxplot(df['year'], df['cnt'])
plt.subplot(2,2,2)
sns.boxplot(df['month'], df['cnt']) # 여름이 많음
plt.subplot(2,2,3)
sns.boxplot(df['dayofweek'], df['cnt']) # 평일이 많음
plt.subplot(2,2,4)
sns.boxplot(df['hour'], df['cnt'], palette = 'Set3') # 출퇴근시간이 많음
#plt.show()

sns.barplot(x='weather_code', y='cnt', data=df)
#plt.show()

# preprocessing
# remove outlier
def is_outliers(s):
    lower_limit = s.mean() - (s.std()*3)
    upper_limit = s.mean() + (s.std()*3)
    return ~s.between(lower_limit, upper_limit)

df_out = df[~df.groupby('hour')['cnt'].apply(is_outliers)]

print('이상치 제거 전:',df.shape)
print('이상치 제거 후:',df_out.shape)


# to category
df_out['weather_code'] = df_out['weather_code'].astype('category')
df_out['season'] = df_out['season'].astype('category')
df_out['year'] = df_out['year'].astype('category')
df_out['month'] = df_out['month'].astype('category')
df_out['hour'] = df_out['hour'].astype('category')
df_out['dayofweek'] = df_out['dayofweek'].astype('category')

# dummy 
df_out = pd.get_dummies(df_out, columns=['weather_code'])
df_out = pd.get_dummies(df_out, columns=['season'])
df_out = pd.get_dummies(df_out, columns=['year'])
df_out = pd.get_dummies(df_out, columns=['month'])
df_out = pd.get_dummies(df_out, columns=['hour'])
df_out = pd.get_dummies(df_out, columns=['dayofweek'])

df_out.shape

# 독립변수 종속변수 분리
df_y = df_out['cnt']
df_x = df_out.drop(['timestamp', 'cnt'], axis = 1) # axis = 1: 열 기준으로 버림
df_y.head()

# 훈련용 테스트 분리
from sklearn.model_selection import train_test_split
x_train, x_test, y_train, y_test = train_test_split(df_x, df_y,
                                                    random_state=777,
                                                    test_size=0.3,
                                                    shuffle=False)

x_train.head()
x_test.head()

x_train.shape
x_test.shape
y_train.shape
y_test.shape

# 딥러닝
import keras
from keras.models import Sequential
from keras.layers import Dense
from keras.callbacks import EarlyStopping

#from tensorflow.keras.models import Sequential
#from tensorflow.keras.layers import Dense
#from tensorflow.keras.models import Sequential
#from tensorflow.keras.EarlyStopping import EarlyStopping

model = Sequential()
model.add(Dense(units=128, activation = 'relu', input_dim = 63))
model.add(Dense(units=64, activation = 'relu'))
model.add(Dense(units=32, activation = 'relu'))
model.add(Dense(units=16, activation = 'relu'))
model.add(Dense(units=1, activation = 'linear'))

model.summary()
model.compile(loss = 'mae', optimizer='adam', metrics=['mae'])
early_stopping = EarlyStopping(monitor='loss', patience=5, mode='min')
history = model.fit(x_train, y_train,
                   epochs = 50, batch_size = 1, validation_split = 0.1,
                   callbacks = [early_stopping])

# 머신러닝



