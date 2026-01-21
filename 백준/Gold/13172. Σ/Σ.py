import sys
module = 1000000007
def find_modules(n,m):
    if(m==1):
        return n
    if(m%2):
        k = find_modules(n,m//2)
        return ((k*k*n)%module)
    else:
        k = find_modules(n,m//2)
        return ((k*k)%module)

sum = 0
m = int(sys.stdin.readline())
for i in range(m):
    n,s = map(int,sys.stdin.readline().split())
    sum += (find_modules(n,module-2)*s)%module
    sum %= module
    
print(sum)