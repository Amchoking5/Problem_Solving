import sys
from queue import PriorityQueue

t = int(sys.stdin.readline())

for i in range(t):
    lowque = PriorityQueue()
    highque = PriorityQueue()
    high_check_dict = {}
    low_check_dict = {}
    n = int(sys.stdin.readline())
    now = 0
    
    for j in range(n):
        a,b = sys.stdin.readline().split()
        b = int(b)
        
        if a == 'I':
            now += 1
            lowque.put(b)
            highque.put(-b)
        elif a == 'D':
            if now:
                if b == -1:
                    number = lowque.get()
                    while number in high_check_dict and high_check_dict[number] != 0:
                        high_check_dict[number] -= 1
                        number = lowque.get()
                    if number not in low_check_dict:
                        low_check_dict[number] = 1
                    else:
                        low_check_dict[number] += 1
                    now -= 1
                elif b == 1:
                    number = -highque.get()
                    while number in low_check_dict and low_check_dict[number] != 0:
                        low_check_dict[number] -= 1
                        number = -highque.get()
                    if number not in high_check_dict:
                        high_check_dict[number] = 1
                    else:
                        high_check_dict[number] += 1
                    now -= 1
                    
    if now:
        max_val = -highque.get()
        while max_val in low_check_dict and low_check_dict[max_val] != 0:
            low_check_dict[max_val] -= 1
            max_val = -highque.get()
        min_val = lowque.get()
        while min_val in high_check_dict and high_check_dict[min_val] != 0:
            high_check_dict[min_val] -= 1
            min_val = lowque.get()
        print(max_val, min_val)
    else:
        print('EMPTY')