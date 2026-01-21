import sys
n = int(sys.stdin.readline())
numlist = list(map(int,sys.stdin.readline().split()))
numlist.sort()
avgnum = numlist[0]
sum=0
for i in range(1,n):
    sum+=numlist[i]*i-avgnum
    avgnum += numlist[i]
print(2*sum)