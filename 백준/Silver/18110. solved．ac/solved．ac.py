import sys
total = 0
arrayA = []
count = int(input())
if not(count):
    print(0)
else:
    deleten = int(count*0.15+0.5)
    total = 0
    for i in range(count):
        arrayA.append(int(sys.stdin.readline()))
    arrayA.sort()
    print(int(sum(arrayA[deleten:count-deleten])/(count-2*deleten) + 0.5))