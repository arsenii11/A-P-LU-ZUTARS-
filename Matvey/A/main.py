# Matvei Barbashov, mb21162
# A32. Create a programm to find the smallest common divisible
# of two given natural numbers.
# Programm created: 16.09.2021

print("Input the first number")
n = int(input())  # Value for the first number
print("Input the second number")
m = int(input())  # Value for the second number


# Checking that numbers are nonzero, since zero is a not natural number
while n < 0 or m < 0:
    print("Error: Entered values aren't natural numbers")
    print("Input the first number")
    n = int(input())  # Value for the first number
    print("Input the second number")
    m = int(input())  # Value for the second number

gcd = 1  # Value for the greatest common divisor
lcm = n * m  # Value for the lowest common multiple

# Euclid's algorithm for finding GCD
while m != 0:
    c = m
    m = n % m
    n = c
gcd = n

lcm //= gcd  # LCM of A and B numbers is A*B/GCD

print("Lowest common multiple is", lcm)
