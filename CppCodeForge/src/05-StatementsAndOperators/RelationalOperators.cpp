/***************************************************************
* Topic: Relational Operators
 * Date: 2025-09-27
 * Learning Goals: Relational Operators
 * Key Concepts: Different Implementation of Relational Operators
 ****************************************************************/

#include  <iostream>

using namespace std;

int main()
{
 int num1{}, num2{};

 cout << boolalpha;
 // cout << "Enter 2 numbers separated by a space: ";
 // cin >> num1 >> num2;
 //
 //
 // cout << num1 << " > " << num2 << ": " << (num1 > num2) << endl;
 // cout << num1 << " >= " << num2 << ": " << (num1 >= num2) << endl;
 // cout << num1 << " < " << num2 << ": " << (num1 < num2) << endl;
 // cout << num1 << " <= " << num2 << ": " << (num1 <= num2) << endl;

 const int lower {100};
 const int upper {200};

 cout << "\nEnter a number that is greater than " << lower << " : ";
 cin >> num1;
 cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;

 cout << "\nEnter a number that is less than and equal to " << upper << " : ";
 cin >> num1;
 cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;

 cout << endl;
 return 0;
}