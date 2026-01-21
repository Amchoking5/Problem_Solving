a = int(input())
a_array = list(map(int,input().split()))
b = int(input())
b_array = list(map(int,input().split()))
answer = []
same = []
for i in range(a):
    for j in range(b):
        if a_array[i] == b_array[j]:
            same.append((a_array[i],i,j))

same.sort(key=lambda x: (-x[0],x[1],x[2]))
a_index = -1
b_index = -1
for n,a,b in same:
    if(a_index<a and b_index<b):
        a_index = a
        b_index = b
        answer.append(n)

print(len(answer))
if(len(answer)):
    print(' '.join(map((str),answer)))