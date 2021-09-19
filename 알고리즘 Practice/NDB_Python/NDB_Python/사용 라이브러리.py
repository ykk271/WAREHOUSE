# itertools: 순열과 조합
# heapq: 힙, 우선순위 큐
# bisect: 이진 탐색
# collections: 덱, 카운터
# math: 팩토리얼, 제곱근 ...

result = eval("(3+5)*10")
result

result = sorted([66,5,67,1,23,8])
result

# 순열과 조합
# 순열: 순서 상관 있게 뽑음
# 조합: 순서 상관 없게 뽑음
from itertools import combinations
data = ['A', 'B', 'C', 'D', 'E', 'F']
result = list(combinations(data,2))
result

# Counter
from collections import Counter
counter = Counter(['1', '2', '3', '3', '4'])
print(counter['1'])
counter

# 최대 공약수와 최소 공배수
import math
def lcm(a, b):
    return a * b

a = 21
b = 210
print(math.gcd(21, 14))
print(lcm(21, 14))