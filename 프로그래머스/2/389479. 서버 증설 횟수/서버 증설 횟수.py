def solution(players, m, k):
    answer = 0
    arraylen = len(players)
    check_array = [(m-1) for i in range(arraylen+k)]
    for i in range(arraylen):
        if(players[i]>check_array[i]):
            new = (players[i]-check_array[i]+m-1)//m
            answer += new
            for j in range(k):
                check_array[i+j] += (m*new)
    return answer