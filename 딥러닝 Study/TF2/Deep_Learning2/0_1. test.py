import tensorflow as tf

tf.__version__

a = tf.Variable(1)
b = tf.Variable(2)
a + b

tf.test.is_built_with_cuda()
tf.test.is_built_with_gpu_support()
