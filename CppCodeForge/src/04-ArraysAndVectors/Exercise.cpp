/*****************************
*
 *Exercise code for Arrays and Vectors in C++
*Created by brainsect on 9/25/2025.
*
 ******************************/

/*
 *Write a C++ program as follows:
 *
 *Declares 2 empty vectors of integers named vectors1 and vector2, respectively.
 *
 * Add 10 and 20 to vector1 dynamically using push_back
 * Display the elements in vector1 using the at() method as well as its size using the size() method
 *
 * Add 100 and 200 to vector2 dynamically using push_back
 * Display the elements in vector2 using the at() method as well as its size using the size() method
 *
 * Declare an empty 2D vector called vector_2d
 * Remember, that a 2D vector is a vector of vector<int>
 *
 * Add vector1 to vector_2d dynamically using push_back
 * Add vector2 to vector_2d dynamically using push_back
 *
 * Display the elements in vector_2d using the at() method
 *
 * change vector1.at(0) to 1000
 *
 * Display the elements in vector1 again.
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
 // Declares 2 empty vectors of integers named vectors1 and vector2
 vector<int> vector1;
 vector<int> vector2;

 // Add 10 and 20 to vector1 dynamically using push_back
 vector1.push_back(10);
 vector1.push_back(20);

 // Display the elements in vector1 using the at() method as well as its size using the size() method
 cout << "\nVector 1:" << endl;
 cout << "The first element of vector 1: " << vector1.at(0) << endl;
 cout << "The second element of vector 2: " << vector1.at(1) << endl;
 cout <<"There are " <<vector1.size() << " elements in the vector1" <<endl;

 // Add 100 and 200 to vector2 dynamically using push_back
 vector2.push_back(100);
 vector2.push_back(200);

 // Display the elements in vector2 using the at() method as well as its size using the size() method
 cout << "\nVector 2:" << endl;
 cout << "The first element of vector 2: " << vector2.at(0) << endl;
 cout << "The second element of vector 2: " << vector2.at(0) << endl;
 cout <<"There are " <<vector2.size() << " elements in the vector2" <<endl;

 // Declare an empty 2D vector called vector_2d
 vector<vector<int>> vector_2d;

 // Add vector1, and vector2 to vector_2d dynamically using push_back
 vector_2d.push_back(vector1);
 vector_2d.push_back(vector2);

 // Display the elements in vector_2d using the at() method
 cout << "\nVector 2D:" << endl;
 cout<< vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
 cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

 // change vector1.at(0) to 1000
 vector1.at( 0) = 1000;

 cout << "\nVector 2D:" << endl;
 cout<< vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
 cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

 // Display the elements in vector1 again
 cout << "\nVector 1:" << endl;
 cout << "The first element of vector 1: " << vector1.at(0) << endl;
 cout << "The second element of vector 2: " << vector1.at(1) << endl;
 cout <<"There are " <<vector1.size() << " elements in the vector1" <<endl;

 return 0;
}
