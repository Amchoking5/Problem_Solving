s=input()
first=s[0]
count=1
for i in range(len(s)-1):
    if(first!=s[i+1]):
        count=count+1
        first=s[i+1]
print(count//2)
