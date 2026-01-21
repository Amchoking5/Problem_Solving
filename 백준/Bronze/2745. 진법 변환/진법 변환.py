a,b = input().split()
a = list(a)
a.reverse()
b= int(b)
total = 0
now = 1
for i in range(len(a)):
    if(a[i].isdigit()):
        total += now*int(a[i])
    else:
        total += now*(ord(a[i])-55)
    now *= b
print(total)