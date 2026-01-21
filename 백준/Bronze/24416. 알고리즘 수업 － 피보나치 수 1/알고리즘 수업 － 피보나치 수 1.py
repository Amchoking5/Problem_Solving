a = int(input())
array=[1,1]
for i in range(a-2):
    array.append(array[len(array)-1]+array[len(array)-2])
print(array[a-1],a-2)