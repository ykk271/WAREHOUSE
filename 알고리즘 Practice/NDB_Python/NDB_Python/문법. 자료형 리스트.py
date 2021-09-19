# 자료형

# 양의 정수
a = 1000
print(a)

# 음의 정수
a = -7
print(a)

# 0
a = 0
print(a)

# 실수형(Real Number)
a = .7; b = 5.
print(a)
print(b)

# 지수 표현 방식(실수형)
a = 1e9 #무한대
print(a)
a = 1e-3
print(a)
a = int(1e9) # 지수 표현 정수 변환
print(a)

# 실수형은 오차가 발생할 수 있음
a = 0.3 + 0.6
if a == 0.9:
    print(True)
else:
    print(False)

# 해결 방법
a = 0.3 + 0.6
if round(a, 1) == 0.9:
    print(True)
else:
    print(False)


# 수 자료형 연산
# 파이썬에서 나누기 연산자(/)는 실수형 반환


# 리스트 자료형 (C++의 vector)
# 리스트 초기화 a = []
a = [1,2,3,4,5]
print(a)
print(a[3])
#크기가 n이고 모든 값이 0인 1차원 리스트 초기화
n = 10
a = [0] * n
print(a)

a[4] = 4
print(a)
a[-1] = 5
print(a)

a = [1,2,3,4,5,6,7,8,9,10]
print(a[1:5])

# 리스트 컴프리헨션
array = [i+1 for i in range(10)]
print(array)
array = [i for i in range(20) if i % 2 == 1]
print(array)

array = []
for i in range(20):
    if i % 2 == 1:
        array.append(i)
print(array)

# 2차원 리스트 초기화
m = 3
n = 5
array = [[0]*m for _ in range(n)] # _반복에 대한 변수 무시
print(array)

array[1][1] = 5
print(array)

# 리스트 관련 기타 메서드
# X.append() 삽입
# X.sort() 오름차순 정렬
# X.sort(reverse = True) 내림차순 정렬 
# insert(삽입할 위치 인덱스, 삽입 값) 특정 인덱스 위치에 원소 삽입
# X.count(특정 값) 특정한 값을 가지는 데이터 개수 count
# X.remove(특정 값) 특정한 값을 갖는 원소 제거, 원소가 여러 개면 하나만 제거

# 특정 값 가지는 원소 모두 제거
a = [1,2,3,4,5,5,5,5,6,7,7,7,7]
remove_set = {3, 5}
result = [i for i in a if i not in remove_set]
result

