import tensorflow as tf
import numpy as np

a = tf.constant(3)
b = tf.constant(2)

# 랭크 출력
s = tf.constant(1)
print(tf.rank(s)) 
v = tf.constant([1, 2])
print(tf.rank(v))
m = tf.constant([[1, 2], [3, 4]])
print(tf.rank(m))

# 텐서플로우 형태로 출력
print(tf.add(a, b))
print(tf.subtract(a, b))

# 넘파이 형태로 출력
print(tf.multiply(a, b).numpy())
print(tf.divide(a, b).numpy())

# 넘파이 배열로 변환
c = tf.add(a, b).numpy()
c_square = np.square(c, dtype = np.float32)
print(c)
print(c_square)

# 텐서로 변환
c_tensor = tf.convert_to_tensor(c_square)
print(c_tensor)

# 함수
def square_pos(x):
    if x > 0:
        x = x * x
    else:
        x = x * -1
    return x

print(square_pos(tf.constant(2)))

