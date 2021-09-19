from pandas import Series,DataFrame
import pandas as pd

attri_data1 = {'ID':['1','2','3','4','5'],
               'Sex':['F','F','M','M','F'],
               'Money':[1000,2000,500,300,700],
               'Name':['Suji','Minji','Taeho','Jinsung','Suyong']}

attri_data_frame1 = DataFrame(attri_data1)

# 2-7
attri_data_frame1[attri_data_frame1['Money'] > 500]

# 2-8
attri_data_frame1.groupby('Sex')['Money'].mean()

# 2-9
attri_data2 = {'ID':['3','4','5'],
               'Math':[60,30,40],
               'English':[80,20,30]}

attri_data_frame2 = DataFrame(attri_data2)

attri_data_frame3 = pd.merge(attri_data_frame1, attri_data_frame2)
attri_data_frame3

attri_data_frame3['Money'].mean()
attri_data_frame3['English'].mean()

