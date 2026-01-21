import sys
import copy

n,s,m = map(int,sys.stdin.readline().split())
songs = list(map(int,sys.stdin.readline().split()))
v = [False for i in range(m+1)]
v[s] = True
for i in songs:
    #print(v)
    new_v = [False for i in range(m+1)]
    for j in range(m+1):
        if(v[j]):
            #print(i,v[j])
            if(i+j<=m):
                new_v[i+j] = True
            if(j-i>=0):
                new_v[j-i] = True
    v = copy.deepcopy(new_v)

check= True
for i in range(m,-1,-1):
    if(v[i]):
        print(i)
        check = False
        break
if(check):
    print(-1)