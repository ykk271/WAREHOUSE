import tensorflow as tf
import numpy as np
import matplotlib.pyplot as plt
from tensorflow.keras import datasets


arr = np.array([1, 2, 3])
arr.shape

tf.constant([1, 2, 3])
tf.constant(((1,2,3), (1,2,3))) # tuple

tensor = tf.constant(arr)
tensor = tf.constant([1,2,3], dtype = tf.float64)
tensor.shape
tensor.dtype

tensor.numpy()

#난수 생성
np.random.randn(9)
tf.random.normal([3,3])
tf.random.uniform ([4,4])
########################################
#mnist
mnist = datasets.mnist
(train_x, train_y), (test_x, test_y) = mnist.load_data()
train_x.shape
train_y.shape

image = train_x[0]
image.shape

#plt.imshow(image, 'gray')
#plt.show()

#데이터 차원 수 늘리기
image = image[tf.newaxis, ..., tf.newaxis]
new_train_x = tf.expand_dims(train_x, -1)
new_train_x.shape

#label dataset 들여다 보기
train_y.shape
train_y[0]
train_x[0]

#plt.title(train_y[0])
#plt.imshow(train_x[0])
#plt.show()

#OneHot Encoding
from tensorflow.keras.utils import to_categorical
to_categorical(5, 10)

lable = train_y[0]
num_clsses = 10
label_onehot = to_categorical(lable, num_clsses)
label_onehot

#plt.title(label_onehot)
#plt.imshow(train_x[0])
#plt.show()

#CNN
layer = tf.keras.layers.Conv2D(filters = 3, kernel_size = (3,3), strides = (1,1), padding = 'SAME', activation = 'relu')
layer
image = tf.cast(image, dtype=tf.float32)
output = layer(image)
output

#plt.imshow(output[0, :, :, 0], 'gray')
#plt.show()

#weight 불러오기
weight = layer.get_weights()
len(weight)
weight[0].shape
weight[1].shape

#plt.figure(figsize=(15,5))
#plt.subplot(131)
#plt.hist(output.numpy().ravel(),range = [-2,2])
#plt.ylim(0, 500)
#plt.subplot(132)
#plt.title(weight[0].shape)
#plt.imshow(weight[0][:,:,0,0],'gray')
#plt.subplot(133)
#plt.title(output.shape)
#plt.imshow(output[0, :, :, 0], 'gray')
#plt.colorbar()
#plt.show()

#activation
tf.keras.layers.ReLU()
acc_layer = tf.keras.layers.ReLU()
act_output = acc_layer(output)
output.shape
np.min(act_output), np.max(act_output)

#plt.figure(figsize = (15,5))
#plt.subplot(121)
#plt.hist(act_output.numpy().ravel(), range=[-2,2])
#plt.ylim(0, 100)
#plt.subplot(122)
#plt.title(act_output.shape)
#plt.imshow(act_output[0, :, :, 0], 'gray')
#plt.show()


#plooing
pool_layer = tf.keras.layers.MaxPool2D(pool_size=(2,2),
                                       strides = (2,2),
                                       padding = 'SAME')
pool_output = pool_layer(act_output)
act_output.shape
pool_output.shape

#plt.figure(figsize=(15,5))
#plt.subplot(121)
#plt.hist(pool_output.numpy().ravel(),range=[-2,2])
#plt.ylim(0, 100)

#plt.subplot(122)
#plt.title(pool_output.shape)
#plt.imshow(pool_output[0, :, :, 0], 'gray')
#plt.colorbar()
#plt.show()



# fully connected
layer = tf.keras.layers.Flatten()
flatten = layer(output)
output.shape
flatten.shape

#plt.figure(figsize = (10,5))
#plt.subplot(211)
#plt.hist(flatten.numpy().ravel())
#plt.subplot(212)
#plt.imshow(flatten[:,:100])
#plt.show()


#dense
tf.keras.layers.Dense(32, activation = 'relu')

layer = tf.keras.layers.Dense(32, activation = 'relu')

output = layer(flatten)
output.shape

layer_2 = tf.keras.layers.Dense(10, activation = 'relu')
output_example = layer_2(output)
output_example.shape


#DropOut
layer = tf.keras.layers.Dropout(0.7)
output = layer(output)
output.shape

# Build Model
from tensorflow.keras import layers
input_shape = (28,28,1)
num_classes = 10
inputs = layers.Input(shape=input_shape)

# feature extraction
net = layers.Conv2D(32, 3, padding='SAME')(inputs)
net = layers.Activation('relu')(net)
net = layers.Conv2D(32, 3, padding='SAME')(net)
net = layers.Activation('relu')(net)
net = layers.MaxPool2D((2, 2))(net)
net = layers.Dropout(0.25)(net)

net = layers.Conv2D(64, 3, padding='SAME')(net)
net = layers.Activation('relu')(net)
net = layers.Conv2D(64, 3, padding='SAME')(net)
net = layers.Activation('relu')(net)
net = layers.MaxPool2D((2, 2))(net)
net = layers.Dropout(0.25)(net) 

# fully connected
net = layers.Flatten()(net)
net = layers.Dense(512)(net)
net = layers.Activation('relu')(net)
net = layers.Dropout(0.25)(net)
net = layers.Dense(10)(net)
net = layers.Activation('softmax')(net)

model = tf.keras.Model(inputs = inputs, outputs = net, name = 'Basic_CNN')

model.summary()

# Optimization & Traning
import tensorflow as tf
from tensorflow.keras import layers
from tensorflow.keras import datasets
import numpy as np
(train_x, train_y), (test_x, test_y) = datasets.mnist.load_data() 

# loss function
#loss = 'binary_crosentropy'
loss = 'categorical_crossentropy'

loss_fun = tf.keras.losses.sparse_categorical_crossentropy
tf.keras.losses.categorical_crossentropy 
tf.keras.losses.binary_crossentropy

# metrics
#metrics = ['accuracy']
metrics = tf.keras.metrics.Accuracy()

optm = tf.keras.optimizers.Adam()

model.compile(optimizer = optm,
              loss = 'sparse_categorical_crossentropy',
              metrics = [tf.keras.metrics.Accuracy()])

#prepare dataset
train_x.shape, train_y.shape
test_x.shape, test_y.shape
#차원수 늘리기
#np.expand_dims(train_x, -1).shape #방법 1
#tf.expand_dims(train_x, -1).shape #방법 2
train_x = train_x[..., tf.newaxis]
test_x = test_x[..., tf.newaxis]

np.min(train_x), np.max(train_x)

#rescailing
train_x = train_x / 255
test_x = test_x / 255

np.min(train_x), np.max(train_x)

#training
num_epochs = 10
batch_size = 32

model.fit(train_x, train_y,
          batch_size = batch_size,
          shuffle = True,
          epochs = num_epochs)


#