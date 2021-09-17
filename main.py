# Matvei Barbashov, mb21162
# A32. Create a programm to find the smallest common divisible 
# of two given natural numbers.
# Programm created: 16.09.2021

print("Input the first number")
n = input() #Value for the first number
print("Input the second number")
m = input() #Value for the second number

n = int(n)
m = int(m)
    
#Checking that numbers are nonzero, since zero is a not natural number
if n > 0 and m > 0:
    gcd = 1 #Value for the greatest common divisor
    lcm = n*m #Value for the lowest common multiple 

    #Euclid's algorithm for finding GCD
    while m != 0:
        c = m
        m = n%m
        n = c
    gcd = n
        
    lcm //= gcd #LCM of A and B numbers is A*B/GCD

    print("Lowest common multiple is", lcm)
else:
    print("Error: Entered values aren't natural numbers")
