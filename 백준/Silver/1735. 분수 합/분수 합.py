a,b = map(int,input().split())
c,d = map(int,input().split())
k = d*b
b1 =b
d1 =d
while (d1):
    temp = b1
    b1 = d1
    d1 = temp % b1
maxbd = k//b1
newa = a*maxbd//b + c*maxbd//d
newb = maxbd
newa1 = newa
newb1 = newb
while (newb1):
    temp = newa1
    newa1 = newb1
    newb1 = temp % newa1
print(newa//newa1)
print(newb//newa1)