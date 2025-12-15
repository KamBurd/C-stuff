// This program demonstrates the use of pointer variables
// It finds the area of a rectangle given length and width
// It prints the length and width in ascending order

// Kameron Burden

#include <iostream>
using namespace std;

int main()
{

	int length;	// holds length 
	int width;	// holds width 
	int area;	// holds area

	int *lengthPtr = nullptr;	// int pointer which will be set to point to length 
	int *widthPtr = nullptr;	// int pointer which will be set to point to width       
	cout << "Please input the length of the rectangle" << endl;
	cin >> length;

	cout << "Please input the width of the rectangle" << endl;
	cin >> width;

	lengthPtr = &length;
	// Fill in code to make lengthPtr point to length (hold its address)

	widthPtr = &width;
		// Fill in code to make widthPtr point to width (hold its address)

		area = width * length; // Fill in code to find the area by using only the pointer variables

	cout << "The area is " << area << endl;

	if (length > width)// Fill in the condition length > width by using only the pointer variables)
		cout << "The length is greater than the width" << endl;

	else if (width > length)// Fill in the condition of width > length by using only the pointer variables)
		cout << "The width is greater than the length" << endl;

	else
		cout << "The width and length are the same" << endl;

	return 0;
}