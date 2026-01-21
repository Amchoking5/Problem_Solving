nums = input()
lens = len(nums)

star = -1
sums = 0
answer = 0
answer_dict = {1:7, 2:4, 3:1, 4:8, 5:5, 6:2, 7:9, 8:6, 9:3, 0:0, 10:0}

for i in range(lens):
    if nums[i] == '*':
        star = i
    elif i%2:
        sums+=(3*int(nums[i]))
    else:
        sums+=int(nums[i])

if star%2:
    answer = answer_dict[10-(sums%10)]
else:
    answer = 10-(sums%10)

print(answer)
    