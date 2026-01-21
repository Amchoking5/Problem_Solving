n = int(input())
count = 0
if(n==1):
    count+=1
for i in range(1,n):
    if(i*i<=n):
        count += 1
    else:
        break
print(count)