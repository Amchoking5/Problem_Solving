import sys

def solve(m):
    global n
    if(m<=0):
        print(' '.join(list(map(str,save_array))))
    else:
        for i in range(n):
            k, v = num_list1[i]
            if (v):
                #print(i,m)
                num_list1[i] = (k,v-1)
                save_array.append(k)
                solve(m-1)
                num_list1[i] = (k,v)
                save_array.pop(-1)

n,m = map(int,sys.stdin.readline().split())
num_list = list(map(int,sys.stdin.readline().split()))
check_dict = {}
for i in num_list:
    if(i in check_dict):
        check_dict[i] += 1 
    else:
        check_dict[i] = 1
num_list1 = [(k, v) for k, v in check_dict.items()]
num_list1.sort()
save_array = []
n =len(num_list1)
visited = [False for i in range(n)]
solve(m)