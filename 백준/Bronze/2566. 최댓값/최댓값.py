maxv = 0
a,b = 0,0
for i in range(9):
    k = list(map(int,input().split()))
    for j in range(len(k)):
        if(maxv<k[j]):
            maxv = k[j]
            a=i
            b=j
print(maxv)
print(a+1,b+1)