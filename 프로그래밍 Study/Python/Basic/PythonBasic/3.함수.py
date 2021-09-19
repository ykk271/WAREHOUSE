#함수
def open_account():
    print("새로운 계좌가 생성되었습니다.")

open_account()

def deposit(balance, money):
    print("입금완료. 잔액은 {0}원". format(balance + money))
    return balance + money

def withdraw(balance, money): #출금
    if balance >= money:
        print("출금완료 잔액은 {0}원". format(balance - money))
        return balance - money
    elif balance < money:
        print("출금불가 잔액은 {0}원". format(balance))
        return balance

def withdraw_night(balance, money):
    commission = 100
    return commission, balance - money - commission

balance = 0
balance = deposit(balance, 1000)
print(balance)
balance = withdraw(balance,50)
balance = withdraw(balance,1000)
commission, balance = withdraw_night(balance, 500)
print("수수료 {0} 원 잔액은 {1}". format(commission, balance))
 

#함수 기본값
#def profile(name, age, main_lang):
#    print("이름 {0}, 나이:{1}, 주 사용 언어:{2}" \
#        .format(name, age, main_lang))

def profile(name, age= 17, main_lang= "파이썬"):
    print("이름 {0}, 나이:{1}, 주 사용 언어: {2}" \
        .format(name, age, main_lang))

profile("K")
profile("J", 25, "CPP")


#키워드값
def profile(name, age, main_lang):
    print(name, age, main_lang)

profile(name = "K", main_lang = "CPP", age = 10)


#가변인자
def profile(name, age, *language):
    print("이름: {0} 나이: {1}".format(name, age), end = " ")
    for lang in language:
        print(lang, end = " ")
    print()

profile("유재석", 20, "P", "J", "CPP", "C")
profile("유재", 25, "P", "J", "", "")


#지역변수와 전역변수
gun = 10

def checkpoint(solider):
    #gun = 20
    global gun
    gun = gun - solider
    print("함수내, 남은총: {0}". format(gun))

def checkpoint_ret(gun, soliders):
    gun = gun - soliders
    print("함수내, 남은총: {0}". format(gun))
    return gun


print("전체 총: {0}".format(gun))
checkpoint(2)
print("남은 총: {0}".format(gun))
gun = checkpoint_ret(gun, 2)
print("남은 총: {0}".format(gun))


#퀴즈

def stdWeight(gender,height):
    if gender == "남자":
        std_wight = height*height*22/10000 
        return std_wight
    elif gender == "여자":
        std_wight = height*height*21/10000
        return std_wight

height = 175
gender = "남자"
std_weight = round(stdWeight(gender,height),2)
print("키 {0}cm {1}의 표준 체중은 {2}kg 입니다.".format(height, gender, std_weight))



