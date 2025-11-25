/*****************************************
*
 *Exercise for Switch statements
 *Month of the Year
 *Created by brainsect on 11/22/2025.
 *
******************************************/

/*
* In this exercise you will write a switch  statement that displays the name of the month of the year given the day code.

Given the following month codes,
your program should display the month of the year using a cout  statement. No '\n ' or endl  should be used.

Month Code        Display
-----------       ------------------------
   1            January
   2            February
   3            March
   4            April
   5            May
   6            June
   7            July
   8            August
   9            September
   10           October
   11           November
   12           December
 other          Error - illegal day code
 */

#include <iostream>
using namespace std;

int main() {
    int month {};

    cout << "Enter the number of month (1-12): ";
    cin >> month;

    switch (month) {
        case 1: cout << "January";
            break;
        case 2: cout << "February";
            break;
        case 3: cout << "March" ;
            break;
        case 4: cout << "April";
            break;
        case 5: cout << "May";
            break;
        case 6: cout << "June";
            break;
        case 7: cout << "July";
            break;
        case 8: cout << "August";
            break;
        case 9: cout << "September";
            break;
        case 10: cout << "October";
            break;
        case 11: cout << "November";
            break;
        case 12: cout << "December";
            break;

        default: cout << "Error - illegal month code";

    }

    return 0;
}