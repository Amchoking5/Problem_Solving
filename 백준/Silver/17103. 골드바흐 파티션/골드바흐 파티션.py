n=int(input())
array=[1 for i in range(1000001)]
seta=set([])
array[0] = 0
array[1] = 0
for i in range(2,1000001):
    if(array[i]==1):
        seta.add(i)
        k=i*2
        while(k<1000001):
            array[k]=0
            k +=i
lista = list(seta)
lista.sort()
for i in range(n):
    v=int(input())
    count=0
    for i in range(len(lista)):
        if(lista[i]*2 > v):
            break
        if((v-lista[i]) in seta):
            count += 1
    print(count)