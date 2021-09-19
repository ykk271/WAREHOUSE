# 배열 생성
data = np.array([1, 2, 3, 4, 8, 9, 5, 6, 7])
data
data.dtype

print('차원수:',data.ndim)
print('원소수:',data.size)

# 모든 원소에 대해 계산
data*2
data/2

# 정렬
data.sort()
print('정렬 후:', data)

# 내림차순 정렬
data[::-1].sort()
print('정렬 후:', data)

data.min()
data.max()
data.sum()
data.cumsum() # 누적 합계

## RANDOM
import numpy.random as random
random.seed(0)

# 평균 0, 분산 1 난수 10개 생성
rnd_data = random.randn(10)
print(rnd_data)

# 무작위 추출
data = np.array([9, 2, 3, 4, 5, 10, 6, 7, 8, 1, 5])
print(random.choice(data, 5)) # 중복 있음 > 복원 추출 
print(random.choice(data, 5, replace = False)) # 중복 없음 > 비복원 추출

np.arange(9)
array1 = np.arange(9).reshape(3, 3)
print(array1)

array1[0,:] # 행
array1[:,0]

array2 = np.arange(9,18).reshape(3,3)
print(array2)

# 행렬 곱셈
np.dot(array1, array2)

array1 * array2

print(np.zeros((2,3), dtype = np.int64))
print(np.ones((2,3), dtype = np.float64))

