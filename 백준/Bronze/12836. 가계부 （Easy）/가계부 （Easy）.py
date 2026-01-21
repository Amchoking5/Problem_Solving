import sys
money_dict = {}
n,m = map(int,sys.stdin.readline().split())
for i in range(m):
    a,b,c = map(int,sys.stdin.readline().split())
    if(a==1):
        if b in money_dict:
            money_dict[b] += c
        else:
            money_dict[b] = c
    else:
        count = 0
        for j in range(b,c+1):
            if j in money_dict:
                count += money_dict[j]
        print(count)