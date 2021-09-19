# 스택
# 선입후출
stack = [] # 리스트 자료
stack.append(5)
stack.append(2)
stack.append(3)
stack.pop()
stack.append(2)
stack.append(3)
stack.pop()

print(stack[::-1]) # 최상단 원소부터 출력
print(stack) # 최하단 원소부터 출력



# 큐
# 선입선출
from collections import deque
queue = deque()

queue.append(1)
queue.append(2)
queue.append(3)
queue.append(4)
queue.popleft() # pop()을 쓰면 스택

print(queue)
queue.reverse() # 역순으로 바꾸기
print(queue)


