/***************************************************************
* Topic: Equality Operators
 * Date: 2025-09-27
 * Learning Goals: Equality Operators
 * Key Concepts: Different Implementation of Equality Operators
 ****************************************************************/

#include <iostream>

using namespace std;

int main()
{
 bool equal_result {false};
 bool  not_equal_result {false};

 int score1{}, score2{};

 cout << boolalpha;  // displays true/false instead of 1/0 for booleans

 // cout << "Enter two integers separated by a space: ";
 // cin >> score1 >> score2;
 // equal_result = (score1 == score2);
 // not_equal_result = (score1 != score2);
 // cout << "Comparison result is equal! "<< equal_result << endl;
 // cout << "Comparison result is not equal! " << not_equal_result << endl;

//  char char1{}, char2{};
// cout << "Enter two characters separated by a space: ";
//  cin >> char1 >> char2;
//  equal_result = (char1 == char2);
//  not_equal_result = (char1 != char2);
//  cout << "Comparison result is equal! "<< equal_result << endl;
//  cout << "Comparison result is not equal! " << not_equal_result << endl;

 double double1{}, double2{};
 // cout << "Enter two double separated by a space: ";  // try 10.0 and 9.99999999999999999999999999999999999
 // cin >> double1 >> double2;
 // equal_result = (double1 == double2);
 // not_equal_result = (double1 != double2);
 // cout << "Comparison result is equal! "<< equal_result << endl;
 // cout << "Comparison result is not equal! " << not_equal_result << endl;

 cout << "Enter an integer and a double separated by a space: ";
 cin >> score1 >> double1;
 equal_result = (score1 == double1);
 not_equal_result = (score1 != double1);
 cout << "Comparison result is equal! "<< equal_result << endl;
 cout << "Comparison result is not equal! " << not_equal_result << endl;

 cout << endl;
 return 0;
}