'''
def �Լ���(�Ű�����):
    ������ �ҽ��ڵ�
    return ��ȯ �� (��� ��)
'''

def add(a, b):
    return a + b

print(add(3, 7))


def add2(a, b):
    return a + 2 *b

add2(a=1, b=2)

# global Ű����
a = 0
def func():
    global a
    a += 1

for i in range(10):
    func()
print(a)

# ���� ���� ��ȯ ��
def operator(a):
    square2 = a*a
    square3 = a*a*a
    return square2, square3

c, d =operator(3)
print(c, d)


# ���� ǥ����
# �Լ��� ���ٷ� �����ϰ� ����
print((lambda a, b: a + b)(3, 7))

# ���� ǥ���� ��� �� 1
array = [('a', 2), ('b', 5), ('c', 4)]

def my_key(x):
    return x[1]

print(sorted(array, key=my_key))
print(sorted(array, key=lambda x: x[1]))

# ���� ǥ���� ��� �� 2
list1 = [1,2,3,4,5]
list2 = [6,7,8,9,19]

result = map(lambda a, b: a+b, list1, list2)
# map: ���� ������ �Լ� ����
print(list(result))

