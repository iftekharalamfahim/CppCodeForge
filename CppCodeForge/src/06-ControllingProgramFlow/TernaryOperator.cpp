/***************************************************************
* Topic: Ternary Operator
 * Date: 2025-11-17
 * Learning Goals: Ternary Operator
 * Key Concepts: Uses of Ternary Operator
 ****************************************************************/

#include <iostream>
using namespace std;

int main() {
 // comparison between two number

 int num1 {}, num2 {};

 cout << "Enter two integers separated by a space: ";
 cin >> num1 >> num2;

 if (num1 != num2) {
  cout << "The largest number is: " << ((num1 > num2) ?  num1 : num2 ) << endl;
  cout << "The smallest number is: " << ((num1<num2) ?  num1 : num2) << endl;
 }else {
  cout << "You have inserted same number twice." << endl;
 }

 return 0;
}