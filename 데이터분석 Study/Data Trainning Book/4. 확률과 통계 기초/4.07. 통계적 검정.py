student_data_por = pd.read_csv('student-por.csv', sep=';')
student_data_math = pd.read_csv('student-math.csv', sep=';')

student_data = pd.merge(student_data_math,
                       student_data_por,
                       on = ['school', 'sex', 'age', 'address', 'famsize', 'Pstatus', 'Medu', 'Fedu', 'Mjob', 'Fjob',
                             'reason', 'nursery', 'internet'],
                       suffixes = ('_math', '_por'))
student_data.info()

print('G1 수학 성적 평균:', student_data.G1_math.mean())
print('G1 포르투칼 성적 평균:', student_data.G1_por.mean())

from scipy import stats
t, p = stats.ttest_rel(student_data.G1_math, student_data.G1_por)
print('p값 =', p


# 연습문제
t, p = stats.ttest_rel(student_data.G2_math, student_data.G2_por)
print('p값 =', p)
t, p = stats.ttest_rel(student_data.G3_math, student_data.G3_por)
print('p값 =', p)

t, p = stats.ttest_rel(student_data.absences_math, student_data.absences_por)
print('p값 =', p)

t, p = stats.ttest_rel(student_data.studytime_math, student_data.studytime_por)
print('p값 =', p)

