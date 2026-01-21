import sys
from collections import deque

t = int(sys.stdin.readline())
for i in range(t):
    a, b = map(int, sys.stdin.readline().split())
    visited = [False for _ in range(10000)]
    visited[a] = True
    next = deque([(a, '')])
    while next:
        now, command = next.popleft()
        if now == b:
            print(command)
            break
        if not visited[(now * 2) % 10000]:
            visited[(now * 2) % 10000] = True
            next.append(((now * 2) % 10000, command + 'D'))
        if not visited[(now - 1) % 10000]:
            visited[(now - 1) % 10000] = True
            next.append(((now - 1) % 10000, command + 'S'))
        if not visited[(now // 1000) + (now % 1000) * 10]:
            visited[(now // 1000) + (now % 1000) * 10] = True
            next.append(((now // 1000) + (now % 1000) * 10, command + 'L'))
        if not visited[(now // 10) + (now % 10) * 1000]:
            visited[(now // 10) + (now % 10) * 1000] = True
            next.append(((now // 10) + (now % 10) * 1000, command + 'R'))
