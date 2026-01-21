a, b = map(int, input().split())
array = [(i+1) for i in range (a)]
for i in range (b):
    c, d = map(int, input().split())
    temp = array[c-1]
    array[c-1] = array[d-1]
    array[d-1] = temp
for i in range (a):
    print(array[i], end=' ')