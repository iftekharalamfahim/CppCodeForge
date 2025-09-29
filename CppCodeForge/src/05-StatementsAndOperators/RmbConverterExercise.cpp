/*****************************************
 *
 *Exercise for Arithmetic Operator
 *Convert RMB to USD
 *Created by brainsect on 9/27/2025.
 *
******************************************/

#include <iostream>

using namespace std;

int main()
{

    const double usd_per_rmb {0.14};

    cout  <<  "============Welcome to RMB to USD Converter===========" << endl;

    cout << "Enter the amount of RMB: ";

    double rmb {0.0};
    double usd_conversion {0.0};

    cin >> rmb;
    usd_conversion = rmb * usd_per_rmb;
    cout << rmb << " RMB is equivalent to " << usd_conversion << " USD. " <<endl;

    cout  <<  "============Thank you for using RMB to USD Converter===========" << endl;


    cout << endl;
    return 0;
}