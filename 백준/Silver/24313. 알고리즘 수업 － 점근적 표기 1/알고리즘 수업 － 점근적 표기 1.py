a,b = map(int,input().split())
c = int(input())
d = int(input())
for i in range(d,101):
    if(a*i+b > c*i):
        print(0)
        exit()
print(1)