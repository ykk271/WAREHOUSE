from tensorflow.keras.preprocessing.text import Tokenizer
from tensorflow.keras.utils import to_categorical

texts = ['You are the Best',
         'You are the Nice']

tokenizer = Tokenizer(num_words = 10, oov_token = '<OOV>')
tokenizer.fit_on_texts(texts)

# 텍스트 데이터를 정수 인덱스 형태로 변환
sequences = tokenizer.texts_to_sequences(texts)
sequences

# 이진 형태로 인코딩
binary_results = tokenizer.sequences_to_matrix(sequences, mode = 'binary')
tokenizer.word_index
sequences

# 원-핫 형태로 인코딩
to_categorical(sequences)

test_text = ['You are the One']
test_seq = tokenizer.texts_to_sequences(test_text)
test_seq
