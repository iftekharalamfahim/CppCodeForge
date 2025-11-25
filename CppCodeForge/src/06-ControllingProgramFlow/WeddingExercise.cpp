/*****************************************
*
 *Exercise for if-else statements
 *Can you marry
 *Created by brainsect on 9/29/2025.
 *
******************************************/

#include <iostream>

using namespace std;

int main()
{
    const int legal_age {18};
    int age {};

    cout << "Enter you legal age: ";
    cin >> age;

    if (age >= legal_age)
    {
        cout << "Yes! You can marry.";
    }else if (age < 0) {
        cout << "The human hasn't born yet!" << endl;

    }else{
        int age_short = legal_age - age;

        cout << "Sorry, come back in " << age_short << " years" <<endl;
    }
    cout << endl;
    return 0;
}