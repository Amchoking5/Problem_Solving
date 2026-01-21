import sys
import copy

def solve_function():
    global posible, arrays, n
    if(len(posible)):
        count = 0
        index = 0
        for i in range(len(arrays)):
            if(arrays[i]==0):
                index = i
                break
        lens = len(posible)
        for i in range(lens):
            if(index+posible[i]+1 < 2*n and arrays[index+posible[i]+1]==0):
                arrays[index] = arrays[index+posible[i]+1] = posible[i]
                save = posible.pop(i)
                count += solve_function()
                posible.insert(i,save)
                arrays[index] = arrays[index+posible[i]+1] = 0
        return count
    else:
        return 1

n,x,y = map(int,sys.stdin.readline().split())
fixed = y-x-1
posible = [i for i in range(1,n+1) if i!=fixed]
arrays = [0 for i in range(2*n)]
arrays[x-1] =arrays[y-1]= fixed

print(solve_function())