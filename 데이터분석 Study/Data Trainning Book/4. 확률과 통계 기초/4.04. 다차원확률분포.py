# 2차원 정규분포 시각화
import scipy.stats as st
from scipy.stats import multivariate_normal
from mpl_toolkits.mplot3d import Axes3D

x, y = np.mgrid[10:100:2, 10:100:2]
pos = 