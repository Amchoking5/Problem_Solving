a, b = map(int,input().split())
array=[]
while (a!=0):
    array.append(a%b)
    a = a//b
array.reverse()
for i in range(len(array)):
    if(array[i]<10):
        print(str(array[i]),end='')
    else:
        print(chr(array[i]+55),end='')
