a,b = map(int,input().split())
seta = set([])
count = 0
for i in range(a):
    seta.add(input())
for i in range(b):
    if(input() in seta):
        count += 1
print(count)