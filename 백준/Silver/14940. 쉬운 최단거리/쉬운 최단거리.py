import sys
n,m = map(int,sys.stdin.readline().split())
result = [[0 for i in range(m)] for j in range(n)]
visited = [[False for i in range(m)] for j in range(n)]
maps = []
for i in range(n):
    maps.append(list(map(int,sys.stdin.readline().split())))

start_point = [(i,j) for i in range(n) for j in range(m) if maps[i][j]==2]
x,y = start_point[0]
visited[x][y] = True
next = [(x,y,0)]

while(next):
    nowx,nowy,count = next.pop(0)
    result[nowx][nowy] = count
    if(nowx>0 and not visited[nowx-1][nowy] and maps[nowx-1][nowy]):
        visited[nowx-1][nowy]=True
        next.append((nowx-1,nowy,count+1))
    if(nowy>0 and not visited[nowx][nowy-1] and maps[nowx][nowy-1]):
        visited[nowx][nowy-1]=True
        next.append((nowx,nowy-1,count+1))
    if(nowx<n-1 and not visited[nowx+1][nowy] and maps[nowx+1][nowy]):
        visited[nowx+1][nowy]=True
        next.append((nowx+1,nowy,count+1))
    if(nowy<m-1 and not visited[nowx][nowy+1] and maps[nowx][nowy+1]):
        visited[nowx][nowy+1]=True
        next.append((nowx,nowy+1,count+1))
for i in range(n):
    for j in range(m):
        if not maps[i][j]:
            result[i][j] = 0
        elif not(visited[i][j]):
            result[i][j] = -1

for i in range(n):
    print(' '.join(list(map(str, result[i]))))