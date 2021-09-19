# 파이썬에서는 최대 재귀 깊이 초과 시 자동 종료
#def recursive_function():
#    print("재귀 함수 호출.")
#    recursive_function()

#recursive_function()



# 종료 조건
#def recursive_function(i):
#    if i == 100:
#        return
#    print(i, "번째 재귀 함수 호출.")
#    recursive_function(i + 1)

#recursive_function(1)



# 팩토리얼 구현 예제
def factorial(n):
    if n <= 1:
        return 1
    return n * factorial(n - 1)

print(factorial(3))



# 유클리드 호제법
# 최대공약수 구하는 알고리즘
# 두 자연수 A > B에 대하여 A를 B로 나눈 나머지 R
# A와 B의 최대공약수는 B와 R의 최대공약수
def gcd(a, b):
    if a % b == 0:
        return b
    else:
        return gcd(b, a % b)

print(gcd(192, 162))