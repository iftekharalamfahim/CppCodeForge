/*****************************
*
 *Exercise code for Statements and Operators in C++
*Created by brainsect on 9/27/2025.
*
 ******************************/

/**********************************************************************************************
 *For this program use US dollars and cents.
 *
 *Write a program that asks the user to enter the following:
 *An integer representing the number of cents
 *
 *You may assume that the number of cents entered is greater than or equal to zero
 *
 *The program should then display how to provide that changes to the user.
 *
 *In the US:
 *    1 dollar is 100 cents
 *    1 quarter is 25 cents
 *    1 dime is 10 cents
 *    1 nickel is 5 cents, and
 *    1 penny is 1 cent
 *
 *    Here is a sample run:
 *
 *    Enter an amount in cents: 92
 *
 *    You can provide this changes as follows:
 *    dollars: 0
 *    quarters: 3
 *    dimes: 1
 *    nickels: 1
 *    pennies: 2
 *
 *    Also, think of how you might solve the problem using the modulo operator.
 *****************************************************************************************/

#include <iostream>

using namespace std;

int main()
{

 int cents {0};
 const int cents_per_dollars {100};
 const int cents_per_quarter {25};
 const int cents_per_dime {10};
 const int cents_per_nickel {5};
 const int cents_per_penny {1};

 cout << "Enter an amount of cents: ";
 cin >> cents;

 if (cents < 0  )
 {
  cout << "Invalid Amount! \nPlease enter a valid amount of cents." << endl;
 }else
 {
  int balance {0};
  int dollars {0};
  dollars = cents / cents_per_dollars;
  cout << "dollars: " << dollars << endl;

  balance = cents % cents_per_dollars;

  int quarters {0};
  quarters = balance / cents_per_quarter;
  cout << "quarters: " << quarters << endl;

  balance %= cents_per_quarter;

  int dime {0};
  dime = balance / cents_per_dime;
  cout << "dime: " << dime << endl;

  balance %= cents_per_dime;

  int nickel {0};

  nickel = balance / cents_per_nickel;
  cout << "nickel: " << nickel << endl;

  balance %=  cents_per_nickel;

  int penny {0};
  penny = balance / cents_per_penny;
  cout << "penny: " << penny << endl;

  cout << endl;
 }

 /* Can also be done without using module operator. for example:

  dollars = cents / cents_per_dollar;
  balance = cents - ( dollar * cents_per_dollar);

  quarters = balance / cents_per_quarter;
  balance -= quartes * cents_per_quarter;

  and so on....
 */

 return 0;
}