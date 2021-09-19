import os
os.environ["CUDA_VISIBLE_DEVICES"] = '0'


import tensorflow as tf
from tensorflow.keras import datasets, layers, models


from tensorflow.keras.datasets import fashion_mnist

(x_train, y_train), (x_test, y_test) = fashion_mnist.load_data()

import matplotlib.pyplot as plt
import numpy as np
np.random.seed(777)

class_names = ['T-shirt/top', 'Trouser', 'Pullover', 'Dress', 'Coat',
               'Sandal', 'Shirt', 'Sneaker', 'Bag', 'Ankle boot']

sample_size = 9
# 0 ~ 59999의 범위에서 무작위로 세 개의 정수를 뽑음
random_idx = np.random.randint(60000, size = sample_size)

# 0~1 범위로 만듬
x_train = np.reshape(x_train / 255, (-1, 28, 28, 1))
x_test = np.reshape(x_train / 255, (-1, 28, 28, 1))

from tensorflow.keras.utils import to_categorical
# 각 데이터의 레이블을 범주형 형태로 변경
y_train = to_categorical(y_train)
y_test = to_categorical(y_test)

# 검증 데이터셋 만들기
from sklearn.model_selection import train_test_split
# 7:3 분리
x_train, x_val, y_train, y_val = train_test_split(x_train, y_train,
                                                  test_size = 0.3,
                                                  random_state = 777)

print('Fasion-MNIST CNN ready!~')


# 모델 구성하기
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Conv2D, MaxPool2D, Dense, Flatten

model = Sequential([
    Conv2D(filters = 16, kernel_size = 3, padding = 'same',
           activation = 'relu', input_shape = (28,28,1)),
    MaxPool2D(pool_size = (2,2), strides = 2, padding = 'same'),
    Conv2D(filters = 32, kernel_size = 3, padding = 'same', activation = 'relu'),
    MaxPool2D(pool_size = (2,2), strides = 2, padding = 'same'),
    Conv2D(filters = 64, kernel_size = 3, padding = 'same', activation = 'relu'),
    MaxPool2D(pool_size = (2,2), strides = 2, padding = 'same'),
    Flatten(),
    Dense(64, activation = 'relu'),
    Dense(10, activation = 'softmax'),   
    
])

# 모델 학습하기
model.compile(optimize = 'adam',
              loss = 'categorical_crossentropy',
              metrics = ['acc'])

model.fit(x_train, y_train,
          epochs = 30,
          batch_size = 5,
          validation_data = (x_val, y_val))





