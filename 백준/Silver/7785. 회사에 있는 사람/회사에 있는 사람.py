a = int(input())
seta = set([])
arraya=[]
for i in range(a):
    b,c = input().split()
    if(c == "enter"):
        seta.add(b)
    elif(c == "leave"):
        seta.remove(b)
for i in seta:
    arraya.append(i)
arraya.sort(reverse=True)
for i in arraya:
    print(i)