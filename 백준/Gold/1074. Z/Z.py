def solve_function(n,r,c):
    #print(n,r,c)
    if(n==0):
        return 0
    if(2**(n-1) > r): #위 아래로 절반 위
        if(2**(n-1) > c): #좌우로 로 절반 왼쪽
            #print(0)
            return solve_function(n-1,r,c)
        else:
            #print(1)
            return ((2**(n-1))**2)+solve_function(n-1,r,c-2**(n-1))
    else:
        if(2**(n-1) > c): #좌우로 로 절반 왼쪽
            #print(2)
            return 2*((2**(n-1))**2)+solve_function(n-1,r-2**(n-1),c)
        else:
            #print(3)
            return 3*((2**(n-1))**2)+solve_function(n-1,r-2**(n-1),c-2**(n-1))
        

import sys
n, r, c = map(int,input().split())
print(solve_function(n,r,c))