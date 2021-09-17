/*
 Yulpatova Sofya, sy21002
 A24. Given two natural numbers m and n.
 Print sum of last n digits in number m. Splitting into digits should be carried out numerically.
 The date of creation is 16.09.2021
*/



#include <iostream>

using namespace std;

int main() {
    int ok;
    do {
        // ABOUT m: Value contains integer m - number
        // ABOUT n: Value contains integer n - count of digits, starting with the last, for sum numbers m
        int m, n;
        cout << "Enter the integer m: ";
        cin >> m;
        cout << "Enter the variable n - the number of the last digits m for which you need to calculate the amount: ";
        cin >> n;
        int fake_m = m; // the value - fake of m to count the length os number m
        int counter_m = 0; // the value-counter for number m
        int sum = 0; // # Value contains integer - the amount of last n numbers of m

        if (n <= 0 or m <= 0) { // checking the n is less than zero + WARNING because the count is a POSITIVE number
            cout << "WARNING, numbers must be positive" << endl;
        } else {
            // checking the length of m
            while (abs(fake_m) > 0) {
                counter_m++; // updating counter of digits
                fake_m /= 10; // discarding the last digit of fake_m
            }
            if (n > counter_m) { // checking that length of n is more than m + WARNING because the number n can't be more than the length of m
                cout << "WARNING, the length of number m is less than n (number of digits)" << endl;
            } else {

                for (; n > 0; n--) { // the loop to count last n digits
                    sum += m % 10; // the counting sum of last digit of number m in looping
                    m /= 10; // discarding the last digit of the number m
                }
                cout << "the amount of last n numbers of m is: " << sum << endl;
            }
        }


        cout << " Continue (1) or quit (0)?" << endl;
        cin >> ok;
    }
    while (ok == 1);


}