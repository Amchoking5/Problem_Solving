import sys

count_dict = {}
posible = []
maps = [[0 for i in range(13)] for j in range(13)]
for i in range(12):
    a,b = map(int,sys.stdin.readline().split())
    maps[a][b] = maps[b][a] = 1

for i in range(1,13):
    count=0
    nodes = []
    for j in range(1,13):
        if(maps[i][j]):
            count +=1
            nodes.append(j)
    count_dict[i] = count
    if(count==3):
        posible.append((i,nodes))

result = 0
for i,listj in posible:
    count = 0
    for k in listj:
        count += count_dict[k]
    if(count == 6):
        result = i

print(result)