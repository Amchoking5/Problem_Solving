import sys

input = sys.stdin.readline
INF = int(1e9)

def bellman_ford(start):
    distance[start] = 0
    for i in range(v):
        for j in range(2*e+w):
            cur_node = edges[j][0]
            next_node = edges[j][1]
            edge_cost = edges[j][2]
            if distance[cur_node] != INF and distance[next_node] > distance[cur_node] + edge_cost:
                distance[next_node] = distance[cur_node] + edge_cost
                if not(visited[next_node]):
                    visited[next_node] = True
                if i == v - 1:
                    return True
    return False

edges = []
distance = []
t = int(input())
for i in range(t):
    negative_cycle = False
    v, e, w = map(int, input().split())
    edges = []
    visited = [False for i in range(v+1)]
    distance = [INF] * (v + 1)
    for _ in range(e):
        a, b, c = map(int, input().split())
        edges.append((a, b, c))
        edges.append((b, a, c))
    for _ in range(w):
        a, b, c = map(int, input().split())
        edges.append((a, b, -c))
    for j in range(1,v+1):
        if not(visited[j]):
            negative_cycle = negative_cycle or bellman_ford(j)
    
    if negative_cycle:
        print("YES")
    else:
        print("NO")