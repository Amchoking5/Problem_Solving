def kanto(s):
    if(s==0):
        return '-'
    else:
        space = ''
        for i in range(3**(s-1)):
            space += ' '
        return kanto(s-1)+space+kanto(s-1)
    

while True:
    try:
        a = int(input())
        print(kanto(a))         
    except:
        break