import module_test
module_test.price(3) 
module_test.price_morning(4)
module_test.price_solider(7) 

import module_test as mv
mv.price(3)

from module_test import *
price(3)

#필요한 것만 불러오기
from module_test import price, price_morning 
price(3)

from module_test import price_solider as ps
ps(4)


##패키지
#import travel.thailand #모듈이나 패키지만 import 가능
#trip_to = travel.thailand.ThailandPackage()
#trip_to.detail()

##from import구문에서는 클래스와 함수도 import 가능
#from travel.thailand import ThailandPackage
#trip_to = ThailandPackage()
#trip_to.detail()

from travel import *
trip_to = vietnam.vietnamPackage()
trip_to.detail()
trip_to = thailand.ThailandPackage()
trip_to.detail()

# 패키지 위치 알기
import inspect
import random
print(inspect.getfile(random))
print(inspect.getfile(thailand))


#language = input("무슨 언어 좋아하세요?")
#print("{0}은 아주 좋은 언어입니다.".format(languge))

##print(dir())
#import random 
##print(dir())

#print(dir(random))

#lst = [1,2,3,4,5]
#print(dir(list))

#name = "jim"
#print(dir(name))


#외장함수
#glob: 경로 내의 파일 목록 조회;
import glob
print(glob.glob("*.py"))
#os : 운영체제에서 제공하는 기본 기능
import os
print(os.getcwd())
folder = "sample_dir"
if os.path.exists(folder):
    print("이미 존재하는 폴더입니다")
    os.rmdir(folder) #폴더 삭제
    print(folder,"폴더를 삭제하였습니다.")
else:
    os.makedirs(folder)
    print(folder, "폴더를 생성")
print(os.listdir())

import time #시간 관련 함수
#print(time.localtime())
#print(time.strftime(%Y-%m-%d %H:%M:%S))

import datetime
print("오늘 날짜는: ", datetime.date.today())

