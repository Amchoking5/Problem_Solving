while True:
    total = 0
    a = int(input())
    if(a==-1):
        break
    array=[]
    for i in range(1,a):
        if(a%i == 0):
            total += i
            array.append(i)
    if (total == a):
        print(a,"= ",end='')
        for i in range(len(array)-1):
            print(array[i],"+ ",end='')
        print(array[len(array)-1])
    else:
        print(a,"is NOT perfect.")