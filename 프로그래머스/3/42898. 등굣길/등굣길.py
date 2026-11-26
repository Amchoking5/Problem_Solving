def solution(m, n, puddles):
    board = [[0 for i in range(n)] for j in range(m)]
    for i,j in puddles:
        board[i-1][j-1] = -1
    for i in range(m):
        if board[i][0] == -1:
            break
        board[i][0] = 1
    for j in range(n):
        if board[0][j] == -1:
            break
        board[0][j] = 1
        
    for i in range(1,m):
        for j in range(1,n):
            if board[i][j] == -1:
                pass
            elif board[i-1][j] != -1 and board[i][j-1] != -1:
                board[i][j] = board[i-1][j] + board[i][j-1]
            elif board[i-1][j] != -1:
                board[i][j] = board[i-1][j]
            elif board[i][j-1] != -1:
                board[i][j] = board[i][j-1]
            else:
                board[i][j]= -1
    print(board)
    answer = board[m-1][n-1] %1000000007
    return answer