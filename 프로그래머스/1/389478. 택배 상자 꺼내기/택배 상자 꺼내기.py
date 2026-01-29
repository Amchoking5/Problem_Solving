def solution(n, w, num):
    base = ((n-1)//w) - ((num-1)//w)
    if(((n-1)//w)%2==0):
        if (((num-1)//w)%2==0):
            if ((n-1)%w)>=((num-1)%w):
                base += 1
        else:
            if ((n-1)%w)>=(w-(num-1)%w)-1:
                base += 1 
    else:
        if (((num-1)//w)%2==0):
            if ((n-1)%w)>=(w-(num-1)%w)-1:
                base += 1
        else:
            if (w-(n-1)%w)-1<=(w-(num-1)%w)-1:
                base += 1 
    return base