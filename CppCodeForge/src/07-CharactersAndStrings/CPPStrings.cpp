/***************************************************************
* Topic: C++ Strings
 * Date: 2025-11-26
 * Learning Goals: C++ Strings
 * Key Concepts: Uses of C++ Strings
 ****************************************************************/

#include <iostream>
#include <iomanip>
#include <string>  // important to add

using namespace std;

int main() {

 string s0;
 string s1 {"Rice"};
 string s2 {"Eggs"};
 string s3 {"Capcicum"};
 string s4 {"rice"};
 string s5  {s2};  // Eggs
 string s6 {s2, 0, 3}; // Egg
 string s7 (10, 'X'); // XXXXXXXXXX; be careful with the parenthesis

 // cout << s0 << endl; //No garbage
 // cout << s0.length() << endl; // empty string

 //Initialization
 // cout << "\nInitialization" << "\n-------------------------------------" << endl;
 // cout << "s1 is initialized to : " << s1 << endl;
 // cout << "s2 is initialized to : " << s2 << endl;
 // cout << "s3 is initialized to : " << s3 << endl;
 // cout << "s4 is initialized to : " << s4 << endl;
 // cout << "s5 is initialized to : " << s5 << endl;
 // cout << "s6 is initialized to : " << s6 << endl;
 // cout << "s7 is initialized to : " << s7 << endl;

 //Comparison
 // cout << "\nComparison" << "\n-------------------------------------" << endl;
 // cout << boolalpha;
 // cout << s2 << " == " << s5 <<  ": " << (s2==s5) << endl;                   // True
 // cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;                 // False Rice != Eggs
 // cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;                // True Rice != Eggs
 // cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;                 // False Rice < Eggs; Capital E comes before Capital R is ASCII table
 // cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;                // False Eggs > Rice; Same as above
 // cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;               // False rice < Eggs; Same as above
 // cout << s1 << " == " << "Rice" << ": " << (s1 == "Rice") << endl;    // True Rice == Rice

 //Assignment
 // cout << "\nAssignment" << "\n-------------------------------------" << endl;
 // s1 = "Juhua";
 // cout << "s1 is now: " << s1 << endl;
 // s2 = s1;
 // cout << "s2 is now: " << s2 << endl;
 //
 // s3 = "SAT";
 // cout << "s3 is now: " << s3 << endl;
 //
 // s3[0] = 'F';
 // cout << "s3 change first character to 'F': " << s3 << endl;
 // s3.at(0) = 'A';
 // cout << "s3 change first character to 'A': " << s3 << endl;

 //Concatenation
 // s3 = "Juhua";
 // cout << "\nConcatenation" << "\n-------------------------------------" << endl;
 //
 // s3 = s5 + " and " + s1 + " mixed fried rice.";
 // cout << "s3 is now: "  << s3 << endl;
 //
 // // s3 = "nice " + "yummy " + s5 + " rice";    //compiler error

 // for loop
 // cout << "\nLooping" << "\n-------------------------------------" << endl;
 //
 // s1 = "Juhua";
 // for (size_t i(0); i < s1.length(); ++i)
 //  cout << s1.at(i);    //or s1[i]  Juhua
 // cout << endl;
 //
 // //Ranges-based for loop
 // for (char c: s1)
 //  cout << c;
 // cout << endl;

 //Substring
 // cout << "\nSubstring" << "\n-------------------------------------" << endl;
 // s1 = "This is C++ Substring";
 //
 // cout << s1.substr(0,4) << endl; //This
 // cout << s1.substr(5,2) << endl; // is
 // cout << s1.substr(8,3) << endl; // C++
 // cout << s1.substr(12,9) << endl; // Substring

 //Erase
 // cout << "\nErase" << "\n-------------------------------------" << endl;
 // s1 = "This is C++ Substring";
 // s1.erase(0,11);
 // cout << "s1 is now: " << s1 << endl;

 //getline
 // cout << "\ngetline" << "\n-------------------------------------" << endl;
 //
 // string full_name{};
 //
 // cout << "Enter your full name: ";
 // getline(cin, full_name);
 //
 // cout << "Your full name is: " << full_name << endl;

 //Find
 cout << "\nFind" << "\n-------------------------------------" << endl;

 s1 = "The secret word is Sky";
 string word {};

 cout << "Enter the word to find: ";
 cin >> word;

 size_t position = s1.find(word);
 if (position != string::npos)
  cout << "Found " << word << " at position: " << position << endl;
 else
  cout << "Sorry, " << word << " not found" << endl;

 cout << endl;
 return 0;
}
