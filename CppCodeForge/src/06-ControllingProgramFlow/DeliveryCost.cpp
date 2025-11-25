/*****************************************
*
 *Exercise for nested-if statements
 *Delivery Cost Calculator
 *Created by brainsect on 2025/11/15.
 *
******************************************/

/*
 * Delivery Cost Calculator
 *
 * Ask the user for package dimension in inches
 * length, width, height - these should be integers
 *
 * All dimension must be 10 inches or less. otherwise delivery is not possible
 *
 * Base cost $1.50
 * If package volume is greater than 100 cubic inches there is a 10% surcharge
 * If package volume is greater than 500 cubic inches there s a 25% surcharge
 */

#include <iostream>
using namespace std;

int main() {
 cout << "=========================== Delivery Cost Calculator ============================" << endl;
 cout << "Base cost is $1.50." << endl;
 cout << "*There is an additional 10% surcharge on volume greater than 100 cubic inches." << endl;
 cout << "*There is an additional 25% surcharge on volume greater than 500 cubic inches." << endl;

 int length{}, width{}, height{};
 int max_package_dimension {10};

 double tier1_threshold {100};
 double tier2_threshold {500};

 double tier1_surcharge {0.10};
 double tier2_surcharge {0.25};

 double base_cost {1.5};
 int package_volume  {};

 cout << "Enter the length, width, and height of the package with space between: " << endl;
 cin >> length >> width >> height;

 if ( length > max_package_dimension || width > max_package_dimension || height > max_package_dimension ) {
  cout << "Dimension exceeded! Sorry the package can't be delivered." << endl;
 }else {
  double package_cost {};
  package_volume = length * width * height;
  package_cost = base_cost;

  if ( package_volume > tier2_threshold) {

   package_cost += package_cost * tier2_surcharge;
   cout << "Tier 2 surcharge is applicable." << endl;

  }else if (package_volume > tier1_threshold) {

   package_cost += package_cost * tier1_surcharge;
   cout << "Tier 1 surcharge is applicable." << endl;

  }
  cout << "The net volume of the package is: " << package_volume <<  endl;
  cout << "You package delivery will cost: $" << package_cost << endl;
 }
 cout << "================================= Thank You ===================================" << endl;

 cout << endl;
 return 0;
}

