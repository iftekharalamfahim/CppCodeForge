/***************************************************************
* Topic: Arithmetic Operators
 * Date: 2025-09-26
 * Learning Goals: Arithmetic Operators
 * Key Concepts: Different Implementation of Arithmetic Operators
 ****************************************************************/

#include  <iostream>

using namespace std;

int main()
{
 int num1 {20};
 int num2 {10};

 // cout << num1  << " + " << num2 << " = " << num1 + num2 << endl;

 int result {0};

 result = num1 + num2;
 cout << num1 << " + " << num2 << " = " << result << endl;

 result = num1 - num2;
 cout << num1 << " - " << num2 << " = " << result << endl;

 result = num1 * num2;
 cout << num1 << " * " << num2 << " = " << result << endl;

 result = num1 / num2;
 cout << num1 << " / " << num2 << " = " << result << endl;

 result = num2 / num1;
 cout << num2 << " / " << num1 << " = " << result << endl; // because it is integers

 result = num1 % num2;
 cout << num1 << " % " << num2 << " = " << result << endl;

 num1 = 100;
 num2 = 30;

 result = num1 % num2;
 cout << num1 << " % " << num2 << " = " << result << endl;

 result = num1 * 10 + num2;
 cout << 5/10 << endl;
 cout << 5.0 / 10.0 << endl;

 cout << endl;


 return 0;
}