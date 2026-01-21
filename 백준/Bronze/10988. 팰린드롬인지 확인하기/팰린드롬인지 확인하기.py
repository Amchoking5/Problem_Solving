a = list(input())
b = len(a)
for i in range(b//2):
    if(a[i]!=a[b-i-1]):
        print(0)
        exit()
print(1)
