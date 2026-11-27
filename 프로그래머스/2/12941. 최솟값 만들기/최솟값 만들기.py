def solution(A,B):
    answer = 0
    sorted_A = sorted(A)
    sorted_B = sorted(B, reverse=True)
    n = len(A)
    for i in range(n):
        answer += sorted_A[i]*sorted_B[i]

    return answer