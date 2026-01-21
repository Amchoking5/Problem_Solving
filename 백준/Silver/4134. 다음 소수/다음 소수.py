n = int(input())
for i in range(n):
    k = int(input())
    while True:
        if(k==0 or k==1):
            print(2)
            break
        check=0
        for j in range(2,int(k**(1/2)+1)):
            if(k%j==0):
                check=1
                break
        if(check==0):
            print(k)
            break
        k+=1