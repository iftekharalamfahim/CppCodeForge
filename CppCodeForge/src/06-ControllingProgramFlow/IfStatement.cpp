/***************************************************************
* Topic: If Statements
 * Date: 2025-09-29
 * Learning Goals: If Statements
 * Key Concepts: Uses of If Statements
 ****************************************************************/

#include <iostream>

using namespace std;

int main()
{
 int number{};
 int min{10};
 int max{100};

 cout << "Please enter a number between "<< min << " and " << max << ": ";
 cin >> number;

 if (number >=min)
 {
  cout << "\n=========== if,statement 1 ==============" << endl;
  cout << number << " is greater than or equal to " << min << endl;

  int diff = number - min;
  cout << number << " is " << diff << " greater than " << min << endl;
 }

 if (number <= max)
 {
  cout << "=========== if,statement 2 ==============" << endl;
  cout << number << " is less than or equal to " << max << endl;

  int diff = max - number;
  cout << number << " is " << diff << " less than " << max << endl;
 }

 if (number >= min && number <= max)
 {
  cout << "=========== if,statement 3 ==============" << endl;
  cout << number << " is in between " << min << " & " << max << endl;
 }

 if (number == min || number == max)
 {
  cout << "=========== if,statement 4 ==============" << endl;
  cout << number << " is on the line." <<endl;
 }
 cout << endl;
 return 0;
}