import sys
input = sys.stdin.readline
n = int(input().rstrip())
array=[]
dicta={}
maxv = -4001
minv = 4001
maxcount=0
maxindex = 0
secondindex=10000
for i in range(n):
    k=int(input().rstrip())
    if(maxv < k):
        maxv=k
    if(minv > k):
        minv=k
    array.append(k)
    if(k in dicta):
        dicta[k] += 1
    else:
        dicta[k] = 1
array.sort()
print(round(sum(array)/len(array)))
print(array[len(array)//2])
for (k,v) in dicta.items():
    if(v>maxcount):
        secondindex = 10000
        maxindex = k
        maxcount = v
    elif(v==maxcount):
        if(secondindex>k):
            if(maxindex>k):
                if(maxindex>secondindex):
                    maxindex = k
                else:
                    secondindex = k
            else:
                secondindex = k
        elif(maxindex>k):
            maxindex=k
if(secondindex==10000 or maxindex>secondindex):
    print(maxindex)
else:
    print(secondindex)
print(maxv-minv)
