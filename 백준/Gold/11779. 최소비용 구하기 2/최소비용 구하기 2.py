from queue import PriorityQueue

n = int(input())
m = int(input())
bus_dict={}
for i in range(m):
    a,b,c  = map(int,input().split())
    if (a in bus_dict):
        bus_dict[a].append((c,b))
    else:
        bus_dict[a]=[(c,b)]

for i in range(n+1):
    if(i in bus_dict):
        bus_dict[i].sort()

start_i, end_i = map(int,input().split())
visited = [False for i in range(n+1)]
cost_i = [[1000000000,""] for i in range(n+1)]
cost_i[start_i][0] = 0
cost_i[start_i][1] = str(start_i)
next_que = PriorityQueue()
next_que.put((0,start_i))

while(True):
    now_cost,now = next_que.get()
    visited[now]=True
    if(now == end_i):
        break
    if(now in bus_dict):
        choose = bus_dict[now]
        for cost,next_place in choose:
            if(not visited[next_place] and cost_i[now][0]+cost<cost_i[next_place][0]):
                cost_i[next_place][0] = cost_i[now][0]+cost
                cost_i[next_place][1] = cost_i[now][1]+" "+str(next_place)
                next_que.put((cost_i[next_place][0],next_place))


print(cost_i[end_i][0])
print(len(cost_i[end_i][1].split()))
print(cost_i[end_i][1])