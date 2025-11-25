/***************************************************************
* Topic: While Loop
 * Date: 2025-11-21
 * Learning Goals: While Loop
 * Key Concepts: Uses of While Loop
 ****************************************************************/

#include <iostream>

using namespace std;

int main() {
 // int num {};
 // cout << "Enter a positive number  - start the countdown: ";
 // cin >> num;
 //
 // while (num > 0) {
 //  cout << num << endl;
 //  --num;
 // }
 // cout << "BlastOff!" << endl;

 // int num {};
 // cout << "Enter a positive integer to count up to: ";
 // cin >> num;
 //
 // int i{1};
 //
 // while (num >= i) {
 //  cout << i << endl;
 //  i++;
 // }
 // cout << "You have reached you range. ";

 // int number;
 // cout << "Enter a number between 1-100: ";
 // cin >> number;
 //
 // while (number < 1 || number > 100) {
 //   cout << "Enter an integer between 1 and 100: ";
 //   cin >> number;
 // }
 //   cout << "Thanks";

 bool done {false};
 int num {0};

 while (!done) {
  cout << "Enter a number between 11 and 55: ";
  cin >> num;
  if (num <= 11 || num >= 55) {
   cout << "Out of Range! Try again." << endl;
  }else {
   cout  << "Thanks!" << endl;
   done = true;  // this line is super-duper important
  }
 }

 cout << endl;
 return 0;
}