import tensorflow as tf

텐서1 = tf.constant([3,4,5])
텐서2 = tf.constant([5,6,7])
print(텐서1)
print(텐서1 + 텐서2)

텐서3 = tf.constant([ [1,2],
                      [3,4], ])

텐서4 = tf.constant([ [5,6],
                      [7,8], ])

print(tf.add(텐서1,텐서2))

print(tf.matmul(텐서3, 텐서4))

print(tf.zeros(10))
print(tf.zeros([2,10]))
print(tf.zeros([2,10,3]))

print(텐서4.shape)


tf.constant([ [5,6], 
              [7,8], ], tf.float32)
w = tf.Variable(1.0)
w.numpy()
w.assign(10)
w.numpy()


