/***************************************************************
* Topic: If Statements
* Date: 11/15/2025.
* Learning Goals: Nested-If Statements
* Key Concepts: Uses of Nested-If Statements
 ****************************************************************/

#include <iostream>
using namespace std;


int main() {
 int score {};
 cout << "Enter your score on the exam (0-100): " << endl;
 cin >> score;

 char grade {};

 if (score >=0 && score <= 100) {
  if (score >= 90)
   grade = 'A';
  else if (score >= 80)
   grade = 'B';
  else if (score >= 70)
   grade = 'C';
  else if (score >= 60)
   grade = 'D';
  else
   grade = 'F';
  cout << "Your letter grade is: " << grade << endl;

  if (grade == 'F')
   cout << "Sorry! You have failed in the subject." <<endl;
  else
   cout << "Congrats! You have promoted to the next class." << endl;

 }else {
  cout << "Please enter the number within the range of (0-100)." << endl;
 }
 return 0;
}