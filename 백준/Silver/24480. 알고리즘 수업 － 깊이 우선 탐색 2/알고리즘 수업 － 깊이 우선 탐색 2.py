import sys
sys.setrecursionlimit(10**6)
input = sys.stdin.readline

def dfs(r):
    global visited, nodes, count
    visited[r] = count
    count+=1
    inode = nodes[r]
    inode.sort(reverse=True)
    for i in inode:
        if(visited[i]==0):
            dfs(i)
    
    
n,m,r = map(int,input().split())
visited = [0 for i in range(n+1)]
nodes = {k: [] for k in range(n+1)}
for i in range(m):
    a,b = map(int,input().split())
    nodes[a].append(b)
    nodes[b].append(a)
count =1
dfs(r)

for i in range(1,n+1):
    print(visited[i])