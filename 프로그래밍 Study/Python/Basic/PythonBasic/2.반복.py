#반복문(for)
for waiting_no in range(1, 5): 
    print("대기번호 : {0}".format(waiting_no))

starbucks = ["q", "w", "e"]
for customer in starbucks:
    print("{0}, 커피가 준비 됨".format(customer))


#while
customer = "토르"
index = 5
while index >= 1:
    print("{0}, 커피가 준비되었습니다. {1} 번 남음".format(customer, index))
    index -= 1
    if index == 0:
        print("커피는 폐기됨")

customer = "아이언맨"
index = 1
#while True:
#    print("{0}, 커피가 준비됨. 호줄 {1} 회".format(customer, index))
#    index += 1

customer = "토르"
person = "모름"

#while person != customer:
    #print("{0}, 커피가 준비 되었습니다". format(customer))
    #person = input("이름이 어떻게 되세요? ")

#continue와 break
absent = [2, 5]
no_book = [7]
for student in range(1, 11):
    if student in absent:
        continue
    elif student in no_book:
        print("오늘 수없 여기까지, {0}는 교무실로". format(student))
        break
    print("{0}, 책을 읽어봐".format(student))


#한줄 for
students = [1,2,3,4,5]
print(students)
students = [i+100 for i in students]
print(students)

students = ["Iron man","Thor", "Groot"]
students = [len(i) for i in students]
print(students)

students = ["Iron man","Thor", "Groot"]
students = [i.upper() for i in students]
print(students)


#퀴즈
from random import*
count = 0

for s in range(1, 51):
    time = randint(5,50)
    
    if time <= 15:
        print("[O] {0}번째 손님 (소요시간 : {1}분)".format(s,time))
        count += 1
    else:
        print("[ ] {0}번째 손님 (소요시간 : {1}분)".format(s,time))

print("총 탑승 승객: {0} 명". format(count)) 



