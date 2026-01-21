s=input()
ans=""
check=True
count=0
for i in range(len(s)):
    if(s[i]=='X'):
        count+=1
    else:
        if not(count%2):
            if not(count%4):
                for j in range(count//4):
                    ans=ans+"AAAA"
            else:
                for j in range(count//4):
                    ans=ans+"AAAA"
                ans=ans+"BB"
            ans=ans+"."
            
        else:
            if(check):
                print("-1")
                check=False
        count=0
if not(count%2):
    if not(count%4):
        for j in range(count//4):
            ans=ans+"AAAA"
    else:
        for j in range(count//4):
            ans=ans+"AAAA"
        ans=ans+"BB"
            
else:
    if(check):
        print("-1")
        check=False

if(check):
    print(ans)
