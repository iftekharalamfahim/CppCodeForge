/***************************************************************
* Topic: Assignment Operators
 * Date: 2025-09-26
 * Learning Goals: Assignment Operators
 * Key Concepts: Different Implementation of Assignment Operators
 ****************************************************************/

#include <iostream>

using namespace std;

int main()
{
 int num1 {11};
 int num2 {22}; //these two are initialization
 // const int num1 {11};

 // num1 = 103;
 // num2 = 172;

 // num1 = num2;

 // num1 = num2 = 101;

 // num1 = "Code"; //error: invalid conversion from 'const char*' to 'int

 // num1 = 19; //error: assignment of read-only variable 'num1' bc it is assigned as const

 // 100 = num1; //error: lvalue required as left operand of assignment

 cout << "num1 is " << num1 << endl;
 cout << "num2 is " << num2 <<  endl;

 return 0;
}