import sys
N, M = map(int,sys.stdin.readline().split())
nodes = [[False for j in range(N+1)] for i in range(N+1)]
visited = [False for i in range(N+1)]
for i in range(M):
    a,b = map(int,sys.stdin.readline().split())
    nodes[a][b] = True
    nodes[b][a] = True
visited[0] = True
next_node = []
count=0
while (False in visited):
    start_node = visited.index(False)
    next_node.append(start_node)
    visited[start_node]=True
    count+=1
    while(next_node):
        now = next_node.pop(0)
        for i in range(N+1):
            if(nodes[now][i] and not visited[i]):
                visited[i] = True
                next_node.append(i)
print(count)