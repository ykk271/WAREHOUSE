# 라이브러리
import numpy as np 
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import missingno as msno

dataPath = 'D:/GIT/kaggle data/titanic/'


train = pd.read_csv(dataPath+'train.csv')
test = pd.read_csv(dataPath+'test.csv')


'''
Variable	Definition	            Key
survival	Survival	            0 = No, 1 = Yes
pclass	    Ticket class	        1 = 1st, 2 = 2nd, 3 = 3rd
sex	        Sex	
Age	        Age in years	
sibsp	    # of siblings / spouses aboard the Titanic	
parch	    # of parents / children aboard the Titanic	
ticket	    Ticket number	
fare	    Passenger fare	
cabin	    Cabin number	
embarked	Port of Embarkation	    C = Cherbourg, Q = Queenstown, S = Southampton
'''

train.shape
train.columns
train.dtypes
train.head()
train.describe()
train.info()

train['Pclass'].value_counts()
train['Sex'].value_counts()
train['Age'].value_counts()
train['SibSp'].value_counts()
train['Parch'].value_counts()
train['Ticket'].value_counts()
train['Fare'].value_counts()
train['Cabin'].value_counts()
train['Embarked'].value_counts()


'''	
Pclass	   >> category
Sex	       >> category
Age	       >> normalization
SibSp	   >> normalization
Parch	   >> normalization
Ticket	   >> remove
Fare	   >> normalization
Cabin	   >> remove
Embarked   >> category
'''


# 결측치 확인
train.shape
train.isna().sum()
test.isna().sum()

# Cabin 제거 (결측치가 너무 많음)
train.drop(['Cabin'], axis = 1, inplace = True)
test.drop(['Cabin'], axis = 1, inplace = True)
train.columns
test.columns


# 결측치제거
train2 = train.dropna(axis=0)
train2.shape

# 결측치 평균으로 채우기
test["Age"].fillna(test["Age"].mean() , inplace=True)
test["Fare"].fillna(test["Fare"].mean() , inplace=True)


# 생존률
plt.subplot(2,2,1)
tmp = train[train['Survived'] == 1]['Pclass'].value_counts()/train['Pclass'].value_counts()*100
tmp.plot(kind = 'bar')
plt.title('Pclass')

plt.subplot(2,2,2)
tmp = train[train['Survived'] == 1]['Sex'].value_counts()/train['Sex'].value_counts()*100
tmp.plot(kind = 'bar')
plt.title('Sex')

plt.subplot(2,2,3)
tmp = train[train['Survived'] == 1]['Embarked'].value_counts()/train['Embarked'].value_counts()*100
tmp.plot(kind = 'bar')
plt.title('Embarked')

plt.show()

# to category
train2['Sex'] = train2['Sex'].astype('category')
train2['Embarked'] = train2['Embarked'].astype('category')

test['Sex'] = test['Sex'].astype('category')
test['Embarked'] = test['Embarked'].astype('category')

train2 = pd.get_dummies(train2, columns=['Sex'])
train2 = pd.get_dummies(train2, columns=['Embarked'])

test = pd.get_dummies(test, columns=['Sex'])
test = pd.get_dummies(test, columns=['Embarked'])

# data remove
train2.drop(['Ticket'], axis = 1, inplace = True)
train2.drop(['Name'], axis = 1, inplace = True)
train2.drop(['PassengerId'], axis = 1, inplace = True)
train2.columns

test.drop(['Ticket'], axis = 1, inplace = True)
test.drop(['Name'], axis = 1, inplace = True)
test.columns

# 이상치 확인
plt.subplot(2,2,1)
sns.boxplot(data = train2['Age'])
plt.title('Age')

plt.subplot(2,2,2)
sns.boxplot(data = train2['SibSp'])
plt.title('SibSp')

plt.subplot(2,2,3)
sns.boxplot(data = train2['Parch'])
plt.title('Parch')

plt.subplot(2,2,4)
sns.boxplot(data = train2['Fare'])
plt.title('Fare')

plt.show()


plt.subplot(2,2,1)
sns.boxplot(data = test['Age'])
plt.title('Age')

plt.subplot(2,2,2)
sns.boxplot(data = test['SibSp'])
plt.title('SibSp')

plt.subplot(2,2,3)
sns.boxplot(data = test['Parch'])
plt.title('Parch')

plt.subplot(2,2,4)
sns.boxplot(data = test['Fare'])
plt.title('Fare')

plt.show()



# normalization
def minmax_norm(x):
    return (x - x.min()) / ( x.max() - x.min())

train3 = train2.copy()

train3['Age'] = minmax_norm(train3['Age'])
train3['SibSp'] = minmax_norm(train3['SibSp'])
train3['Parch'] = minmax_norm(train3['Parch'])
train3['Fare'] = minmax_norm(train3['Fare'])

test['Age'] = minmax_norm(test['Age'])
test['SibSp'] = minmax_norm(test['SibSp'])
test['Parch'] = minmax_norm(test['Parch'])
test['Fare'] = minmax_norm(test['Fare'])

# 독립변수 종속변수 분리
y = train3['Survived']
x = train3.drop(['Survived'], axis = 1)

# 훈련용 테스트 분리
from sklearn.model_selection import train_test_split
x_train, x_val, y_train, y_val = train_test_split(x, y,
                                                  random_state=777,
                                                  test_size=0.3,
                                                  shuffle=False)         

x_test = test.drop(['PassengerId'], axis = 1)

x_train.shape
y_train.shape
x_val.shape
y_val.shape

# 훈련
from sklearn.linear_model import LogisticRegression
from sklearn.svm import SVC, LinearSVC
from sklearn.ensemble import RandomForestClassifier
from sklearn.neighbors import KNeighborsClassifier

# Logistic Regression
logreg = LogisticRegression()
logreg.fit(x_train, y_train)
Y_pred = logreg.predict(x_val)
logreg.score(x_val, y_val)

# SVM
svc = SVC()
svc.fit(x_train, y_train)
Y_pred = svc.predict(x_val)
svc.score(x_val, y_val)

# Random Forests
random_forest = RandomForestClassifier(n_estimators=120)
random_forest.fit(x_train, y_train)
Y_pred = random_forest.predict(x_val)
random_forest.score(x_val, y_val)

knn = KNeighborsClassifier(n_neighbors = 3)
knn.fit(x_train, y_train)
Y_pred = knn.predict(x_val)
knn.score(x_val, y_val)

# 제출파일 만들기
random_forest = RandomForestClassifier(n_estimators=100)
random_forest.fit(x_train, y_train)
Y_pred = random_forest.predict(x_test)
random_forest.score(x_val, y_val)

submission = pd.DataFrame({
        "PassengerId": test["PassengerId"],
        "Survived": Y_pred
    })

submission.to_csv('titanic_submission.csv', index=False)

