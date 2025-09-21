/***************************************************************
* Topic: Variables and Constants
 * Date: 2025-09-21
 * Learning Goals:Master Basic Syntax and Data Types
 * Key Concepts: Different Data Types Variables, and Constants.
 ****************************************************************/

#include <iostream>

using namespace std;

// Program for calculating the area of a room in square feet

int age {18}; // global variable
int main() {

	cout << "Enter the length of the room: ";
	double room_length {0};
	cin >> room_length;

	cout << "Enter the width  of the room: ";
	double room_width {0};
	cin >> room_width;

	cout << "The area of the room is " << room_length * room_width << " sqaure feet " << endl;

	double room_area{0};
	room_area = room_length * room_width;

	cout << "The area of the room is: " << room_area;

	return 0;
}