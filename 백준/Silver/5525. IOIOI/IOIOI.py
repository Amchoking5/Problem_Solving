import sys

n = int(sys.stdin.readline())
m = int(sys.stdin.readline())
strings = sys.stdin.readline().split('\n')[0]

now = 0
total = 0
lens = len(strings)
prev = 'O'
count_check=0
while(now<lens):
    if(strings[now]=='I'):
        if(count_check):
            if (prev=='O'):
                prev='I'
                count_check += 1
                if(count_check>n*2):
                    #print(now)
                    total+=1
            else:
                prev='I'
                count_check=1
        else:
            prev='I'
            count_check=1
    else:
        if(prev=='I'):
            prev='O'
            count_check+=1
        else:
            count_check = 0
    now += 1
print(total)