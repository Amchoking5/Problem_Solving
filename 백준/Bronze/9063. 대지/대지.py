n = int(input())
xmin,ymin=10001,10001
xmax,ymax=-10001,-10001
for i in range(n):
    x,y = map(int,input().split())
    if(x<xmin):
        xmin=x
    if(y<ymin):
        ymin=y
    if(x>xmax):
        xmax=x
    if(y>ymax):
        ymax=y
print((xmax-xmin)*(ymax-ymin))