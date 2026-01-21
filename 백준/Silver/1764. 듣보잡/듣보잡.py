a,b = map(int,input().split())
seta = set([])
setb = set([])
for i in range(a):
    seta.add(input())
for i in range(b):
    setb.add(input())
setc = seta.intersection(setb)
listc = list(setc)
listc.sort()
print(len(listc))
for i in range(len(listc)):
    print(listc[i])