a = int(input())
lista = list(map(int,input().split()))
b = int(input())
listb = list(map(int,input().split()))
seta = set([])
for i in range(len(lista)):
    seta.add(lista[i])
for i in range(len(listb)):
    if(listb[i] in seta):
        print(1,end=' ')
    else:
        print(0,end=' ')