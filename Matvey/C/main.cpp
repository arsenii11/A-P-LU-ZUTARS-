/******************************
 * Matvei Barbashov, mb21162
 * C37. Print multiplication table in hexadecimal counting system (from 1*1 till F*F).
 * Programm created: 17.09.2021
 * ****************************/

#include <iostream>

using namespace std;

//Function to set the relationship between decimal and hexadecimal
string library(int dec){
    string hex = ""; //Value for string format of number

    //Checking if number is in between zero and ten therefore using library to convert
    if(dec < 10 && dec > 0) hex = to_string(dec);
    else
        switch(dec){
            case 10: hex = "A"; break;
            case 11: hex = "B"; break;
            case 12: hex = "C"; break;
            case 13: hex = "D"; break;
            case 14: hex = "E"; break;
            case 15: hex = "F"; break;
        }

    return hex;
}

//Function to convert decimal to hexadecimal using library
string dectohex(int dec){
    return library(dec/16) + library(dec%16);
}

//Function to fill array decimal numbers in string format
int fill(string table[15][15]){

    for(int i = 0; i < 15; i++)
        for(int j = 0; j < 15; j++)
            table[i][j] = dectohex((i+1)*(j+1)); //Filling the cell with multiplication of numbers using converter in decimal to hexadecimal

    return 0;
}

//Function to print multiplication table
int print(string table[15][15]){
    
    //Printing the header of table
    cout << "\t1\t2\t3\t4\t5\t6\t7\t8\t9\tA\tB\tC\tD\tE\tF" << endl;
    cout << "__________________________________________________________________________________________________________________________" << endl;

    //Printing data
    for(int i = 0; i < 15; i++){
        cout << library(i+1) << " |\t";
        for(int j = 0; j < 15; j++)
            cout << table[i][j] << "\t";
        cout << endl;
    }

    return 0;
}

int main(){

    string table[15][15]; //Array of string for value of multiply
    fill(table); //Filling array
    print(table); //Printing array

    return 0;
}