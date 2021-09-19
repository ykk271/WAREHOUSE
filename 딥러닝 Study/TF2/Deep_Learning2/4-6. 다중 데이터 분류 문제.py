# 먹통나서 진행 못함
import os
os.environ["CUDA_VISIBLE_DEVICES"] = '1'

import pandas as pd

DATA_PATH = './4-6' # \를 /로 바꿔줘야함

train_df = pd.read_csv(DATA_PATH + '/train.csv', dtype = 'unicode')
train_df = pd.read_csv(DATA_PATH + '/train.csv', dtype = 'unicode')

val_df = pd.read_csv(DATA_PATH + '/val.csv', dtype = 'unicode')
test_df = pd.read_csv(DATA_PATH + '/test.csv', dtype = 'unicode')




train_df.head()
val_df.head()

# 이미지 제너레이터
from tensorflow.keras.preprocessing.image import ImageDataGenerator

train_datagen = ImageDataGenerator(rescale = 1./255)
val_datagen = ImageDataGenerator(rescale = 1./255)

def get_steps(num_samples, batch_size):
    if (num_samples % batch_size) > 0:
        return (num_samples // batch_size) + 1 # //: 나누고 버림
    else :
        return num_samples // batch_size

from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense, Flatten

model = Sequential()
model.add(Flatten(input_shape = (112, 112, 3)))
model.add(Dense(128, activation = 'relu'))
model.add(Dense(64, activation = 'relu'))
model.add(Dense(11, activation = 'sigmoid'))

model.compile(optimizer = 'adam',
              loss = 'binary_crossentropy',
              metrics = ['acc'])

# 데이터 제너레이터 정의
batch_size = 32
class_col = ['black', 'blue', 'brown', 'green', 'red', 'white',
             'dress', 'shirt', 'pants', 'shorts', 'shoes']


# Make Generator
train_generator = train_datagen.flow_from_dataframe(
    dataframe = train_df,
    directory = None,
    x_col = 'image',
    y_col = class_col,
    target_size = (112, 112),
    color_model = 'rgb',
    class_mode = 'other',
    batch_size = batch_size,
    seed = 42)

train_generator

val_generator = val_datagen.flow_from_dataframe(
    dataframe = val_df,
    directory = '',
    x_col = 'image',
    y_col = class_col,
    target_size = (112, 112),
    color_model = 'rgb',
    class_mode = 'other',
    batch_size = batch_size,
    shuffle = True)

val_generator

model.fit(train_generator,
          steps_per_epoch = get_steps(len(train_df), batch_size),
          validation_data = val_generator,
          validation_steps = get_steps(len(val_df), batch_size),
          epochs = 10)




