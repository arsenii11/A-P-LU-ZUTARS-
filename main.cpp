/******************************
 * Matvei Barbashov, mb21162
 * A32. Create a programm to find the smallest common divisible 
 * of two given natural numbers.
 * Programm created: 16.09.2021
 * ****************************/

#include <iostream>

using namespace std;

int main()
{
    int n, m; //Values for the first and second numbers
    int ok;   //Key to loop programm

    //Looping programm
    do
    {
        cout << "Input the first number" << endl;
        cin >> n;
        cout << "Input the second number" << endl;
        cin >> m;

        //Checking that numbers are nonzero, since zero is a not natural number
        if (n > 0 && m > 0)
        {
            int gcd = 1;     //Value for the greatest common divisor
            int lcm = n * m; //Value for the lowest common multiple

            //Euclid's algorithm for finding GCD
            while (m != 0)
            {
                int c = m;
                m = n % m;
                n = c;
            }
            gcd = n;

            lcm /= gcd; //LCM of A and B numbers is A*B/GCD

            cout << "Lowest common multiple is " << lcm << endl;
        }
        else
            cout << "Error: Entered values aren't natural numbers" << endl;

        cout << "Continue (1) or quit (0)?" << endl;
        cin >> ok;

    } while (ok == 1);

    return 0;
}