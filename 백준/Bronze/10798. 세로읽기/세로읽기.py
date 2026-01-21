array = [[-1 for i in range(15)] for i in range(5)]
for i in range(5):
    a = list(input())
    for j in range(len(a)):
        array[i][j] = a[j]
for j in range(15):
    for i in range(5):
        if(array[i][j]!= -1):
            print(array[i][j], end='')