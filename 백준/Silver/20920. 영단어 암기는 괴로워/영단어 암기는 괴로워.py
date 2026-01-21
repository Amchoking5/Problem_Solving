import sys
input = sys.stdin.readline
a,b = map(int,input().split())
dicts={}
maxlen=0
maxval=0
for i in range (a):
    s = input().rstrip()
    if(len(s)>=b):
        if(maxlen<len(s)):
            maxlen=len(s)
        if(s in dicts):
            dicts[s] += 1
        else:
            dicts[s] = 1
        if(dicts[s]>maxval):
            maxv = dict[s]
lists = list(dicts.items())
lists. sort(key = lambda x: (maxval-x[1],maxlen-len(x[0]),x[0]))
for i in range(len(lists)):
    print(lists[i][0])