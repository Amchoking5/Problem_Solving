t = int(input())
for j in range(t):
    count=0
    x1, y1, x2, y2 = map(int,input().split())
    n = int(input())
    for i in range(n):
        check1 = check2 = False
        cx, cy, r = map(int, input().split())
        if(r**2 >= (x1-cx)**2 + (y1-cy)**2):
            check1 = True
        if(r**2 >= (x2-cx)**2 + (y2-cy)**2):
            check2 = True
        if((check1 and not check2) or (not check1 and check2)):
            count += 1
    print(count)