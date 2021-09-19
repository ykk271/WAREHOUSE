import tensorflow as tf
tf.random.set_seed(777)

import numpy as np
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense
from tensorflow.keras.optimizers import SGD
from tensorflow.keras.losses import mse

#데이터 준비
x = np.array([[0, 0], [1, 0], [0, 1], [1, 1]])
y = np.array([[0], [1], [1], [1]])

# 단순 퍼셉트론 모델 구성
model = Sequential()
model.add(Dense(1, input_shape = (2, ), activation = 'linear'))

model.compile(optimizer = SGD(),
              loss = mse,
              metrics = ['acc']) #list 형태로 평가지표 전달

#학습시키기
model.fit(x, y, epochs = 500)

model.get_weights()


