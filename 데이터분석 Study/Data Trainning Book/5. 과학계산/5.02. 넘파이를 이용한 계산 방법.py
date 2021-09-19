import numpy as np
import numpy.random as random
import scipy as sp


sample_array = np.arange(10)
print('sample_array:', sample_array)

# 슬라이싱
sample_slicing = sample_array[0:5]
print('sample_slicing:', sample_slicing)

# 원소 변경
sample_slicing[0:3] = 10
print('sample_slicing:', sample_slicing)

# 카피
sample_copy = np.copy(sample_array)
print('sample_copy:', sample_copy)

# 데이터 생성
sample_names = np.array(['a','b','c','d','e'])
random.seed(0)
data = random.randn(5,5) # 표준 정규분포 무작위 생성
data

sample_names == 'a'
data[sample_names == 'a']


# 조건 제어
cond_data = np.array([True, True, False, False, True])
x_array = np.array([1,2,3,4,5])
y_array = np.array([100,200,300,400,500])
print(np.where(cond_data,x_array,y_array))


# 연습문제 5-1
data[sample_names == 'b']

# 연습문제 5-2
data[sample_names != 'c']

# 연습문제 5-3
x_array = np.array([1,2,3,4,5])
y_array = np.array([6,7,8,9,10])
cond_data = np.array([False, False, True, True, False])
print(np.where(cond_data,x_array,y_array))

# 중복 삭제
cond_data = np.array([False, False, True, True, False])
np.unique(cond_data)

# 범용 함수
sample_data = np.arange(10)
sample_data
np.sqrt(sample_data)
np.exp(sample_data)

# 최소, 최대, 평균, 합계
sample_data = np.arange(1,101).reshape(10,10)
sample_data

sample_data.min()
sample_data.max()
sample_data.mean()
sample_data.sum()

# 진리값 판정
cond_data = np.array([False, False, True, True, False])
cond_data.any() # 하나라도 True ?
cond_data.all() # 전부 True ?
(sample_data > 50).sum() # 50 이상은 몇개?

# 대각성분
np.diag(sample_data) # 대각성분
np.trace(sample_data) # 대각성분 합
np.diag(sample_data).sum()

# 연습문제 5-4
sample_data2 = np.arange(16).reshape(4,4)
np.sqrt(sample_data2)

# 연습문제 5-5
sample_data2.min()
sample_data2.max()
sample_data2.mean()
sample_data2.sum()

# 연습문제 5-6
np.trace(sample_data2)

# 재배열
sample_array = np.arange(1,11)
sample_array
sample_array2 = sample_array.reshape(2,5)
sample_array2

# 데이터 결합
sample_array = np.array([[1,2,3],[4,5,6]])
sample_array2 = np.array([[7,8,9],[10,11,12]])
np.concatenate([sample_array,sample_array2],axis=0) # 수직
np.concatenate([sample_array,sample_array2],axis=1) # 수평
np.vstack((sample_array,sample_array2)) # 수직
np.hstack((sample_array,sample_array2)) # 수평

# 배열 분합
sample_array = np.vstack((sample_array,sample_array2)) # 수직
s1, s2, s3 = np.split(sample_array,[1,3])
s1
s2
s3

# 반복 작업
sample = np.array([1,2,3,4,5])
sample.repeat(5)

# 브로드캐스트
# 배열의 크기가 다를 때 자동으로 원소를 복사해 대상 데이터의 크기에 맞추는 기능
sample = np.arange(1,11)
print(sample)
sample + 3

# 연습문제 5-7
sample1 = np.arange(12).reshape(3,4)
sample2 = np.arange(12).reshape(3,4)
result = np.hstack((sample1,sample2))
result

# 연습문제 5-8
result = np.vstack((sample1,sample2))
result

# 연습문제 5-9
sample_list = [1,2,3,4,5]
sample_array = np.array(sample_list)
sample_array + 3

