/*******************************
 *
 * Example of Sizeof() Operators
 *Created by brainsect on 9/20/2025.
 *
 *******************************/

#include <iostream>
#include <climits>   //for integer types

using namespace std;

int main()
{
    cout  << "sizeof information" <<endl;
    cout << "===========================================================" << endl;

    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "short: " << sizeof(short) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;

    cout << "===========================================================" << endl;

    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes." << endl;
    cout << "long double: " << sizeof(long double) << " bytes." << endl;

    cout << "===========================================================" << endl;

    // Use values defined in <climits> to display min and max values

    cout << "Minimum values: " << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;

    cout << "===========================================================" << endl;

    cout << "Maximum values: " << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;

    //sizeof can also be used on variables
    cout << "============================================================" << endl;

    cout << "sizeof using variables name" << endl;
    int day {443};
    cout << "day is " << sizeof(day) << " bytes." << endl;
    cout << "day is " << sizeof day << " bytes." << endl; // parenthesis optional

    double time {44.54};
    cout << "day is " << sizeof(time) << " bytes." << endl;
    cout << "day is " << sizeof time << " bytes." << endl;

    return 0;
}