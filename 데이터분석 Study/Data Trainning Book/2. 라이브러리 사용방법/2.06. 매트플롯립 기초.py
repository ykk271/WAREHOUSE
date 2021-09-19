import matplotlib as mpl
import seaborn as sns

import matplotlib.pyplot as plt

# 산점도
random.seed(0)

x = np.random.randn(30)

y = np.sin(x) + np.random.randn(30)

plt.figure(figsize = (10, 6))
plt.scatter(x, y)
plt.titie('Title Name')
plt.xlabel('X')
plt.ylabel('Y')
plt.grid(True)
plt.show()

# 연속형 곡선
# 시드 값 지정
np.random.seed(0)
# 데이터 범위
numpy_data_x = np.arange(1000)
# 난수 발생과 누적 합계
numpy_data_y = np.random.randn(1000).cumsum()

# 그래프 크기 지정
plt.figure(figsize = (10, 6))
plt.plot(numpy_data_x, numpy_data_y, label='Lable')
plt.legend()
plt.xlabel('X')
plt.ylabel('Y')
plt.grid(True)
plt.show()

# 그래프 분할
plt.figure(figsize = (10, 6))
plt.subplot(2,1,1)
x = np.linspace(-10, 10, 100)
plt.plot(x, np.sin(x))

plt.subplot(2,1,2)
y = np.linspace(-10, 10, 100)
plt.plot(y, np.sin(2*y))

plt.grid(True)
plt.show()

# 함수 그래프 그리기
def my_function(x):
    return x**2 + 2 * x + 1

x = np.arange(-10, 10)
plt.figure(figsize=(20,6))
plt.plot(x, my_function(x))
plt.grid(True)
plt.show()

# 히스토그램
random.seed(0)
plt.figure(figsize=(10,3))
plt.hist(np.random.randn(10 ** 5) * 10 + 50, bins = 60, range = (20, 80))
plt.grid(True)
plt.show()

