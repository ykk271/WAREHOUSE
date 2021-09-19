#예외처리
try:
    print("나누기 전용 계산기입니다.")
    nums = []
    nums.append(int(input(" 첫 번째 숫자 입력: ")))
    nums.append(int(input(" 두 번째 숫자 입력: "))) 
    #nums.append(int(nums[0] / nums[1]))
    print("{0} / {1} = {2}".format(nums[0], nums[1], nums[2]))
except ValueError:
    print("에러! 잘못된 값을 입력하였습니다.")
except ZeroDivisionError as err:
    print(err)
except Exception as err:
    print("알 수 없는 에러 발생") 
    print(err)


#에러 발생시키기
try:
    print("한 자리 숫자 나누기 전용 계산기")
    nums = []
    num1 = int(input(" 첫 번째 숫자 입력: "))
    num2 = int(input(" 두 번째 숫자 입력: "))
    if num1 >= 10 or num2 >= 10:
        raise ValueError
    print("{0} / {1} = {2}".format(num1, num2, int(num1/num2)))
except ValueError:
    print("잘못된 값을 입력하였습니다. 한 자리 숫자만 입력하세요")



#사용자 정의 예외처리
class BignumberError(Exception):
    def __init__(self,msg):
        self.msg = msg
    def __str__(self):
        return self.msg

try:
    print("한 자리 숫자 나누기 전용 계산기")
    nums = []
    num1 = int(input(" 첫 번째 숫자 입력: "))
    num2 = int(input(" 두 번째 숫자 입력: "))
    if num1 >= 10 or num2 >= 10:
        raise BignumberError("입력값: {0}, {1}". format(num1, num2))
    print("{0} / {1} = {2}".format(num1, num2, int(num1/num2)))
except BignumberError as err:
    print("에라 발생 한 자리 숫자만 입력하세요")
    print(err)
finally: # 마지막에 무조건 실행
    print("계산기를 이용해 주셔서 감사") 


#퀴즈
chicken = 10
waiting = 1

class SoldOutError(Exception):
    pass

while(True):
    try: 
        print("남은치킨: {0}".format(chicken))
        order = int(input("치킨 몇마리 주문? "))
        if order <= 0:
            raise ValueError
        if order > chicken:
            print("재료 부족")
        else:
            print("대기번호: {0}, {1} 치킨 주문 완료"\
                .format(waiting, order))
            waiting +=1
            chicken -= order
        if chicken == 0:
            raise SoldOutError
    except ValueError:
        print("잘못된 값을 입력하였습니다.")
    except SoldOutError:
        print("재고가 소진되어 더 이상 주문을 받지 않습니다.")
        break
        


