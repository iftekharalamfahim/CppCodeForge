/*****************************************
*
 *Exercise for C-Style String
 *Name Length Determination
 *Created by brainsect on 2025/11/25.
 *
******************************************/
 /*
* In this exercise you will create a program that determines the length of a first name and last name individually and
* then the length of the entire name through the use of the C-style string functions strlen, strcpy, and strcat.
*
* Begin by declaring and initializing the C-style string variable first_name to contain "Bjarne".
* Now, declare and initialize a second C-style string variable last_name to contain "Stroustrup".
* You must also declare a third C-style string variable whole_name but do not initialize it yet. Remember that the
* variable whole_name must be large enough to contain the first and last name with no whitespaces.
*
* Now, by using the C-style string function strlen, declare and initialize the variable first_name_length to contain the
* length of the first_name string and the variable last_name_length to contain the length of the last_name string.
*
* Using the C-style string function strcpy, copy the first_name string into the whole_name string variable.
*
* Now, by using the C-style string function strcat, concatenate the last_name string at the end of the whole_name string.
* Finally, by using the C-style string function strlen, declare and initialize the variable whole_name_length to contain
* the length of the whole_name string.
  */

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main() {
    char first_name[20] {"Bjarne"};
    char last_name[20] {"Stroustrup"};
    char whole_name[50];

    cout << "Your first name is " << first_name << endl;
    cout << "Your last name is " << last_name << endl;

    int first_name_string = strlen(first_name);
    int last_name_string = strlen(last_name);

    // size_t first_name_string {strlen(first_name)};
    // size_t last_name_string {strlen(last_name)};

    cout << "Your first name " << first_name << " has " << first_name_string << " characters";
    cout << " and your last name " << last_name << " has " << last_name_string << " characters." << endl;

    strcpy(whole_name, first_name);
    strcat(whole_name, last_name);

    int whole_name_length = strlen(whole_name);
    // size_t whole_name_length {strlen(whole_name)};
    cout << "The whole name has " << whole_name_length << " characters" << endl;

    cout << endl;
    return 0;
}