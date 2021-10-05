# https://www.kaggle.com/dasmehdixtr/human-gait-phase-dataset

# 라이브러리
import numpy as np 
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import missingno as msno

dataPath = 'D:/GIT/kaggle data/gait_GRF/gait/'

df = pd.read_csv(dataPath+'GP1_0.6_force.csv')

x = range(1,60001)

df.info()

plt.plot(x, df.FP1_z)
plt.show()

min(df['FP1_z'])

df['FP1_z'][df['FP1_z'] < 0] = 0
min(df['FP1_z'])

def smooth(y, box_pts):
    box = np.ones(box_pts)/box_pts
    y_smooth = np.convolve(y, box, mode='same')
    return y_smooth

plt.plot(x, df.FP1_z)
plt.plot(x, smooth(df.FP1_z,201))
plt.show()

[0]*5




def parse_GRF(curr_GRF,init_thresh, final_thresh, close_thresh):
    smooth_data = smooth(curr_grf,501)
    init_thresh  = init_thresh * max(curr_grf)
    final_thresh = final_thresh * max(curr_grf)
    
    above_left_thresh = [0]*len(curr_GRF)
    above_left_thresh[smooth_data > init_thresh] = 1
    
    tmp = diff(above_left_thresh == 1)    
    index_rise = 

    return index_rise
