from pandas import Series, DataFrame

# Series
sample_pandas_data = pd.Series([0, 10, 20, 30, 40, 50, 60, 70, 80, 90])
print(sample_pandas_data)

sample_pandas_index_data = pd.Series(
    [0, 10, 20, 30, 40, 50, 60, 70, 80, 90],
    index=['a','b','c','d','e','f','g','h','i','j'])

print(sample_pandas_index_data)

print('데이터 값: ', sample_pandas_index_data.values)
print('인덱스 값: ', sample_pandas_index_data.index)

# DataFrame 사용법
attri_data1 = {'ID':['100','101','102','103','104'],
               'City':['Seoul','Pusan','Daegu','Gangneung','Seoul'],
               'Birth_year':[1999,1989,1992,1997,1982],
               'Name':['Junho','Heejin','Mijung','Minho','Steve']}

attri_data_frame1 = DataFrame(attri_data1)

print(attri_data_frame1)

attri_data_frame_index1 = DataFrame(attri_data1,index=['a','b','c','d','e'])
print(attri_data_frame_index1)
attri_data_frame_index1

# 행렬 다루기
attri_data_frame1.T # 전치

# 특정 열만 추출
attri_data_frame1[['ID', 'Birth_year']]

# 조건(필터)
attri_data_frame1[attri_data_frame1['City'] == 'Seoul']
attri_data_frame1['City'] =='Seoul'

# 조건(필터, 복수 값)
attri_data_frame1[attri_data_frame1['City'].isin(['Seoul', 'Pusan'])]

# 열과 행 삭제
attri_data_frame1.drop(['Birth_year'], axis = 1) # 열 삭제: axis = 1, 행 삭제: axis = 0

attri_data2 = {'ID':['100','101','102','105','107'],
               'Math':[50,34,12,55,33],
               'English':[90,30,20,50,33],
               'Sex':['M','F','F','M','M']}
attri_data_frame2 = DataFrame(attri_data2)
attri_data_frame2

# 데이터 결합
pd.merge(attri_data_frame1,attri_data_frame2)

# 집계
attri_data_frame2.groupby('Sex')['Math'].mean()

# 정렬
attri_data2 = {'ID':['100','101','102','103','104'],
               'City':['Seoul','Pusan','Daegu','Gangneung','Seoul'],
               'Birth_year':[1999,1989,1992,1997,1982],
               'Name':['Junho','Heejin','Mijung','Minho','Steve']}
attri_data_frame2 = DataFrame(attri_data2)
attri_data_frame_index2 = DataFrame(attri_data2, index=['a','b','c','d','e'])
print(attri_data_frame_index2)

attri_data_frame_index2.sort_index()
attri_data_frame_index2.Birth_year.sort_values()

# 값이 있는지 확인
attri_data_frame_index2.isin(['Seoul'])

# 결측값 처리 방법
# name을 모두 nan으로 변경
attri_data_frame_index2['Name'] = np.nan
attri_data_frame_index2.isnull()

# null인지 판정하고 합계
attri_data_frame_index2.isnull().sum()

