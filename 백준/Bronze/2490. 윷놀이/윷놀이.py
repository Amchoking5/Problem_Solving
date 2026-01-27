for i in range(3):
    a,b,c,d = map(int,input().split())
    answer = a+b+c+d
    if (answer == 0):
        print('D')
    elif (answer == 1):
        print('C')
    elif (answer == 2):
        print('B')
    elif (answer == 3):
        print('A')
    elif (answer == 4):
        print('E')
    