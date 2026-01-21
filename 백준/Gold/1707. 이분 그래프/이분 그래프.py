import sys

def bicolor(start):
    global yesno,visit,bicheck,node
    head=0
    tail=0
    q = []
    visit[start]=True
    q.append(start)
    tail=tail+1
    while(head<tail):
        now = q[head]
        for i in range(len(node[now])):
            if(visit[node[now][i]]):
                if(bicheck[now]==bicheck[node[now][i]]):
                    yesno=False
                    return
            else:
                visit[node[now][i]]=True;
                bicheck[node[now][i]]=(not(bicheck[now]))
                q.append(node[now][i])
                tail=tail+1
        head=head+1

def bfs():
    global yesno,visit
    for i in range(v):
        if(not(visit[i+1])):
            bicolor(i+1)
            if(not(yesno)):
                return

#메인함수

testcase=int(sys.stdin.readline())
for testcases in range(testcase):
    yesno=True;
    keep1=sys.stdin.readline().split()
    v=int(keep1[0])
    e=int(keep1[1])
    node = [ [] for i in range(v+1)]
    visit = [False for i in range(v+1)]
    bicheck = [False for i in range(v+1)]
    for i in range(e):
        keep2=sys.stdin.readline().split()
        a=int(keep2[0])
        b=int(keep2[1])
        node[a].append(b)
        node[b].append(a)
    bfs()
    if(yesno):
        print("YES")
    else:
        print("NO")
