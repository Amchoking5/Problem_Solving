c, n =map(int,input().split())
cost_array=[]
for i in range(n):
    a,b = map(int,input().split())
    cost_array.append((a,b))

values = [100000000 for i in range(1200)]
values[0] = 0
first = 0
for cost,value in cost_array:
    for i in range(c+1):
        if(values[i]+cost<values[i+value]):
            values[i+value] = values[i]+cost

print(min(values[c:]))