def min_distance(N,array):
    dsum = 0
    house = []
    chicken =[]
    for i in range(N):
        for j in range(N):
            if(array[i][j]==1):
                house.append((i,j))
            if(array[i][j]==2):
                chicken.append((i,j))
    for ih,jh in house:
        dmin = 1000000
        for ic,jc in chicken:
            if(dmin > abs(ih-ic)+abs(jh-jc)):
                dmin = abs(ih-ic)+abs(jh-jc)
        dsum += dmin
    return dsum

def find_mind(n,m,map_array,chicken):
    mind = 10000000
    if(m==0):
        distance = min_distance(n,map_array)
        if(mind > distance):
            mind = distance
    else:
        for i in range(len(chicken)):
            map_array[chicken[i][0]][chicken[i][1]] = 2
            distance = find_mind(n,m-1,map_array,chicken[i+1:].copy())
            if (distance < mind):
                mind = distance
            map_array[chicken[i][0]][chicken[i][1]] = 0
    return mind

import copy
N, M = map(int,input().split())
map_array =[]
chicken = []
for i in range(N):
    map_array.append(list(map(int,input().split())))

for i in range(N):
    for j in range(N):
        if(map_array[i][j]==2):
            chicken.append((i,j))
            map_array[i][j]=0

answer = find_mind(N,M,map_array,chicken.copy())
print(answer)

