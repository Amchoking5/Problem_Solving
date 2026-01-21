import sys
import math
import copy

n = int(sys.stdin.readline())
numbers=[n]
arrays=[i**2 for i in range(1,int(math.sqrt(n))+1)]
check_array = [[False ,False] for i in range(n+1)]
check_dict={}
check = False
for i in range(1,int(math.sqrt(n))+1):
    arrays.append(i**2)
    check_array[i**2][0]=True
    check_dict[i**2]=True
for i in arrays:
    for j in arrays:
        if(i+j<=n):
            check_array[i+j][1] = True
            if (not check and (n-i-j in check_dict)):
                check = True
if(check_array[n][0]):
    print(1)
elif(check_array[n][1]):
    print(2)
else:
    if(check):
        print(3)
    else:
        print(4)