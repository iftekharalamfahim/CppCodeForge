/***************************************************************
* Topic: Range-Based For Loop
 * Date: 2025-11-18
 * Learning Goals: Range-Based For Loop
 * Key Concepts: New concept of For loop introduced in C++11
 ****************************************************************/

#include <iostream>
#include <vector>
#include <iomanip> //IO manipulator

using namespace std;

int  main() {

 // int marks [] {63, 79, 68};
 //
 // for (auto mark : marks)
 //  cout << mark << endl;
/*********************************************************/
 //  vector<double> temperatures {48, 45, 43, 46, 48, 52};
 //
 // double avg_temps {};
 // double total {};
 //
 // for (auto temp: temperatures) {
 //  total +=temp;
 //
 //  if (temperatures.size() !=0)
 //   avg_temps = total / temperatures.size();
 // }
 //
 // cout << fixed << setprecision(1);
 // cout << "Average temperature is " << avg_temps << " F" << endl;
/******************************************************************/
 // for (auto value: {1,2,3,4,5,6,7})
 //  cout << value << endl;
/*****************************************************************/
 // for (auto c: "This is a text")
 //  if (c != ' ')
 //   cout << c;
/*****************************************************************/
 // for (auto c: "This is a text")
 //  if (c == ' ')
 //   cout << "txt";
 // else
 //  cout << c;
/*****************************************************************/
 /*
 * Use a range-based for loop to loop through a given vector of integers and
 * determine how many elements in the vector are evenly divisible by either 3 or by  5.
 * The final result should be stored in an integer variable named count .
 */

 vector<int> random_value{1, 10, 2, 25, 3, 30, 5, 55, 7, 70, 8, 85, 9, 90};

 int count {0};

  cout << "Values divisible by 3 or 5 are: ";

 for (auto value: random_value) {
  if (value % 3 == 0 ||  value % 5 == 0) {
   ++count;
  cout << value << " ";
  }
 }
 cout << "\nTotal divisible value by 3 or 5 is: " << count << endl;

 cout << endl;
 return 0;
}