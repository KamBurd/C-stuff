// This program will output the circumference and area
// of the circle with a given radius.

// Kameron Burden

#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{
	float area;							// definition of area of circle 
	int circumference;				// definition of circumference 
	//Adding int to the circumference ignores the decimals and leaves only the whole number
	circumference = 2 * PI * RADIUS;	// computes circumference
	area = PI * RADIUS * RADIUS;							// computes area
	cout << "The circumfrence of the circle is " << circumference << endl;
	cout << "The area of the circle is " << area << endl;
	// Fill in the code for the cout statement that will output (with description)
	// the circumference

	// Fill in the code for the cout statement that will output (with description)
	// the area of the circle

	return 0;
}