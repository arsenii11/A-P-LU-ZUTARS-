'''
Yulpatova Sofya, sy21002
A24. Given two natural numbers m and n.
Print sum of last n digits in number m. Splitting into digits should be carried out numerically.
The date of creation is 16.09.2021
'''


m = int(input("Enter the integer m: "))  # Value contains integer m - number
n = int(input("Enter the variable n - the number of the last digits m for which you need to calculate the amount: "))  # Value contains integer n - count of digits, starting with the last, for sum numbers m
sumn = 0  # Value contains integer - the amount of last n numbers of m

if n <= 0 or m <= 0:  # checking the n is less than zero + WARNING because the count is a POSITIVE number
    print("WARNING, numbers must be positive")
elif len(str(m)) < n:  # checking that length of n is more than m + WARNING because the number n cant be more than the length of m
    print("WARNING, the length of number m is less than n (number of digits)")
else:
    for _ in range(n):  # the loop to count last n digits
        sumn += m % 10  # the counting sum of last digit of number m in looping
        m //= 10  # discarding the last digit of the number m
    print("the amount of last n numbers of m is:", sumn)  # printing the result
