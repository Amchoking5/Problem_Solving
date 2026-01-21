import heapq
import copy
N, M, X = map(int,input().split())
matrix_dict = {}
    
for i in range(M):
    a,b,t = map(int,input().split())
    if (a-1) in matrix_dict:
        matrix_dict[a-1].append((t,b-1))
    else:
        matrix_dict[a-1]=[(t,b-1)]

go_array = []
back_array = []
for student in range(N):
    mint = 10000000
    heap_array=[]
    visited = [False for i in range(N)]
    visited[student] = True
    timecost=[10000000 for i in range(N)]
    timecost[student] = 0
    for t,d in matrix_dict[student]:
        if  t != 1000:
            heapq.heappush(heap_array,(t,d))
            timecost[d] = t
    while(heap_array):
        t, d = heapq.heappop(heap_array)
        visited[d] = True
        for new_t, new_d in matrix_dict[d]:
            if(not visited[new_d] and timecost[new_d]>t+new_t):
                timecost[new_d] = t+new_t
                heapq.heappush(heap_array,(t+new_t,new_d))
    if student == X-1:
        back_array = copy.deepcopy(timecost)
    go_array.append(timecost[X-1])

maxt = 0
for i in range(N):
    if (maxt < go_array[i]+back_array[i]):
        maxt = go_array[i]+back_array[i]
print(maxt)
        