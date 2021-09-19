# 선형대수 라이브러리
import scipy.linalg as linalg

# 최적화 계산(최소값)용 함수
from scipy.optimize import minimize_scalar

matrix = np.array([[1,-1,-1], [-1,1,-1], [-1,-1,1]])
print('행렬식')
print(linalg.det(matrix))

print('역행렬')
print(linalg.inv(matrix))

invMatrix = matrix

matrix*invMatrix

print(matrix.dot(linalg.inv(matrix)))

# 고유값과 고유벡터
eig_value, eig_vecor = linalg.eig(matrix)

print(eig_value, eig_vecor)

# 방정식 해 구하기
def my_function(x):
    return (x**2 + 2*x + 1)

def my_function(x):
    return (x**2 - 3*x + 2)

# 뉴턴법 임포트
from scipy.optimize import newton
print(newton(my_function, 0))

# 최소값 구하기
print(minimize_scalar(my_function, method='Brent'))

# 연습문제 2-4
A = np.array([[1, 2, 3], [1, 3, 2], [3, 1, 2]])
print(A)
print(linalg.det(A))

# 연습문제 2-5
eig_value, eig_vecor = linalg.eig(A)
print(eig_value, eig_vecor)

# 연습문제 2-6
def ex_function(x):
    return (x**3 + 2*x + 1)
print(newton(ex_function, 0))



