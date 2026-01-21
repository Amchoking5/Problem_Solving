import sys

n,m = map(int,sys.stdin.readline().split())
edges = [[0 for i in range(n+1)] for j in range(n+1)]
for i in range(m):
    a,b = map(int,sys.stdin.readline().split())
    edges[a][b] = edges[b][a] = 1

min_index = 0
min_count = 9999
for i in range(1,n+1):
    visited = [-1 for i in range(101)]
    visited[i] = 0
    next = [i]
    count = 0
    while(next):
        now = next.pop(0)
        for j in range(1,n+1):
            if(edges[now][j] and visited[j] == -1):
                visited[j] = visited[now]+1
                count += visited[j]
                next.append(j)
    if(min_count>count):
        min_count = count
        min_index = i
print(min_index)