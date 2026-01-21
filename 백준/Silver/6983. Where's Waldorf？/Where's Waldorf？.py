import sys

t = int(sys.stdin.readline())
direction = [(1,1),(1,0),(1,-1),(0,-1),(-1,-1),(-1,0),(-1,1),(0,1)]
for i in range(t):
    maps = []
    keywords = []
    m,n = map(int,sys.stdin.readline().split())
    for j in range(m):
        maps.append(list(sys.stdin.readline().lower()))
    k = int(sys.stdin.readline())
    for j in range(k):
        keywords.append(sys.stdin.readline().split('\n')[0].lower())
    for keyword in keywords:
        check = False
        foundx = m
        foundy = n
        for x in range(m):
            for y in range(n):
                if(maps[x][y]==keyword[0]):
                    for dx, dy in direction:
                        check2 = False
                        for lens in range(len(keyword)):
                            if(x+lens*dx >= 0 and x+lens*dx<m and y+lens*dy >= 0 and y+lens*dy < n):
                                if(maps[x+lens*dx][y+lens*dy] != keyword[lens]):
                                    check2 = True
                            else:
                                check2=True
                            if(check2):
                                break
                        if not(check2):
                            check = True
                            break
                if(check):
                    foundy=y+1
                    break
            if(check):
                foundx=x+1
                break
        print(foundx,foundy)
    print()