s = input()
slen = len(s)
sets = set([])
for i in range(slen):
    for j in range(0,slen-i):
        sets.add(s[j:i+j+1])
print(len(sets))