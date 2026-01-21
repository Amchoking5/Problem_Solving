import sys
n,m = list(map(int,sys.stdin.readline().split()))
maps_sum=[[0 for i in range(n+1)] for j in range(n+1)]
for i in range(n):
    maps = list(map(int,sys.stdin.readline().split()))
    for j in range(n):
        maps_sum[i+1][j+1] = maps[j] + maps_sum[i][j+1] + maps_sum[i+1][j] - maps_sum[i][j]
for i in range(m):
    x1, y1, x2, y2 = map(int,sys.stdin.readline().split())
    print(maps_sum[x2][y2]+maps_sum[x1-1][y1-1]-maps_sum[x2][y1-1]-maps_sum[x1-1][y2])