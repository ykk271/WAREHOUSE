from tensorflow.keras.datasets.boston_housing import load_data

(x_train, y_train), (x_test, y_test) = load_data(path = 'boston_housing.npz',
                                                 test_split = 0.2,
                                                 seed = 777)


print(x_train.shape, y_train.shape)
print(x_test.shape, y_test.shape)

# 전처리 및 검증 데이터셋 만들기
import numpy as np

mean = np.mean(x_train, axis = 0)
std = np.std(x_train, axis = 0)

x_train = (x_train - mean) / std
x_test = (x_test - mean) / std

from sklearn.model_selection import train_test_split

x_train, x_val, y_train, y_val = train_test_split(x_train, y_train,
                                                  test_size = 0.33,
                                                  random_state = 777)

# 모델 구성하기
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense

model = Sequential()
model.add(Dense(64, activation = 'relu', input_shape = (13,)))
model.add(Dense(32, activation = 'relu'))
model.add(Dense(1))

model.compile(optimizer = 'adam', loss = 'mse', metrics = ['mae'])

history = model.fit(x_train, y_train, epochs = 300,
                    validation_data = (x_val, y_val))

model.evaluate(x_test, y_test)





