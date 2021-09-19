# https://www.youtube.com/watch?v=kWiCuklohdY

print("Hello Pyhon")


# 자료형
print(5)

print('풍선')
print("나비")
print("ㅋ"*5) #ㅋㅋㅋㅋㅋ

print(5>10) #False
print(True)
print(not True)

name = "고양이"
age = 4
isCat = True
print(name + " 나이는 " + str (age))
print(name,"나이는",age) #,는 띄어쓰기 포함
'''
여러문장 주석
'''


# 퀴즈 1
station = "사당"
print(station, "행 열차가 들어오고 있습니다.")


# 연산자
print(1+1)
print(3**3) #제곱
print(5%3) 
print(5//3) #몫
print(5/3) #나누기 소수셈 출력
print(10 > 3) #True
print(3 == 3) #True
print(1 != 3) #True
print(not(1==3)) #True
print((3>0) and (3<5)) #True
print((3>0) & (3<5)) #True
print((3<0) or (3<5)) #True
print((3<0) | (3<5)) 
print(5>4>7) #False


#수식
print(2+3*4) #자동 우선순위 연산
number = 2 + 4 * 3
number += 2
#number++ #이거는 안됨
print(number)


#숫자 처리
print(abs(-5)) #5
print(pow(4, 2)) #16
print(max(5, 12)) #12
print(min(5, 12)) #5
print(round(3.14)) #반올림

from math import * #math 라이브러리 사용
print(floor(3.14)) #내림 3
print(ceil(3.14)) #올림 4
print(sqrt(16)) #제곱근 4


#랜덤함수
from random import *
print(random()) #0.0 ~ 1.0 미만 생성
print(random() * 10) #0.0 ~ 10.0
print(int(random() * 10))
print(int(random() * 10))
print(int(random() * 10))

print(randrange(1,45)) #1 ~ 45미만 정수 임의값 생성
print(randint(1,45)) #1 ~ 45이하 정수 임의값 생성


#퀴즈
from random import *
date = randint(4,28)
print("오프라인 스터디 모임 날짜는 매월 " + str(date) + " 일로 선정되었습니다.")


#문자열
senstnece = '여기는 대한민국'
print(senstnece)
sentence = "여기는 대한민국"
print(senstnece)
sentence = """여기는 지구이고, 
여기는 대한민국
"""
print(sentence) 


#슬라이싱
jumin = "990201-123567"
print("성별: " + jumin[7])
print("연도: " + jumin[0:2]) # 0, 1 번쨰 가져옴
print("생년월일 " + jumin[:6])
print("뒤 7자리 " + jumin[7:])
print("뒤부터 " + jumin[-7:])
#맨뒤에서 -7번재부터 끝까지


#문자열 처리함수
python = "Python is Amazing"
print(python.lower()) #소문자
print(python.upper()) #대문자
print(python[0].isupper()) #True
print(len(python)) #길이 출력
print(python.replace("Python", "Cpp"))

index = python.index("n")
print(index)
index = python.index("n", index + 1) #index 1부터 찾기
print(index)
print(python.find("Python")) #있을경우 0 없을경우 -1
# print(python.index("Cpp")) #오류남
print(python.count('n')) #2


#문자열 포맷
print("a" + "b")
print("나는 %d살입니다" %20) #정수
print("나는 %s을 좋아합니다" %"파이썬") #문자열
print("Apple은 %c로 시작해요" %'A') #문자
print("나는 %s색과 %s색을 좋아함" %("파란","빨간"))

print("나는 {}살입니다." .format(20))
print("나는 {}색과 {}색을 좋아함".format("파란","빨간"))
print("나는 {1}색과 {0}색을 좋아함".format("파란","빨간"))

print("나는 {age}살이며, {color}색을 좋아함". format(age = 20, color = "빨간"))

age = 20
color = "파란"
print(f"나는 {age}살이며, {color}색을 좋아함")


#탈출 문자
print("백문이 불여일견 /n백견이 불여일타")
print('저는 "KING" 입니다.')
print("저는 \"KING\" 입니다.")
# \\: 문장 내에서 \
print("\\")
# \t Tab
print("Red\t Apple Pine")


#퀴즈
domain = "htpp://naver.com"
domain = "htpp://daum.com"
dotIndex = domain.index(".")
p1 = domain[7:12]
p2 = len(p1)
p3 = domain.count('n')
password = p1[:3]+str(p2)+str(p3)+'!'
print(password)


# 리스트 []
array = [10, 20, 30]
print(array)
print(array.index(20))
array.append(40)
print(array)
array.insert(3,35)
print(array)
array.pop() # 맨 뒤 꺼내기
print(array)
array.append(10)
print(array.count(10)) #같은 원소 몇개 인지 확인
array.sort() #정렬
print(array)
array.reverse() #뒤집기
print(array)
array.clear() #모든 원소 삭제
print(array)
# 다양한 자료형과 함께 사용 가능
mixList = ["스트링", 20, True]
array = [10, 20, 30]
mixList.extend(array)
print(mixList)
 

#사전
cabinet = {3:"kk", 100: "jj"}
print(cabinet[3])
print(cabinet[100])
print(cabinet.get(3))
#print(cabinet[5]) # 오류
print(cabinet.get(5)) # None
print(cabinet.get(5,"사용 가능"))

print(3 in cabinet) # True
print(5 in cabinet) # False

cabinet2 = {"A-1":"KK", "B-2":"JJ"}
print(cabinet2["A-1"])
cabinet2["A-1"] = "QQ"
cabinet2["A-2"] = "WW"
print(cabinet2["A-1"])
print(cabinet2["A-2"])
del cabinet2["A-1"]
print(cabinet2)
print(cabinet.keys())
print(cabinet.items())

cabinet.clear()
print(cabinet)


# 튜플
# 내용 변경, 추가는 안되지만 속도가 list보다 빠름
menu = ("돈까스", "생선가스")
print(menu)
# mane.add("치즈가스") #에러
name, age, hobby = "K", 20, "코딩"
print(name, age, hobby)


# 집합(set)
# 중복 안됨, 순서 없음
my_set = {1,2,3,3,4}
print(my_set)

python = {"KK", "QQ", "RR"}
cpp = {"WW", "AA", "KK"}
#교집합 출력
print(python & cpp)
print(cpp.intersection(python))

#합집합(둘 중 하나가 있음)
print(python | cpp)
print(python.union(cpp))

#차집합 
print(python - cpp)
print(python.difference(cpp))

python.add("OO");
python.remove("QQ");


#자료구조 변경
menu = {"커피", "우유", "주스"}
print(menu, type(menu))

menu = list(menu)
print(menu, type(menu))

menu = tuple(menu)
print(menu, type(menu))

menu = set(menu)
print(menu, type(menu))


#퀴즈
from random import*
lst = range(1,21) # 1부터 20미만까지 숫자 생성
print(type(list)) #type
lst = list(lst)
shuffle(lst)
winners = sample(lst,4)

print("치킨 당첨자: {0}".format(winners[0]))
print("커피 당첨자: {0}".format(winners[1:]))


#분기(if)
#weather = input("오늘 날씨는 어때요? ")

if weather == "비" or "눈":
    print("우산을 챙기시오")
elif weather == "미세먼지":
    print("마스크를 챙기시오")
else:
    print("준비물 필요 없음")

#temp = int(input("기온은 어떰? "))
if 30 <= temp:
    print("너무 더움")
elif 10 <= temp and temp < 30:
    print("무난")
else:
    print("추움")





