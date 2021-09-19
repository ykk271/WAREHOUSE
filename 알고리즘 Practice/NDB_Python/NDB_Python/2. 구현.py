# 풀이를 떠올리는 것은 쉽지만 소스코드로 옮기기 어려운 문제

# 상하좌우 문제
# 시뮬레이션 유형, 구현 유형, 완전 탐색 유형이라고도 불림
N = 5
a = ['R', 'R', 'R', 'U', 'D', 'D']
X = 1
Y = 1

for i in a:
    if i == 'R' and Y < 5:
        Y += 1
    if i == 'L' and Y > 1:
        Y -= 1
    if i == 'U' and X > 1:
        X -= 1
    if i == 'D' and X < 5:
        X += 1

X, Y


# 시각 문제
# N시 59분 59초까지 3이 들어간 횟수
N = 5
cnt = 0

for i in range(N + 1):
    for j in range(60):
        for k in range(60):
            if '3' in str(i) + str(j) + str(k):
                cnt += 1

cnt


# 왕실의 나이트
input_data = 'c2'
row = int(input_data[1])
column = int(ord(input_data[0]) - int(ord('a')) + 1)

steps = [(-2,-1), (-1, -2), (1, -2), (2, -1),
         (2, 1), (1, 2), (-1, 2), (-2, 1)]

cnt = 0

for step in steps:
    next_row = row + step[0]
    next_column = row + step[1]

    if 1 <= next_row <= 8 and 1 <= next_column <= 8:
        cnt += 1

cnt


# 문자열 재정렬
inputData = 'K1KA5CB7'

alphabet = []
num = 0

for i in range(len(inputData)):  

    if  65 <= int(ord(inputData[i])) <= 90:
        alphabet.append(inputData[i])
    else:
        num += int(inputData[i])
alphabet.sort()

if num != 0:
    alphabet.append(str(num))

print(''.join(alphabet)) # 리스트를 문자열로 변환하여 출력

