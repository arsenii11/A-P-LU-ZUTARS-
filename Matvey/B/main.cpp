/******************************
 * Matvei Barbashov, mb21162
 * B25. Create program to add and subtract fractional numbers. 
 * One fractional number is given as two integers (1/3 is given as 1 and 3). 
 * Result must be non-truncatible. Create and use two functions 
 * (1) to add two fractions (2) to truncate one fraction.
 * Programm created: 16.09.2021
 * ****************************/

#include <iostream>

using namespace std;

//Function to summarize two fractions
int *summarize(int n1, int d1, int n2, int d2)
{
    int *f = new int[2];      //Pointer to set of nominator and denominator of summed fraction
    f[0] = n1 * d2 + n2 * d1; //Nominator of summed fraction
    f[1] = d1 * d2;           //Denominator of summed fraction
    return f;
}

//Function to truncate fractional
int *simplify(int n, int d)
{
    int gcd = 1; //Value for the greatest common divisor
    int a = n;   //Local value of the nominator of the fraction
    int b = d;   //Local value of the denominator of the fraction

    //Euclid's algorithm for finding GCD
    while (b != 0)
    {
        int c = b;
        b = a % b;
        a = c;
    }
    gcd = a;

    int *f = new int[2]; //Pointer to set of nominator and denominator of simplified fraction
    f[0] = n / gcd;      //Nominator of simplified fraction
    f[1] = d / gcd;      //Denominator of simplified fraction

    return f;
}

int main()
{
    int n1, d1; //Values for a numerator and denominator of the first fraction
    int n2, d2; //Values for a numerator and denominator of the second fraction
    int ok;     //Key to loop programm

    //Looping programm
    do
    {
        cout << "Input the first fraction" << endl;
        cin >> n1 >> d1;

        cout << "Input the second fraction" << endl;
        cin >> n2 >> d2;

        if (d1 != 0 && d2 != 0)
        {

            int *f = summarize(n1, d1, n2, d2); //Pointer to summed fraction
            int *g = simplify(f[0], f[1]); //Pointer to simplified fraction

            int n = g[0]; //Value of nominator of result fraction
            int d = g[1]; //Value of denominator of result fraction

            //In case of inequality of nominator and denominator print the fraction else th number
            if (n != d && n != -d)
                cout << "Sum is " << n << "/" << d << endl;
            else
                cout << "Sum is " << n << endl;

            //Clearing memory
            delete[] f;
            delete[] g;
        }
        else
            cout << "Error: Entered values are incorrect" << endl;

        cout << "Continue (1) or quit (0)?" << endl;
        cin >> ok;
    } while (ok == 1);

    return 0;
}