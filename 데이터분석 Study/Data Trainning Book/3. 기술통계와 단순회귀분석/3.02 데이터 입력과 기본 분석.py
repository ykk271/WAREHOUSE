# 데이터 읽기
import requests, zipfile
from io import StringIO
import io

import os
print(os.getcwd())

url  = 'http://archive.ics.uci.edu/ml/machine-learning-databases/00356/student.zip'

r = requests.get(url, stream = True)

z = zipfile.ZipFile(io.BytesIO(r.content))
z.extractall()

# 데이터를 DataFrame으로 읽어들이기
student_data_math = pd.read_csv('student-mat.csv')

# 데이터 확인
student_data_math.head()

# 구분하는 기호가 ;임
student_data_math = pd.read_csv('student-mat.csv', sep=';')
student_data_math.head()

# 모든 칼럼 정보 등 확인
student_data_math.info()

# 정성데이터 예
student_data_math['sex'].head()

# 정량데이터 예
student_data_math['absences'].head()

# 변수별 평균값 구하기
student_data_math.groupby('sex')['age'].mean()

