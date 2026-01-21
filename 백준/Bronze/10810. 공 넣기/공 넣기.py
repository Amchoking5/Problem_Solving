a, b = map(int, input().split())
array = [0 for i in range (a)]
for l1 in range (b):
    i,j,k = map(int, input().split())
    for l2 in range (i-1,j):
        array[l2] = k
for i in range (a):
    print(array[i], end=' ')