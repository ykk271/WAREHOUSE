# 균등분포
# 주사위를 1000회 던짐
dice_data = np.array([1, 2, 3, 4, 5, 6])
calc_steps = 10000
dice_rolls = np.random.choice(dice_data, calc_steps)

prob_data = np.array([])
for i in range(1, 7):
    p = len(dice_rolls[dice_rolls==i]) / calc_steps
    prob_data = np.append(prob_data, len(dice_rolls[dice_rolls==i]) / calc_steps)

plt.bar(dice_data, prob_data)
plt.grid(True)
plt.show()

# 베르누이 분포
prob_be_data = np.array([])
calc_steps = 10000
coin_data = np.array([0, 1])
coin_rolls = np.random.choice(coin_data, calc_steps)

for i in np.unique(coin_data):
    p = len(coin_data[coin_data==i]) / len(coin_data)
    print(i, '가 나올 확률', p)
    prob_be_data = np.append(prob_be_data, p)

plt.bar([0, 1], prob_be_data, align = 'center')
plt.xticks([0, 1], ['head', 'tail'])
plt.grid(True)
plt.show()

# 이항분포
# 독립적인 베르누이 시행을 n회 반복한 것
np.random.seed(0)
x = np.random.binomial(30, 0.5, 1000) # n회 시행하는 동안 확률 p로 발생하는 사건의 횟수
plt.hist(x)
plt.show()

# 푸아송 분포
# 발생 가능성이 작은 사건의 확률 분포
x = np.random.poisson(7, 1000) 
plt.hist(x)
plt.show()

# 정규분포와 로그 정규분포
# (평균, 표준편차, 샘플 수)
x = np.random.normal(5, 10, 10000)
plt.hist(x)
plt.grid(True)
plt.show()
x = np.random.lognormal(30, 0.4, 10000)
plt.hist(x)
plt.grid(True)
plt.show()


# 커널 밀도함수
import requests, zipfile
from io import StringIO
import io
url  = 'http://archive.ics.uci.edu/ml/machine-learning-databases/00356/student.zip'
r = requests.get(url, stream = True)
z = zipfile.ZipFile(io.BytesIO(r.content))
z.extractall()
student_data_math = pd.read_csv('student-mat.csv', sep=';')
student_data_math.absences.plot(kind='kde', style='k--')
student_data_math.absences.hist(density=True)
plt.show()

# 연습문제
x = np.random.normal(0, 1, 10000)
plt.hist(x)
plt.grid(True)
plt.show()

student_data_math = pd.read_csv('student-mat.csv', sep=';')
student_data_math.G1.plot(kind='kde', style='k--')
student_data_math.G1.hist(density=True)
plt.show()


