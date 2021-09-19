from tensorflow.keras.datasets import imdb

num_words = 10000
(x_train, y_train), (x_test, y_test) = imdb.load_data(num_words = num_words)

x_train.shape, y_train.shape
x_test.shape, y_test.shape

x_train[0]

imdb_get_word_index = {}

for key,value in imdb.get_word_index().items():
    imdb_get_word_index[value] = key

for i in range(1, 4):
    print('{} 번째로 가장 많이 쓰인 단여 {}'.format(i, imdb_get_word_index[i]))


