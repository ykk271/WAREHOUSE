# https://www.kaggle.com/c/bike-sharing-demand

# 라이브러리
import numpy as np 
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import missingno as msno

dataPath = 'D:/GIT/kaggle data/bike-sharing-demand/'
train = pd.read_csv(dataPath+'train.csv', parse_dates=['datetime'])
test = pd.read_csv(dataPath+'test.csv', parse_dates=['datetime'])

train.shape
train.head()
train.info() # 결측치 없음
test.info() # 결측치 없음

'''
datetime - hourly date + timestamp  
season -  1 = spring, 2 = summer, 3 = fall, 4 = winter 
holiday - whether the day is considered a holiday
workingday - whether the day is neither a weekend nor holiday
weather - 1: Clear, Few clouds, Partly cloudy, Partly cloudy
2: Mist + Cloudy, Mist + Broken clouds, Mist + Few clouds, Mist
3: Light Snow, Light Rain + Thunderstorm + Scattered clouds, Light Rain + Scattered clouds
4: Heavy Rain + Ice Pallets + Thunderstorm + Mist, Snow + Fog 
temp - temperature in Celsius
atemp - "feels like" temperature in Celsius
humidity - relative humidity
windspeed - wind speed
casual - number of non-registered user rentals initiated
registered - number of registered user rentals initiated
count - number of total rentals
'''


train.datetime              # splite 
train.season.unique()       # category
train.holiday.unique()      # don't touch
train.workingday.unique()   # remove
train.weather.unique()      # category
train.temp.describe()       # num
train.atemp.describe()      # num
train.humidity.describe()   # num
train.windspeed.describe()  # num
train.casual                # Not in the test
train.registered            # Not in the test

tmp = train.datetime.dt.minute
tmp.unique()
tmp = train.datetime.dt.second
tmp.unique()
# minute, second data 없음

# 데이터 추가
train['dayofweek'] = train['datetime'].dt.dayofweek
train['dayofweek'].value_counts()
train['hour'] = train.datetime.dt.hour
train['year'] = train.datetime.dt.year
train['month'] = train.datetime.dt.month
train['day'] = train.datetime.dt.day
train.info()

test['dayofweek'] = test['datetime'].dt.dayofweek
test['dayofweek'].value_counts()
test['hour'] = test.datetime.dt.hour
test['year'] = test.datetime.dt.year
test['month'] = test.datetime.dt.month
test['day'] = test.datetime.dt.day
test.info()

# 데이터 시각화
plt.subplot(2,2,1)
sns.barplot(data=train, x='year', y='count')
plt.subplot(2,2,2)
sns.barplot(data=train, x='month', y='count')
plt.subplot(2,2,3)
sns.barplot(data=train, x='day', y='count')
plt.subplot(2,2,4)
sns.barplot(data=train, x='hour', y='count')
plt.show()
train
train['year'].value_counts()
# 년도별 데이터수는 비슷한데 2012년에 더 많이 빌렸네 
# 여름에 대여량 많음
# day는 19일까지밖에 없군?
# day는 큰 특징 안보임
# 출퇴근시간이 대여량 많음.

plt.subplot(2,2,1)
sns.boxplot(data=train, x='workingday', y='count')
plt.subplot(2,2,2)
sns.boxplot(data=train, x='holiday', y='count')
plt.subplot(2,2,3)
sns.boxplot(data=train, x='weather', y='count')
plt.subplot(2,2,4)
sns.boxplot(data=train, x='season', y='count')
plt.show()
# workingday와 holiday는 비슷하지만 완전 반대는 아니군??
# 근무일 여부에 따라서는 큰 차이 없어보임
train['weather'].value_counts()

plt.subplot(2,2,1)
sns.pointplot(data=train, x='hour', y='count')
plt.subplot(2,2,2)
sns.pointplot(data=train, x='hour', y='count', hue = 'workingday')
plt.subplot(2,2,3)
sns.pointplot(data=train, x='hour', y='count', hue = 'dayofweek')
plt.show()
# 출퇴근 시간이 많아보이지만 휴일엔 오후가 많음

plt.subplot(2,2,1)
sns.scatterplot(data=train, x='temp', y='count')
plt.subplot(2,2,2)
sns.scatterplot(data=train, x='atemp', y='count')
plt.subplot(2,2,3)
sns.scatterplot(data=train, x='humidity', y='count')
plt.subplot(2,2,4)
sns.scatterplot(data=train, x='windspeed', y='count')
plt.show()

# num data 상관관계
corrMat = train[['temp', 'atemp', 'humidity', 'windspeed', 'count']]
corrMat = corrMat.corr()
print(corrMat)
# 상관도 높은게 안보임 >> 다 버리자

# 이상치 제거
X = [1] * len(train)
plt.subplot(1,2,1)
sns.boxplot(data=train, x=X, y=train['count'])
plt.subplot(1,2,2)
plt.violinplot(train['count'])
plt.show()
# 0쪽 데이터를 제거하고 싶은데 IQR로는 아래쪽 데이터를 감지 못하므로
# ESD 사용
lower_limit = train['count'].mean() - (train['count'].std()*3)
upper_limit = train['count'].mean() + (train['count'].std()*3)
train_out_index = train['count'][ (train['count'] < lower_limit) | (train['count'] > upper_limit) ].index

train_out = train.drop(train_out_index, axis = 0)
train_out.shape

train_out.info()

X = [1] * len(train_out)
plt.subplot(1,2,1)
sns.boxplot(data=train_out, x=X, y=train_out['count'])
plt.subplot(1,2,2)
plt.violinplot(train_out['count'])
plt.show()


# feature selection
feature_name = ['year', 'month', 'hour', 'holiday']
categorical_feature_name = ['year', 'month', 'hour']

train_x = train_out[feature_name]
train_y = train_out['count']
test_x = test[feature_name]

# cateogorical
categorical_feature_name = ['year', 'month', 'hour']
for var in categorical_feature_name:
    train_x[var] = train_x[var].astype("category")
    test_x[var] = test_x[var].astype("category")

train_x.info()
test_x.info()

# test에도 2011과 2012만 있군
test['year'].value_counts()

# dummy
train_x = pd.get_dummies(train_x, columns=categorical_feature_name)
test_x = pd.get_dummies(test_x, columns=categorical_feature_name)

train_x.info()
test_x.info()

train_x.shape
train_y.shape



# 평가도구 (RMSLE)
# 과소평가보다 과대평가에 패널티를 줌
# 0에 가까울수록 좋음
def rmsle(y, y_,convertExp=True):
    if convertExp:
        y = np.exp(y), 
        y_ = np.exp(y_)
    log1 = np.nan_to_num(np.array([np.log(v + 1) for v in y]))
    log2 = np.nan_to_num(np.array([np.log(v + 1) for v in y_]))
    calc = (log1 - log2) ** 2
    return np.sqrt(np.mean(calc))

from sklearn.metrics import make_scorer
rmsle_score = make_scorer(rmsle)

# Cross Validation
from sklearn.model_selection import KFold
from sklearn.model_selection import cross_val_score

k_fold = KFold(n_splits=10, shuffle=True, random_state=271)

# RandomForest
from sklearn.ensemble import RandomForestRegressor
model = RandomForestRegressor(n_estimators=120,
                              n_jobs=-1,
                              random_state=271)


# Train
model.fit(train_x,train_y)

score = cross_val_score(model, train_x, train_y, cv=k_fold, n_jobs=-1, scoring=rmsle_score)

score

predictions = model.predict(test_x)
predictions.shape

sns.distplot(predictions)
plt.show()

# 제출
submission = pd.DataFrame({
        "datetime": test["datetime"],
        "count": predictions
    })

submission.to_csv('bike_submission.csv', index=False)