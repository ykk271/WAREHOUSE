from tensorflow.keras.datasets.boston_housing import load_data
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense

import numpy as np
from sklearn.model_selection import KFold

(x_train, y_train), (x_test, y_test) = load_data(path = 'boston_housing.npz',
                                                 test_split = 0.2,
                                                 seed = 777)

mean = np.mean(x_train, axis = 0)
std = np.std(x_train, axis = 0)

x_train = (x_train - mean) / std
x_test = (x_test - mean) / std

k = 3

kfold = KFold(n_splits = k, random_state = None) # radom_state 책과 다름

def get_model():
    model = Sequential()
    model.add(Dense(64, activation = 'relu', input_shape = (13,)))
    model.add(Dense(32, activation = 'relu'))
    model.add(Dense(1))

    model.compile(optimizer = 'adam', loss = 'mse', metrics = ['mae'])

    return model

mae_list = []

# K번 진행
for train_index, val_index in kfold.split(x_train):
    x_train_fold, x_val_fold = x_train[train_index], x_train[val_index]
    y_train_fold, y_val_fold = y_train[train_index], y_train[val_index]

    model = get_model()

    model.fit(x_train_fold, y_train_fold, epochs = 300,
              validation_data = (x_val_fold, y_val_fold))

    _,test_mae = model.evaluate(x_test, y_test)
    mae_list.append(test_mae)


print(mae_list)

print(np.mean(mae_list))