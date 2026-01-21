import sys

n,m = map(int,sys.stdin.readline().split())
maps=[]
for i in range(n):
    maps.append(list(map(int,sys.stdin.readline().split())))
    
max_value = 0
#1x4 사각형
for i in range(n-3):
    for j in range(m):
        now = maps[i][j]+maps[i+1][j]+maps[i+2][j]+maps[i+3][j]
        max_value = max(max_value,now)

for i in range(n):
    for j in range(m-3):
        now = maps[i][j]+maps[i][j+1]+maps[i][j+2]+maps[i][j+3]
        max_value = max(max_value,now)
    
#2x2 사각형
for i in range(n-1):
    for j in range(m-1):
        now = maps[i][j]+maps[i][j+1]+maps[i+1][j+1]+maps[i+1][j]
        max_value = max(max_value,now)
        
#L 사각형
for i in range(n-2):
    for j in range(m-1):
        now = maps[i][j]+maps[i][j+1]+maps[i+1][j]+maps[i+2][j]
        max_value = max(max_value,now)
        
for i in range(n-2):
    for j in range(m-1):
        now = maps[i][j]+maps[i+2][j+1]+maps[i+1][j]+maps[i+2][j]
        max_value = max(max_value,now)

for i in range(n-2):
    for j in range(m-1):
        now = maps[i][j+1]+maps[i+1][j+1]+maps[i+2][j+1]+maps[i][j]
        max_value = max(max_value,now)
        
for i in range(n-2):
    for j in range(m-1):
        now = maps[i][j+1]+maps[i+1][j+1]+maps[i+2][j+1]+maps[i+2][j]
        max_value = max(max_value,now)
        
for i in range(n-1):
    for j in range(m-2):
        now = maps[i][j]+maps[i][j+1]+maps[i][j+2]+maps[i+1][j]
        max_value = max(max_value,now)
        
for i in range(n-1):
    for j in range(m-2):
        now = maps[i][j]+maps[i][j+1]+maps[i][j+2]+maps[i+1][j+2]
        max_value = max(max_value,now)
        
for i in range(n-1):
    for j in range(m-2):
        now = maps[i+1][j]+maps[i+1][j+1]+maps[i+1][j+2]+maps[i][j]
        max_value = max(max_value,now)
        
for i in range(n-1):
    for j in range(m-2):
        now = maps[i+1][j]+maps[i+1][j+1]+maps[i+1][j+2]+maps[i][j+2]
        max_value = max(max_value,now)

#s 곡선
for i in range(n-1):
    for j in range(m-2):
        now = maps[i][j]+maps[i+1][j+1]+maps[i+1][j+2]+maps[i][j+1]
        max_value = max(max_value,now)
        
for i in range(n-1):
    for j in range(m-2):
        now = maps[i+1][j]+maps[i+1][j+1]+maps[i][j+1]+maps[i][j+2]
        max_value = max(max_value,now)
        
for i in range(n-2):
    for j in range(m-1):
        now = maps[i][j]+maps[i+1][j+1]+maps[i+2][j+1]+maps[i+1][j]
        max_value = max(max_value,now)
        
for i in range(n-2):
    for j in range(m-1):
        now = maps[i][j+1]+maps[i+1][j+1]+maps[i+2][j]+maps[i+1][j]
        max_value = max(max_value,now)

#ㅗ 모양
for i in range(n-1):
    for j in range(m-2):
        now = maps[i][j]+maps[i][j+1]+maps[i][j+2]+maps[i+1][j+1]
        max_value = max(max_value,now)
        
for i in range(n-1):
    for j in range(m-2):
        now = maps[i+1][j]+maps[i+1][j+1]+maps[i+1][j+2]+maps[i][j+1]
        max_value = max(max_value,now)
        
for i in range(n-2):
    for j in range(m-1):
        now = maps[i][j]+maps[i+1][j]+maps[i+2][j]+maps[i+1][j+1]
        max_value = max(max_value,now)
        
for i in range(n-2):
    for j in range(m-1):
        now = maps[i][j+1]+maps[i+1][j+1]+maps[i+2][j+1]+maps[i+1][j]
        max_value = max(max_value,now)
        
print(max_value)