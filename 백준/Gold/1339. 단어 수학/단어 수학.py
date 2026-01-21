import operator
alpha_dict={}
sorted_dict={}

n=int(input())
nums=[]
for i in range(n):
    nums.append(input())

for i in range(n):
    nowlen=len(nums[i])
    for j in range(nowlen):
        if not(nums[i][j] in alpha_dict):
            alpha_dict[nums[i][j]]=0
        alpha_dict[nums[i][j]] = alpha_dict[nums[i][j]]+(10 ** (nowlen-j-1))

sorted_dict= sorted(alpha_dict.items(), key=operator.itemgetter(1))
sorted_dict.reverse()
total=0
for i in range(len(sorted_dict)):
    total=total+sorted_dict[i][1]*(9-i)
print(total)
