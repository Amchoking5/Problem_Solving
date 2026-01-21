a = input()
b = input()
c = input()
number = 0
if(a != 'FizzBuzz' and a != 'Fizz' and a != 'Buzz'):
    number = int(a)+3
elif(b != 'FizzBuzz' and b != 'Fizz' and b != 'Buzz'):
    number = int(b)+2
else:
    number = int(c)+1
if not(number%5 or number%3):
    print("FizzBuzz")
elif (number%5==0):
    print("Buzz")
elif (number%3==0):
    print("Fizz")
else:
    print(number)