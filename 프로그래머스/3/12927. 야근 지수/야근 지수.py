def solution(n, works):
    works_time = [0 for i in range(50002)]
    time_left = n
    base_set = set()
    base_set.add(0)
    for i in works:
        works_time[i] += 1
        base_set.add(i)
    sorted_list = sorted(base_set, reverse=True)
    
    last_time = sorted_list.pop(0)
    
    for i in sorted_list:
        if (last_time-i)*works_time[last_time] <= time_left:
            time_left -= (last_time-i)*works_time[last_time]
            works_time[i] += works_time[last_time]
            works_time[last_time] = 0
            last_time = i
        else :
            k = time_left // works_time[last_time]
            l = time_left % works_time[last_time]
            if (k != 0):
                works_time[last_time-k] += works_time[last_time]
                works_time[last_time] = 0
            if (l != 0):
                works_time[last_time-k] -= l
                works_time[last_time-k-1] += l
            time_left = 0
        if time_left==0 or i==0:
            break
            
    answer = 0
    if time_left==0:
        for i in range(1,last_time+1):
            answer += works_time[i]*i*i
    return answer