/***************************************************************
* Topic: Switch Statements
 * Date: 2025-11-17
 * Learning Goals: Switch Statements
 * Key Concepts: Uses of Switch Statements
 ****************************************************************/

/*
 * Ask the user what grade they expect on an exam and tell them what they need to score to get it.
 */

#include  <iostream>
using namespace std;

int main() {
char letter_grade {};

 cout << "Enter your preferred grade: ";
 cin >> letter_grade;

 switch (letter_grade) {
  case 'a':
  case 'A':
   cout << "You need to get 90+. So study hard." << endl;
   break;

  case 'b':
  case 'B':
   cout << "You need to get 80. So go study." << endl;
   break;

   case 'c':
   case 'C':
   cout << "You need to get 70. Chill out then." << endl;
   break;

  case 'd':
  case 'D':
   cout << "You need to get 60. Why work hard? Eat Sleep and Repeat." << endl;
   break;

  case 'f':
  case 'F': {
   char confirmation {};
    cout << "Are you sure? (Y/N): ";
    cin >> confirmation;

   if (confirmation == 'y'  || confirmation ==  'Y')
    cout << "Okay buddy! Go live your life. " << endl;
   else if ( confirmation == 'n' || confirmation == 'N')
    cout << "Alas! GO back to academia. Go Go" << endl;
   else
    cout << "Oh boy! You really want freedom. Heh!" << endl;

   break;
  }

   default:
   cout << "What do you want? Why are you here?" << endl;
 }

 return 0;
}