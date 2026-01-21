import sys

t = int(sys.stdin.readline())
for i in range(t):
    m,n,x,y = map(int,sys.stdin.readline().split())
    main_dict = {}
    now = x
    y = y%n
    while(1):
        if(now%n in main_dict):
            print(-1)
            break
        else:
            main_dict[now%n]=True
            if(now%n==y):
                print(now)
                break
            else:
                now+=m