a,b = map(int,input().split())
array = [[0 for i in range(b)] for j in range(a)]
for i in range(a):
    c = list(map(int, input().split()))
    for j in range (len(c)):
        array[i][j] += c[j]
for i in range(a):
    c = list(map(int, input().split()))
    for j in range (len(c)):
        array[i][j] += c[j]
for i in range(a):
    for j in range(b):
        print(array[i][j], end=' ')
    print()