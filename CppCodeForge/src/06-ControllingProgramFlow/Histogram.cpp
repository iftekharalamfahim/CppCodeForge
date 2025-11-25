/*****************************************
*
 *Exercise for Nested-loops
 *Histogram Project
 *Created by brainsect on 2025/11/24.
 *
******************************************/

#include <iostream>
#include <vector>
using namespace std;

int main() {
 int num_items {};
 cout << "How many items do you have?";
 cin >> num_items;

 vector<int> data;

 for (int i{1}; i <= num_items; ++i) {
  int data_items{};
  cout << "Enter the data item " << i << ":";
  cin >> data_items;

  data.push_back(data_items);
 }

 cout << "\nDisplaying HISTOGRAM" << endl;
 for (auto val: data) {
  for (int i{1}; i <= val; ++i) {
   if ( i % 5 == 0)
    cout << "|";
   else
    cout << "+";
  }
  cout << endl;
 }
 cout << endl;
 return 0;
}