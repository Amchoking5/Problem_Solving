import sys
n = int(sys.stdin.readline())

def print_stars(m):
    if(m==3):
        return ["  *  "," * * ","*****"]
    upper_line = print_stars(m//2)
    upper_stars = []
    for i in upper_line:
        upper_stars.append(" "*(m//2)+i+" "*(m//2))
    lower_line1 = print_stars(m//2)
    lower_line2 = print_stars(m//2)
    lower_stars = []
    for i in range(m//2):
        lower_stars.append(lower_line1[i]+" "+lower_line2[i])
    return upper_stars + lower_stars

total_stars = print_stars(n)

for i in total_stars:
    print(i)