import sys
t = int(sys.stdin.readline())
for i in range(t):
    n = int(sys.stdin.readline())
    maps=[]
    for j in range(2):
        maps.append(list(map(int,sys.stdin.readline().split())))
    maps_sum = [[[0,0] for i in range(n)]for j in range(2)]
    maps_sum[0][0][1] = maps[0][0]
    maps_sum[1][0][1] = maps[1][0]
    for j in range(1,n):
        maps_sum[0][j][0] = max(max(maps_sum[0][j-1][0],maps_sum[0][j-1][1]),max(maps_sum[1][j-1][0],maps_sum[1][j-1][1]))
        maps_sum[1][j][0] = max(max(maps_sum[0][j-1][0],maps_sum[0][j-1][1]),max(maps_sum[1][j-1][0],maps_sum[1][j-1][1]))
        maps_sum[0][j][1] = max(max(maps_sum[0][j-1][0]+maps[0][j],maps_sum[0][j-1][1]),max(maps_sum[1][j-1][0]+maps[0][j],maps_sum[1][j-1][1]+maps[0][j]))
        maps_sum[1][j][1] = max(max(maps_sum[0][j-1][0]+maps[1][j],maps_sum[0][j-1][1]+maps[1][j]),max(maps_sum[1][j-1][0]+maps[1][j],maps_sum[1][j-1][1]))
    print(max(max(maps_sum[0][n-1][0],maps_sum[0][n-1][1]),max(maps_sum[1][n-1][0],maps_sum[1][n-1][1])))