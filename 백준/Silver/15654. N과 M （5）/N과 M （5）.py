import sys

def solve(m):
    global n
    if(m<=0):
        print(' '.join(list(map(str,save_array))))
    else:
        for i in range(n):
            if not(visited[i]):
                #print(i,m)
                visited[i] = True
                save_array.append(num_list[i])
                solve(m-1)
                visited[i] = False
                save_array.pop(-1)

n,m = map(int,sys.stdin.readline().split())
num_list = list(map(int,sys.stdin.readline().split()))
num_list.sort()
save_array = []
visited = [False for i in range(n)]
solve(m)