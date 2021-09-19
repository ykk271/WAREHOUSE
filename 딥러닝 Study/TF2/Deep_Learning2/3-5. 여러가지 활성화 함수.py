import numpy as np
import matplotlib.pyplot as plt
import math

# 시그모이드
def sigmoid(x):
    return 1 / (1 + np.exp(-x))

# 하이퍼볼릭 탄젠트 함수
def tanh(x):
    return list(map(lambda x: math.tanh(x), x))

# relu 함수
def relu(x):
    result = []
    for ele in x:
        if(ele <= 0):
            result.append(0)
        else:
            result.append(ele)

    return result

# 함수 그려보기
x = np.linspace(-4, 4, 100)
sig = sigmoid(x)
ta = tanh(x)
re = relu(x)

fig, ax = plt.subplots(1, 3)
plt.subplot(1,3,1)
plt.plot(x, sig)
plt.subplot(1,3,2)
plt.plot(x, ta)
plt.subplot(1,3,3)
plt.plot(x, re)


plt.show()

