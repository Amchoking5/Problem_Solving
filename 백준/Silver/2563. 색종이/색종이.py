array = [[0 for i in range(100)] for j in range(100)]
num = int(input())
for i in range(num):
    x,y = map(int,input().split())
    for j in range(10):
        for k in range(10):
            array[x+k-1][y+j-1] = 1
total = 0
for i in range(100):
    for j in range(100):
        total += array[i][j]
print(total)