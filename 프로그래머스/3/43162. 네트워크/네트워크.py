def solution(n, computers):
    visited = [0 for i in range(n)]
    answer = 0
    for i in range(n):
        if not visited[i]:
            visited[i]=1
            answer += 1
        togo = [i]
        while (togo):
            now = togo.pop(0)
            for j in range(n):
                if computers[now][j] and (not visited[j]):
                    visited[j] = 1
                    togo.append(j)
        
    return answer