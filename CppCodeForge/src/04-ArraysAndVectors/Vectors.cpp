/***************************************************************
* Topic: Vectors
 * Date: 2025-09-24
 * Learning Goals: Fundamental of Single and Multi-dimensional Vectors
 * Key Concepts: Vectors declaration and initialization, Memory index manipulations.
 ****************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
 // vector<char> vowels;  //empty
 // vector<char> vowels (5); //5 initialized to 0
 vector<char> vowels {'a','e','i','o','u'};

 cout << vowels[0] << endl;
 cout << vowels[4] << endl;

 vector<int> fruit_prices {11, 45, 26};

 cout << "\nFruit Prices using array syntax:" << endl;
 cout << fruit_prices[0] << endl;
 cout << fruit_prices[1] << endl;
 cout << fruit_prices[2] << endl;

 cout << "\nFruit Prices using vector syntax:" << endl;
 cout << fruit_prices.at(0) << endl;
 cout << fruit_prices.at(1) << endl;
 cout << fruit_prices.at(2) << endl;
 cout << "\nThere are " << fruit_prices.size() << " prices in the vector" << endl;

 cout << "\nEnter the fruit_prices: ";
 cin >> fruit_prices.at(0);
 cin >> fruit_prices.at(1);
 cin >> fruit_prices.at(2);

 cout << "\nUpdated Fruit Prices: " <<endl;

 cout << fruit_prices.at(0) << endl;
 cout << fruit_prices.at(1) << endl;
 cout << fruit_prices.at(2) << endl;

 cout << "\nEnter a fruit price to add to the vector: ";

 int price_to_add {0};
 cin >> price_to_add;

 fruit_prices.push_back(price_to_add); // add to the back of the vector
 cout << "\nEnter one more fruit price to add to the vector: ";

 cin >> price_to_add;

 fruit_prices.push_back(price_to_add);

 cout << "\nFruit Prices are now: " << endl;

 cout << fruit_prices.at(0) << endl;
 cout << fruit_prices.at(1) << endl;
 cout << fruit_prices.at(2) << endl;
 cout << fruit_prices.at(3) << endl;
 cout << fruit_prices.at(4) << endl;

 cout << "\nThere are now " << fruit_prices.size() << " prices in the vector" << endl;

 // cout << "This should cause an exception!! " << fruit_prices.at(10) << endl;

 //Example of 2D vector

 vector<vector<int>> anime_ratings{
  {1,2,3,4},
  {9,8,7,6},
  {3,4,6,7}
 };

 cout << "\nHere are the anime rating for reviewer #1 using array syntax: " << endl;
 cout << anime_ratings[0][0] << endl;
 cout << anime_ratings [0][1] << endl;
 cout << anime_ratings [0][2] << endl;
 cout << anime_ratings [0][3] << endl;

 cout << "\nHere are the anime rating for reviewer #1 using vector syntax: " << endl;
 cout << anime_ratings.at(0).at(0) << endl;
 cout << anime_ratings.at(0).at(1) << endl;
 cout << anime_ratings.at(0).at(2) << endl;
 cout << anime_ratings.at(0).at(3) << endl;



 return  0;
}