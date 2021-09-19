data = 'hello python'
data

data = "Don't you know \"python\""
data

# 값 가져오는 건 가능하지만 인덱스 변경 불가
a = "ABCDEF"
print(a[1:3])


# 튜플 자료형
# 한번 선언된 값을 변경 불가
# 리스트는 대괄호, 튜플은 소괄호()
# 리스트에 비해 공간효율적
# 서로 다른 성질 데이터 묶을 때 사용 (실수-정수)
# 해싱 키값으로 사용 (변경 불가하기 때문에)
a = (1,2,3,4,5,6,7)
a[3]

# 사전자료형
# 키와 값을 데이터로 가지는 자료형
# 키는 변경 불가
data = dict()
data['k1'] = 'v1'
data['k2'] = 'v2'
data
data['k1']
data.keys()
data.values()

# 집합 자료형
# 중복 허용 X, 순서 X
data = set([1,1,2,3])
data
data = {1,1,2,2,3,3}
data
a = set([1,2,3,4,5])
b = set([3,4,5,6,7])
a | b # 합집합
a & b # 교집합
a - b # 차집합

data.add(4)
data
data.update([5,6])
data
data.remove(3)
data

