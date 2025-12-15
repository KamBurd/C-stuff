#include <iostream>
#include <iomanip>
using namespace std;
//cl nestedRect_struct.cpp
//nestedRect_struct.exe
// This program uses a structure to hold data about a rectangle
// It calculates the area and perimeter of a box

//Kameron Burden

// Fill in code to declare a structure named dimensions that
// contains 2 float members, length and width
struct dimensions {
	float length, width;
};
struct results {
	float area, perimeter;
};
// Fill in code to declare a structure named rectangle that contains
// 3 members, area, perimeter, and sizes. area and perimeter should be
// floats, whereas sizes should be a dimensions structure variable
struct rectangle {
	results result;
	dimensions sizes;
};
float are(rectangle a);
float peri(rectangle p);
int main()
{
	// Fill in code to define a rectangle structure variable named box.
	rectangle box;
	cout << "Enter the length of a rectangle: ";

	// Fill in code to read in the length to the appropriate location
	cin >> box.sizes.length;
	cout << "Enter the width of a rectangle: ";

	// Fill in code to read in the width to the appropriate location
	cin >> box.sizes.width;
	cout << endl << endl;

	// Fill in code to compute the area and store it in the appropriate
	// location
	box.result.area = are(box);
	// Fill in code to compute the perimeter and store it in the
	// appropriate location
	//box.perimeter = 2 * box.length + 2 * box.width;
	box.result.perimeter = peri(box);
	cout << fixed << showpoint << setprecision(2);

	cout << "The area of the rectangle is " << box.result.area << endl;

	cout << "The perimeter of the rectangle is " << box.result.perimeter
		 << endl;

	return 0;
}
float are(rectangle a) {
	return a.sizes.length * a.sizes.width;
}
float peri(rectangle p) {
	return 2 * p.sizes.length + 2 * p.sizes.width;
}