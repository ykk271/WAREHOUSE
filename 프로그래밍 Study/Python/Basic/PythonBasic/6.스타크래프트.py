class Unit:
    def __init__(self, name, hp, speed):
        self.name = name
        self.hp = hp
        self.speed = speed
        print("{0} 유닛이 생성됨". format(name))
    def move(self, location):
        print("{0} : {1} 방향으로 이동 [속도: {2}"\
            .format(self.name, location, self.speed))
    def damaged(self, damage):
        print("{0} : {1} 데미지를 입음"\
            .format(self.name, damage))
        self.hp -= damage
        print("{0} : 현재 체력은 {1}"\
            .format(self.name, damage))
        if self.hp <= 0:
            print("{0} : 파괴".format(self.name))



class AttackUnit(Unit):
    def __init__(self, name, hp, speed, damage):
        Unit.__init__(self, name, hp, speed)
        self.damage = damage
    def attack(self, location):
        print("{0} : {1} 방향으로 공격 공격력 {2}"\
            . format(self.name, location, self.damage))

class Flyable:
    def __init__(self, flying_speed):
        self.flying_speed = flying_speed

    def fly(self, name, location):
        print("{0} : {1} 방향으로 날아감 속도 {2}"\
            .format(name,location, self.flying_speed))

class FlyableAttackUnit(AttackUnit, Flyable):
    def __init__(self, name, hp, damage, flying_speed):
        AttackUnit.__init__(self, name, hp, 0, damage) #지상 스피드 0
        Flyable.__init__(self,flying_speed)

#마린
class Marine(AttackUnit):
    def __init__(self):
        AttackUnit.__init__(self, "마린", 40, 1, 5)
    def stimpack(self):
        if self.hp > 10:
            self.hp -= 10
            print("{0} : 스팀팩 사용".format(self.name))
        else:
            print("{0} : 스팀팩 사용 불가" .format(self.name))

#시즈
class Tank(AttackUnit):
    seize_dev = False
    def __init__(self):
        AttackUnit.__init__(self, "탱크", 150, 1, 30)
        self.seize_mode = False

    def set_seize_mode(self):
        if Tank.seize_dev == False:
            return
        if self.set_seize_mode == False:
            print("{0}: 시즈모드 전환". format(self.name))
            self.damage *= 2
            self.seize_mode = True
        else:
            print("{0}: 시즈모드 해제". format(self.name))
            self.damage /= 2
            self.seize_mode = False


#레이스 
class Wraith(FlyableAttackUnit):
    def __init__(self):
        FlyableAttackUnit.__init__(self, "레이스", 80, 20, 5)
        self.clocked = False
    def clocking(self):
        if self.clocked == True:
            print("{0} : 클로킹 모드 해제". format(self.name))
            self.clocked = False
        elif self.clocked == False:
            print("{0} : 클로킹 ".format(self.name))
            self.clocked = True


def game_start():
    print("새로운 게임 시작.")

def game_over():
    print("Player : gg")
    print("플레이어가 게임에서 퇴장")


game_start()
m1 = Marine()
m2 = Marine()
m3 = Marine()

t1 = Tank()
t1 = Tank()

w1 = Wraith()
w2 = Wraith()

attack_units = []
attack_units.append(m1)
attack_units.append(m1)
attack_units.append(m1)
attack_units.append(t1)
attack_units.append(t1)
attack_units.append(t1)
attack_units.append(w1)
attack_units.append(w2)

for unit in attack_units:
    unit.move("1시")

Tank.seize_dev = True
print("시즈 모드 개발 완료")

for unit in attack_units:
    if isinstance(unit, Marine):
        unit.stimpack()
    elif isinstance(unit, Tank):
        unit.set_seize_mode()
    elif isinstance(unit, Wraith):
        unit.clocking()


for unit in attack_units:
    unit.attack("1시")

from random import*

for unit in attack_units:
    unit.damaged(randint(5, 21))


game_over()

