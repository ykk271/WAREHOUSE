from tensorflow.python.client import device_lib
device_lib.list_local_devices()

print(device_lib.list_local_devices())


import os
os.environ["CUDA_VISIBLE_DEVICES"] = '0'

import tensorflow as tf
tf.test.is_gpu_available()

tf.test.gpu_device_name()

tf.config.experimental.list_physical_devices(device_type='GPU') #이용 가능한 모든 GPU 목록을 출력



#tf.debugging.set_log_device_placement(
#    enabled
#)

tf.debugging.set_log_device_placement(True)

# 텐서 생성
a = tf.constant([[1.0, 2.0, 3.0], [4.0, 5.0, 6.0]])
b = tf.constant([[1.0, 2.0], [3.0, 4.0], [5.0, 6.0]])
c = tf.matmul(a, b)

print(c)