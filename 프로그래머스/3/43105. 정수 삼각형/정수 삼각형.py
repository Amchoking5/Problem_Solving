def solution(triangle):
    arr = [0 for i in range(len(triangle))]
    new_arr = [0 for i in range(len(triangle))]
    answer = 0
    for height in triangle:
        for width in range (len(height)):
            if width==0:
                new_arr[width] += height[width]
            else:
                new_arr[width] = max(arr[width-1],arr[width])+height[width]
        for width in range (len(height)):
            arr[width] = new_arr[width]
            if(new_arr[width]>answer):
                answer = new_arr[width]
    return answer