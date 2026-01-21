abcdict = {'A+' :4.5, 'A0' : 4.0, 'B+' : 3.5,'B0' : 3.0, 'C+':2.5, 'C0':2.0, 'D+':1.5, 'D0':1.0, 'F':0.0, 'P':0.0}
total = 0
num = 0
while True:
    try:
        a,b,c = input().split()
        b= float(b)
        if(c!= 'P'):
            num += b
        total += b*(abcdict[c])
    except:
        break
if(num==0):
    print(0)
else:
    print(total/num)