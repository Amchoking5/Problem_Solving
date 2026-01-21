a,b = map(int,input().split())
d = a*b
while (b):
    c = a
    a = b
    b = c % a
print(d//a)