// This program will output the perimeter and area
// of the rectangle with the length and width

// Kameron Burden

#include <iostream>
using namespace std;

const double LENGTH = 8;
const double WIDTH = 3;

int main()
{
	float area;							 
	int perimeter;				
	perimeter = LENGTH * 2 + WIDTH * 2;	// computes perimeter
	area = LENGTH * WIDTH;							// computes area
	cout << "The area of the rectangle is " << area << endl;
	cout << "The perimeter of the rectangle is " << perimeter << endl;
	return 0;
}