import sys
import copy

n = int(sys.stdin.readline())
numbers = list(map(int,sys.stdin.readline().split()))

max_number=0
max_index =0
now_index = 0
for i in range(n):
    if(max_number<=numbers[i]):
        max_number = numbers[i]
        max_index = max(max_index,i-now_index)
        now_index = i
max_index = max(max_index,n-now_index)
print(max_index)