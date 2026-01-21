sets = set([])
sets.add("ChongChong")
a = int(input())
for i in range(a):
    a,b = input().split()
    if(a in sets):
        sets.add(b)
    if(b in sets):
        sets.add(a)
print(len(sets))