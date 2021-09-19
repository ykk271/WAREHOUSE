# 현재 상황에서 당장 좋은 것만 고르는 방법
# 문제에서 요구하는 최적 해를 고를 수 있는 지 검토 과정 필요

# 정당성 분석
# 거스름 돈: 큰 단위가 항상 작은 단위의 배수이므로


# 거스름 돈
n = 1260
count = 0

array = [500, 100, 50, 10]

for coin in array:
    count += n // coin # 해당 화폐로 거슬러 줄 수 있는 동전 수 
    n %= coin

print(coin)
# 시간 복잡도 -> 코인 개수



# 1이 될 때까지 (N과 K가 주어짐)
# 1. N에서 1을 빼거나
# 1. N에서 K로 나눔
# K가 2이상이기만 하면 자명함
n = 25
k = 3
cnt = 0
while n != 1:
    if n % k != 0:
        n = n - 1
        cnt += 1
    elif n % k == 0:
        n = n // k
        cnt += 1            
print(cnt)

# 더 빠른 방법
# 로그시간 복잡도
n = 25
k = 3
result = 0
while True:
    target = (n//k)*k
    result += n - target
    n = target 
    if n < k:
        break
    result += 1
    n //= k
result += n-1
print(result)




# 곱하기 혹은 더하기
a = '02984'
result = int(a[0])

for i in range(1, len(a)):    
    if int(a[i]) <= 0 and result <= 0:
        result *= int(a[i])
    else:
        result += int(a[i])
print(result)
    


# 모험가 길드
N = 5
a = [2, 3, 1, 2, 2]
a.sort()
cnt = 0
humanNum = 1

for i in a:
    if a[i] <= humanNum:
        cnt += 1
        humanNum = 1        
    else:
        humanNum += 1

print(cnt)







