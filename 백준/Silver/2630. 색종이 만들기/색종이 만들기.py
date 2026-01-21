import sys

def total_sum(x,y,n):
    if(n==1):
        if(num_array[x][y]):
            return (0,1)
        else:
            return (1,0)
    else:
        color_check = True
        first_color = num_array[x][y]
        for i in range(n):
            for j in range(n):
                if(first_color != num_array[x+i][y+j]):
                    color_check = False
                    break
            if not(color_check):
                break
        if(color_check):
            if(first_color):
                return (0,1)
            else:
                return (1,0)
        else:
            A1, B1 = total_sum(x,y,n//2)
            A2, B2 = total_sum(x+n//2,y,n//2)
            A3, B3 = total_sum(x,y+n//2,n//2)
            A4, B4 = total_sum(x+n//2,y+n//2,n//2)
            return (A1+A2+A3+A4, B1+B2+B3+B4)
            #tuple(sum(elem) for elem in zip(total_sum(x,y,n//2),total_sum(x+n//2,y,n//2),total_sum(x,y+n//2,n//2),total_sum(x+n//2,y+n//2,n//2)))

N = int(sys.stdin.readline())
num_array = []
for i in range(N):
    num_array.append(list(map(int,sys.stdin.readline().split())))
A,B = total_sum(0,0,N)
print(A)
print(B)