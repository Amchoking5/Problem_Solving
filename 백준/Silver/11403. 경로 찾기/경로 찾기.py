import sys

n = int(sys.stdin.readline())
arrays = []
for i in range(n):
    arrays.append(list(map(int,sys.stdin.readline().split())))

for j in range(n):
    for k in range(n):
        for l in range(n):
            if(arrays[k][l] == 0 and arrays[k][j]==1 and arrays[j][l]==1):
                arrays[k][l] = 1

for i in range(n):
    print(' '.join(list(map(str,arrays[i]))))