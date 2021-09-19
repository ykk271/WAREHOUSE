import tensorflow as tf

height = [170, 190, 180, 160]
size = [260, 290, 265, 235]

a = tf.Variable(0.1)
b = tf.Variable(0.2)

opt = tf.keras.optimizers.Adam()
#tf.keras.optimizers.Adam(learning_rate = 0.1)

def 손실함수():
    예측값 = height * a + b
    return tf.square(실제값 - 예측값)

opt.minimize(손실함수, var_list=[a,b])


