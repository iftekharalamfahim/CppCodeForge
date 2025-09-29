/*****************************************
*
 *Exercise for Mixed Expressions
 *Calculate sum and average of 3 integers
 *Created by brainsect on 9/27/2025.
 *
******************************************/

#include  <iostream>

using namespace  std;

int main()
{
 int total{};
 int score1{}, score2{}, score3{};
 const int count {3};

 cout << "Enter 3 scores separated by spaces: ";
 cin >> score1 >> score2 >> score3;

 total = score1 + score2 + score3;

 double average {0.0};
 average = static_cast<double>(total) / count;
 // average = (double)total/count; // old c-style casting

 cout << "The score was: " << score1 << " " << score2 << " " << score3 << endl;
 cout << "Total: " << total << endl;
 cout << "Average: " << average << endl;


 cout << endl;
 return 0;
}