def solution(info, n, m):
    array = [0 for i in range(m+4)]
    total = 0
    for a,b, in info:
        total += a
        for i in range(m,-1,-1):
            if ((array[i]+a) > array[i+b]):
                array[i+b] = array[i]+a
    answer = total - array[m-1]
    if(answer >= n):
        return -1
    else:
        return answer