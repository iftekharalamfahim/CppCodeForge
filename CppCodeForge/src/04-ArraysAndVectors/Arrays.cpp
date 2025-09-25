/***************************************************************
* Topic: Arrays
 * Date: 2025-09-24
 * Learning Goals: Fundamental of Single and Multi-dimensional Arrays
 * Key Concepts: Arrays declaration and initialization, Memory index manipulations.
 ****************************************************************/

#include <iostream>

using namespace std;

int main()
{
 char vowels[] {'a', 'e', 'i', 'o', 'u'};
 cout << "\nThe first vowel is: " << vowels[0] << endl;
 cout << "The last vowel is: " << vowels[4] << endl;

 // cin >> vowels[6]; //out of bounds!

 double hi_score[] {90.5, 89.0, 64.7, 77.6};
 cout << "\nThe first high score is: " << hi_score[0] << endl;

 hi_score[0] = 99.8;
 cout << "The first High score is now: " << hi_score[0] << endl;

 int fruit_price [5]{11, 15, 2, 8, 18};

 cout << "\nFirst price at index 0: " << fruit_price[0] << endl;
 cout << "Second price at index 1: " << fruit_price[1] << endl;
 cout << "Third price at index 2: " << fruit_price[2] << endl;
 cout << "Fourth price at index 3: " << fruit_price[3] << endl;
 cout << "Fifth price at index 4: " << fruit_price[4] << endl;
 // it;s just fill with junk or garbage memory if not initialised

 cout << "\nEnter 5 fruit price: ";
 cin >> fruit_price[0];
 cin >> fruit_price[1];
 cin >> fruit_price[2];
 cin >> fruit_price[3];
 cin >> fruit_price[4];

 cout << "\nThe updated array is: " << endl;
 cout << "First fruit price at index 0: " << fruit_price[0] << endl;
 cout << "Second fruit price at index 1: " << fruit_price[1] <<endl;
 cout << "Third fruit price at index 2: " << fruit_price[2] << endl;
 cout << "Fourth fruit price at index 3: " << fruit_price[3] << endl;
 cout << "Fifth fruit price at index 4: " << fruit_price[4] << endl;

 cout << "\nNotice what the value of the array name is: " << fruit_price << endl; // it's gets the memory location address in hexaCode for the fruit_price array

 return 0;
}