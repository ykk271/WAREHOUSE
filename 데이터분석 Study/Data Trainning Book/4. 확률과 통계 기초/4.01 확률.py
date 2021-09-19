# 수학적 확률
# 주사위 던지기 결괏값을 배열로 저장
dice_data = np.array([1,2,3,4,5,6])
# 무작위 1개
print('숫자 하나만 무작위 추출:', np.random.choice(dice_data, 1))

# 주사위를 1000회 던짐
calc_steps = 1000
dice_rolls = np.random.choice(dice_data, calc_steps)
# 각 숫자가 추출회는 횟수의 비율 계산
for i in range(1, 7):
    p = len(dice_rolls[dice_rolls==i]) / calc_steps
    print(i, '가 나올 확률', p)

# 베이즈 정리

# 연습문제 4-1
coin_data = np.array([0,1])
calc_steps = 1000
dice_rolls = np.random.choice(coin_data, calc_steps)
for i in range(1, 3):
    p = len(dice_rolls[dice_rolls==i]) / calc_steps
    print(i, '가 나올 확률', p)