import sys

n,m = map(int,sys.stdin.readline().split())
if(2*n<m):
    print("H")
else:
    print("E")