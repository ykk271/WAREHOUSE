# 히스토그램
plt.hist(student_data_math['absences'])
plt.xlabel('absemces')
plt.ylabel('count')
plt.grid(True)
plt.show()

# 평균, 중앙값, 최빈값
print("평균값:", student_data_math['absences'].mean())
print("중앙값:", student_data_math['absences'].median())
print("최빈값:", student_data_math['absences'].mode())

# 분석과 표준편차
# 분산
student_data_math['absences'].var(ddof=0)
# 표준편차
student_data_math['absences'].std(ddof=0)
np.sqrt(student_data_math['absences'].var(ddof=0))

# 요약 통계량과 백분위수
# 4분위범위 (75% 백분위수 값 - 25% 백분위 수 값)
student_data_math['absences'].describe()[6] - student_data_math['absences'].describe()[4]
# 모든 열을 대상으로 요약 통계량 구하기
student_data_math.describe()

# 박스플롯 그래프
plt.boxplot(student_data_math['G1'])
plt.grid(True)
plt.show()

plt.boxplot(student_data_math['absences'])
plt.grid(True)
plt.show()

plt.boxplot([student_data_math['G1'], student_data_math['G2'], student_data_math['G3']])
plt.grid(True)
plt.show()

# 변동계수 (coefficient of variation, CV)
# 표준편차 단위 다른 문제 해결
student_data_math['absences'].std() / student_data_math['absences'].mean()
student_data_math.std() / student_data_math.mean()

# 산점도와 상관계수
plt.plot(student_data_math['G1'], student_data_math['G3'], 'o')
plt.ylabel('G3 grade')
plt.xlabel('G1 grade')
plt.grid(True)
plt.show()

# 공분산
# 두 변수 간의 관계를 나타내는 지표
np.cov(student_data_math['G1'], student_data_math['G3'])
# (1,2), (2,1) -> 공분산
# (1,1) -> G1 분산, (2,2) -> G3 분산

# 상관계수
# 공분산이 스케일과 단위의 의존적인 문제 해결
# 피어슨 상관계수
sp.stats.pearsonr(student_data_math['G1'], student_data_math['G3'])
# 첫번째: 상관계수, 두번쨰: p-value
# 상관행렬
np.corrcoef([student_data_math['G1'], student_data_math['G3']])

# 모든 변수의 히스토그램과 산점도 그리기
sns.pairplot(student_data_math[['Dalc', 'Walc', 'G1', 'G3']])
plt.grid(True)
plt.show()

# 연습문제 3-1
student_data_por = pd.read_csv('student-por.csv', sep=';')
student_data_por.head()
student_data_por.info()
student_data_por.describe()

# 연습문제 3-2
student_data = pd.merge(student_data_math,
                       student_data_por,
                       on = ['school', 'sex', 'age', 'address', 'famsize', 'Pstatus', 'Medu', 'Fedu', 'Mjob', 'Fjob',
                             'reason', 'nursery', 'internet'],
                       suffixes = ('_math', '_por'))
student_data.info()

# 연습문제 3-3
sns.pairplot(student_data[['Medu', 'Fedu', 'G3_math', 'G3_por']])
plt.grid(True)
plt.show()


