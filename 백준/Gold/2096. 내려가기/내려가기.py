n = int(input())
minvalue = [0,0,0]
maxvalue = [0,0,0]
for i in range(n):
    a,b,c = map(int,input().split())
    if i==0:
        minvalue = [a,b,c]
        maxvalue = [a,b,c]
    else:
        minvalue = [min(minvalue[0],minvalue[1])+a,
                    min(min(minvalue[0],minvalue[1]),minvalue[2])+b,
                    min(minvalue[1],minvalue[2])+c]
        maxvalue = [max(maxvalue[0],maxvalue[1])+a,
                    max(max(maxvalue[0],maxvalue[1]),maxvalue[2])+b,
                    max(maxvalue[1],maxvalue[2])+c]
    minanswer = min(min(minvalue[0],minvalue[1]),minvalue[2])
    maxanswer = max(max(maxvalue[0],maxvalue[1]),maxvalue[2])
print(maxanswer,minanswer)