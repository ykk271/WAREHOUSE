# DFS
# 깊이 우선 탐색
# 스택 이용
def dfs(graph, v, visited):
    # 현재 노드를 방문처리
    visited[v] = True
    print(v, end = ' ')
    # 현재 노드와 연결된 다른 노드를 재귀적으로 방문
    for i in graph[v]:
        if not visited[i]:
            dfs(graph, i, visited)


# 0은 비우고 해당 노드에 인접한 노드가 무엇인지 담음
graph = [
        [],
        [2, 3, 8],
        [1, 7],
        [1, 4, 5],
        [3, 5],
        [3, 4],
        [7],
        [2, 6, 8],
        [1, 7] 
]

visited = [False] * 9 # 한개 더 크게해서 초기화
dfs(graph, 1, visited)



# BFS
# 너비 우선 탐색
# 큐 이용
from collections import deque
def bfs(graph, start, visited):
    queue = deque([start])
    visited[start] = True
    # 큐가 빌 때까지 반복
    while queue:
    # 큐에서 하나의 원소 뽑아 출력
    v = queqe.popleft()
    print(v, end = ' ')
    # 아직 방문하지 않은 인접한 원소들을 큐에 삽입
    for i in graph[v]:
        if not visited[i]:
            queqe.append(i)
            visited[i]