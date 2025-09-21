/*****************************
*
 *Example code for Constants in C++
*Created by brainsect on 9/21/2025.
*
 ******************************/


/*
 * Redx Mushroom Service
 * Charges:
 *    Oyster Mushrooms: $11 per box
 *    Enoki Mushrooms: $5 per box
 * Sales tax rate is 5%
 * Estimates are valid for 30 days
 *
 * Prompt the user for the number of boxes they want
 * and provide an estimate such as:
 *
 * Estimate for Redx Mushroom Service:
 * Number of boxes: 5
 * Price per box: $11
 * Cost: $55
 * Tax: $2.75
 * ==============================================
 * Total estimate: $57.75
 * This estimate is valid for 30 days
 *
 * Pseudocode:
 *     1. Prompt the user for the number of boxes
 *     2. Display number of boxes, price per box.
 *     3. Calculate cost as number of boxes * price per box
 *     4. Calculate tax as cost * tax rate
 *     5. Display total estimate as cost + tax
 *     6. Display estimate validity
 */

#include <iostream>

using namespace std;

int main()
{

 cout << "=============================================="<< endl;
 cout << "Welcome to Redx Mushroom Service" << endl;
 cout << "=============================================="<< endl;
 cout << "How many boxes of Oyster mushrooms do you need? " << endl;
 int oyster_mushroom_box;
 cin >> oyster_mushroom_box;

 cout << "How many boxes of Enoki mushrooms do you need? " << endl;
 int enoki_mushroom_box;
 cin >> enoki_mushroom_box;

 const double price_of_oyster_mushroom_box {11.0};
 const double price_of_enoki_mushroom_box {5.0};
 const double tax_rate {0.05};
 const int estimate_expiry {30};

 cout <<  "Estimate for Redx Mushroom Service" << endl;
 cout << "\nNumber of Oyster Mushroom boxes: " << oyster_mushroom_box << endl;
 cout << "Number of Enoki Mushroom boxes: " << oyster_mushroom_box << endl;
 cout << "Oyster Mushrooms price per box: $" << price_of_oyster_mushroom_box << endl;
 cout << "Enoki Mushrooms price per box: $" << price_of_enoki_mushroom_box << endl;

 double cost_of_oyster = oyster_mushroom_box * price_of_oyster_mushroom_box;
 cout << "Cost for oyster mushroom: $" << cost_of_oyster << endl;

 double cost_of_enoki = enoki_mushroom_box * price_of_enoki_mushroom_box;
 cout << "Cost for enoki mushroom: $" << cost_of_enoki << endl;

 double cost = cost_of_oyster + cost_of_enoki;
 cout << "Cost: $" << cost << endl;

 double tax = cost * tax_rate;
 cout << "Tax: $" << tax << endl;

 cout << "=============================================="<< endl;
 cout << "Total estimate: $" << cost + tax << endl;
 cout << "The estimate is valid for " << estimate_expiry << " days" << endl;
 cout << "=============================================="<< endl;

 return 0;
}