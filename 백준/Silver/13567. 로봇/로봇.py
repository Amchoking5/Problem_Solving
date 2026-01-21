import sys
dir = [[1,0],[0,-1],[-1,0],[0,1]]
m,n = map(int,sys.stdin.readline().split())
check = False
x=0
y=0
nowdir = 0
for i in range(n):
    a,b = sys.stdin.readline().split()
    b = int(b)
    if(a == "MOVE"):
        x+=dir[nowdir][0]*b
        y+=dir[nowdir][1]*b
        if(x<0 or x>m):
            check = True
        if(y<0 or y>m):
            check = True
    elif(a == "TURN"):
        if(b==0):
            if(nowdir==0):
                nowdir=3
            else:
                nowdir -= 1
        elif(b==1):
            if(nowdir==3):
                nowdir=0
            else:
                nowdir += 1
        else:
            check=True
    else:
        check=True
if(check):
    print("-1")
else:
    print(x,y)