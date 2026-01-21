import sys
import copy

answer = ''
n = sys.stdin.readline()
for i in n:
    if(ord(i)>=ord('a') and ord(i)<=ord('z')):
        answer+=chr( ord(i) + ord('A') - ord('a') )
    elif ord(i)>=ord('A') and ord(i)<=ord('Z'):
        answer += chr( ord(i) - ord('A') + ord('a') )

print(answer)