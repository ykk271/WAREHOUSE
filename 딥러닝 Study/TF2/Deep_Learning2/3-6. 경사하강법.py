import numpy as np
import matplotlib.pyplot as plt

lr_list = [0.001, 0.1, 0.5, 0.9]

def get_derivative(lr):

    w_old = 2
    derivative = [w_old]
    
    y = [w_old ** 2] # 손실함수를 y=x^2로 정의

    for i in range(1, 10):
        # 해당 위치 미분
        dev_value = w_old * 2

        # 가중치 업데이트
        w_new = w_old - lr * dev_value
        w_old = w_new

        derivative.append(w_old)
        y.append(w_old ** 2)

    return derivative, y

x = np.linspace(-2, 2 , 50)
x_square = [i ** 2 for i in x]

fig = plt.figure(figsize = (12, 7))

for i, lr in enumerate(lr_list):
    derivative, y = get_derivative(lr)
    ax = fig.add_subplot(2, 2, i + 1)
    ax.scatter(derivative, y, color = 'red')
    ax.plot(x, x_square)
    ax.title.set_text('lr = ' + str(lr))

plt.show()




