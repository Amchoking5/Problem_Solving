import sys
n,m = map(int,sys.stdin.readline().split())
groupA = []
groupB = []
maps = [[0 for i in range(n+1)] for j in range(n+1)]
for i in range(m):
    a,b = map(int,sys.stdin.readline().split())
    maps[a][b] = maps[b][a] = 1
    
visited = [False for i in range(n+1)]
next = []
for i in range(1,n+1):
    if not(visited[i]):
        next.append(i)
        while(next):
            now = next.pop(0)
            visited[now]=True
            if(now in groupA):
                for j in range(1,n+1):
                    if(maps[now][j]):
                        if j in groupA:
                            print("IMPOSSIBLE")
                            quit()
                        elif j in groupB:
                            pass
                        else:
                            groupB.append(j)
                            visited[j]=True
                            next.append(j)
            elif(now in groupB):
                for j in range(1,n+1):
                    if(maps[now][j]):
                        if j in groupB:
                            print("IMPOSSIBLE")
                            quit()
                        elif j in groupA:
                            pass
                        else:
                            groupA.append(j)
                            visited[j]=True
                            next.append(j)
            else:
                groupA.append(now)
                for j in range(1,n+1):
                    if(maps[now][j]):
                        if j in groupA:
                            print("IMPOSSIBLE")
                            quit()
                        elif j in groupB:
                            pass
                        else:
                            groupB.append(j)
                            visited[j]=True
                            next.append(j)
print("POSSIBLE")