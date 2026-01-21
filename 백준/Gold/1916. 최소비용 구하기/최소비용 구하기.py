import heapq
n = int(input())
m = int(input())
cost_dict = {}
for i in range(n):
    cost_dict[i+1] = []
for i in range(m):
    a,b,c = map(int,input().split())
    cost_dict[a].append((c,b))
start, end = map(int,input().split())

visited = [False for i in range(n+1)]
visited[start] = True
cost_array = [-1 for i in range(n+1)]
cost_array[start] = 0
heap_array = []
for cost, d in cost_dict[start]:
    heapq.heappush(heap_array,(cost,d))
    if cost_array[d] == -1:
        cost_array[d] = cost
    elif(cost_array[d]>cost):
        cost_array[d] = cost

while(heap_array):
    cost, d = heapq.heappop(heap_array)
    visited[d] = True
    if(d==end):
        break   
    for new_cost, new_d in cost_dict[d]:
        if(not visited[new_d]):
            if cost_array[new_d] == -1:
                cost_array[new_d] = cost+new_cost
                heapq.heappush(heap_array,(cost+new_cost,new_d))
            elif(cost_array[new_d]>cost+new_cost):
                cost_array[new_d] = cost+new_cost
                heapq.heappush(heap_array,(cost+new_cost,new_d))

print(cost_array[end])