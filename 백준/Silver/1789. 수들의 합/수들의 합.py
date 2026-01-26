n = int(input())
answer = 0
for i in range(1,10000000):
    if ((i*(i+1))//2) > n:
        break
    else:
        answer = i
print(answer)