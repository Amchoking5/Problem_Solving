import sys

n,m = map(int,sys.stdin.readline().split())
visited = [[False for i in range(m)] for j in range(n)]
maps=[]
x = y = 0
count = 0
for i in range(n):
    sublist = list(sys.stdin.readline())
    maps.append(sublist)
    if('I' in sublist):
        x = i
        y = sublist.index('I')
next = [(x,y)]
visited[x][y]=True
while(next):
    nowx,nowy = next.pop(0)
    #print(nowx,nowy)
    if(nowx>0 and not visited[nowx-1][nowy] and (maps[nowx-1][nowy]=='O' or maps[nowx-1][nowy]=='P')):
        visited[nowx-1][nowy] = True
        next.append((nowx-1,nowy))
        if(maps[nowx-1][nowy]=='P'):
            count += 1
    if(nowy>0 and not visited[nowx][nowy-1] and (maps[nowx][nowy-1]=='O' or maps[nowx][nowy-1]=='P')):
        visited[nowx][nowy-1] = True
        next.append((nowx,nowy-1))
        if(maps[nowx][nowy-1]=='P'):
            count += 1
    if(nowx<n-1 and not visited[nowx+1][nowy] and (maps[nowx+1][nowy]=='O' or maps[nowx+1][nowy]=='P')):
        visited[nowx+1][nowy] = True
        next.append((nowx+1,nowy))
        if(maps[nowx+1][nowy]=='P'):
            count += 1
    if(nowy<m-1 and not visited[nowx][nowy+1] and (maps[nowx][nowy+1]=='O' or maps[nowx][nowy+1]=='P')):
        visited[nowx][nowy+1] = True
        next.append((nowx,nowy+1))
        if(maps[nowx][nowy+1]=='P'):
            count += 1
if(count):
    print(count)
else:
    print('TT')