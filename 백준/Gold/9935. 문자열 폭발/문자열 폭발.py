array=[]
a = input()
b = input()
for i in a:
    array.append(i)
    if(len(array)>=len(b)):
        c = ''.join(array[len(array)-len(b):len(array)])
        if(c == b):
            for j in range(len(b)):
                array.pop()
if(len(array)==0):
    print("FRULA")
else:
    print(''.join(array))