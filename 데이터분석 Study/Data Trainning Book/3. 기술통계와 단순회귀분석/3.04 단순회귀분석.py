# 산점도
plt.plot(student_data_math['G1'], student_data_math['G3'], 'o')
plt.xlabel('G1 grade')
plt.ylabel('G3 grade')
plt.grid(True)
plt.show()

# 선형회귀분석
from sklearn import linear_model
# 선형회귀 인스턴스 생성
reg = linear_model.LinearRegression()
X = student_data_math.loc[:, ['G1']].values
#X = student_data_math['G1'].values <- 안되네..
Y = student_data_math['G3'].values
reg.fit(X, Y)
print('회귀계수:', reg.coef_)
print('절편:', reg.intercept_)

plt.scatter(X, Y)
plt.xlabel('G1')
plt.ylabel('G3')
plt.plot(X, reg.predict(X))
plt.grid(True)
plt.show()

#결정계수
print('결정계수:', reg.score(X, Y))

# 연습문제 3-4
X = student_data_por.loc[:, ['G1']].values
Y = student_data_por['G3'].values
reg.fit(X, Y)
print('회귀계수:', reg.coef_)
print('절편:', reg.intercept_)

# 연습문제 3-5
plt.scatter(X, Y)
plt.xlabel('G1')
plt.ylabel('G3')
plt.plot(X, reg.predict(X))
plt.grid(True)
plt.show()

# 연습문제 3-6
X = student_data_por.loc[:, ['absences']].values
Y = student_data_por['G3'].values
reg.fit(X, Y)
print('회귀계수:', reg.coef_)
print('절편:', reg.intercept_)

plt.scatter(X, Y)
plt.xlabel('absences')
plt.ylabel('G3')
plt.plot(X, reg.predict(X))
plt.grid(True)
plt.show()

