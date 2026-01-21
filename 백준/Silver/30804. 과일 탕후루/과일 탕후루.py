import sys

n = int(sys.stdin.readline())
fruits = list(map(int,sys.stdin.readline().split()))
now_fruits = [[-1, -1],[-1, -1]]
start = 0
end = 0
max_value = 0

while(start<n):
    #print(now_fruits, max_value, end)
    if(now_fruits[0][0] == -1):
        now_fruits[0][0] = fruits[start]
        now_fruits[0][1] = start
        start += 1
    elif(now_fruits[0][0] != fruits[start] and now_fruits[1][0] == -1):
        now_fruits[1][0] = fruits[start]
        now_fruits[1][1] = start
        start += 1
    else:
        if(now_fruits[0][0] == fruits[start]):
            now_fruits[0][1] = start
            start += 1
        elif(now_fruits[1][0] == fruits[start]):
            now_fruits[1][1] = start
            start += 1
        else:
            if(now_fruits[0][1] < now_fruits[1][1]):
                max_value = max(max_value, start-end)
                end = now_fruits[0][1]+1
                now_fruits[0][0] = fruits[start]
                now_fruits[0][1] = start
            else:
                max_value = max(max_value, start-end)
                end = now_fruits[1][1]+1
                now_fruits[1][0] = fruits[start]
                now_fruits[1][1] = start

max_value = max(max_value, start-end)
print(max_value)