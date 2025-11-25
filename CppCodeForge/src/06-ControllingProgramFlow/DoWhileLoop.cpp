/***************************************************************
* Topic: Do-While Loop
 * Date: 2025-11-21
 * Learning Goals: do...while loop
 * Key Concepts: Uses of do-while loop
 ****************************************************************/

// Simple cafe menu example

#include <iostream>
using namespace std;

int main() {
 char choice{};

 do {
  cout << "\n======================" << endl;
  cout << "\nChoose form the menu" << endl;
  cout << "1: Coffee" << endl;
  cout << "2: Cakes" << endl;
  cout << "3: Pastry" << endl;
  cout << "Q: Quit" << endl;

  cout << "\nEnter your choice: ";
  cin >> choice;

  // if (choice == '1'){
  //   cout << "You choose coffee" << endl;
  //  }else if (choice == '2') {
  //   cout << "You choose cakes." << endl;
  //  }else if (choice == '3') {
  //   cout << "You choose pastry." << endl;
  //  }else if (choice == 'Q' || choice == 'q') {
  //   cout << "Thank you! The order will be there in a moment." << endl;
  //  }else {
  //   cout << "Wrong credentials!\nPlease choose the correct option." << endl;
  //  }

  switch (choice) {
   case '1':
    cout << "You choose Coffee" << endl;
    break;
   case '2':
    cout << "You choose Cakes" << endl;
    break;
   case  '3':
    cout << "You choose Pastry" << endl;
    break;
   case 'Q':
   case 'q':
    cout << "Thank you! The order will be there in a moment." << endl;
    break;

   default:
    cout << "Wrong credentials!\nPlease choose the correct option." << endl;
  }
 } while (choice != 'Q' && choice != 'q');

 cout << endl;
 return 0;
}