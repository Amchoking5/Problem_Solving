s=input()
check=0
for i in range(len(s)):
    if(check==0 and s[i]=='U'):
        check=1
    elif(check==1 and s[i]=='C'):
        check=2
    elif(check==2 and s[i]=='P'):
        check=3
    elif(check==3 and s[i]=='C'):
        check=4
        break
if(check==4):
    print("I love UCPC")
else:
    print("I hate UCPC")
    
