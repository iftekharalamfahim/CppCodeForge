/*****************************************
*
 *Exercise for Logical Operators
 *Determine if you need to wear a t-shirt based on temperature and wind speed
 *Created by brainsect on 9/27/2025.
 *
******************************************/

#include <iostream>

using namespace std;

int main()
{
// int num{};
//  const int lower {100};
//  const int upper {200};

 cout << boolalpha;

 // Determine if an entered integer is between two integers
 // assume lower < upper
 // cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
 // cin >> num;
 //
 // bool within_bounds {false};
 //
 // within_bounds = (num > lower && num < upper );
 // cout << num << " is between " << lower << " and " << upper << " " << within_bounds << endl;

 // Determine if an entered integer is outside two other integers
 // assume lower < upper
 // cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
 // cin >> num;
 //
 // bool outside_bounds {false};
 //
 // outside_bounds = (num < lower || num > upper );
 // cout << num << " is outside " << lower << " and " << upper << " " << outside_bounds << endl;

 // Determine if an entered integer is exactly on the boundary
 // assume lower < upper
 // cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
 // cin >> num;
 //
 // bool on_bounds {false};
 //
 // on_bounds = (num == lower || num == upper );
 // cout << num << " is on one of the bounds which are " << lower << " and " << upper << " : " << on_bounds << endl;

 //  Exercise - Determine if you need to wear a t-shirt based on temperature and wind speed
 bool wear_tshirt {false};
 double temperature{};
 int wind_speed {};

 const double temperature_for_tshirt {20};
 const int wind_speed_for_tshirt{25};

 cout << "Enter today's temperature (C): " << endl;
 cin >> temperature;
 cout << "Enter the wind speed (kmh): " << endl;
 cin >> wind_speed;

 // if the wind speed is too High or the temperature is too Low
 wear_tshirt = (temperature < temperature_for_tshirt || wind_speed > wind_speed_for_tshirt);
 cout << "You need to wear a t-shirt (using OR): " << wear_tshirt << endl;

 //if the wind speed is too High and the temperature is too Low
 wear_tshirt = (temperature < temperature_for_tshirt && wind_speed > wind_speed_for_tshirt);
 cout << "You need to wear a t-shirt (using AND): " << wear_tshirt << endl;

 cout << endl;
 return 0;
}