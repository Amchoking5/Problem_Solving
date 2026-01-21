import sys

n = int(sys.stdin.readline())
history = [1, 2]
for i in range(45):
    history.append(history[i]+history[i+1])
for i in range(n):
    m = int(sys.stdin.readline())
    print('Scenario #'+str(i+1)+':')
    print(history[m])
    print()
