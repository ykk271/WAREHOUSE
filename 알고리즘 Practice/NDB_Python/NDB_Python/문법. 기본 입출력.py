n = int(input())

data = list(map(int, input().split()))
#data = input().split()
#data = list(map(int,data))

print(n)
print(data)

# 빠르게 입력받기
# data = sys.stdin.readline().rstrip()

a = 1
b = 2
print(a, b)
print(1, end = " ")
print(2, end = ". ")

answer = 7
print("정답은 " + str(answer) + "입니다. ")

# f-string
answer = 7
print(f"정답은 {answer}입니다.")

