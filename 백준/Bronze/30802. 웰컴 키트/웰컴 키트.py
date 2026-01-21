import math
a = int(input())
b= list(map(int,input().split(' ')))
c1, c2 = map(int,input().split(' '))
sumb = sum(b)
total =0
for i in b:
    total+= math.ceil(i/c1)
print(total)
print(a//c2 , a%c2)