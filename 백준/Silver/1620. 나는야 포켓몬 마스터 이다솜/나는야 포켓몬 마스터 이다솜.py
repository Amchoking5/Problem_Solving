import sys

input = sys.stdin.readline

a,b = map(int,input().split())
dicta = {}
dictb = {}
for i in range(a):
    k = input().rstrip()
    dicta[k] = i+1
    dictb[i+1] = k
for i in range(b):
    k = input().rstrip()
    if(k.isdigit()):
        print(dictb[int(k)])
    else:
        print(dicta[k])