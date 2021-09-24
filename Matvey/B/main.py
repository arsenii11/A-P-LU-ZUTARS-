# Matvei Barbashov, mb21162
# B25. Create program to add and subtract fractional numbers.
# One fractional number is given as two integers (1/3 is given as 1 and 3).
# Result must be non-truncatible. Create and use two functions
# (1) to add two fractions (2) to truncate one fraction
# Program created: 16.09.2021


print("Input the first fraction")
n1, d1 = map(int, input().split())  # Values for a numerator and denominator of the first fraction

print("Input the second fraction")
n2, d2 = map(int, input().split())  # Values for a numerator and denominator of the second fraction


# Function to summarize two fractions
def summarize(n1, d1, n2, d2):
    return n1 * d2 + d1 * n2, d1 * d2


# Function to truncate fractional
def simplify(n, d):
    gcd = 1  # Value for the greatest common divisor
    a = n  # Local value of the nominator of the fraction
    b = d  # Local value of the denominator of the fraction

    # Euclid's algorithm for finding GCD
    while b != 0:
        c = b
        b = a % b
        a = c
    gcd = a

    return n // gcd, d // gcd


# Checking that denominators are not zero
while d1 == 0 or d2 == 0:
    print("Error: Denominator cannot be zero")
    print("Input the first fraction")
    n1, d1 = map(int, input().split())  # Values for a numerator and denominator of the first fraction

    print("Input the second fraction")
    n2, d2 = map(int, input().split())  # Values for a numerator and denominator of the second fraction

n, d = summarize(n1, d1, n2, d2)
n, d = simplify(n, d)

result = n  # Value for the result of program

# In case of inequality of nominator and denominator make a formatting output value
if n != d and n != -d:
    result = '{}/{}'.format(n, d)  # Output format is 'n/d' where n is a nominator and d is a denominator of fraction

print("Sum is:", result)
