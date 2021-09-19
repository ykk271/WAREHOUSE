# 보간법
x = np.linspace(0, 10, num = 11, endpoint = True) # 등차수열
y = np.cos(-x**2/5.0)
plt.plot(x,y,'o')
plt.grid(True)
plt.show()

# 1차 보간
from scipy import interpolate
f = interpolate.interp1d(x, y, 'linear')
plt.plot(x,f(x),'-')
plt.show()

# 스플라인 3차 보간
f2 = interpolate.interp1d(x, y, 'cubic')
xnew = np.linspace(0, 10, num = 30, endpoint=True) # x값 촘촘하게

plt.plot(x, y, 'o', xnew, f(xnew), '-', xnew, f2(xnew), '--')
plt.legend(['data', 'linear', 'cubic'], loc = 'best')
plt.show()

# 연습문제 5-10
x = np.linspace(0, 10, num = 100, endpoint=True)
y = np.sin(x**2/5.0)
plt.plot(x, y, 'o')
f = interpolate.interp1d(x, y, 'linear')
plt.plot(x, f(x), '-')
plt.show()

# 연습문제 5-11
f2 = interpolate.interp1d(x, y, 'quadratic')

# 연습문제 5-12
f3 = interpolate.interp1d(x, y, 'cubic')

plt.plot(x, y, 'o')
plt.plot(x, f(x), '-')
plt.plot(x, f2(x), '-')
plt.plot(x, f3(x), '-')
plt.show()

# 선형대수: 행렬 분해 ==> Skip
# 특이값 분해
A = np.array([[1,2,3,4,5], [6,7,8,9,10]])
U, s, Vs = sp.linalg.svd(A)
m, n = A.shape
S = sp.linalg.diagsvd(s, m, n)
print('')


# 적분과 미분방정식
from scipy import integrate
import math

def calcPi(x):
    return 4/(1+x**2)

# 계산 결과와 추정 오차
integrate.quad(calcPi, 0, 1)

# 람다표현식 이용
integrate.quad(lambda x: 4/(1+x**2), 0, 1)


# sin 함수 구하는 예
from numpy import sin
integrate.quad(sin, 0, math.pi/1)

# 이중적분
def I(n):
    retrun integrate.dblquad()