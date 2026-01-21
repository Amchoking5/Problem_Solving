import sys
n,m = map(int,sys.stdin.readline().split())
site_dict={}
for i in range(n):
    a,b = sys.stdin.readline().split()
    site_dict[a] = b
for i in range(m):
    a = sys.stdin.readline().split('\n')
    print(site_dict[a[0]])