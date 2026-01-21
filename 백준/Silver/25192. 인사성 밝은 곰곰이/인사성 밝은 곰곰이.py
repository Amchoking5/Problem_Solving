a = int(input())
count = 0
sets = set([])
for i in range(a):
    s = input()
    if(s=="ENTER"):
        count += len(sets)
        sets.clear()
    else:
        sets.add(s)
count += len(sets)
print(count)