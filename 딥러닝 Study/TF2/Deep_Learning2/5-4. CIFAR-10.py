import os
#os.environ["CUDA_VISIBLE_DEVICES"] = '1'
os.environ["CUDA_VISIBLE_DEVICES"]= '0'

#import tensorflow as tf
#gpus = tf.config.experimental.list_physical_devices('GPU')
#if gpus:
#  try:
#    # Currently, memory growth needs to be the same across GPUs
#    for gpu in gpus:
#      tf.config.experimental.set_memory_growth(gpu, True)
#    logical_gpus = tf.config.experimental.list_logical_devices('GPU')
#    print(len(gpus), "Physical GPUs,", len(logical_gpus), "Logical GPUs")
#  except RuntimeError as e:
#    # Memory growth must be set before GPUs have been initialized
#    print(e)


from tensorflow.keras.datasets import cifar10



(x_train, y_train), (x_test, y_test) = cifar10.load_data()

print(x_train.shape, y_train.shape)
print(x_test.shape, x_test.shape)

# 데이터 그려보기
import matplotlib.pyplot as plt
import numpy as np
np.random.seed(777)

class_names = ['airplan', 'automobile', 'bird', 'cat',
               'deer', 'dog', 'frog', 'horse',
               'sheep', 'truck']

sample_size = 9
random_idx = np.random.randint(60000, size=sample_size)

plt.figure(figsize = (5,5))

for i, idx in enumerate(random_idx):
    plt.subplot(3, 3, i+1)
    plt.xticks([])
    plt.yticks([])
    plt.imshow(x_train[i], cmap = 'gray')
    plt.xlabel(class_names[int(y_train[i])])
plt.show()

# 전처리
x_mean = np.mean(x_train, axis = (0, 1, 2))
x_std = np.std(x_train, axis = (0, 1, 2))

x_train = (x_train - x_mean) / x_std
x_test = (x_test - x_mean) / x_std

from sklearn.model_selection import train_test_split

x_train, x_val, y_train, y_val = train_test_split(x_train, y_train,
                                                  test_size = 0.3)

print(x_train.shape, len(y_train))
print(x_val.shape, len(y_val))

# 모델 구성
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Conv2D, MaxPool2D, Dense, Flatten
from tensorflow.keras.optimizers import Adam

model = Sequential()
model.add(Conv2D(filters = 32, kernel_size = 3, padding = 'same',
          activation = 'relu', input_shape = (32, 32, 3)))
model.add(Conv2D(filters = 32, kernel_size = 3, padding = 'same',
          activation = 'relu'))
model.add(MaxPool2D(pool_size = (2, 2), strides = 2, padding = 'same'))
model.add(Conv2D(filters = 64, kernel_size = 3, padding = 'same',
          activation = 'relu'))
model.add(Conv2D(filters = 64, kernel_size = 3, padding = 'same',
          activation = 'relu'))
model.add(MaxPool2D(pool_size = (2, 2), strides = 2, padding = 'same'))
model.add(Conv2D(filters = 128, kernel_size = 3, padding = 'same',
          activation = 'relu'))
model.add(Conv2D(filters = 128, kernel_size = 3, padding = 'same',
          activation = 'relu'))
model.add(MaxPool2D(pool_size = (2, 2), strides = 2, padding = 'same'))
model.add(Flatten())
model.add(Dense(256, activation = 'relu'))
model.add(Dense(10, activation = 'softmax'))

model.compile(optimize = Adam(1e-4),
              loss = 'sparse_categorical_crossentropy',
              metrics = ['acc'])

import tensorflow as tf

with tf.device('/device:GPU:0'):
    history = model.fit(x_train, y_train,
                        epochs = 5,
                        batch_size = 100,
                        validation_data = (x_val, y_val))

# 학습과정 그려보기

import matplotlib.pypolt as plt

his_dict = history.history
loss = his_dict['loss']
val_loss = his_dict['val_loss']

epochs= range(1, len() + 1)
fig = plt.figure(figsize = (10,5))

# 학습 및 검증 손실 그리기
ax1 = fig.add_subplot(1, 2, 1)
ax1.plot(epochs, loss, color = 'blue', label = 'train_loss')
ax1.plot(epochs, va_loss, color = 'orange', label = 'val_loss')
ax1.set_title('train and val loss')
ax1.set_xlabel('epochs')
ax1.set_ylabel('loss')
ax1.legand()

acc = his_dict['acc']
val_acc = his_dict['val_acc']

# 학습 및 검증 정확도 그리기
ax2 = fig.add_subplot(1, 2, 2)
ax2.plot(epochs, acc, color = 'blue', label = 'train_acc')
ax2.plot(epochs, val_acc, color = 'orange', label = 'val_acc')
ax2.set_title('train and val acc')
ax2.set_xlabel('epochs')
ax2.set_ylabel('acc')
ax2.legend()

plt.show()



