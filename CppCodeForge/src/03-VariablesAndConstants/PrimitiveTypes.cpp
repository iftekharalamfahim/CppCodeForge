/*****************************
 *
 *Example code for Primitive Data Types in C++
*Created by brainsect on 9/19/2025.
*
 ******************************/

#include <iostream>

using namespace std;

int main()
{
    /*********************
     *Character Type
     *********************/

    // char last_initial {'K'};
    // cout << "My last initial is " << last_initial << endl;

    /********************
     * Integer Types
     ********************/

    // unsigned short int score {29}; // same as unsigned short score {29};
    // cout << "The game score is " << score << endl;

    // int team_played {16};
    // cout << "There were " << team_played << " team in the valorant championship 2025." << endl;

    // long cars_in_chengdu {281439029};
    // cout << "There are about " << cars_in_chengdu << " cars in Chengdu." << endl;

    // long long cats_on_earth {150'238'320'992};
    // cout << "There are about " << cats_on_earth << " cats on earth." << endl;

    /*********************
     * Floating Type
     *********************/

    // float gas_bill {137.68};
    // cout << "The gas bill for this month is " << gas_bill << endl;

    // double pi{3.14159};
    // cout << "The PI range for this math is " << pi << endl;

    // long double avogador_number{6.022e23};
    // cout << "There are " << avogador_number << " electrons in one mole of substance." << endl;

    /*********************
     * Boolean Type
     *********************/

     // bool match_ended {true};
     // cout << "EDG has been eliminated: " << match_ended << endl;

     /*
      *Overflow Example
      **/
    short number1 {2560};
    short number2 {200};

    short product = {number1 * number2};

    cout << "The product of " << number1 << " and " << number2 << " is " << product << endl;

    return 0;
}