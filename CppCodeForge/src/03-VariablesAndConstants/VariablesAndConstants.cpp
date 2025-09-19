#include <iostream>

using namespace std;

// Program for calculating the area of a room in square feet

int main() {
	double length, width, area;

	cout << "Enter the lenght of the room: " << endl;
	cin >> length;
	cout << "Enter the widht of the room: ";
	cin >> width;

	area = length * width;

	cout << "The area of the room is: " << area;

	return 0;
}