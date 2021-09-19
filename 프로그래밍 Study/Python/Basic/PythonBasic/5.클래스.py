#클래스
name = "마린"
hp = 40
damage = 6

print("{0} 유닛이 생성됨.". format(name))
print("체력 {0}, 공격력{1}\n".format(hp, damage))

tank_name = "탱크"
tank_hp = 150
tank_damege = 30

print("{0} 유닛이 생성됨.". format(tank_name))
print("체력 {0}, 공격력{1}\n".format(tank_hp, tank_damege))

def attack(name, location, damage):
    print("{0} : {1} 방향으로 적군 공격. 공격력 {2}"\
        .format(name, location, damage))

attack(name, "1시", damage)


class Unit:
    def __init__(self, name, hp, damage):
        self.name = name
        self.hp = hp
        self.damage = damage
        print("{0} 유닛 생성". format(self.name))
        print("체력 {0}, 공격력 {1}".format(self.hp, self.damage))



marine1 = Unit("마린", 40, 5)
tanke = Unit("탱크", 150, 35)

wraith1 = Unit("레이스", 80, 5)
print("유닛 이름: {0}, 공격력 : {1}"\
    .format(wraith1.name, wraith1.damage))

wraith2 = Unit("레이스2", 80, 5)
wraith2.clocking = True #외부에서 멤버 만들어서 넣을 수 있음

if wraith2.clocking == True:
    print("{0} 는 현재 클로킹 상태". format(wraith2.name))

#메소드
class AttackUnit:
    def __init__(self, name, hp, damage):
        self.name = name
        self.hp = hp
        self.damage = damage
    def attack(self, location):
        print("{0}: {1} 방향으로 공격 공격력 {2}"\
            . format(self.name, location, self.damage))
    def damaged(self, damage):
        print("{0} : {1} 데미지를 입음"\
            . format(self.name, damage))
        self.hp -= damage
        print("{0} : 현재 체력은 {1}".format(self.name, self.hp))
        if self.hp <= 0:
            print("{0} : 파괴".format(self.name))


firebat1 = AttackUnit("파이어뱃", 50, 16)
firebat1.attack("5시")

firebat1.damaged(25)
firebat1.damaged(25)

print("")
#상속
class Unit:
    def __init__(self, name, hp):
        self.name = name
        self.hp = hp
        #self.damage = damage
        #print("{0} 유닛 생성". format(self.name))
        #print("체력 {0}, 공격력 {1}".format(self.hp, self.damage))


class AttackUnit(Unit):
    def __init__(self, name, hp, damage):
        Unit.__init__(self, name, hp)
        #self.name = name
        #self.hp = hp
        self.damage = damage
    def attack(self, location):
        print("{0} : {1} 방향으로 공격 공격력 {2}"\
            . format(self.name, location, self.damage))
    def damaged(self, damage):
        print("{0} : {1} 데미지를 입음"\
            . format(self.name, damage))
        self.hp -= damage
        print("{0} : 현재 체력은 {1}".format(self.name, self.hp))
        if self.hp <= 0:
            print("{0} : 파괴".format(self.name))


firebat1 = AttackUnit("파이어뱃", 50, 16)
firebat1.attack("5시")

firebat1.damaged(25)
firebat1.damaged(25)


#다중 상속
class Flyable:
    def __init__(self, flying_speed):
        self.flying_speed = flying_speed

    def fly(self, name, location):
        print("{0} : {1} 방향으로 날아감 속도 {2}"\
            .format(name,location, self.flying_speed))

class FlyableAttackUnit(AttackUnit, Flyable):
    def __init__(self, name, hp, damage, flying_speed):
        AttackUnit.__init__(self, name, hp, damage)
        Flyable.__init__(self,flying_speed)

valkyrie = FlyableAttackUnit("발키리", 200, 6, 5)
valkyrie.fly(valkyrie.name, "3시")


 #연산자 오버로딩
class Unit:
    def __init__(self, name, hp, speed):
        self.name = name
        self.hp = hp
        self.speed = speed
    def move(self, location):
        print("지상유닛이동")
        print("{0} : {1} 방향으로 이동 속도: {2}"\
           .format(self.name, location, self.speed))

class AttackUnit(Unit):
    def __init__(self, name, hp, speed, damage):
        Unit.__init__(self, name, hp, speed)
        #self.name = name
        #self.hp = hp
        self.damage = damage
    def attack(self, location):
        print("{0} : {1} 방향으로 공격 공격력 {2}"\
            . format(self.name, location, self.damage))
    def damaged(self, damage):
        print("{0} : {1} 데미지를 입음"\
            . format(self.name, damage))
        self.hp -= damage
        print("{0} : 현재 체력은 {1}".format(self.name, self.hp))
        if self.hp <= 0:
            print("{0} : 파괴".format(self.name))

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


vulture = AttackUnit("벌처", 80, 10, 20)
battle = FlyableAttackUnit("배틀", 500, 25, 3)

vulture.move("11시")
battle.fly(battle.name,"9시")

# PASS
class BuildingUnit(Unit):
    def __init__(self, name, hp, location):
        pass #아무것도 안하고 일단 넘어감

supply = BuildingUnit("서플라이 디폿", 500 , "7시")

def game_start():
    print("알림: 새로운 게임 시작")
def game_over():
    pass

game_start()
game_over()


# Super
class BuildingUnit(Unit):
    def __init__(self, name, hp, location):
        #Unit.__init__(self, name, hp, 0)
        super().__init__(name, hp, 0) #super에서는 self 안씀
        #self.location = location

class Unit:
    def __init__(self):
        print("Unit 생성자")

class Flyable:
    def __init__(self):
        print("Flyable 생성자")

class FlyableUnit(Flyable, Unit):
    def __init__(self):
        #super().__init__() #다중상속에서는 맨 뒤만 생성
        Unit.__init__(self)
        Flyable.__init__(self)

dropship = FlyableUnit()


    

#퀴즈
print("===================================")

class House:
    def __init__(self, location, house_type,
                 deal_type, price, completion_year):
        self.location = location
        self.house_type = house_type
        self.deal_type = deal_type
        self.price = price
        self.completion_year = completion_year

    def show_detail(self):
        print(self.location, self.house_type,\
              self.deal_type, self.price, self.completion_year)

house = []
house1 = House("강남", "아파트", "매매", "10억", "2010년")
house2 = House("마포", "오피스텥", "전세", "5억", "2007년")
house3 = House("송파", "빌라", "월세", "500/50", "2000년")

house.append(house1)
house.append(house2)
house.append(house3)

for i in house:
    i.show_detail()

    