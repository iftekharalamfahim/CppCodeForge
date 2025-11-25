/***************************************************************
* Topic: Switch Statements
 * Date: 2025-11-17
 * Learning Goals: Switch Statements with enum
 * Key Concepts: Uses of enum inside  od a switch Statements
 ****************************************************************/

#include <iostream>
using namespace std;

int main() {

 enum Direction {
  left_side, right_side, up_side, down_side
 };

 Direction heading {left_side};

 switch (heading) {
  case left_side:
   cout << "Going to the left direction." << endl;
   break;
  case right_side:
   cout <<  "Going to the right direction." << endl;
   break;
  default:
   cout <<  "Okay! You are up-to-date." << endl;
 }

 cout << endl;
 return 0;
}