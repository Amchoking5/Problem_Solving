import sys
N, M = map(int,sys.stdin.readline().split())
numbers = list(map(int,sys.stdin.readline().split()))
totals = []
for i in range(len(numbers)):
    if(i==0):
        totals.append(numbers[i])
    else:
        totals.append(totals[i-1]+numbers[i])
for i in range(M):
    a,b = map(int,sys.stdin.readline().split())
    if(a==1):
        print(totals[b-1])
    else:
        print(totals[b-1]-totals[a-2])